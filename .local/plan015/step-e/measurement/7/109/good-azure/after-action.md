# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/109/good-azure/battle-109-1789673778662409689`

## Battle summary

**Ember** · 360 s · 740 shots.

### Turning points

- 23.6s, squad 4: contact (events line 235). First recorded contact.
- 30.1s, squad 0: help call ([trace 2281](#trace-2281)). No completion observed before termination.
- 53.8s, squad 0: withdrawal ([trace 3987](#trace-3987)). 102.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 70.8s, squad 0: help call ([trace 5146](#trace-5146)). No completion observed before termination.
- 106.2s, squad 0: withdrawal ([trace 6579](#trace-6579)). 163.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 230.8s, squad 0: help call ([trace 11798](#trace-11798)). No completion observed before termination.
- 234.8s, squad 0: withdrawal ([trace 12007](#trace-12007)). 255.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 276.6s, squad 0: withdrawal ([trace 13304](#trace-13304)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 30 shots, 5/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 710 shots, 1/6 lost.

### Decisions and attribution

At 102.5s, squad 0 chose advanced tactically ([trace 6313](#trace-6313)), followed by 1 shots and 0 own casualties; estimate 6.6 against 0 distinct squad-reported contacts; At 229.8s, squad 0 chose took cover and returned fire ([trace 11469](#trace-11469)), followed by 1 shots and 0 own casualties; estimate 5.9 against 5 distinct squad-reported contacts; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
- 29.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477325 retreat threshold=0.500000 initiative=delegated ([trace 2209](#trace-2209)). Following evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200805759182093, 'next_transition': 2279}.

### Communication

159 matched deliveries (mean 0.33s, max 1.95s); 248 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.60s, squad 4, contact, evidence events line 235: First recorded contact; .
- 30.15s, squad 0, help call, evidence 2281: NeedSupport; No completion observed before termination.
- 53.80s, squad 0, withdrawal, evidence 3987: BreakContact: believed ratio at least two without superiority; 102.1s, squad 0: contact broken or rally reached: Occupy and report strength.
- 70.80s, squad 0, help call, evidence 5146: NeedSupport; No completion observed before termination.
- 106.25s, squad 0, withdrawal, evidence 6579: Withdraw to received rally; 163.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 230.75s, squad 0, help call, evidence 11798: NeedSupport; No completion observed before termination.
- 234.75s, squad 0, withdrawal, evidence 12007: BreakContact: believed ratio at least two without superiority; 255.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 276.60s, squad 0, withdrawal, evidence 13304: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287427315873323, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200145330084873, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000104340763731, 'next_transition': 431}.
<a id="trace-519"></a>
<a id="trace-753"></a>
<a id="trace-777"></a>
<a id="trace-799"></a>
<a id="trace-843"></a>
<a id="trace-874"></a>
<a id="trace-890"></a>
<a id="trace-903"></a>
<a id="trace-987"></a>
<a id="trace-1000"></a>
<a id="trace-1014"></a>
<a id="trace-1035"></a>
<a id="trace-1071"></a>
<a id="trace-1088"></a>
<a id="trace-1098"></a>
<a id="trace-1130"></a>
<a id="trace-1208"></a>
<a id="trace-1221"></a>
<a id="trace-1337"></a>
<a id="trace-1360"></a>
<a id="trace-1378"></a>
<a id="trace-1419"></a>
<a id="trace-1436"></a>
<a id="trace-1459"></a>
<a id="trace-1539"></a>
<a id="trace-1555"></a>
<a id="trace-1572"></a>
<a id="trace-1584"></a>
<a id="trace-1605"></a>
<a id="trace-1620"></a>
<a id="trace-1632"></a>
<a id="trace-1641"></a>
<a id="trace-1741"></a>
<a id="trace-1814"></a>
<a id="trace-1826"></a>
<a id="trace-1976"></a>
<a id="trace-1988"></a>
<a id="trace-2146"></a>
<a id="trace-2159"></a>
<a id="trace-2174"></a>
<a id="trace-2202"></a>
<a id="trace-2208"></a>
<a id="trace-2292"></a>
<a id="trace-2296"></a>
<a id="trace-2454"></a>
<a id="trace-2460"></a>
<a id="trace-2482"></a>
<a id="trace-2502"></a>
<a id="trace-2512"></a>
<a id="trace-2529"></a>
<a id="trace-2540"></a>
<a id="trace-2549"></a>
<a id="trace-2619"></a>
<a id="trace-2628"></a>
<a id="trace-2657"></a>
<a id="trace-2666"></a>
<a id="trace-2679"></a>
<a id="trace-2689"></a>
<a id="trace-2699"></a>
<a id="trace-2708"></a>
<a id="trace-2717"></a>
<a id="trace-3014"></a>
<a id="trace-3029"></a>
<a id="trace-3042"></a>
<a id="trace-3061"></a>
<a id="trace-3093"></a>
<a id="trace-3104"></a>
<a id="trace-3115"></a>
<a id="trace-3130"></a>
<a id="trace-3146"></a>
<a id="trace-3220"></a>
<a id="trace-3231"></a>
<a id="trace-3245"></a>
<a id="trace-3259"></a>
<a id="trace-3271"></a>
<a id="trace-3289"></a>
<a id="trace-3306"></a>
<a id="trace-3880"></a>
<a id="trace-3898"></a>
<a id="trace-3917"></a>
<a id="trace-3930"></a>
<a id="trace-3949"></a>
<a id="trace-3978"></a>
<a id="trace-3984"></a>
<a id="trace-4309"></a>
<a id="trace-4391"></a>
<a id="trace-4399"></a>
<a id="trace-4418"></a>
<a id="trace-4448"></a>
<a id="trace-4460"></a>
<a id="trace-4493"></a>
<a id="trace-4519"></a>
<a id="trace-4552"></a>
<a id="trace-4588"></a>
<a id="trace-4687"></a>
<a id="trace-4731"></a>
<a id="trace-4741"></a>
<a id="trace-4757"></a>
<a id="trace-4763"></a>
<a id="trace-4771"></a>
<a id="trace-4778"></a>
<a id="trace-4875"></a>
<a id="trace-4880"></a>
<a id="trace-4896"></a>
<a id="trace-5013"></a>
<a id="trace-5031"></a>
<a id="trace-5055"></a>
<a id="trace-5061"></a>
<a id="trace-5069"></a>
<a id="trace-5156"></a>
<a id="trace-5162"></a>
<a id="trace-5172"></a>
<a id="trace-5179"></a>
<a id="trace-5188"></a>
<a id="trace-5194"></a>
<a id="trace-5202"></a>
<a id="trace-5209"></a>
<a id="trace-5279"></a>
<a id="trace-5290"></a>
<a id="trace-5302"></a>
<a id="trace-5334"></a>
<a id="trace-5347"></a>
<a id="trace-5367"></a>
<a id="trace-5374"></a>
<a id="trace-5451"></a>
<a id="trace-5461"></a>
<a id="trace-5485"></a>
<a id="trace-5496"></a>
<a id="trace-5510"></a>
<a id="trace-5519"></a>
<a id="trace-5525"></a>
<a id="trace-5620"></a>
<a id="trace-5646"></a>
<a id="trace-5668"></a>
<a id="trace-5677"></a>
<a id="trace-5689"></a>
<a id="trace-5694"></a>
<a id="trace-5705"></a>
<a id="trace-5714"></a>
<a id="trace-5789"></a>
<a id="trace-5969"></a>
<a id="trace-6025"></a>
<a id="trace-6038"></a>
<a id="trace-6050"></a>
<a id="trace-6062"></a>
<a id="trace-6154"></a>
<a id="trace-6159"></a>
<a id="trace-6170"></a>
<a id="trace-6178"></a>
<a id="trace-6184"></a>
<a id="trace-6198"></a>
<a id="trace-6274"></a>
<a id="trace-6277"></a>
<a id="trace-6289"></a>
<a id="trace-6294"></a>
<a id="trace-6307"></a>
<a id="trace-6424"></a>
<a id="trace-6441"></a>
<a id="trace-6454"></a>
<a id="trace-6475"></a>
<a id="trace-6483"></a>
<a id="trace-6570"></a>
<a id="trace-6578"></a>
<a id="trace-6753"></a>
<a id="trace-6779"></a>
<a id="trace-6789"></a>
<a id="trace-6795"></a>
<a id="trace-6813"></a>
<a id="trace-6816"></a>
<a id="trace-6888"></a>
<a id="trace-6893"></a>
<a id="trace-6902"></a>
<a id="trace-6908"></a>
<a id="trace-6919"></a>
<a id="trace-6925"></a>
<a id="trace-6931"></a>
<a id="trace-6938"></a>
<a id="trace-6945"></a>
<a id="trace-7019"></a>
<a id="trace-7025"></a>
<a id="trace-7036"></a>
<a id="trace-7042"></a>
<a id="trace-7054"></a>
<a id="trace-7183"></a>
<a id="trace-7198"></a>
<a id="trace-7200"></a>
<a id="trace-7278"></a>
<a id="trace-7302"></a>
<a id="trace-7327"></a>
<a id="trace-7333"></a>
<a id="trace-7347"></a>
<a id="trace-7442"></a>
<a id="trace-7452"></a>
<a id="trace-7457"></a>
<a id="trace-7469"></a>
<a id="trace-7474"></a>
<a id="trace-7493"></a>
<a id="trace-7566"></a>
<a id="trace-7574"></a>
<a id="trace-7584"></a>
<a id="trace-7591"></a>
<a id="trace-7605"></a>
<a id="trace-7609"></a>
<a id="trace-7621"></a>
<a id="trace-7626"></a>
<a id="trace-7637"></a>
<a id="trace-7645"></a>
<a id="trace-7773"></a>
<a id="trace-7784"></a>
<a id="trace-7800"></a>
<a id="trace-7805"></a>
<a id="trace-7820"></a>
<a id="trace-7839"></a>
<a id="trace-7845"></a>
<a id="trace-7856"></a>
<a id="trace-7968"></a>
<a id="trace-8043"></a>
<a id="trace-8054"></a>
<a id="trace-8066"></a>
<a id="trace-8084"></a>
<a id="trace-8089"></a>
<a id="trace-8096"></a>
<a id="trace-8104"></a>
<a id="trace-8115"></a>
<a id="trace-8119"></a>
<a id="trace-8207"></a>
<a id="trace-8212"></a>
<a id="trace-8224"></a>
<a id="trace-8229"></a>
<a id="trace-8238"></a>
<a id="trace-8243"></a>
<a id="trace-8256"></a>
<a id="trace-8261"></a>
<a id="trace-8331"></a>
<a id="trace-8340"></a>
<a id="trace-8355"></a>
<a id="trace-8366"></a>
<a id="trace-8376"></a>
<a id="trace-8383"></a>
<a id="trace-8454"></a>
<a id="trace-8464"></a>
<a id="trace-8469"></a>
<a id="trace-8535"></a>
<a id="trace-8539"></a>
<a id="trace-8551"></a>
<a id="trace-8561"></a>
<a id="trace-8758"></a>
<a id="trace-8768"></a>
<a id="trace-8785"></a>
<a id="trace-8814"></a>
<a id="trace-8819"></a>
<a id="trace-8836"></a>
<a id="trace-8848"></a>
<a id="trace-8918"></a>
<a id="trace-8941"></a>
<a id="trace-8962"></a>
<a id="trace-8968"></a>
<a id="trace-8976"></a>
<a id="trace-8989"></a>
<a id="trace-8993"></a>
<a id="trace-9069"></a>
<a id="trace-9191"></a>
<a id="trace-9204"></a>
<a id="trace-9228"></a>
<a id="trace-9243"></a>
<a id="trace-9255"></a>
<a id="trace-9268"></a>
<a id="trace-9275"></a>
<a id="trace-9344"></a>
<a id="trace-9349"></a>
<a id="trace-9360"></a>
<a id="trace-9366"></a>
<a id="trace-9377"></a>
<a id="trace-9393"></a>
<a id="trace-9403"></a>
<a id="trace-9413"></a>
<a id="trace-9493"></a>
<a id="trace-9500"></a>
<a id="trace-9670"></a>
<a id="trace-9682"></a>
<a id="trace-9696"></a>
<a id="trace-9705"></a>
<a id="trace-9718"></a>
<a id="trace-9730"></a>
<a id="trace-9739"></a>
<a id="trace-9748"></a>
<a id="trace-9833"></a>
<a id="trace-9850"></a>
<a id="trace-9871"></a>
<a id="trace-9878"></a>
<a id="trace-9895"></a>
<a id="trace-9905"></a>
<a id="trace-9974"></a>
<a id="trace-9990"></a>
<a id="trace-10009"></a>
<a id="trace-10030"></a>
<a id="trace-10046"></a>
<a id="trace-10210"></a>
<a id="trace-10286"></a>
<a id="trace-10315"></a>
<a id="trace-10333"></a>
<a id="trace-10341"></a>
<a id="trace-10352"></a>
<a id="trace-10361"></a>
<a id="trace-10434"></a>
<a id="trace-10442"></a>
<a id="trace-10465"></a>
<a id="trace-10476"></a>
<a id="trace-10498"></a>
<a id="trace-10591"></a>
<a id="trace-10604"></a>
<a id="trace-10614"></a>
<a id="trace-10632"></a>
<a id="trace-10643"></a>
<a id="trace-10648"></a>
<a id="trace-10660"></a>
<a id="trace-10666"></a>
<a id="trace-10733"></a>
<a id="trace-10748"></a>
<a id="trace-10754"></a>
<a id="trace-10765"></a>
<a id="trace-10769"></a>
<a id="trace-10782"></a>
<a id="trace-10786"></a>
<a id="trace-10797"></a>
<a id="trace-10801"></a>
<a id="trace-10873"></a>
<a id="trace-10879"></a>
<a id="trace-10889"></a>
<a id="trace-10894"></a>
<a id="trace-10903"></a>
<a id="trace-10907"></a>
<a id="trace-11141"></a>
<a id="trace-11148"></a>
<a id="trace-11240"></a>
<a id="trace-11249"></a>
<a id="trace-11266"></a>
<a id="trace-11274"></a>
<a id="trace-11285"></a>
<a id="trace-11293"></a>
<a id="trace-11300"></a>
<a id="trace-11309"></a>
<a id="trace-11319"></a>
<a id="trace-11390"></a>
<a id="trace-11408"></a>
<a id="trace-11418"></a>
<a id="trace-11428"></a>
<a id="trace-11435"></a>
<a id="trace-11468"></a>
<a id="trace-11785"></a>
<a id="trace-11802"></a>
<a id="trace-11946"></a>
<a id="trace-11956"></a>
<a id="trace-11971"></a>
<a id="trace-11979"></a>
<a id="trace-11987"></a>
<a id="trace-11994"></a>
<a id="trace-12000"></a>
<a id="trace-12184"></a>
<a id="trace-12270"></a>
<a id="trace-12281"></a>
<a id="trace-12290"></a>
<a id="trace-12299"></a>
<a id="trace-12308"></a>
<a id="trace-12311"></a>
<a id="trace-12319"></a>
<a id="trace-12324"></a>
<a id="trace-12391"></a>
<a id="trace-12396"></a>
<a id="trace-12405"></a>
<a id="trace-12412"></a>
<a id="trace-12428"></a>
<a id="trace-12435"></a>
<a id="trace-12440"></a>
<a id="trace-12449"></a>
<a id="trace-12454"></a>
<a id="trace-12524"></a>
<a id="trace-12539"></a>
<a id="trace-12545"></a>
<a id="trace-12557"></a>
<a id="trace-12562"></a>
<a id="trace-12569"></a>
<a id="trace-12576"></a>
<a id="trace-12583"></a>
<a id="trace-12588"></a>
<a id="trace-12653"></a>
<a id="trace-12656"></a>
<a id="trace-12664"></a>
<a id="trace-12670"></a>
<a id="trace-12685"></a>
<a id="trace-12694"></a>
<a id="trace-12702"></a>
<a id="trace-12707"></a>
<a id="trace-12771"></a>
<a id="trace-12778"></a>
<a id="trace-12806"></a>
<a id="trace-12815"></a>
<a id="trace-12835"></a>
<a id="trace-12842"></a>
<a id="trace-12852"></a>
<a id="trace-12856"></a>
<a id="trace-12921"></a>
<a id="trace-12931"></a>
<a id="trace-12938"></a>
<a id="trace-12946"></a>
<a id="trace-12951"></a>
<a id="trace-12958"></a>
<a id="trace-12961"></a>
<a id="trace-12975"></a>
<a id="trace-13040"></a>
<a id="trace-13057"></a>
<a id="trace-13065"></a>
<a id="trace-13072"></a>
<a id="trace-13084"></a>
<a id="trace-13087"></a>
<a id="trace-13165"></a>
<a id="trace-13180"></a>
<a id="trace-13188"></a>
<a id="trace-13196"></a>
<a id="trace-13211"></a>
<a id="trace-13219"></a>
<a id="trace-13300"></a>
<a id="trace-13360"></a>
<a id="trace-13368"></a>
<a id="trace-13377"></a>
<a id="trace-13384"></a>
<a id="trace-13394"></a>
<a id="trace-13477"></a>
<a id="trace-13483"></a>
<a id="trace-13492"></a>
<a id="trace-13507"></a>
<a id="trace-13515"></a>
<a id="trace-13526"></a>
<a id="trace-13534"></a>
<a id="trace-13541"></a>
<a id="trace-13611"></a>
<a id="trace-13620"></a>
<a id="trace-13627"></a>
<a id="trace-13639"></a>
<a id="trace-13664"></a>
<a id="trace-13667"></a>
<a id="trace-13679"></a>
<a id="trace-13747"></a>
<a id="trace-13754"></a>
<a id="trace-13761"></a>
<a id="trace-13767"></a>
<a id="trace-13780"></a>
<a id="trace-13788"></a>
<a id="trace-13791"></a>
<a id="trace-13805"></a>
<a id="trace-13812"></a>
<a id="trace-13878"></a>
<a id="trace-13881"></a>
<a id="trace-13889"></a>
<a id="trace-13895"></a>
<a id="trace-13902"></a>
<a id="trace-13908"></a>
<a id="trace-13915"></a>
<a id="trace-13918"></a>
<a id="trace-13928"></a>
<a id="trace-13932"></a>
<a id="trace-13999"></a>
<a id="trace-14005"></a>
<a id="trace-14015"></a>
<a id="trace-14021"></a>
<a id="trace-14032"></a>
<a id="trace-14038"></a>
<a id="trace-14047"></a>
<a id="trace-14059"></a>
<a id="trace-14126"></a>
<a id="trace-14136"></a>
<a id="trace-14152"></a>
<a id="trace-14158"></a>
<a id="trace-14165"></a>
<a id="trace-14179"></a>
<a id="trace-14185"></a>
<a id="trace-14259"></a>
<a id="trace-14273"></a>
<a id="trace-14278"></a>
<a id="trace-14285"></a>
<a id="trace-14289"></a>
<a id="trace-14306"></a>
<a id="trace-14370"></a>
<a id="trace-14375"></a>
<a id="trace-14385"></a>
<a id="trace-14399"></a>
<a id="trace-14403"></a>
<a id="trace-14413"></a>
<a id="trace-14416"></a>
<a id="trace-14429"></a>
<a id="trace-14494"></a>
<a id="trace-14499"></a>
<a id="trace-14508"></a>
<a id="trace-14526"></a>
<a id="trace-14535"></a>
<a id="trace-14540"></a>
<a id="trace-14554"></a>
<a id="trace-14619"></a>
<a id="trace-14634"></a>
<a id="trace-14642"></a>
<a id="trace-14657"></a>
<a id="trace-14661"></a>
<a id="trace-14671"></a>
<a id="trace-14675"></a>
<a id="trace-14746"></a>
<a id="trace-14755"></a>
<a id="trace-14760"></a>
<a id="trace-14768"></a>
<a id="trace-14773"></a>
<a id="trace-14780"></a>
<a id="trace-14795"></a>
<a id="trace-14802"></a>
<a id="trace-14881"></a>
<a id="trace-14886"></a>
<a id="trace-14894"></a>
<a id="trace-14899"></a>
<a id="trace-14909"></a>
<a id="trace-14913"></a>
<a id="trace-14922"></a>
<a id="trace-14992"></a>
<a id="trace-14995"></a>
<a id="trace-15004"></a>
<a id="trace-15023"></a>
<a id="trace-15031"></a>
<a id="trace-15034"></a>
<a id="trace-15044"></a>
<a id="trace-15050"></a>
<a id="trace-15116"></a>
<a id="trace-15121"></a>
<a id="trace-15129"></a>
<a id="trace-15134"></a>
<a id="trace-15146"></a>
<a id="trace-15160"></a>
<a id="trace-15173"></a>
<a id="trace-15240"></a>
<a id="trace-15245"></a>
<a id="trace-15252"></a>
<a id="trace-15258"></a>
<a id="trace-15269"></a>
<a id="trace-15274"></a>
<a id="trace-15282"></a>
<a id="trace-15285"></a>
<a id="trace-15296"></a>
<a id="trace-15302"></a>
<a id="trace-15369"></a>
<a id="trace-15372"></a>
<a id="trace-15380"></a>
<a id="trace-15392"></a>
<a id="trace-15398"></a>
<a id="trace-15405"></a>
<a id="trace-15408"></a>
<a id="trace-15418"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22922005872977136, 'next_transition': 753}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5155286950694128, 'next_transition': 751}.
<a id="trace-751"></a>
<a id="trace-775"></a>
<a id="trace-797"></a>
<a id="trace-817"></a>
<a id="trace-841"></a>
<a id="trace-872"></a>
<a id="trace-888"></a>
<a id="trace-901"></a>
<a id="trace-985"></a>
<a id="trace-998"></a>
<a id="trace-1012"></a>
<a id="trace-1033"></a>
<a id="trace-1052"></a>
<a id="trace-1069"></a>
<a id="trace-1086"></a>
<a id="trace-1096"></a>
<a id="trace-1117"></a>
<a id="trace-1128"></a>
<a id="trace-1206"></a>
<a id="trace-1219"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 751): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.96368335495628, 'next_transition': 775}.
<a id="trace-1223"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1223): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1132. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6765125302996711, 'next_transition': 1335}.
<a id="trace-1224"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1224): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1132. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6765125302996711, 'next_transition': 1335}.
<a id="trace-1335"></a>
<a id="trace-1358"></a>
<a id="trace-1376"></a>
<a id="trace-1391"></a>
<a id="trace-1417"></a>
<a id="trace-1434"></a>
<a id="trace-1445"></a>
<a id="trace-1457"></a>
<a id="trace-1537"></a>
<a id="trace-1553"></a>
<a id="trace-1570"></a>
<a id="trace-1582"></a>
<a id="trace-1603"></a>
<a id="trace-1618"></a>
<a id="trace-1630"></a>
<a id="trace-1639"></a>
<a id="trace-1652"></a>
- 16.25s–24.25s (×17), actor 5, squad 0 (trace 1335): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1135. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30124250147014825, 'next_transition': 1358}.
<a id="trace-1655"></a>
- 24.60s–24.60s (×1), actor 0, squad 0 (trace 1655): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1464. Next observer evidence: None.
<a id="trace-1739"></a>
<a id="trace-1812"></a>
<a id="trace-1824"></a>
- 24.75s–25.75s (×3), actor 5, squad 0 (trace 1739): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1467. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5308164374577778, 'next_transition': 1812}.
<a id="trace-1832"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 1832): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2557088178267885, 'next_transition': 1974}.
<a id="trace-1833"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 1833): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2557088178267885, 'next_transition': 1974}.
<a id="trace-1834"></a>
- 25.85s–25.85s (×1), actor 0, squad 0 (trace 1834): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2557088178267885, 'next_transition': 1974}.
<a id="trace-1974"></a>
<a id="trace-1986"></a>
- 26.25s–26.75s (×2), actor 5, squad 0 (trace 1974): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1746. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2578014430288504, 'next_transition': 1986}.
<a id="trace-1990"></a>
- 26.85s–26.85s (×1), actor 0, squad 0 (trace 1990): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.11027943612494007, 'next_transition': 2144}.
<a id="trace-2144"></a>
<a id="trace-2157"></a>
<a id="trace-2172"></a>
<a id="trace-2192"></a>
- 27.25s–28.75s (×4), actor 5, squad 0 (trace 2144): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1746. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20399697993842944, 'next_transition': 2157}.
<a id="trace-2197"></a>
- 29.05s–29.05s (×1), actor 5, squad 0 (trace 2197): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 29.05s, trace 2197. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519884550145798, 'next_transition': 2200}.
<a id="trace-2200"></a>
<a id="trace-2206"></a>
- 29.25s–29.75s (×2), actor 5, squad 0 (trace 2200): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 29.05s, trace 2197. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040166188319158, 'next_transition': 2206}.
<a id="trace-303"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 303): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2209"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 2209): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 2209. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200805759182093, 'next_transition': 2279}.
<a id="trace-2210"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 2210): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477325 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 2210. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200805759182093, 'next_transition': 2279}.
<a id="trace-2279"></a>
- 30.15s–30.15s (×1), actor 1, squad 0 (trace 2279): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198829979242154, 'next_transition': 2290}.
<a id="trace-2281"></a>
- 30.15s–30.15s (×1), actor 1, squad 0 (trace 2281): NeedSupport. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25198829979242154, 'next_transition': 2290}.
<a id="trace-2290"></a>
<a id="trace-2294"></a>
- 30.25s–30.75s (×2), actor 5, squad 0 (trace 2290): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2214. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5001331025012303, 'next_transition': 2294}.
<a id="trace-2298"></a>
- 31.15s–31.15s (×1), actor 1, squad 0 (trace 2298): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520138853339061, 'next_transition': 2452}.
<a id="trace-2302"></a>
- 31.15s–31.15s (×1), actor 1, squad 0 (trace 2302): MoveTactically. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520138853339061, 'next_transition': 2452}.
<a id="trace-2303"></a>
- 31.15s–31.15s (×1), actor 1, squad 0 (trace 2303): traveling. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520138853339061, 'next_transition': 2452}.
<a id="trace-2304"></a>
- 31.15s–31.15s (×1), actor 1, squad 0 (trace 2304): Reorganise complete. Knowledge: actor memory at 30.00s, trace 2212. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520138853339061, 'next_transition': 2452}.
<a id="trace-2452"></a>
<a id="trace-2458"></a>
<a id="trace-2480"></a>
<a id="trace-2500"></a>
<a id="trace-2510"></a>
<a id="trace-2527"></a>
<a id="trace-2538"></a>
<a id="trace-2547"></a>
<a id="trace-2617"></a>
<a id="trace-2626"></a>
<a id="trace-2640"></a>
<a id="trace-2655"></a>
<a id="trace-2664"></a>
<a id="trace-2677"></a>
<a id="trace-2687"></a>
<a id="trace-2697"></a>
<a id="trace-2706"></a>
<a id="trace-2715"></a>
- 31.25s–39.75s (×18), actor 5, squad 0 (trace 2452): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2214. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039880998658208, 'next_transition': 2458}.
<a id="trace-2786"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 2786): traveling overwatch. Knowledge: actor memory at 40.00s, trace 2718. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4362395388159149, 'next_transition': 3012}.
<a id="trace-2787"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 2787): current contact unknown for 10 s. Knowledge: actor memory at 40.00s, trace 2718. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4362395388159149, 'next_transition': 3012}.
<a id="trace-3012"></a>
<a id="trace-3027"></a>
<a id="trace-3040"></a>
<a id="trace-3059"></a>
<a id="trace-3073"></a>
<a id="trace-3091"></a>
<a id="trace-3102"></a>
<a id="trace-3113"></a>
<a id="trace-3128"></a>
<a id="trace-3144"></a>
<a id="trace-3218"></a>
<a id="trace-3229"></a>
<a id="trace-3243"></a>
<a id="trace-3257"></a>
<a id="trace-3269"></a>
<a id="trace-3287"></a>
<a id="trace-3304"></a>
<a id="trace-3322"></a>
- 40.25s–48.75s (×18), actor 5, squad 0 (trace 3012): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2720. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4560161121493165, 'next_transition': 3027}.
<a id="trace-3332"></a>
- 49.10s–49.10s (×1), actor 1, squad 0 (trace 3332): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199493664754485, 'next_transition': 3417}.
<a id="trace-3417"></a>
- 49.25s–49.25s (×1), actor 5, squad 0 (trace 3417): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3151. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6277216743649742, 'next_transition': 3424}.
<a id="trace-3424"></a>
- 49.60s–49.60s (×1), actor 1, squad 0 (trace 3424): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: None.
<a id="trace-3425"></a>
- 49.60s–49.60s (×1), actor 1, squad 0 (trace 3425): bounding overwatch. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: None.
<a id="trace-3426"></a>
- 49.60s–49.60s (×1), actor 1, squad 0 (trace 3426): new contact inside 100 m. Knowledge: actor memory at 45.00s, trace 3149. Next observer evidence: None.
<a id="trace-3800"></a>
<a id="trace-3878"></a>
<a id="trace-3896"></a>
<a id="trace-3915"></a>
<a id="trace-3928"></a>
<a id="trace-3947"></a>
<a id="trace-3965"></a>
<a id="trace-3976"></a>
<a id="trace-3982"></a>
- 49.75s–53.75s (×9), actor 5, squad 0 (trace 3800): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3151. Next observer evidence: {'until': 50.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9700647482239774, 'next_transition': 3878}.
<a id="trace-3987"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 3987): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 3805. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2643589119415524, 'next_transition': 4296}.
<a id="trace-3988"></a>
- 53.80s–53.80s (×1), actor 1, squad 0 (trace 3988): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 3805. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2643589119415524, 'next_transition': 4296}.
<a id="trace-4296"></a>
<a id="trace-4307"></a>
<a id="trace-4389"></a>
<a id="trace-4397"></a>
<a id="trace-4416"></a>
<a id="trace-4434"></a>
<a id="trace-4446"></a>
<a id="trace-4458"></a>
<a id="trace-4491"></a>
<a id="trace-4517"></a>
<a id="trace-4550"></a>
<a id="trace-4586"></a>
<a id="trace-4685"></a>
<a id="trace-4710"></a>
<a id="trace-4729"></a>
<a id="trace-4739"></a>
<a id="trace-4755"></a>
<a id="trace-4761"></a>
<a id="trace-4769"></a>
<a id="trace-4776"></a>
<a id="trace-4787"></a>
<a id="trace-4798"></a>
<a id="trace-4873"></a>
<a id="trace-4878"></a>
<a id="trace-4894"></a>
- 54.25s–66.25s (×25), actor 5, squad 0 (trace 4296): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3807. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8339969540053593, 'next_transition': 4307}.
<a id="trace-4897"></a>
- 66.40s–66.40s (×1), actor 1, squad 0 (trace 4897): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 4806. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600829098118876, 'next_transition': 5011}.
<a id="trace-4904"></a>
- 66.40s–66.40s (×1), actor 1, squad 0 (trace 4904): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 4806. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600829098118876, 'next_transition': 5011}.
<a id="trace-5011"></a>
<a id="trace-5024"></a>
<a id="trace-5029"></a>
<a id="trace-5041"></a>
<a id="trace-5053"></a>
<a id="trace-5059"></a>
<a id="trace-5067"></a>
<a id="trace-5139"></a>
<a id="trace-5144"></a>
- 66.75s–70.75s (×9), actor 5, squad 0 (trace 5011): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4808. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3779905494903284, 'next_transition': 5024}.
<a id="trace-5146"></a>
- 70.80s–70.80s (×1), actor 1, squad 0 (trace 5146): NeedSupport. Knowledge: actor memory at 70.00s, trace 5073. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5154}.
<a id="trace-5154"></a>
<a id="trace-5160"></a>
<a id="trace-5170"></a>
<a id="trace-5177"></a>
<a id="trace-5186"></a>
<a id="trace-5192"></a>
<a id="trace-5200"></a>
<a id="trace-5207"></a>
<a id="trace-5277"></a>
<a id="trace-5288"></a>
<a id="trace-5300"></a>
<a id="trace-5310"></a>
<a id="trace-5321"></a>
<a id="trace-5332"></a>
<a id="trace-5345"></a>
<a id="trace-5354"></a>
- 71.25s–78.75s (×16), actor 5, squad 0 (trace 5154): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 5075. Next observer evidence: {'until': 71.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5160}.
<a id="trace-5361"></a>
- 79.05s–79.05s (×1), actor 1, squad 0 (trace 5361): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 75.00s, trace 5210. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24533177161734915, 'next_transition': 5365}.
<a id="trace-5365"></a>
<a id="trace-5372"></a>
<a id="trace-5449"></a>
<a id="trace-5459"></a>
<a id="trace-5476"></a>
<a id="trace-5483"></a>
<a id="trace-5494"></a>
<a id="trace-5508"></a>
<a id="trace-5517"></a>
<a id="trace-5523"></a>
<a id="trace-5537"></a>
<a id="trace-5542"></a>
<a id="trace-5618"></a>
<a id="trace-5630"></a>
<a id="trace-5644"></a>
<a id="trace-5654"></a>
<a id="trace-5666"></a>
<a id="trace-5675"></a>
<a id="trace-5687"></a>
<a id="trace-5692"></a>
<a id="trace-5703"></a>
<a id="trace-5712"></a>
<a id="trace-5787"></a>
<a id="trace-5797"></a>
- 79.25s–90.75s (×24), actor 5, squad 0 (trace 5365): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 5212. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34679707402784243, 'next_transition': 5372}.
<a id="trace-5799"></a>
- 90.85s–90.85s (×1), actor 5, squad 0 (trace 5799): renew committed intent (75 s lifetime). Knowledge: actor memory at 90.85s, trace 5799. Next observer evidence: None.
<a id="trace-684"></a>
- 90.85s–90.85s (×1), actor 5, squad 0 (events line 684): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5805"></a>
- 90.95s–90.95s (×1), actor 1, squad 0 (trace 5805): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5719. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17734883161515236, 'next_transition': 5967}.
<a id="trace-5908"></a>
- 90.95s–90.95s (×1), actor 1, squad 0 (trace 5908): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5719. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17734883161515236, 'next_transition': 5967}.
<a id="trace-5967"></a>
<a id="trace-5980"></a>
<a id="trace-5997"></a>
<a id="trace-6006"></a>
<a id="trace-6023"></a>
<a id="trace-6036"></a>
<a id="trace-6048"></a>
<a id="trace-6060"></a>
<a id="trace-6135"></a>
<a id="trace-6151"></a>
<a id="trace-6167"></a>
<a id="trace-6181"></a>
<a id="trace-6195"></a>
<a id="trace-6271"></a>
<a id="trace-6286"></a>
- 91.25s–101.25s (×15), actor 5, squad 0 (trace 5967): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.85s, trace 5799. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14688514428682037, 'next_transition': 5980}.
<a id="trace-6296"></a>
- 102.10s–102.10s (×1), actor 1, squad 0 (trace 6296): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 6205. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6304}.
<a id="trace-6304"></a>
- 102.25s–102.25s (×1), actor 5, squad 0 (trace 6304): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 6207. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6313}.
<a id="trace-6313"></a>
- 102.50s–102.50s (×1), actor 1, squad 0 (trace 6313): MoveTactically. Knowledge: actor memory at 100.00s, trace 6205. Next observer evidence: {'until': 103.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12992500000000007, 'next_transition': 6438}.
<a id="trace-6314"></a>
- 102.50s–102.50s (×1), actor 1, squad 0 (trace 6314): received platoon directive. Knowledge: actor memory at 100.00s, trace 6205. Next observer evidence: {'until': 103.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.12992500000000007, 'next_transition': 6438}.
<a id="trace-6438"></a>
- 103.25s–103.25s (×1), actor 5, squad 0 (trace 6438): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 6207. Next observer evidence: {'until': 104, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4065657346510711, 'next_transition': 757}.
<a id="trace-757"></a>
- 104.05s–104.05s (×1), actor 5, squad 0 (events line 757): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}.
<a id="trace-6466"></a>
- 104.05s–104.05s (×1), actor 5, squad 0 (trace 6466): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356655 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.05s, trace 6466. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}.
<a id="trace-6467"></a>
- 104.05s–104.05s (×1), actor 5, squad 0 (trace 6467): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356655 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 104.05s, trace 6467. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}.
<a id="trace-6472"></a>
<a id="trace-6562"></a>
<a id="trace-6575"></a>
- 104.25s–106.25s (×3), actor 5, squad 0 (trace 6472): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 104.05s, trace 6467. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45899143625589583, 'next_transition': 6562}.
<a id="trace-6579"></a>
- 106.25s–106.25s (×1), actor 1, squad 0 (trace 6579): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 6492. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9341996968891559, 'next_transition': 6766}.
<a id="trace-6580"></a>
- 106.25s–106.25s (×1), actor 1, squad 0 (trace 6580): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 6492. Next observer evidence: {'until': 107.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9341996968891559, 'next_transition': 6766}.
<a id="trace-6766"></a>
<a id="trace-6786"></a>
<a id="trace-6810"></a>
<a id="trace-6885"></a>
<a id="trace-6899"></a>
<a id="trace-6916"></a>
<a id="trace-6928"></a>
<a id="trace-6942"></a>
<a id="trace-7016"></a>
<a id="trace-7033"></a>
<a id="trace-7051"></a>
- 107.25s–117.25s (×11), actor 5, squad 0 (trace 6766): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 6494. Next observer evidence: {'until': 108.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.113447768456828, 'next_transition': 6786}.
<a id="trace-7061"></a>
- 117.85s–117.85s (×1), actor 1, squad 0 (trace 7061): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 115.00s, trace 6952. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7169}.
<a id="trace-7062"></a>
- 117.85s–117.85s (×1), actor 1, squad 0 (trace 7062): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 115.00s, trace 6952. Next observer evidence: {'until': 118.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7169}.
<a id="trace-7169"></a>
<a id="trace-7195"></a>
<a id="trace-7275"></a>
<a id="trace-7296"></a>
<a id="trace-7309"></a>
<a id="trace-7324"></a>
<a id="trace-7344"></a>
<a id="trace-7420"></a>
<a id="trace-7431"></a>
<a id="trace-7449"></a>
<a id="trace-7466"></a>
<a id="trace-7486"></a>
<a id="trace-7563"></a>
<a id="trace-7581"></a>
<a id="trace-7602"></a>
<a id="trace-7618"></a>
<a id="trace-7634"></a>
- 118.25s–134.30s (×17), actor 5, squad 0 (trace 7169): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6954. Next observer evidence: {'until': 119.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5314003416421913, 'next_transition': 7195}.
<a id="trace-7646"></a>
- 134.90s–134.90s (×1), actor 1, squad 0 (trace 7646): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 7495. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19387489285657894, 'next_transition': 7770}.
<a id="trace-7647"></a>
- 134.90s–134.90s (×1), actor 1, squad 0 (trace 7647): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 7495. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19387489285657894, 'next_transition': 7770}.
<a id="trace-7770"></a>
<a id="trace-7797"></a>
<a id="trace-7817"></a>
<a id="trace-7836"></a>
<a id="trace-7853"></a>
- 135.30s–139.30s (×5), actor 5, squad 0 (trace 7770): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 7704. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.17772002162261, 'next_transition': 7797}.
<a id="trace-7859"></a>
- 139.45s–139.45s (×1), actor 1, squad 0 (trace 7859): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 135.00s, trace 7702. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16089527253775954, 'next_transition': 8040}.
<a id="trace-7860"></a>
- 139.45s–139.45s (×1), actor 1, squad 0 (trace 7860): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 135.00s, trace 7702. Next observer evidence: {'until': 140.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16089527253775954, 'next_transition': 8040}.
<a id="trace-8040"></a>
<a id="trace-8057"></a>
<a id="trace-8081"></a>
<a id="trace-8093"></a>
<a id="trace-8112"></a>
<a id="trace-8186"></a>
<a id="trace-8204"></a>
<a id="trace-8221"></a>
<a id="trace-8235"></a>
<a id="trace-8253"></a>
<a id="trace-8328"></a>
<a id="trace-8345"></a>
- 140.30s–151.30s (×12), actor 5, squad 0 (trace 8040): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 7971. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7639985628954377, 'next_transition': 8057}.
<a id="trace-8451"></a>
<a id="trace-8461"></a>
- 155.30s–156.30s (×2), actor 1, squad 0 (trace 8451): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 155.00s, trace 8387. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6120269010881421, 'next_transition': 8461}.
<a id="trace-925"></a>
- 157.20s–157.20s (×1), actor 1, squad 0 (events line 925): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8473"></a>
- 157.20s–157.20s (×1), actor 1, squad 0 (trace 8473): renew committed intent (75 s lifetime). Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: None.
<a id="trace-8474"></a>
- 157.20s–157.20s (×1), actor 1, squad 0 (trace 8474): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: None.
<a id="trace-8475"></a>
- 157.20s–157.20s (×1), actor 1, squad 0 (trace 8475): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: None.
<a id="trace-8532"></a>
<a id="trace-8548"></a>
<a id="trace-8566"></a>
- 157.30s–159.30s (×3), actor 1, squad 0 (trace 8532): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.612027224848335, 'next_transition': 8548}.
<a id="trace-8572"></a>
- 159.45s–159.45s (×1), actor 1, squad 0 (trace 8572): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4896147562227992, 'next_transition': 8755}.
<a id="trace-8573"></a>
- 159.45s–159.45s (×1), actor 1, squad 0 (trace 8573): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 157.20s, trace 8473. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4896147562227992, 'next_transition': 8755}.
<a id="trace-8755"></a>
<a id="trace-8773"></a>
<a id="trace-8794"></a>
- 160.30s–162.30s (×3), actor 1, squad 0 (trace 8755): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 8686. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4697778615425485, 'next_transition': 8773}.
<a id="trace-8804"></a>
- 163.20s–163.20s (×1), actor 1, squad 0 (trace 8804): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 8686. Next observer evidence: None.
<a id="trace-8811"></a>
<a id="trace-8833"></a>
<a id="trace-8915"></a>
<a id="trace-8938"></a>
- 163.30s–166.30s (×4), actor 1, squad 0 (trace 8811): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 160.00s, trace 8686. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3679659176132455, 'next_transition': 8833}.
<a id="trace-977"></a>
- 167.25s–167.25s (×1), actor 1, squad 0 (events line 977): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8955"></a>
- 167.25s–167.25s (×1), actor 1, squad 0 (trace 8955): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.909726 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.25s, trace 8955. Next observer evidence: None.
<a id="trace-8956"></a>
- 167.25s–167.25s (×1), actor 1, squad 0 (trace 8956): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.909726 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.25s, trace 8956. Next observer evidence: None.
<a id="trace-8958"></a>
<a id="trace-8973"></a>
<a id="trace-8986"></a>
- 167.30s–169.30s (×3), actor 1, squad 0 (trace 8958): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 167.25s, trace 8956. Next observer evidence: {'until': 168.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8973}.
<a id="trace-9056"></a>
- 170.25s–170.25s (×1), actor 1, squad 0 (trace 9056): MoveTactically. Knowledge: actor memory at 170.00s, trace 8995. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9082}.
<a id="trace-9057"></a>
- 170.25s–170.25s (×1), actor 1, squad 0 (trace 9057): traveling overwatch. Knowledge: actor memory at 170.00s, trace 8995. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9082}.
<a id="trace-9058"></a>
- 170.25s–170.25s (×1), actor 1, squad 0 (trace 9058): received platoon directive. Knowledge: actor memory at 170.00s, trace 8995. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9082}.
<a id="trace-9082"></a>
- 171.25s–171.25s (×1), actor 1, squad 0 (trace 9082): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 170.00s, trace 8995. Next observer evidence: None.
<a id="trace-9188"></a>
<a id="trace-9211"></a>
<a id="trace-9240"></a>
<a id="trace-9265"></a>
<a id="trace-9341"></a>
<a id="trace-9357"></a>
<a id="trace-9374"></a>
<a id="trace-9390"></a>
- 171.30s–178.30s (×8), actor 1, squad 0 (trace 9188): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 8995. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9211}.
<a id="trace-1041"></a>
- 178.50s–178.50s (×1), actor 1, squad 0 (events line 1041): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.094426476853816, 'next_transition': 9410}.
<a id="trace-9395"></a>
- 178.50s–178.50s (×1), actor 1, squad 0 (trace 9395): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 178.50s, trace 9395. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.094426476853816, 'next_transition': 9410}.
<a id="trace-9396"></a>
- 178.50s–178.50s (×1), actor 1, squad 0 (trace 9396): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 178.50s, trace 9396. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.094426476853816, 'next_transition': 9410}.
<a id="trace-9410"></a>
- 179.30s–179.30s (×1), actor 1, squad 0 (trace 9410): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 178.50s, trace 9396. Next observer evidence: {'until': 181, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4624095074781103, 'next_transition': 9505}.
<a id="trace-9505"></a>
- 181.00s–181.00s (×1), actor 1, squad 0 (trace 9505): traveling. Knowledge: actor memory at 180.00s, trace 9422. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2735900026119254, 'next_transition': 9667}.
<a id="trace-9506"></a>
- 181.00s–181.00s (×1), actor 1, squad 0 (trace 9506): received platoon directive. Knowledge: actor memory at 180.00s, trace 9422. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2735900026119254, 'next_transition': 9667}.
<a id="trace-9667"></a>
<a id="trace-9693"></a>
<a id="trace-9715"></a>
<a id="trace-9736"></a>
<a id="trace-9814"></a>
<a id="trace-9830"></a>
<a id="trace-9858"></a>
<a id="trace-9892"></a>
<a id="trace-9971"></a>
<a id="trace-9987"></a>
<a id="trace-10006"></a>
<a id="trace-10027"></a>
<a id="trace-10043"></a>
- 181.30s–194.30s (×13), actor 1, squad 0 (trace 9667): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 180.00s, trace 9422. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8930155960793853, 'next_transition': 9693}.
<a id="trace-10051"></a>
- 194.70s–194.70s (×1), actor 1, squad 0 (trace 10051): matching received arrivals: traveling stage complete. Knowledge: actor memory at 190.00s, trace 9906. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10276}.
<a id="trace-10276"></a>
<a id="trace-10297"></a>
<a id="trace-10312"></a>
<a id="trace-10330"></a>
<a id="trace-10349"></a>
<a id="trace-10431"></a>
<a id="trace-10455"></a>
<a id="trace-10473"></a>
<a id="trace-10489"></a>
<a id="trace-10507"></a>
<a id="trace-10583"></a>
<a id="trace-10601"></a>
<a id="trace-10622"></a>
<a id="trace-10640"></a>
<a id="trace-10657"></a>
<a id="trace-10730"></a>
<a id="trace-10745"></a>
- 195.30s–211.30s (×17), actor 1, squad 0 (trace 10276): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 195.00s, trace 10212. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1820362009790455, 'next_transition': 10297}.
<a id="trace-10758"></a>
- 212.05s–212.05s (×1), actor 1, squad 0 (trace 10758): matching received arrivals: deployment leg complete. Knowledge: actor memory at 210.00s, trace 10667. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10762}.
<a id="trace-10762"></a>
<a id="trace-10779"></a>
<a id="trace-10794"></a>
- 212.30s–214.30s (×3), actor 1, squad 0 (trace 10762): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 10667. Next observer evidence: {'until': 213.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10779}.
<a id="trace-1229"></a>
- 215.05s–215.05s (×1), actor 1, squad 0 (events line 1229): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10870}.
<a id="trace-10811"></a>
- 215.05s–215.05s (×1), actor 1, squad 0 (trace 10811): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 215.05s, trace 10811. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10870}.
<a id="trace-10812"></a>
- 215.05s–215.05s (×1), actor 1, squad 0 (trace 10812): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 215.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10870}.
<a id="trace-10870"></a>
<a id="trace-10886"></a>
<a id="trace-10900"></a>
- 215.30s–217.30s (×3), actor 1, squad 0 (trace 10870): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 216.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10886}.
<a id="trace-10910"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 10910): Reorganise: completed/failed drill. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11138}.
<a id="trace-10914"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 10914): MoveTactically. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11138}.
<a id="trace-10915"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 10915): traveling overwatch. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11138}.
<a id="trace-10916"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 10916): Reorganise complete. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11138}.
<a id="trace-11138"></a>
<a id="trace-11156"></a>
<a id="trace-11237"></a>
<a id="trace-11255"></a>
<a id="trace-11271"></a>
<a id="trace-11290"></a>
<a id="trace-11306"></a>
<a id="trace-11387"></a>
<a id="trace-11405"></a>
<a id="trace-11425"></a>
<a id="trace-11439"></a>
<a id="trace-11454"></a>
- 218.30s–229.30s (×12), actor 1, squad 0 (trace 11138): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 215.05s, trace 10812. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11156}.
<a id="trace-11464"></a>
- 229.55s–229.55s (×1), actor 1, squad 0 (trace 11464): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 229.55s, trace 11464. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34356621385695085, 'next_transition': 11469}.
<a id="trace-11469"></a>
- 229.80s–229.80s (×1), actor 1, squad 0 (trace 11469): ReactToContact: cover and return fire. Knowledge: actor memory at 229.55s, trace 11464. Next observer evidence: {'until': 230.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3671954811898562, 'next_transition': 11782}.
<a id="trace-11470"></a>
- 229.80s–229.80s (×1), actor 1, squad 0 (trace 11470): bounding overwatch. Knowledge: actor memory at 229.55s, trace 11464. Next observer evidence: {'until': 230.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3671954811898562, 'next_transition': 11782}.
<a id="trace-11471"></a>
- 229.80s–229.80s (×1), actor 1, squad 0 (trace 11471): new contact inside 100 m. Knowledge: actor memory at 229.55s, trace 11464. Next observer evidence: {'until': 230.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3671954811898562, 'next_transition': 11782}.
<a id="trace-11782"></a>
- 230.30s–230.30s (×1), actor 1, squad 0 (trace 11782): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 230.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3672012308071011, 'next_transition': 11796}.
<a id="trace-11796"></a>
- 230.75s–230.75s (×1), actor 1, squad 0 (trace 11796): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34230244779872654, 'next_transition': 11807}.
<a id="trace-11798"></a>
- 230.75s–230.75s (×1), actor 1, squad 0 (trace 11798): NeedSupport. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34230244779872654, 'next_transition': 11807}.
<a id="trace-11807"></a>
- 231.00s–231.00s (×1), actor 1, squad 0 (trace 11807): Reorganise: completed/failed drill. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18360704432292355, 'next_transition': 11943}.
<a id="trace-11810"></a>
- 231.00s–231.00s (×1), actor 1, squad 0 (trace 11810): ReactToContact: cover and return fire. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18360704432292355, 'next_transition': 11943}.
<a id="trace-11811"></a>
- 231.00s–231.00s (×1), actor 1, squad 0 (trace 11811): Reorganise complete: known contact. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18360704432292355, 'next_transition': 11943}.
<a id="trace-11943"></a>
- 231.30s–231.30s (×1), actor 1, squad 0 (trace 11943): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 11720. Next observer evidence: {'until': 231.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5507868608636192, 'next_transition': 1331}.
<a id="trace-1331"></a>
- 231.90s–231.90s (×1), actor 1, squad 0 (events line 1331): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11957"></a>
- 231.90s–231.90s (×1), actor 1, squad 0 (trace 11957): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.409872 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 231.90s, trace 11957. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3672101110059472, 'next_transition': 11968}.
<a id="trace-11958"></a>
- 231.90s–231.90s (×1), actor 1, squad 0 (trace 11958): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.409872 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 231.90s, trace 11958. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3672101110059472, 'next_transition': 11968}.
<a id="trace-11968"></a>
<a id="trace-11984"></a>
- 232.30s–233.30s (×2), actor 1, squad 0 (trace 11968): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 231.90s, trace 11958. Next observer evidence: {'until': 233.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.917993941837309, 'next_transition': 11984}.
<a id="trace-12007"></a>
- 234.75s–234.75s (×1), actor 1, squad 0 (trace 12007): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 231.90s, trace 11958. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5507978742015989, 'next_transition': 12246}.
<a id="trace-12008"></a>
- 234.75s–234.75s (×1), actor 1, squad 0 (trace 12008): rearward bound: one stationary suppressing element. Knowledge: actor memory at 231.90s, trace 11958. Next observer evidence: {'until': 235.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5507978742015989, 'next_transition': 12246}.
<a id="trace-12246"></a>
<a id="trace-12267"></a>
<a id="trace-12287"></a>
<a id="trace-12305"></a>
<a id="trace-12316"></a>
<a id="trace-12388"></a>
<a id="trace-12402"></a>
<a id="trace-12419"></a>
<a id="trace-12432"></a>
<a id="trace-12446"></a>
<a id="trace-12518"></a>
- 235.30s–245.30s (×11), actor 1, squad 0 (trace 12246): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 235.00s, trace 12185. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0992679659356144, 'next_transition': 12267}.
<a id="trace-12531"></a>
- 246.25s–246.25s (×1), actor 1, squad 0 (trace 12531): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 245.00s, trace 12458. Next observer evidence: None.
<a id="trace-12532"></a>
- 246.25s–246.25s (×1), actor 1, squad 0 (trace 12532): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 245.00s, trace 12458. Next observer evidence: None.
<a id="trace-12536"></a>
<a id="trace-12566"></a>
<a id="trace-12580"></a>
<a id="trace-12650"></a>
<a id="trace-12661"></a>
<a id="trace-12678"></a>
<a id="trace-12689"></a>
<a id="trace-12699"></a>
<a id="trace-12768"></a>
- 246.30s–255.30s (×9), actor 1, squad 0 (trace 12536): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 245.00s, trace 12458. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12566}.
<a id="trace-12774"></a>
- 255.75s–255.75s (×1), actor 1, squad 0 (trace 12774): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12779}.
<a id="trace-12779"></a>
- 255.80s–255.80s (×1), actor 1, squad 0 (trace 12779): MoveTactically. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: None.
<a id="trace-12780"></a>
- 255.80s–255.80s (×1), actor 1, squad 0 (trace 12780): traveling overwatch. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: None.
<a id="trace-12781"></a>
- 255.80s–255.80s (×1), actor 1, squad 0 (trace 12781): received platoon directive. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: None.
<a id="trace-12786"></a>
- 255.85s–255.85s (×1), actor 1, squad 0 (trace 12786): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12790}.
<a id="trace-12790"></a>
<a id="trace-12812"></a>
<a id="trace-12832"></a>
<a id="trace-12849"></a>
<a id="trace-12918"></a>
<a id="trace-12928"></a>
<a id="trace-12943"></a>
<a id="trace-12955"></a>
<a id="trace-12969"></a>
<a id="trace-13037"></a>
<a id="trace-13054"></a>
<a id="trace-13069"></a>
<a id="trace-13081"></a>
<a id="trace-13092"></a>
<a id="trace-13160"></a>
<a id="trace-13171"></a>
<a id="trace-13185"></a>
<a id="trace-13203"></a>
<a id="trace-13216"></a>
- 256.30s–274.30s (×19), actor 1, squad 0 (trace 12790): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 12708. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12812}.
<a id="trace-1499"></a>
- 274.55s–274.55s (×1), actor 1, squad 0 (events line 1499): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13221"></a>
- 274.55s–274.55s (×1), actor 1, squad 0 (trace 13221): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.157048 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 274.55s, trace 13221. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13287}.
<a id="trace-13222"></a>
- 274.55s–274.55s (×1), actor 1, squad 0 (trace 13222): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.157048 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 274.55s, trace 13222. Next observer evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13287}.
<a id="trace-13287"></a>
<a id="trace-13297"></a>
- 275.30s–276.30s (×2), actor 1, squad 0 (trace 13287): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.00s, trace 13227. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13297}.
<a id="trace-13304"></a>
- 276.60s–276.60s (×1), actor 1, squad 0 (trace 13304): Withdraw to received rally. Knowledge: actor memory at 275.00s, trace 13227. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13365}.
<a id="trace-13305"></a>
- 276.60s–276.60s (×1), actor 1, squad 0 (trace 13305): rearward bound: one stationary suppressing element. Knowledge: actor memory at 275.00s, trace 13227. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13365}.
<a id="trace-13365"></a>
<a id="trace-13381"></a>
<a id="trace-13398"></a>
<a id="trace-13474"></a>
<a id="trace-13489"></a>
<a id="trace-13504"></a>
<a id="trace-13519"></a>
<a id="trace-13531"></a>
<a id="trace-13602"></a>
<a id="trace-13617"></a>
<a id="trace-13636"></a>
- 277.30s–287.30s (×11), actor 1, squad 0 (trace 13365): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 275.00s, trace 13227. Next observer evidence: {'until': 278.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.835099999999997, 'next_transition': 13381}.
<a id="trace-13656"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 13656): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 285.00s, trace 13542. Next observer evidence: None.
<a id="trace-13657"></a>
- 288.25s–288.25s (×1), actor 1, squad 0 (trace 13657): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 285.00s, trace 13542. Next observer evidence: None.
<a id="trace-13661"></a>
<a id="trace-13676"></a>
<a id="trace-13744"></a>
<a id="trace-13758"></a>
<a id="trace-13772"></a>
<a id="trace-13785"></a>
<a id="trace-13802"></a>
<a id="trace-13875"></a>
<a id="trace-13886"></a>
<a id="trace-13899"></a>
<a id="trace-13912"></a>
<a id="trace-13925"></a>
<a id="trace-13996"></a>
<a id="trace-14029"></a>
<a id="trace-14041"></a>
<a id="trace-14053"></a>
<a id="trace-14121"></a>
<a id="trace-14133"></a>
<a id="trace-14149"></a>
<a id="trace-14162"></a>
<a id="trace-14176"></a>
<a id="trace-14247"></a>
<a id="trace-14256"></a>
<a id="trace-14270"></a>
<a id="trace-14282"></a>
<a id="trace-14297"></a>
<a id="trace-14367"></a>
<a id="trace-14382"></a>
<a id="trace-14396"></a>
<a id="trace-14410"></a>
<a id="trace-14422"></a>
<a id="trace-14491"></a>
<a id="trace-14505"></a>
<a id="trace-14520"></a>
<a id="trace-14532"></a>
<a id="trace-14548"></a>
<a id="trace-14616"></a>
<a id="trace-14626"></a>
<a id="trace-14639"></a>
<a id="trace-14654"></a>
<a id="trace-14668"></a>
<a id="trace-14739"></a>
<a id="trace-14752"></a>
<a id="trace-14765"></a>
<a id="trace-14777"></a>
<a id="trace-14792"></a>
- 288.30s–334.30s (×46), actor 1, squad 0 (trace 13661): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 285.00s, trace 13542. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13676}.
<a id="trace-1764"></a>
- 334.60s–334.60s (×1), actor 1, squad 0 (events line 1764): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14797"></a>
- 334.60s–334.60s (×1), actor 1, squad 0 (trace 14797): renew committed intent (75 s lifetime). Knowledge: actor memory at 334.60s, trace 14797. Next observer evidence: {'until': 335.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14867}.
<a id="trace-14867"></a>
<a id="trace-14878"></a>
<a id="trace-14891"></a>
<a id="trace-14906"></a>
<a id="trace-14919"></a>
<a id="trace-14989"></a>
<a id="trace-15001"></a>
<a id="trace-15017"></a>
<a id="trace-15028"></a>
<a id="trace-15041"></a>
<a id="trace-15113"></a>
<a id="trace-15126"></a>
<a id="trace-15140"></a>
<a id="trace-15155"></a>
<a id="trace-15167"></a>
<a id="trace-15237"></a>
<a id="trace-15249"></a>
<a id="trace-15266"></a>
<a id="trace-15279"></a>
<a id="trace-15293"></a>
<a id="trace-15366"></a>
<a id="trace-15377"></a>
<a id="trace-15389"></a>
<a id="trace-15402"></a>
<a id="trace-15415"></a>
- 335.30s–359.30s (×25), actor 1, squad 0 (trace 14867): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 335.00s, trace 14806. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14878}.

## Net delivery

159 matched order/radio deliveries; 248 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.326s; maximum 1.950s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1751: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1752: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1753: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1754: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.05s leader 5, trace 2197: estimate 6.90; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 2209: estimate 6.88; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 2210: estimate 6.88; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2214: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2215: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2217: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2218: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2219: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2220: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2221: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2222: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2553: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2554: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2556: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2557: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2558: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2559: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2560: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2561: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2720: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2721: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2723: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2724: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2725: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2726: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2727: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2728: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3151: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3152: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3154: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3155: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3156: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3157: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3158: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3159: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3805: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3806: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3807: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3808: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3810: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3811: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3812: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3813: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3814: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3815: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4319: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4320: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4321: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4322: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4324: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4325: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4326: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4327: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4328: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4329: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4603: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4604: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4605: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4606: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4607: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4608: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4609: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4610: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4611: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4612: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4613: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4806: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4807: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4808: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4809: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4810: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4811: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4812: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4813: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4814: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4815: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4816: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 5073: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 5074: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 5075: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 5076: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 5077: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 5078: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 5079: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 5080: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 5081: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 5082: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 5083: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 5210: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 5211: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 5212: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 5213: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 5214: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 5215: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 5216: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 5217: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 5218: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 5219: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 5220: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5376: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5377: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5378: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5379: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5380: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5381: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5382: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5383: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5384: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5385: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5386: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5548: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5549: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5550: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5551: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5552: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5553: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5554: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5555: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5556: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5557: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5558: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5719: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5720: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5721: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5722: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5723: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5724: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5725: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5726: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5727: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5728: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5729: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.85s leader 5, trace 5799: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6068: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 6069: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6070: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6071: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6072: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6073: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6074: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6075: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6076: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6077: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6205: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 6206: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6207: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 6208: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6209: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6210: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6211: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6212: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6213: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.05s leader 5, trace 6466: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 104.05s leader 5, trace 6467: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6492: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 6493: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6494: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 6495: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6496: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6497: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6498: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6499: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6500: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6818: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6819: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6820: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6821: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6822: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6823: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6824: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6825: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6826: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6952: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6953: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6954: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6955: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6956: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6957: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6958: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6959: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6960: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7203: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 7204: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7205: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 7206: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7207: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7208: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7209: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7210: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7211: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7355: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 7356: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7357: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 7358: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7359: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7360: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7361: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7362: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7363: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7495: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 7496: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7497: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 7498: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7499: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7500: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7501: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7502: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7503: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7702: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 7703: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7704: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 7705: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7706: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7707: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7708: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7709: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7710: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7969: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7970: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7971: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 7972: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7973: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7974: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7975: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7976: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7977: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8120: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 8121: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8122: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 8123: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8124: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8125: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8126: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8127: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8128: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8262: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 8263: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8264: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 8265: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8266: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8267: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8268: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8269: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8270: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8387: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 8388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 8389: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8390: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8391: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8392: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8393: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8394: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 157.20s leader 1, trace 8473: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8686: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 8687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 8688: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8689: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8690: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8691: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8692: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8693: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8850: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 8851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 8852: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8853: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8854: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8855: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8856: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8857: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.25s leader 1, trace 8955: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.25s leader 1, trace 8956: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8995: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 8996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 8997: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8998: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8999: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 9000: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 9001: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 9002: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 9277: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 9278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 9279: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 9280: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 9281: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 9282: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 9283: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 9284: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.50s leader 1, trace 9395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.50s leader 1, trace 9396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 9422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 9423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 9424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 9425: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 9426: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 9427: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 9428: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 9429: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 9751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 9752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9753: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9754: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9755: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9756: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9757: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 9907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 9908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9909: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9910: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9911: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9912: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9913: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 10212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 10213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 10214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 10215: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 10216: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 10217: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 10218: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 10219: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 10366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 10367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 10368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 10369: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 10370: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 10371: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 10372: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 10373: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 10518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 10519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 10520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 10521: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 10522: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 10523: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 10524: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 10525: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 10667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 10668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 10669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 10670: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 10671: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 10672: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 10673: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 10674: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 10805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10806: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10807: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10808: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10809: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10810: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.05s leader 1, trace 10811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.05s leader 1, trace 10812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 11172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 11173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 11174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 11175: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 11176: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 11177: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 11178: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 11179: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 11323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 11325: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 11326: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 11327: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 11328: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 11329: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.55s leader 1, trace 11464: estimate 5.87; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 11720: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 11721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 11722: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 11723: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 11724: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 11725: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 11726: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.90s leader 1, trace 11957: estimate 5.82; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 231.90s leader 1, trace 11958: estimate 5.82; 5 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 12185: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 12186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 12187: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 12188: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 12189: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 12190: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 12191: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 12327: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 12328: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 12329: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 12330: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 12331: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 12332: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 12458: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 12459: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 12460: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 12461: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 12462: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 12463: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 12590: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 12591: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 12592: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 12593: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 12594: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 12595: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 12708: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 12709: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 12710: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 12711: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 12712: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 12713: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 12858: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 12859: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 12860: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 12861: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 12862: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 12863: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12976: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12977: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12978: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12979: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12980: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12981: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 13099: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 13100: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 13101: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 13102: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 13103: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 13104: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.55s leader 1, trace 13221: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 274.55s leader 1, trace 13222: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 13227: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 13228: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 13229: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 13230: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 13231: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 13232: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 13410: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 13411: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 13412: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 13413: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 13414: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 13415: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 13542: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 13543: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 13544: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 13545: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 13546: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 13547: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 13684: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 13685: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13686: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13687: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13688: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13689: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13813: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13814: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13815: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13816: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13817: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13818: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13934: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13935: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13936: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13937: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13938: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13939: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 14061: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 14062: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 14063: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 14064: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 14065: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 14066: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 14187: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 14188: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 14189: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 14190: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 14191: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 14192: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 14307: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 14308: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 14309: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 14310: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 14311: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 14312: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 14431: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 14432: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14433: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14434: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14435: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14436: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 14555: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 14556: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14557: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14558: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14559: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14560: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 14678: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14679: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14680: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14681: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14682: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 334.60s leader 1, trace 14797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 14806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 14807: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 14808: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 14809: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 14810: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 14811: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 14928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 14929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 14930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 14931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 14932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 14933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 15051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 15052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 15053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 15054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 15055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 15056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 15175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 15176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 15177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 15178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 15179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 15180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 15303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 15304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 15305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 15308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 15425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 15426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 15427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 15428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 15429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 15430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Bram killed in action
- 1: Moss incapacitated
- 1: Iven killed in action
- 1: Tern incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 104.05s, evidence 757: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.05s, evidence 6466: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356655 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 104.05s, evidence 6467: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.356655 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09179543915685545, 'next_transition': 6472}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 157.20s, evidence 925: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 274.55s, evidence 1499: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 274.55s, evidence 13221: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.157048 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13287}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 274.55s, evidence 13222: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.157048 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 275.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13287}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 334.60s, evidence 1764: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
