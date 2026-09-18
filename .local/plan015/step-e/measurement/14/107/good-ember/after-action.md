# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/14/107/good-ember/battle-107-1789673940066557730`

## Battle summary

**Ember** · 360 s · 429 shots.

### Turning points

- 29.4s, squad 4: contact (events line 313). First recorded contact.
- 52.5s, squad 0: help call ([trace 8375](#trace-8375)). No completion observed before termination.
- 85.1s, squad 0: withdrawal ([trace 13813](#trace-13813)). 91.5s, squad 0: broke contact.
- 91.5s, squad 0: withdrawal ([trace 14343](#trace-14343)). 112.5s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 16 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 413 shots, 1/8 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1295](#trace-1295)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 44.0s, squad 0 chose prepared a base of fire ([trace 4910](#trace-4910)), followed by 0 shots and 0 own casualties; estimate 9.9 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1294](#trace-1294)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212049231380478, 'next_transition': 1319}.
- 53.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.255883 retreat threshold=0.220000 initiative=requires intent ([trace 8437](#trace-8437)). Following evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.849999191556349, 'next_transition': 8465}.

### Communication

141 matched deliveries (mean 0.36s, max 5.10s); 227 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 29.40s, squad 4, contact, evidence events line 313: First recorded contact; .
- 52.55s, squad 0, help call, evidence 8375: NeedSupport; No completion observed before termination.
- 85.05s, squad 0, withdrawal, evidence 13813: BreakContact: believed ratio at least two without superiority; 91.5s, squad 0: broke contact.
- 91.45s, squad 0, withdrawal, evidence 14343: BreakContact: believed ratio at least two without superiority; 112.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478296289543675, 'next_transition': 664}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478296289543675, 'next_transition': 664}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478296289543675, 'next_transition': 664}.
<a id="trace-451"></a>
<a id="trace-471"></a>
<a id="trace-492"></a>
<a id="trace-514"></a>
<a id="trace-528"></a>
<a id="trace-547"></a>
<a id="trace-569"></a>
<a id="trace-666"></a>
<a id="trace-689"></a>
<a id="trace-712"></a>
<a id="trace-730"></a>
<a id="trace-751"></a>
<a id="trace-775"></a>
<a id="trace-794"></a>
<a id="trace-810"></a>
<a id="trace-820"></a>
<a id="trace-904"></a>
<a id="trace-916"></a>
<a id="trace-1240"></a>
<a id="trace-1264"></a>
<a id="trace-1292"></a>
<a id="trace-1321"></a>
<a id="trace-1344"></a>
<a id="trace-1371"></a>
<a id="trace-1399"></a>
<a id="trace-1421"></a>
<a id="trace-1501"></a>
<a id="trace-1520"></a>
<a id="trace-1544"></a>
<a id="trace-1568"></a>
<a id="trace-1583"></a>
<a id="trace-1604"></a>
<a id="trace-1626"></a>
<a id="trace-1645"></a>
<a id="trace-1667"></a>
<a id="trace-1680"></a>
<a id="trace-1765"></a>
<a id="trace-1792"></a>
<a id="trace-1804"></a>
<a id="trace-1815"></a>
<a id="trace-1837"></a>
<a id="trace-1846"></a>
<a id="trace-1855"></a>
<a id="trace-1869"></a>
<a id="trace-2209"></a>
<a id="trace-2228"></a>
<a id="trace-2317"></a>
<a id="trace-2336"></a>
<a id="trace-2358"></a>
<a id="trace-2387"></a>
<a id="trace-2408"></a>
<a id="trace-2422"></a>
<a id="trace-2443"></a>
<a id="trace-2461"></a>
<a id="trace-2476"></a>
<a id="trace-2492"></a>
<a id="trace-2586"></a>
<a id="trace-2602"></a>
<a id="trace-2618"></a>
<a id="trace-2633"></a>
<a id="trace-2660"></a>
<a id="trace-2681"></a>
<a id="trace-2699"></a>
<a id="trace-2707"></a>
<a id="trace-2723"></a>
<a id="trace-2892"></a>
<a id="trace-2967"></a>
<a id="trace-3361"></a>
<a id="trace-3382"></a>
<a id="trace-3784"></a>
<a id="trace-3818"></a>
<a id="trace-4230"></a>
<a id="trace-4267"></a>
<a id="trace-4316"></a>
<a id="trace-4389"></a>
<a id="trace-4443"></a>
<a id="trace-4558"></a>
<a id="trace-4641"></a>
<a id="trace-4691"></a>
<a id="trace-4738"></a>
<a id="trace-4801"></a>
<a id="trace-4836"></a>
<a id="trace-4877"></a>
<a id="trace-4906"></a>
<a id="trace-7672"></a>
<a id="trace-7692"></a>
<a id="trace-7774"></a>
<a id="trace-7782"></a>
<a id="trace-7811"></a>
<a id="trace-7831"></a>
<a id="trace-7851"></a>
<a id="trace-7867"></a>
<a id="trace-7888"></a>
<a id="trace-7926"></a>
<a id="trace-7961"></a>
<a id="trace-8009"></a>
<a id="trace-8150"></a>
<a id="trace-8224"></a>
<a id="trace-8276"></a>
<a id="trace-8309"></a>
<a id="trace-8366"></a>
<a id="trace-8401"></a>
<a id="trace-8423"></a>
<a id="trace-8443"></a>
<a id="trace-8467"></a>
<a id="trace-8485"></a>
<a id="trace-8570"></a>
<a id="trace-8593"></a>
<a id="trace-8633"></a>
<a id="trace-8665"></a>
<a id="trace-9004"></a>
<a id="trace-9025"></a>
<a id="trace-9082"></a>
<a id="trace-9122"></a>
<a id="trace-9140"></a>
<a id="trace-9180"></a>
<a id="trace-9862"></a>
<a id="trace-9886"></a>
<a id="trace-9912"></a>
<a id="trace-9934"></a>
<a id="trace-9960"></a>
<a id="trace-9977"></a>
<a id="trace-9997"></a>
<a id="trace-10011"></a>
<a id="trace-10033"></a>
<a id="trace-10044"></a>
<a id="trace-10117"></a>
<a id="trace-10124"></a>
<a id="trace-10133"></a>
<a id="trace-10141"></a>
<a id="trace-10150"></a>
<a id="trace-10154"></a>
<a id="trace-12526"></a>
<a id="trace-12537"></a>
<a id="trace-12551"></a>
<a id="trace-12561"></a>
<a id="trace-12648"></a>
<a id="trace-12655"></a>
<a id="trace-12672"></a>
<a id="trace-12691"></a>
<a id="trace-12726"></a>
<a id="trace-12757"></a>
<a id="trace-12789"></a>
<a id="trace-12803"></a>
<a id="trace-13256"></a>
<a id="trace-13277"></a>
<a id="trace-13363"></a>
<a id="trace-13381"></a>
<a id="trace-13395"></a>
<a id="trace-13407"></a>
<a id="trace-13425"></a>
<a id="trace-13440"></a>
<a id="trace-13462"></a>
<a id="trace-13473"></a>
<a id="trace-13486"></a>
<a id="trace-13502"></a>
<a id="trace-13579"></a>
<a id="trace-13597"></a>
<a id="trace-13611"></a>
<a id="trace-13626"></a>
<a id="trace-13641"></a>
<a id="trace-13649"></a>
<a id="trace-13669"></a>
<a id="trace-13676"></a>
<a id="trace-13776"></a>
<a id="trace-13790"></a>
<a id="trace-14124"></a>
<a id="trace-14132"></a>
<a id="trace-14154"></a>
<a id="trace-14168"></a>
<a id="trace-14185"></a>
<a id="trace-14198"></a>
<a id="trace-14212"></a>
<a id="trace-14222"></a>
<a id="trace-14236"></a>
<a id="trace-14248"></a>
<a id="trace-14324"></a>
<a id="trace-14330"></a>
<a id="trace-14340"></a>
<a id="trace-14505"></a>
<a id="trace-14524"></a>
<a id="trace-14531"></a>
<a id="trace-14544"></a>
<a id="trace-14552"></a>
<a id="trace-14565"></a>
<a id="trace-14573"></a>
<a id="trace-14644"></a>
<a id="trace-14647"></a>
<a id="trace-14659"></a>
<a id="trace-14670"></a>
<a id="trace-14683"></a>
<a id="trace-14688"></a>
<a id="trace-14702"></a>
<a id="trace-14708"></a>
<a id="trace-14719"></a>
<a id="trace-14729"></a>
<a id="trace-14800"></a>
<a id="trace-14806"></a>
<a id="trace-14819"></a>
<a id="trace-14826"></a>
<a id="trace-14838"></a>
<a id="trace-14848"></a>
<a id="trace-14859"></a>
<a id="trace-14863"></a>
<a id="trace-14874"></a>
<a id="trace-14890"></a>
<a id="trace-14958"></a>
<a id="trace-14962"></a>
<a id="trace-14975"></a>
<a id="trace-14984"></a>
<a id="trace-14991"></a>
<a id="trace-14996"></a>
<a id="trace-15005"></a>
<a id="trace-15009"></a>
<a id="trace-15017"></a>
<a id="trace-15024"></a>
<a id="trace-15092"></a>
<a id="trace-15097"></a>
<a id="trace-15103"></a>
<a id="trace-15114"></a>
<a id="trace-15124"></a>
<a id="trace-15132"></a>
<a id="trace-15146"></a>
<a id="trace-15151"></a>
<a id="trace-15158"></a>
<a id="trace-15168"></a>
<a id="trace-15232"></a>
<a id="trace-15237"></a>
<a id="trace-15243"></a>
<a id="trace-15250"></a>
<a id="trace-15262"></a>
<a id="trace-15267"></a>
<a id="trace-15278"></a>
<a id="trace-15283"></a>
<a id="trace-15295"></a>
<a id="trace-15300"></a>
<a id="trace-15364"></a>
<a id="trace-15368"></a>
<a id="trace-15374"></a>
<a id="trace-15382"></a>
<a id="trace-15391"></a>
<a id="trace-15397"></a>
<a id="trace-15407"></a>
<a id="trace-15414"></a>
<a id="trace-15424"></a>
<a id="trace-15428"></a>
<a id="trace-15495"></a>
<a id="trace-15505"></a>
<a id="trace-15511"></a>
<a id="trace-15518"></a>
<a id="trace-15527"></a>
<a id="trace-15532"></a>
<a id="trace-15541"></a>
<a id="trace-15546"></a>
<a id="trace-15552"></a>
<a id="trace-15557"></a>
<a id="trace-15624"></a>
<a id="trace-15632"></a>
<a id="trace-15637"></a>
<a id="trace-15648"></a>
<a id="trace-15663"></a>
<a id="trace-15668"></a>
<a id="trace-15677"></a>
<a id="trace-15680"></a>
<a id="trace-15685"></a>
<a id="trace-15689"></a>
<a id="trace-15753"></a>
<a id="trace-15758"></a>
<a id="trace-15764"></a>
<a id="trace-15772"></a>
<a id="trace-15785"></a>
<a id="trace-15792"></a>
<a id="trace-15804"></a>
<a id="trace-15814"></a>
<a id="trace-15819"></a>
<a id="trace-15824"></a>
<a id="trace-15887"></a>
<a id="trace-15891"></a>
<a id="trace-15897"></a>
<a id="trace-15904"></a>
<a id="trace-15913"></a>
<a id="trace-15917"></a>
<a id="trace-15927"></a>
<a id="trace-15933"></a>
<a id="trace-15939"></a>
<a id="trace-15949"></a>
<a id="trace-16019"></a>
<a id="trace-16023"></a>
<a id="trace-16028"></a>
<a id="trace-16036"></a>
<a id="trace-16045"></a>
<a id="trace-16050"></a>
<a id="trace-16059"></a>
<a id="trace-16063"></a>
<a id="trace-16069"></a>
<a id="trace-16074"></a>
<a id="trace-16142"></a>
<a id="trace-16145"></a>
<a id="trace-16156"></a>
<a id="trace-16165"></a>
<a id="trace-16180"></a>
<a id="trace-16185"></a>
<a id="trace-16194"></a>
<a id="trace-16198"></a>
<a id="trace-16203"></a>
<a id="trace-16208"></a>
<a id="trace-16272"></a>
<a id="trace-16276"></a>
<a id="trace-16282"></a>
<a id="trace-16291"></a>
<a id="trace-16303"></a>
<a id="trace-16309"></a>
<a id="trace-16324"></a>
<a id="trace-16334"></a>
<a id="trace-16339"></a>
<a id="trace-16344"></a>
<a id="trace-16408"></a>
<a id="trace-16412"></a>
<a id="trace-16418"></a>
<a id="trace-16426"></a>
<a id="trace-16435"></a>
<a id="trace-16440"></a>
<a id="trace-16450"></a>
<a id="trace-16457"></a>
<a id="trace-16463"></a>
<a id="trace-16472"></a>
<a id="trace-16544"></a>
<a id="trace-16549"></a>
<a id="trace-16555"></a>
<a id="trace-16563"></a>
<a id="trace-16572"></a>
<a id="trace-16576"></a>
<a id="trace-16585"></a>
<a id="trace-16589"></a>
<a id="trace-16595"></a>
<a id="trace-16599"></a>
<a id="trace-16666"></a>
<a id="trace-16671"></a>
<a id="trace-16680"></a>
<a id="trace-16694"></a>
<a id="trace-16706"></a>
<a id="trace-16712"></a>
<a id="trace-16721"></a>
<a id="trace-16725"></a>
<a id="trace-16730"></a>
<a id="trace-16735"></a>
<a id="trace-16799"></a>
<a id="trace-16803"></a>
<a id="trace-16809"></a>
<a id="trace-16820"></a>
<a id="trace-16829"></a>
<a id="trace-16837"></a>
<a id="trace-16852"></a>
<a id="trace-16857"></a>
<a id="trace-16866"></a>
<a id="trace-16871"></a>
<a id="trace-16935"></a>
<a id="trace-16939"></a>
<a id="trace-16945"></a>
<a id="trace-16953"></a>
<a id="trace-16961"></a>
<a id="trace-16966"></a>
<a id="trace-16978"></a>
<a id="trace-16982"></a>
<a id="trace-16992"></a>
<a id="trace-16996"></a>
<a id="trace-17067"></a>
<a id="trace-17073"></a>
<a id="trace-17080"></a>
<a id="trace-17088"></a>
<a id="trace-17097"></a>
<a id="trace-17101"></a>
<a id="trace-17109"></a>
<a id="trace-17113"></a>
<a id="trace-17119"></a>
<a id="trace-17124"></a>
<a id="trace-17191"></a>
<a id="trace-17195"></a>
<a id="trace-17205"></a>
<a id="trace-17218"></a>
<a id="trace-17231"></a>
<a id="trace-17238"></a>
<a id="trace-17247"></a>
<a id="trace-17252"></a>
<a id="trace-17257"></a>
<a id="trace-17261"></a>
<a id="trace-17325"></a>
<a id="trace-17329"></a>
<a id="trace-17335"></a>
<a id="trace-17346"></a>
<a id="trace-17410"></a>
<a id="trace-17418"></a>
<a id="trace-17435"></a>
<a id="trace-17440"></a>
<a id="trace-17447"></a>
<a id="trace-17455"></a>
<a id="trace-17527"></a>
<a id="trace-17538"></a>
<a id="trace-17544"></a>
<a id="trace-17553"></a>
<a id="trace-17566"></a>
<a id="trace-17572"></a>
<a id="trace-17588"></a>
<a id="trace-17593"></a>
<a id="trace-17611"></a>
<a id="trace-17628"></a>
<a id="trace-17693"></a>
<a id="trace-17696"></a>
<a id="trace-17706"></a>
<a id="trace-17718"></a>
<a id="trace-17728"></a>
<a id="trace-17735"></a>
<a id="trace-17743"></a>
<a id="trace-17749"></a>
<a id="trace-17754"></a>
<a id="trace-17762"></a>
<a id="trace-17826"></a>
<a id="trace-17832"></a>
<a id="trace-17844"></a>
<a id="trace-17853"></a>
<a id="trace-17861"></a>
<a id="trace-17869"></a>
<a id="trace-17879"></a>
<a id="trace-17884"></a>
<a id="trace-17890"></a>
<a id="trace-17895"></a>
<a id="trace-17959"></a>
<a id="trace-17962"></a>
<a id="trace-17971"></a>
<a id="trace-17978"></a>
<a id="trace-17989"></a>
<a id="trace-17995"></a>
<a id="trace-18009"></a>
<a id="trace-18013"></a>
<a id="trace-18019"></a>
<a id="trace-18025"></a>
<a id="trace-18091"></a>
<a id="trace-18094"></a>
<a id="trace-18101"></a>
<a id="trace-18109"></a>
<a id="trace-18116"></a>
<a id="trace-18123"></a>
<a id="trace-18134"></a>
<a id="trace-18137"></a>
<a id="trace-18146"></a>
<a id="trace-18157"></a>
<a id="trace-18221"></a>
<a id="trace-18225"></a>
<a id="trace-18232"></a>
<a id="trace-18239"></a>
<a id="trace-18248"></a>
<a id="trace-18258"></a>
<a id="trace-18266"></a>
<a id="trace-18269"></a>
<a id="trace-18275"></a>
<a id="trace-18283"></a>
<a id="trace-18347"></a>
<a id="trace-18354"></a>
<a id="trace-18366"></a>
<a id="trace-18374"></a>
<a id="trace-18382"></a>
<a id="trace-18390"></a>
<a id="trace-18398"></a>
<a id="trace-18402"></a>
<a id="trace-18412"></a>
<a id="trace-18417"></a>
<a id="trace-18481"></a>
<a id="trace-18484"></a>
<a id="trace-18493"></a>
<a id="trace-18501"></a>
<a id="trace-18512"></a>
<a id="trace-18524"></a>
<a id="trace-18532"></a>
<a id="trace-18536"></a>
<a id="trace-18543"></a>
<a id="trace-18548"></a>
<a id="trace-18612"></a>
<a id="trace-18619"></a>
<a id="trace-18626"></a>
<a id="trace-18633"></a>
<a id="trace-18641"></a>
<a id="trace-18651"></a>
<a id="trace-18659"></a>
<a id="trace-18666"></a>
<a id="trace-18678"></a>
<a id="trace-18683"></a>
<a id="trace-18746"></a>
<a id="trace-18749"></a>
<a id="trace-18756"></a>
<a id="trace-18764"></a>
<a id="trace-18771"></a>
<a id="trace-18779"></a>
<a id="trace-18789"></a>
<a id="trace-18794"></a>
<a id="trace-18802"></a>
<a id="trace-18807"></a>
<a id="trace-18874"></a>
<a id="trace-18877"></a>
<a id="trace-18888"></a>
<a id="trace-18896"></a>
<a id="trace-18903"></a>
<a id="trace-18910"></a>
<a id="trace-18918"></a>
<a id="trace-18923"></a>
<a id="trace-18929"></a>
<a id="trace-18934"></a>
<a id="trace-19000"></a>
<a id="trace-19005"></a>
<a id="trace-19014"></a>
<a id="trace-19021"></a>
<a id="trace-19032"></a>
<a id="trace-19044"></a>
<a id="trace-19052"></a>
<a id="trace-19056"></a>
<a id="trace-19062"></a>
<a id="trace-19066"></a>
<a id="trace-19129"></a>
<a id="trace-19134"></a>
<a id="trace-19142"></a>
<a id="trace-19153"></a>
<a id="trace-19161"></a>
<a id="trace-19170"></a>
<a id="trace-19178"></a>
<a id="trace-19185"></a>
<a id="trace-19197"></a>
<a id="trace-19202"></a>
<a id="trace-19266"></a>
<a id="trace-19270"></a>
<a id="trace-19275"></a>
<a id="trace-19284"></a>
<a id="trace-19291"></a>
<a id="trace-19298"></a>
<a id="trace-19309"></a>
<a id="trace-19313"></a>
<a id="trace-19322"></a>
<a id="trace-19327"></a>
<a id="trace-19394"></a>
<a id="trace-19404"></a>
<a id="trace-19409"></a>
<a id="trace-19417"></a>
<a id="trace-19425"></a>
<a id="trace-19432"></a>
<a id="trace-19440"></a>
<a id="trace-19445"></a>
<a id="trace-19451"></a>
<a id="trace-19456"></a>
<a id="trace-19521"></a>
<a id="trace-19530"></a>
<a id="trace-19537"></a>
<a id="trace-19548"></a>
<a id="trace-19562"></a>
<a id="trace-19569"></a>
<a id="trace-19577"></a>
<a id="trace-19581"></a>
<a id="trace-19587"></a>
<a id="trace-19591"></a>
<a id="trace-19655"></a>
<a id="trace-19659"></a>
<a id="trace-19666"></a>
<a id="trace-19674"></a>
<a id="trace-19685"></a>
<a id="trace-19695"></a>
<a id="trace-19707"></a>
<a id="trace-19711"></a>
<a id="trace-19723"></a>
<a id="trace-19728"></a>
<a id="trace-19792"></a>
<a id="trace-19796"></a>
<a id="trace-19801"></a>
<a id="trace-19809"></a>
<a id="trace-19817"></a>
<a id="trace-19824"></a>
<a id="trace-19833"></a>
<a id="trace-19836"></a>
<a id="trace-19848"></a>
<a id="trace-19853"></a>
<a id="trace-19920"></a>
<a id="trace-19930"></a>
<a id="trace-19936"></a>
<a id="trace-19944"></a>
<a id="trace-19951"></a>
<a id="trace-19958"></a>
<a id="trace-19966"></a>
<a id="trace-19970"></a>
<a id="trace-19975"></a>
<a id="trace-19981"></a>
<a id="trace-20044"></a>
<a id="trace-20052"></a>
<a id="trace-20061"></a>
<a id="trace-20072"></a>
<a id="trace-20086"></a>
<a id="trace-20093"></a>
<a id="trace-20101"></a>
<a id="trace-20104"></a>
<a id="trace-20110"></a>
<a id="trace-20114"></a>
<a id="trace-20177"></a>
<a id="trace-20181"></a>
<a id="trace-20189"></a>
<a id="trace-20197"></a>
<a id="trace-20208"></a>
<a id="trace-20216"></a>
<a id="trace-20228"></a>
<a id="trace-20239"></a>
<a id="trace-20245"></a>
<a id="trace-20250"></a>
<a id="trace-20314"></a>
<a id="trace-20317"></a>
<a id="trace-20323"></a>
<a id="trace-20331"></a>
<a id="trace-20339"></a>
<a id="trace-20346"></a>
<a id="trace-20353"></a>
<a id="trace-20361"></a>
<a id="trace-20367"></a>
<a id="trace-20374"></a>
<a id="trace-20447"></a>
<a id="trace-20451"></a>
<a id="trace-20457"></a>
<a id="trace-20465"></a>
<a id="trace-20473"></a>
<a id="trace-20480"></a>
<a id="trace-20488"></a>
<a id="trace-20492"></a>
<a id="trace-20498"></a>
<a id="trace-20503"></a>
<a id="trace-20569"></a>
<a id="trace-20574"></a>
<a id="trace-20583"></a>
<a id="trace-20592"></a>
<a id="trace-20609"></a>
<a id="trace-20618"></a>
<a id="trace-20626"></a>
<a id="trace-20630"></a>
<a id="trace-20636"></a>
<a id="trace-20641"></a>
<a id="trace-20705"></a>
<a id="trace-20708"></a>
<a id="trace-20714"></a>
<a id="trace-20721"></a>
<a id="trace-20733"></a>
<a id="trace-20741"></a>
<a id="trace-20753"></a>
<a id="trace-20765"></a>
<a id="trace-20776"></a>
<a id="trace-20839"></a>
<a id="trace-20842"></a>
<a id="trace-20848"></a>
<a id="trace-20855"></a>
<a id="trace-20863"></a>
<a id="trace-20870"></a>
<a id="trace-20878"></a>
<a id="trace-20885"></a>
<a id="trace-20891"></a>
<a id="trace-20898"></a>
<a id="trace-20971"></a>
<a id="trace-20977"></a>
<a id="trace-20982"></a>
<a id="trace-20990"></a>
<a id="trace-20998"></a>
<a id="trace-21006"></a>
<a id="trace-21014"></a>
<a id="trace-21020"></a>
<a id="trace-21026"></a>
<a id="trace-21030"></a>
<a id="trace-21097"></a>
<a id="trace-21108"></a>
<a id="trace-21122"></a>
<a id="trace-21130"></a>
<a id="trace-21137"></a>
<a id="trace-21148"></a>
<a id="trace-21153"></a>
<a id="trace-21158"></a>
<a id="trace-21162"></a>
<a id="trace-21226"></a>
<a id="trace-21230"></a>
<a id="trace-21236"></a>
<a id="trace-21246"></a>
<a id="trace-21254"></a>
<a id="trace-21264"></a>
<a id="trace-21279"></a>
<a id="trace-21284"></a>
<a id="trace-21290"></a>
<a id="trace-21299"></a>
<a id="trace-21362"></a>
<a id="trace-21371"></a>
<a id="trace-21377"></a>
<a id="trace-21385"></a>
<a id="trace-21392"></a>
<a id="trace-21402"></a>
<a id="trace-21407"></a>
<a id="trace-21415"></a>
<a id="trace-21423"></a>
<a id="trace-21492"></a>
<a id="trace-21497"></a>
<a id="trace-21505"></a>
<a id="trace-21513"></a>
<a id="trace-21521"></a>
<a id="trace-21528"></a>
<a id="trace-21536"></a>
<a id="trace-21540"></a>
<a id="trace-21545"></a>
<a id="trace-21551"></a>
<a id="trace-21618"></a>
<a id="trace-21622"></a>
<a id="trace-21631"></a>
<a id="trace-21645"></a>
<a id="trace-21659"></a>
<a id="trace-21669"></a>
<a id="trace-21673"></a>
<a id="trace-21680"></a>
<a id="trace-21686"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46068713945736284, 'next_transition': 471}.
<a id="trace-664"></a>
<a id="trace-728"></a>
<a id="trace-749"></a>
<a id="trace-773"></a>
<a id="trace-792"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-914"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 664): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.64025865881385, 'next_transition': 728}.
<a id="trace-922"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 922): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 824. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37874811178187695, 'next_transition': 1238}.
<a id="trace-1238"></a>
<a id="trace-1262"></a>
<a id="trace-1290"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 1238): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5253140007332116, 'next_transition': 1262}.
<a id="trace-156"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 156): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212049231380478, 'next_transition': 1319}.
<a id="trace-1294"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1294): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1294. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212049231380478, 'next_transition': 1319}.
<a id="trace-1295"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1295): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1295. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212049231380478, 'next_transition': 1319}.
<a id="trace-1319"></a>
<a id="trace-1342"></a>
<a id="trace-1369"></a>
<a id="trace-1499"></a>
<a id="trace-1542"></a>
<a id="trace-1602"></a>
<a id="trace-1643"></a>
<a id="trace-1665"></a>
<a id="trace-1678"></a>
<a id="trace-1763"></a>
<a id="trace-1790"></a>
<a id="trace-1813"></a>
<a id="trace-1835"></a>
<a id="trace-1844"></a>
<a id="trace-1853"></a>
<a id="trace-1867"></a>
- 12.70s–23.75s (×16), actor 5, squad 0 (trace 1319): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1295. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8450195648817977, 'next_transition': 1342}.
<a id="trace-1876"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1876): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1689. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020346432273251183, 'next_transition': 2207}.
<a id="trace-1877"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1877): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1689. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.020346432273251183, 'next_transition': 2207}.
<a id="trace-2207"></a>
<a id="trace-2315"></a>
<a id="trace-2334"></a>
<a id="trace-2356"></a>
<a id="trace-2385"></a>
<a id="trace-2406"></a>
<a id="trace-2420"></a>
<a id="trace-2441"></a>
<a id="trace-2459"></a>
<a id="trace-2584"></a>
<a id="trace-2679"></a>
<a id="trace-2705"></a>
- 24.25s–33.75s (×12), actor 5, squad 0 (trace 2207): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1694. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6656346604589243, 'next_transition': 2315}.
<a id="trace-2725"></a>
- 34.40s–34.40s (×1), actor 0, squad 0 (trace 2725): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2497. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19728377128121397, 'next_transition': 2965}.
<a id="trace-2965"></a>
- 35.25s–35.25s (×1), actor 5, squad 0 (trace 2965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2898. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21352876061065304, 'next_transition': 2973}.
<a id="trace-2973"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2973): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2893. Next observer evidence: None.
<a id="trace-2974"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2974): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2893. Next observer evidence: None.
<a id="trace-2975"></a>
- 35.65s–35.65s (×1), actor 0, squad 0 (trace 2975): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2893. Next observer evidence: None.
<a id="trace-3359"></a>
<a id="trace-3380"></a>
- 35.75s–36.25s (×2), actor 5, squad 0 (trace 3359): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2898. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23401125105932194, 'next_transition': 3380}.
<a id="trace-3389"></a>
- 36.35s–36.35s (×1), actor 0, squad 0 (trace 3389): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2893. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09220625000000005, 'next_transition': 3782}.
<a id="trace-3782"></a>
<a id="trace-3816"></a>
- 36.75s–37.25s (×2), actor 5, squad 0 (trace 3782): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2898. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11132063229674215, 'next_transition': 3816}.
<a id="trace-3835"></a>
- 37.55s–37.55s (×1), actor 0, squad 0 (trace 3835): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2893. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787500267658685, 'next_transition': 4228}.
<a id="trace-4228"></a>
<a id="trace-4314"></a>
<a id="trace-4387"></a>
<a id="trace-4441"></a>
<a id="trace-4556"></a>
<a id="trace-4639"></a>
- 37.75s–40.75s (×6), actor 5, squad 0 (trace 4228): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2898. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1774534946180198, 'next_transition': 4314}.
<a id="trace-4682"></a>
- 41.20s–41.20s (×1), actor 0, squad 0 (trace 4682): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4450. Next observer evidence: None.
<a id="trace-4689"></a>
<a id="trace-4799"></a>
<a id="trace-4834"></a>
<a id="trace-4875"></a>
- 41.25s–43.25s (×4), actor 5, squad 0 (trace 4689): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4455. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05531750000000002, 'next_transition': 4799}.
<a id="trace-4910"></a>
- 43.95s–43.95s (×1), actor 0, squad 0 (trace 4910): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 4450. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850543019321056, 'next_transition': 7690}.
<a id="trace-7338"></a>
- 43.95s–43.95s (×1), actor 0, squad 0 (trace 7338): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 4450. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850543019321056, 'next_transition': 7690}.
<a id="trace-7339"></a>
- 43.95s–43.95s (×1), actor 0, squad 0 (trace 7339): MoveTactically. Knowledge: actor memory at 40.00s, trace 4450. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850543019321056, 'next_transition': 7690}.
<a id="trace-7340"></a>
- 43.95s–43.95s (×1), actor 0, squad 0 (trace 7340): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 4450. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850543019321056, 'next_transition': 7690}.
<a id="trace-7690"></a>
<a id="trace-7772"></a>
<a id="trace-7780"></a>
<a id="trace-7809"></a>
<a id="trace-7829"></a>
<a id="trace-7849"></a>
<a id="trace-7924"></a>
<a id="trace-7959"></a>
<a id="trace-8007"></a>
<a id="trace-8148"></a>
<a id="trace-8222"></a>
<a id="trace-8274"></a>
<a id="trace-8307"></a>
<a id="trace-8364"></a>
- 44.75s–52.25s (×14), actor 5, squad 0 (trace 7690): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4455. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17382681431384472, 'next_transition': 7772}.
<a id="trace-8375"></a>
- 52.55s–52.55s (×1), actor 0, squad 0 (trace 8375): NeedSupport. Knowledge: actor memory at 50.00s, trace 8038. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23115643182264656, 'next_transition': 8399}.
<a id="trace-8399"></a>
<a id="trace-8421"></a>
- 52.75s–53.25s (×2), actor 5, squad 0 (trace 8399): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 8043. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0559862818403865, 'next_transition': 8421}.
<a id="trace-798"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (events line 798): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8437"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 8437): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.255883 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 8437. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.849999191556349, 'next_transition': 8465}.
<a id="trace-8438"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 8438): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.255883 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 8438. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.849999191556349, 'next_transition': 8465}.
<a id="trace-8465"></a>
<a id="trace-8483"></a>
<a id="trace-8568"></a>
<a id="trace-8591"></a>
<a id="trace-8631"></a>
- 54.25s–56.25s (×5), actor 5, squad 0 (trace 8465): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.65s, trace 8438. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19687388760479674, 'next_transition': 8483}.
<a id="trace-8673"></a>
- 56.90s–56.90s (×1), actor 0, squad 0 (trace 8673): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 55.00s, trace 8497. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3297941059571331, 'next_transition': 9002}.
<a id="trace-9002"></a>
<a id="trace-9023"></a>
<a id="trace-9080"></a>
<a id="trace-9120"></a>
<a id="trace-9178"></a>
- 57.25s–59.75s (×5), actor 5, squad 0 (trace 9002): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8502. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06649353925382515, 'next_transition': 9023}.
<a id="trace-9211"></a>
- 60.00s–60.00s (×1), actor 0, squad 0 (trace 9211): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 9194. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9860}.
<a id="trace-9212"></a>
- 60.00s–60.00s (×1), actor 0, squad 0 (trace 9212): received platoon directive. Knowledge: actor memory at 60.00s, trace 9194. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9860}.
<a id="trace-9860"></a>
<a id="trace-9910"></a>
<a id="trace-9932"></a>
<a id="trace-9958"></a>
<a id="trace-9975"></a>
<a id="trace-9995"></a>
- 60.25s–63.25s (×6), actor 5, squad 0 (trace 9860): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9199. Next observer evidence: {'until': 61.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9910}.
<a id="trace-10006"></a>
- 63.70s–63.70s (×1), actor 0, squad 0 (trace 10006): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 9194. Next observer evidence: None.
<a id="trace-10009"></a>
<a id="trace-10031"></a>
<a id="trace-10042"></a>
<a id="trace-10115"></a>
<a id="trace-10122"></a>
<a id="trace-10131"></a>
<a id="trace-10139"></a>
<a id="trace-10148"></a>
<a id="trace-10152"></a>
- 63.75s–67.75s (×9), actor 5, squad 0 (trace 10009): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9199. Next observer evidence: {'until': 64.2, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10031}.
<a id="trace-10155"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 10155): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 10046. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12265"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 12265): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 65.00s, trace 10046. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12266"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 12266): MoveTactically. Knowledge: actor memory at 65.00s, trace 10046. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12267"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 12267): contact cover complete: assessment resumes closure. Knowledge: actor memory at 65.00s, trace 10046. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12511"></a>
- 68.00s–68.00s (×1), actor 0, squad 0 (trace 12511): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 65.00s, trace 10046. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12524"></a>
<a id="trace-12535"></a>
<a id="trace-12549"></a>
<a id="trace-12559"></a>
<a id="trace-12646"></a>
<a id="trace-12653"></a>
<a id="trace-12670"></a>
<a id="trace-12689"></a>
<a id="trace-12724"></a>
<a id="trace-12787"></a>
- 68.25s–73.25s (×10), actor 5, squad 0 (trace 12524): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10051. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0344928571428572, 'next_transition': 12535}.
<a id="trace-12810"></a>
- 73.85s–73.85s (×1), actor 0, squad 0 (trace 12810): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 12563. Next observer evidence: {'until': 74, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12822}.
<a id="trace-12822"></a>
- 74.10s–74.10s (×1), actor 0, squad 0 (trace 12822): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 12563. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13275}.
<a id="trace-12827"></a>
- 74.10s–74.10s (×1), actor 0, squad 0 (trace 12827): MoveTactically. Knowledge: actor memory at 70.00s, trace 12563. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13275}.
<a id="trace-12828"></a>
- 74.10s–74.10s (×1), actor 0, squad 0 (trace 12828): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 70.00s, trace 12563. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13275}.
<a id="trace-13275"></a>
<a id="trace-13361"></a>
<a id="trace-13393"></a>
<a id="trace-13405"></a>
<a id="trace-13423"></a>
<a id="trace-13438"></a>
<a id="trace-13460"></a>
<a id="trace-13471"></a>
<a id="trace-13484"></a>
<a id="trace-13500"></a>
<a id="trace-13577"></a>
<a id="trace-13595"></a>
<a id="trace-13624"></a>
<a id="trace-13639"></a>
<a id="trace-13647"></a>
- 74.75s–82.75s (×15), actor 5, squad 0 (trace 13275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12568. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13361}.
<a id="trace-13677"></a>
- 83.75s–83.75s (×1), actor 0, squad 0 (trace 13677): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 13506. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11571999999999996, 'next_transition': 13774}.
<a id="trace-13759"></a>
- 83.75s–83.75s (×1), actor 0, squad 0 (trace 13759): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 80.00s, trace 13506. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11571999999999996, 'next_transition': 13774}.
<a id="trace-13774"></a>
<a id="trace-13788"></a>
- 84.25s–84.75s (×2), actor 5, squad 0 (trace 13774): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 13510. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03729800000000001, 'next_transition': 13788}.
<a id="trace-13813"></a>
- 85.05s–85.05s (×1), actor 0, squad 0 (trace 13813): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 85.00s, trace 13797. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32848389067079886, 'next_transition': 14122}.
<a id="trace-13814"></a>
- 85.05s–85.05s (×1), actor 0, squad 0 (trace 13814): rearward bound: one stationary suppressing element. Knowledge: actor memory at 85.00s, trace 13797. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32848389067079886, 'next_transition': 14122}.
<a id="trace-14122"></a>
<a id="trace-14130"></a>
<a id="trace-14152"></a>
<a id="trace-14183"></a>
<a id="trace-14196"></a>
<a id="trace-14210"></a>
<a id="trace-14220"></a>
<a id="trace-14234"></a>
<a id="trace-14246"></a>
<a id="trace-14322"></a>
- 85.25s–90.25s (×10), actor 5, squad 0 (trace 14122): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13800. Next observer evidence: {'until': 85.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6281852977222868, 'next_transition': 14130}.
<a id="trace-14326"></a>
- 90.65s–90.65s (×1), actor 1, squad 0 (trace 14326): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 14250. Next observer evidence: None.
<a id="trace-14328"></a>
<a id="trace-14338"></a>
- 90.75s–91.25s (×2), actor 5, squad 0 (trace 14328): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14252. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249708025552933, 'next_transition': 14338}.
<a id="trace-14343"></a>
- 91.45s–91.45s (×1), actor 1, squad 0 (trace 14343): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 14250. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751523952065724, 'next_transition': 14503}.
<a id="trace-14344"></a>
- 91.45s–91.45s (×1), actor 1, squad 0 (trace 14344): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 14250. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751523952065724, 'next_transition': 14503}.
<a id="trace-14503"></a>
<a id="trace-14522"></a>
<a id="trace-14529"></a>
<a id="trace-14542"></a>
<a id="trace-14668"></a>
<a id="trace-14681"></a>
<a id="trace-14700"></a>
<a id="trace-14717"></a>
<a id="trace-14727"></a>
<a id="trace-14798"></a>
<a id="trace-14817"></a>
<a id="trace-14836"></a>
- 91.75s–102.25s (×12), actor 5, squad 0 (trace 14503): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 14252. Next observer evidence: {'until': 92.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47223785228553006, 'next_transition': 14522}.
<a id="trace-14839"></a>
- 102.25s–102.25s (×1), actor 1, squad 0 (trace 14839): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 14732. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399422012125467, 'next_transition': 14846}.
<a id="trace-14840"></a>
- 102.25s–102.25s (×1), actor 1, squad 0 (trace 14840): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 14732. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399422012125467, 'next_transition': 14846}.
<a id="trace-14846"></a>
<a id="trace-14857"></a>
<a id="trace-14861"></a>
<a id="trace-14872"></a>
<a id="trace-14888"></a>
<a id="trace-14956"></a>
<a id="trace-14960"></a>
<a id="trace-14973"></a>
<a id="trace-14982"></a>
<a id="trace-14989"></a>
<a id="trace-14994"></a>
- 102.75s–107.75s (×11), actor 5, squad 0 (trace 14846): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14733. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.260039423104603, 'next_transition': 14857}.
<a id="trace-14997"></a>
- 107.80s–107.80s (×1), actor 5, squad 0 (trace 14997): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 107.80s, trace 14997. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400054414477411, 'next_transition': 15003}.
<a id="trace-15003"></a>
<a id="trace-15007"></a>
<a id="trace-15015"></a>
<a id="trace-15022"></a>
<a id="trace-15090"></a>
<a id="trace-15095"></a>
<a id="trace-15101"></a>
<a id="trace-15112"></a>
<a id="trace-15122"></a>
- 108.25s–112.25s (×9), actor 5, squad 0 (trace 15003): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 107.80s, trace 14997. Next observer evidence: {'until': 108.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400119461429826, 'next_transition': 15007}.
<a id="trace-15125"></a>
- 112.45s–112.45s (×1), actor 1, squad 0 (trace 15125): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 15029. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07132350399568395, 'next_transition': 15130}.
<a id="trace-15130"></a>
<a id="trace-15144"></a>
<a id="trace-15149"></a>
<a id="trace-15156"></a>
<a id="trace-15166"></a>
<a id="trace-15230"></a>
<a id="trace-15235"></a>
<a id="trace-15241"></a>
<a id="trace-15260"></a>
<a id="trace-15276"></a>
<a id="trace-15281"></a>
<a id="trace-15293"></a>
<a id="trace-15298"></a>
<a id="trace-15362"></a>
<a id="trace-15366"></a>
<a id="trace-15372"></a>
<a id="trace-15380"></a>
<a id="trace-15389"></a>
<a id="trace-15395"></a>
- 112.75s–122.75s (×19), actor 5, squad 0 (trace 15130): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15030. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15144}.
<a id="trace-1401"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 1401): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15412}.
<a id="trace-15398"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 15398): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.80s, trace 15398. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15412}.
<a id="trace-15412"></a>
<a id="trace-15422"></a>
<a id="trace-15493"></a>
<a id="trace-15503"></a>
<a id="trace-15509"></a>
<a id="trace-15525"></a>
<a id="trace-15530"></a>
<a id="trace-15539"></a>
<a id="trace-15544"></a>
<a id="trace-15550"></a>
<a id="trace-15555"></a>
<a id="trace-15622"></a>
<a id="trace-15630"></a>
<a id="trace-15646"></a>
<a id="trace-15661"></a>
<a id="trace-15666"></a>
<a id="trace-15675"></a>
<a id="trace-15751"></a>
<a id="trace-15756"></a>
<a id="trace-15762"></a>
<a id="trace-15770"></a>
<a id="trace-15783"></a>
<a id="trace-15790"></a>
<a id="trace-15812"></a>
<a id="trace-15822"></a>
<a id="trace-15889"></a>
<a id="trace-15895"></a>
<a id="trace-15911"></a>
<a id="trace-15925"></a>
<a id="trace-15937"></a>
<a id="trace-16021"></a>
<a id="trace-16034"></a>
<a id="trace-16043"></a>
<a id="trace-16048"></a>
<a id="trace-16057"></a>
<a id="trace-16061"></a>
<a id="trace-16067"></a>
<a id="trace-16072"></a>
<a id="trace-16140"></a>
<a id="trace-16163"></a>
<a id="trace-16178"></a>
<a id="trace-16183"></a>
<a id="trace-16192"></a>
<a id="trace-16196"></a>
<a id="trace-16206"></a>
<a id="trace-16270"></a>
<a id="trace-16274"></a>
<a id="trace-16280"></a>
<a id="trace-16289"></a>
<a id="trace-16301"></a>
<a id="trace-16307"></a>
<a id="trace-16322"></a>
<a id="trace-16332"></a>
<a id="trace-16342"></a>
<a id="trace-16406"></a>
<a id="trace-16410"></a>
<a id="trace-16416"></a>
<a id="trace-16424"></a>
<a id="trace-16433"></a>
<a id="trace-16438"></a>
<a id="trace-16448"></a>
<a id="trace-16455"></a>
<a id="trace-16461"></a>
<a id="trace-16470"></a>
<a id="trace-16542"></a>
<a id="trace-16547"></a>
<a id="trace-16553"></a>
<a id="trace-16561"></a>
<a id="trace-16570"></a>
<a id="trace-16583"></a>
<a id="trace-16587"></a>
<a id="trace-16593"></a>
<a id="trace-16664"></a>
<a id="trace-16669"></a>
<a id="trace-16678"></a>
<a id="trace-16692"></a>
<a id="trace-16704"></a>
<a id="trace-16710"></a>
<a id="trace-16719"></a>
<a id="trace-16723"></a>
<a id="trace-16733"></a>
<a id="trace-16797"></a>
<a id="trace-16801"></a>
<a id="trace-16807"></a>
<a id="trace-16818"></a>
<a id="trace-16827"></a>
<a id="trace-16850"></a>
<a id="trace-16855"></a>
<a id="trace-16864"></a>
<a id="trace-16869"></a>
<a id="trace-16933"></a>
<a id="trace-16937"></a>
<a id="trace-16943"></a>
<a id="trace-16951"></a>
<a id="trace-16964"></a>
<a id="trace-16976"></a>
<a id="trace-16980"></a>
<a id="trace-16990"></a>
<a id="trace-17065"></a>
<a id="trace-17071"></a>
<a id="trace-17078"></a>
<a id="trace-17086"></a>
<a id="trace-17095"></a>
<a id="trace-17111"></a>
<a id="trace-17117"></a>
<a id="trace-17122"></a>
<a id="trace-17189"></a>
<a id="trace-17193"></a>
<a id="trace-17203"></a>
- 123.75s–191.30s (×109), actor 5, squad 0 (trace 15412): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 15398. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15422}.
<a id="trace-1533"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 1533): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17219"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 17219): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 17219. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17229}.
<a id="trace-17220"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 17220): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 191.85s, trace 17220. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17229}.
<a id="trace-17229"></a>
<a id="trace-17236"></a>
<a id="trace-17245"></a>
<a id="trace-17250"></a>
<a id="trace-17323"></a>
<a id="trace-17327"></a>
<a id="trace-17333"></a>
<a id="trace-17344"></a>
- 192.30s–196.80s (×8), actor 5, squad 0 (trace 17229): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 17220. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17236}.
<a id="trace-17347"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 17347): MoveTactically. Knowledge: actor memory at 195.00s, trace 17262. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17416}.
<a id="trace-17348"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 17348): traveling. Knowledge: actor memory at 195.00s, trace 17262. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17416}.
<a id="trace-17349"></a>
- 197.20s–197.20s (×1), actor 1, squad 0 (trace 17349): received platoon directive. Knowledge: actor memory at 195.00s, trace 17262. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17416}.
<a id="trace-17416"></a>
<a id="trace-17438"></a>
<a id="trace-17445"></a>
<a id="trace-17525"></a>
<a id="trace-17536"></a>
<a id="trace-17551"></a>
<a id="trace-17564"></a>
<a id="trace-17570"></a>
<a id="trace-17586"></a>
<a id="trace-17591"></a>
- 197.80s–203.80s (×10), actor 5, squad 0 (trace 17416): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 17263. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450000000000003, 'next_transition': 17438}.
<a id="trace-17604"></a>
- 204.25s–204.25s (×1), actor 1, squad 0 (trace 17604): traveling overwatch. Knowledge: actor memory at 200.00s, trace 17459. Next observer evidence: None.
<a id="trace-17605"></a>
- 204.25s–204.25s (×1), actor 1, squad 0 (trace 17605): matching received arrivals: traveling stage complete. Knowledge: actor memory at 200.00s, trace 17459. Next observer evidence: None.
<a id="trace-17609"></a>
<a id="trace-17626"></a>
<a id="trace-17691"></a>
<a id="trace-17704"></a>
<a id="trace-17716"></a>
<a id="trace-17726"></a>
<a id="trace-17733"></a>
<a id="trace-17741"></a>
<a id="trace-17747"></a>
<a id="trace-17760"></a>
<a id="trace-17824"></a>
<a id="trace-17842"></a>
<a id="trace-17851"></a>
<a id="trace-17859"></a>
<a id="trace-17867"></a>
<a id="trace-17877"></a>
<a id="trace-17882"></a>
<a id="trace-17888"></a>
<a id="trace-17893"></a>
<a id="trace-17957"></a>
<a id="trace-17969"></a>
<a id="trace-17987"></a>
<a id="trace-18007"></a>
<a id="trace-18017"></a>
<a id="trace-18023"></a>
<a id="trace-18089"></a>
<a id="trace-18099"></a>
<a id="trace-18107"></a>
<a id="trace-18121"></a>
<a id="trace-18132"></a>
<a id="trace-18144"></a>
<a id="trace-18155"></a>
<a id="trace-18219"></a>
<a id="trace-18223"></a>
<a id="trace-18230"></a>
<a id="trace-18246"></a>
<a id="trace-18256"></a>
<a id="trace-18264"></a>
<a id="trace-18273"></a>
<a id="trace-18281"></a>
<a id="trace-18345"></a>
<a id="trace-18352"></a>
<a id="trace-18364"></a>
<a id="trace-18372"></a>
<a id="trace-18380"></a>
<a id="trace-18388"></a>
<a id="trace-18396"></a>
<a id="trace-18400"></a>
<a id="trace-18410"></a>
<a id="trace-18415"></a>
<a id="trace-18479"></a>
<a id="trace-18491"></a>
<a id="trace-18499"></a>
<a id="trace-18510"></a>
<a id="trace-18530"></a>
<a id="trace-18534"></a>
<a id="trace-18541"></a>
<a id="trace-18546"></a>
<a id="trace-18610"></a>
<a id="trace-18617"></a>
<a id="trace-18624"></a>
<a id="trace-18639"></a>
<a id="trace-18649"></a>
<a id="trace-18657"></a>
<a id="trace-18664"></a>
<a id="trace-18676"></a>
<a id="trace-18681"></a>
<a id="trace-18754"></a>
<a id="trace-18762"></a>
<a id="trace-18777"></a>
<a id="trace-18787"></a>
<a id="trace-18792"></a>
<a id="trace-18805"></a>
<a id="trace-18872"></a>
<a id="trace-18894"></a>
<a id="trace-18908"></a>
<a id="trace-18916"></a>
<a id="trace-18921"></a>
<a id="trace-18927"></a>
<a id="trace-18932"></a>
<a id="trace-19003"></a>
<a id="trace-19012"></a>
<a id="trace-19030"></a>
<a id="trace-19050"></a>
<a id="trace-19054"></a>
<a id="trace-19060"></a>
<a id="trace-19132"></a>
- 204.30s–260.80s (×87), actor 5, squad 0 (trace 17609): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 17460. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099999999999985, 'next_transition': 17626}.
<a id="trace-19135"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (trace 19135): renew committed intent (75 s lifetime). Knowledge: actor memory at 260.90s, trace 19135. Next observer evidence: None.
<a id="trace-1676"></a>
- 260.90s–260.90s (×1), actor 5, squad 0 (events line 1676): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19140}.
<a id="trace-19140"></a>
<a id="trace-19159"></a>
<a id="trace-19176"></a>
<a id="trace-19183"></a>
<a id="trace-19195"></a>
<a id="trace-19200"></a>
<a id="trace-19264"></a>
<a id="trace-19268"></a>
<a id="trace-19282"></a>
<a id="trace-19296"></a>
<a id="trace-19307"></a>
<a id="trace-19320"></a>
<a id="trace-19325"></a>
<a id="trace-19392"></a>
<a id="trace-19402"></a>
<a id="trace-19415"></a>
<a id="trace-19423"></a>
<a id="trace-19430"></a>
<a id="trace-19438"></a>
<a id="trace-19443"></a>
<a id="trace-19449"></a>
<a id="trace-19454"></a>
<a id="trace-19519"></a>
<a id="trace-19528"></a>
<a id="trace-19535"></a>
<a id="trace-19546"></a>
<a id="trace-19560"></a>
<a id="trace-19567"></a>
<a id="trace-19575"></a>
<a id="trace-19579"></a>
<a id="trace-19585"></a>
<a id="trace-19653"></a>
<a id="trace-19657"></a>
<a id="trace-19664"></a>
<a id="trace-19672"></a>
<a id="trace-19683"></a>
<a id="trace-19693"></a>
<a id="trace-19705"></a>
<a id="trace-19709"></a>
<a id="trace-19721"></a>
<a id="trace-19726"></a>
<a id="trace-19790"></a>
<a id="trace-19794"></a>
<a id="trace-19807"></a>
<a id="trace-19815"></a>
<a id="trace-19822"></a>
<a id="trace-19831"></a>
<a id="trace-19846"></a>
<a id="trace-19918"></a>
<a id="trace-19928"></a>
<a id="trace-19934"></a>
<a id="trace-19942"></a>
<a id="trace-19956"></a>
<a id="trace-19964"></a>
<a id="trace-19968"></a>
<a id="trace-19979"></a>
<a id="trace-20050"></a>
<a id="trace-20059"></a>
<a id="trace-20070"></a>
<a id="trace-20084"></a>
<a id="trace-20091"></a>
<a id="trace-20099"></a>
<a id="trace-20108"></a>
<a id="trace-20179"></a>
<a id="trace-20187"></a>
<a id="trace-20195"></a>
<a id="trace-20206"></a>
<a id="trace-20214"></a>
<a id="trace-20237"></a>
<a id="trace-20243"></a>
<a id="trace-20248"></a>
<a id="trace-20312"></a>
<a id="trace-20321"></a>
<a id="trace-20329"></a>
<a id="trace-20337"></a>
<a id="trace-20344"></a>
<a id="trace-20359"></a>
<a id="trace-20365"></a>
<a id="trace-20445"></a>
<a id="trace-20455"></a>
<a id="trace-20463"></a>
<a id="trace-20471"></a>
<a id="trace-20478"></a>
<a id="trace-20486"></a>
<a id="trace-20490"></a>
<a id="trace-20496"></a>
<a id="trace-20501"></a>
<a id="trace-20572"></a>
<a id="trace-20581"></a>
<a id="trace-20590"></a>
<a id="trace-20607"></a>
<a id="trace-20616"></a>
<a id="trace-20624"></a>
<a id="trace-20628"></a>
<a id="trace-20634"></a>
<a id="trace-20639"></a>
<a id="trace-20703"></a>
<a id="trace-20712"></a>
<a id="trace-20719"></a>
<a id="trace-20731"></a>
<a id="trace-20739"></a>
<a id="trace-20751"></a>
<a id="trace-20763"></a>
<a id="trace-20770"></a>
<a id="trace-20774"></a>
<a id="trace-20846"></a>
<a id="trace-20853"></a>
<a id="trace-20861"></a>
<a id="trace-20876"></a>
<a id="trace-20883"></a>
- 261.30s–328.80s (×110), actor 5, squad 0 (trace 19140): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.90s, trace 19135. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19159}.
<a id="trace-20899"></a>
- 329.90s–329.90s (×1), actor 5, squad 0 (trace 20899): renew committed intent (75 s lifetime). Knowledge: actor memory at 329.90s, trace 20899. Next observer evidence: None.
<a id="trace-1806"></a>
- 329.90s–329.90s (×1), actor 5, squad 0 (events line 1806): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20969}.
<a id="trace-20969"></a>
<a id="trace-20975"></a>
<a id="trace-20988"></a>
<a id="trace-20996"></a>
<a id="trace-21004"></a>
<a id="trace-21012"></a>
<a id="trace-21018"></a>
<a id="trace-21024"></a>
<a id="trace-21095"></a>
<a id="trace-21106"></a>
<a id="trace-21120"></a>
<a id="trace-21128"></a>
<a id="trace-21146"></a>
<a id="trace-21151"></a>
<a id="trace-21224"></a>
<a id="trace-21228"></a>
<a id="trace-21234"></a>
<a id="trace-21244"></a>
<a id="trace-21252"></a>
<a id="trace-21262"></a>
<a id="trace-21277"></a>
<a id="trace-21282"></a>
<a id="trace-21288"></a>
<a id="trace-21297"></a>
<a id="trace-21364"></a>
<a id="trace-21369"></a>
<a id="trace-21383"></a>
<a id="trace-21390"></a>
<a id="trace-21405"></a>
<a id="trace-21421"></a>
<a id="trace-21495"></a>
<a id="trace-21503"></a>
<a id="trace-21511"></a>
<a id="trace-21519"></a>
<a id="trace-21526"></a>
<a id="trace-21534"></a>
<a id="trace-21538"></a>
<a id="trace-21549"></a>
<a id="trace-21616"></a>
<a id="trace-21620"></a>
<a id="trace-21629"></a>
<a id="trace-21643"></a>
<a id="trace-21657"></a>
<a id="trace-21667"></a>
<a id="trace-21671"></a>
<a id="trace-21678"></a>
<a id="trace-21684"></a>
- 330.30s–359.80s (×47), actor 5, squad 0 (trace 20969): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 20902. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20975}.

## Net delivery

141 matched order/radio deliveries; 227 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.361s; maximum 5.100s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2505: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2506: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2507: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2508: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2509: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2510: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2511: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 2895: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 2896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2900: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2901: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2902: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 2903: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 2904: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2905: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2906: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2907: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2908: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4450: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4451: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4452: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4457: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4458: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4459: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4460: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4461: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4462: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4463: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4464: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4465: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 7697: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7698: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7699: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7703: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7704: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7705: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7706: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7707: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7708: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7709: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7710: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7711: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7712: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 8038: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 8039: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 8040: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 8041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 8042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 8043: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 8044: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 8045: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 8046: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 8047: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 8048: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 8049: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 8050: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 8051: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 8052: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 8053: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 8437: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 8438: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8497: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8498: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8499: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8502: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8503: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8504: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8505: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8506: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8507: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8508: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8509: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8510: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8511: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8512: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9194: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9195: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9196: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9199: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9200: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9201: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9202: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9203: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9204: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9205: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9206: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9207: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9208: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9209: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 10046: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10047: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 10048: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10051: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10052: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10053: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10054: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10055: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10056: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10057: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10058: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10059: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10060: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 12563: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12564: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 12565: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12568: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12569: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12570: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12571: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12572: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12573: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12574: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12575: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12576: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12577: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 13282: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13283: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13286: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13287: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13288: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13289: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13290: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13291: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13292: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13293: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13294: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13295: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 13506: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13507: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13508: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13510: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13511: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13512: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13513: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13514: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13515: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13516: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13517: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13518: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13519: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 13797: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13798: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13799: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13800: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13801: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13802: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13803: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13804: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13805: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13806: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13807: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13808: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13809: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14250: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14251: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14252: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14253: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14254: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14255: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14256: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14257: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14258: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14259: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14260: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14261: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14578: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14579: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14580: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14581: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14582: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14583: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14584: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14585: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14586: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14587: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14588: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14732: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14733: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14734: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14735: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14736: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14737: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14738: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14739: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14740: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14741: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 14895: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 14896: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 14897: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 14898: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 14899: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 14900: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 14901: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 14902: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 14903: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 14904: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.80s leader 5, trace 14997: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15029: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15030: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15031: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15032: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15033: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15034: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15035: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15036: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15037: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15038: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 15169: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15170: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15171: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15172: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15173: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15174: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15175: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15176: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15177: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15178: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 15301: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15302: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15303: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15304: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15305: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15306: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15307: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15308: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15309: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15310: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 15398: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 15432: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 15433: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 15434: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 15435: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 15436: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 15437: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 15438: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 15439: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 15440: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 15441: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 15559: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15560: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15561: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 15562: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 15563: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 15564: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 15565: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15566: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15567: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 15568: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 15690: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15691: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15692: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 15693: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 15694: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 15695: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 15696: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15697: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15698: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 15699: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 15825: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15826: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15827: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 15828: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 15829: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 15830: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 15831: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15832: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15833: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 15834: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 15951: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15952: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15953: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 15954: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 15955: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 15956: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 15957: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15958: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15959: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 15960: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 16076: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16077: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 16078: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 16079: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16080: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 16081: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16082: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 16083: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16084: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 16085: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 16209: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 16210: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 16211: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 16212: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 16213: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 16214: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 16215: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 16216: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 16217: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 16218: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 16345: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 16346: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 16347: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 16348: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 16349: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 16350: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 16351: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 16352: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 16353: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 16354: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 16473: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16474: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 16475: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 16476: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 16477: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 16478: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 16479: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16480: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16481: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 16482: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 16600: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16601: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 16602: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 16603: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 16604: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 16605: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 16606: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16607: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16608: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 16609: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 16736: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16737: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 16738: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 16739: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 16740: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 16741: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 16742: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16743: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 16744: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 16745: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 16872: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 16873: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16874: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 16875: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 16876: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16877: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16878: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16879: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16880: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16881: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 17003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 17005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 17006: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 17007: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 17008: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 17009: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 17010: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17011: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 17012: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 17128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 17130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 17131: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 17132: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 17133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 17134: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 17135: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17136: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 17137: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 17219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 17220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 17262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 17264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 17265: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 17266: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 17267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 17268: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 17269: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17270: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 17271: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 17629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 17763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 17896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 17897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 17898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 17899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 17900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 17901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 17902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 17904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 17905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 18026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 18028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 18160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 18284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 18286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 18418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 18420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 18549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 18551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 18684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 18685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 18686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 18687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 18688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 18689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 18690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 18691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 18692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 18693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 18808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 18809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 18810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 18811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 18812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 18813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 18814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 18815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 18816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 18817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 18936: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 18937: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 18938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 18939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 18940: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 18941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 18942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 18943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 18944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 18945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 19067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 19069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 19135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 19203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 19205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 19328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 19329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 19330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 19331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 19332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 19333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 19334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 19335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 19336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 19337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 19458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 19459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 19460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 19461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 19462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 19463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 19464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 19465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 19466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 19467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 19592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 19593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 19594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 19595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 19596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 19597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 19598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 19599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 19600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 19601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 19729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 19730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 19731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 19732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 19733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 19734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 19735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 19736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 19737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 19738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 19857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 19858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 19859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 19860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 19861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 19862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 19863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 19864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 19865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 19866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 19982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 19983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 19984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 19985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 19986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 19987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 19988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 19989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 19990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 19991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 20115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 20116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 20117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 20118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 20119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 20120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 20121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 20122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 20123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 20124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 20251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 20252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 20253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 20254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 20255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 20256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 20257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 20258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 20259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 20260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 20375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 20376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 20377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 20378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 20379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 20380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 20381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 20382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 20383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 20384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 20504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 20505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 20506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 20507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 20508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 20509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 20510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 20511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 20512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 20513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 20642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 20643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 20644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 20645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 20646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 20647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 20648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 20649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 20650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 20651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 20777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 20778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 20779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 20780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 20781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 20782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 20783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 20784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 20785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 20786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 329.90s leader 5, trace 20899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 20901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 20902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 20903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 20904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 20905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 20906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 20907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 20908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 20909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 20910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 21031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 21032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 21033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 21034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 21035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 21036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 21037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 21038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 21039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 21040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 21163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 21164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 21165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 21166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 21167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 21168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 21169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 21170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 21171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 21172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 21300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 21301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 21302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 21303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 21304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 21305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 21306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 21307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 21308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 21309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 21430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 21431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 21432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 21433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 21434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 21435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 21436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 21437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 21438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 21439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 21555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 21556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 21557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 21558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 21559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 21560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 21561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 21562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 21563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 21564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 21687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 21688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 21689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 21690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 21691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 21692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 21693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 21694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 21695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 21696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Reed incapacitated
- 1: Soren incapacitated
- 1: Tern killed in action
- 1: Vale killed in action
- 1: Orin incapacitated
- 1: Ash killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
