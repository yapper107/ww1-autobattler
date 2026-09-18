# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/7/108/good-azure/battle-108-1789673771022215824`

## Battle summary

**Ember** · 360 s · 552 shots.

### Turning points

- 23.6s, squad 4: contact (events line 235). First recorded contact.
- 30.4s, squad 0: withdrawal ([trace 2346](#trace-2346)). 36.5s, squad 0: advanced tactically.
- 35.5s, squad 0: help call ([trace 2769](#trace-2769)). No completion observed before termination.
- 78.0s, squad 0: withdrawal ([trace 5059](#trace-5059)). 90.5s, squad 0: took cover and returned fire.
- 90.2s, squad 0: help call ([trace 5801](#trace-5801)). No completion observed before termination.
- 93.5s, squad 0: help call ([trace 6176](#trace-6176)). No completion observed before termination.
- 94.1s, squad 0: withdrawal ([trace 6189](#trace-6189)). 121.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 200.7s, squad 0: withdrawal ([trace 9556](#trace-9556)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 24 shots, 3/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 528 shots, 1/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 25.9s, squad 0 chose took cover and returned fire ([trace 1833](#trace-1833)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999930128776125, 'next_transition': 412}.
- 29.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477597 retreat threshold=0.500000 initiative=delegated ([trace 2256](#trace-2256)). Following evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2337}.

### Communication

127 matched deliveries (mean 0.28s, max 2.95s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.60s, squad 4, contact, evidence events line 235: First recorded contact; .
- 30.40s, squad 0, withdrawal, evidence 2346: BreakContact: believed ratio at least two without superiority; 36.5s, squad 0: advanced tactically.
- 35.45s, squad 0, help call, evidence 2769: NeedSupport; No completion observed before termination.
- 77.95s, squad 0, withdrawal, evidence 5059: Withdraw to received rally; 90.5s, squad 0: took cover and returned fire.
- 90.20s, squad 0, help call, evidence 5801: NeedSupport; No completion observed before termination.
- 93.45s, squad 0, help call, evidence 6176: NeedSupport; No completion observed before termination.
- 94.10s, squad 0, withdrawal, evidence 6189: BreakContact: believed ratio at least two without superiority; 121.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 200.65s, squad 0, withdrawal, evidence 9556: Withdraw to received rally; No completion observed before termination.

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
<a id="trace-819"></a>
<a id="trace-844"></a>
<a id="trace-875"></a>
<a id="trace-891"></a>
<a id="trace-987"></a>
<a id="trace-1000"></a>
<a id="trace-1014"></a>
<a id="trace-1035"></a>
<a id="trace-1054"></a>
<a id="trace-1072"></a>
<a id="trace-1089"></a>
<a id="trace-1119"></a>
<a id="trace-1131"></a>
<a id="trace-1209"></a>
<a id="trace-1222"></a>
<a id="trace-1338"></a>
<a id="trace-1378"></a>
<a id="trace-1393"></a>
<a id="trace-1420"></a>
<a id="trace-1447"></a>
<a id="trace-1460"></a>
<a id="trace-1540"></a>
<a id="trace-1556"></a>
<a id="trace-1573"></a>
<a id="trace-1585"></a>
<a id="trace-1606"></a>
<a id="trace-1621"></a>
<a id="trace-1641"></a>
<a id="trace-1654"></a>
<a id="trace-1814"></a>
<a id="trace-1827"></a>
<a id="trace-1977"></a>
<a id="trace-1988"></a>
<a id="trace-2148"></a>
<a id="trace-2161"></a>
<a id="trace-2192"></a>
<a id="trace-2219"></a>
<a id="trace-2339"></a>
<a id="trace-2615"></a>
<a id="trace-2629"></a>
<a id="trace-2647"></a>
<a id="trace-2689"></a>
<a id="trace-2696"></a>
<a id="trace-2766"></a>
<a id="trace-2778"></a>
<a id="trace-2791"></a>
<a id="trace-2817"></a>
<a id="trace-2835"></a>
<a id="trace-2921"></a>
<a id="trace-2931"></a>
<a id="trace-2948"></a>
<a id="trace-2957"></a>
<a id="trace-3032"></a>
<a id="trace-3045"></a>
<a id="trace-3053"></a>
<a id="trace-3257"></a>
<a id="trace-3262"></a>
<a id="trace-3281"></a>
<a id="trace-3299"></a>
<a id="trace-3373"></a>
<a id="trace-3384"></a>
<a id="trace-3402"></a>
<a id="trace-3409"></a>
<a id="trace-3422"></a>
<a id="trace-3433"></a>
<a id="trace-3451"></a>
<a id="trace-3464"></a>
<a id="trace-3475"></a>
<a id="trace-3482"></a>
<a id="trace-3559"></a>
<a id="trace-3569"></a>
<a id="trace-3578"></a>
<a id="trace-3592"></a>
<a id="trace-3606"></a>
<a id="trace-3621"></a>
<a id="trace-3635"></a>
<a id="trace-3641"></a>
<a id="trace-3658"></a>
<a id="trace-3672"></a>
<a id="trace-3746"></a>
<a id="trace-3756"></a>
<a id="trace-3816"></a>
<a id="trace-3830"></a>
<a id="trace-3842"></a>
<a id="trace-3852"></a>
<a id="trace-3876"></a>
<a id="trace-3889"></a>
<a id="trace-3898"></a>
<a id="trace-3991"></a>
<a id="trace-4011"></a>
<a id="trace-4032"></a>
<a id="trace-4042"></a>
<a id="trace-4053"></a>
<a id="trace-4059"></a>
<a id="trace-4075"></a>
<a id="trace-4182"></a>
<a id="trace-4336"></a>
<a id="trace-4364"></a>
<a id="trace-4382"></a>
<a id="trace-4396"></a>
<a id="trace-4478"></a>
<a id="trace-4488"></a>
<a id="trace-4494"></a>
<a id="trace-4506"></a>
<a id="trace-4514"></a>
<a id="trace-4531"></a>
<a id="trace-4536"></a>
<a id="trace-4549"></a>
<a id="trace-4556"></a>
<a id="trace-4996"></a>
<a id="trace-5005"></a>
<a id="trace-5025"></a>
<a id="trace-5032"></a>
<a id="trace-5051"></a>
<a id="trace-5057"></a>
<a id="trace-5355"></a>
<a id="trace-5367"></a>
<a id="trace-5381"></a>
<a id="trace-5391"></a>
<a id="trace-5484"></a>
<a id="trace-5495"></a>
<a id="trace-5508"></a>
<a id="trace-5515"></a>
<a id="trace-5532"></a>
<a id="trace-5542"></a>
<a id="trace-5555"></a>
<a id="trace-5565"></a>
<a id="trace-5644"></a>
<a id="trace-5658"></a>
<a id="trace-5666"></a>
<a id="trace-5677"></a>
<a id="trace-5704"></a>
<a id="trace-5710"></a>
<a id="trace-5725"></a>
<a id="trace-5729"></a>
<a id="trace-6071"></a>
<a id="trace-6081"></a>
<a id="trace-6141"></a>
<a id="trace-6174"></a>
<a id="trace-6186"></a>
<a id="trace-6376"></a>
<a id="trace-6399"></a>
<a id="trace-6478"></a>
<a id="trace-6493"></a>
<a id="trace-6509"></a>
<a id="trace-6519"></a>
<a id="trace-6550"></a>
<a id="trace-6578"></a>
<a id="trace-6639"></a>
<a id="trace-6667"></a>
<a id="trace-6688"></a>
<a id="trace-6775"></a>
<a id="trace-6789"></a>
<a id="trace-6803"></a>
<a id="trace-6827"></a>
<a id="trace-6836"></a>
<a id="trace-6840"></a>
<a id="trace-6854"></a>
<a id="trace-6862"></a>
<a id="trace-6943"></a>
<a id="trace-6966"></a>
<a id="trace-6978"></a>
<a id="trace-6987"></a>
<a id="trace-7000"></a>
<a id="trace-7004"></a>
<a id="trace-7022"></a>
<a id="trace-7096"></a>
<a id="trace-7107"></a>
<a id="trace-7120"></a>
<a id="trace-7126"></a>
<a id="trace-7143"></a>
<a id="trace-7167"></a>
<a id="trace-7172"></a>
<a id="trace-7207"></a>
<a id="trace-7219"></a>
<a id="trace-7290"></a>
<a id="trace-7303"></a>
<a id="trace-7317"></a>
<a id="trace-7323"></a>
<a id="trace-7332"></a>
<a id="trace-7337"></a>
<a id="trace-7344"></a>
<a id="trace-7351"></a>
<a id="trace-7419"></a>
<a id="trace-7423"></a>
<a id="trace-7445"></a>
<a id="trace-7455"></a>
<a id="trace-7466"></a>
<a id="trace-7470"></a>
<a id="trace-7477"></a>
<a id="trace-7487"></a>
<a id="trace-7555"></a>
<a id="trace-7561"></a>
<a id="trace-7571"></a>
<a id="trace-7586"></a>
<a id="trace-7591"></a>
<a id="trace-7604"></a>
<a id="trace-7611"></a>
<a id="trace-7616"></a>
<a id="trace-7683"></a>
<a id="trace-7689"></a>
<a id="trace-7698"></a>
<a id="trace-7705"></a>
<a id="trace-7714"></a>
<a id="trace-7721"></a>
<a id="trace-7729"></a>
<a id="trace-7811"></a>
<a id="trace-7823"></a>
<a id="trace-7829"></a>
<a id="trace-7839"></a>
<a id="trace-7861"></a>
<a id="trace-7871"></a>
<a id="trace-7946"></a>
<a id="trace-7958"></a>
<a id="trace-7965"></a>
<a id="trace-7972"></a>
<a id="trace-7979"></a>
<a id="trace-7993"></a>
<a id="trace-8006"></a>
<a id="trace-8073"></a>
<a id="trace-8084"></a>
<a id="trace-8089"></a>
<a id="trace-8101"></a>
<a id="trace-8123"></a>
<a id="trace-8128"></a>
<a id="trace-8196"></a>
<a id="trace-8202"></a>
<a id="trace-8209"></a>
<a id="trace-8214"></a>
<a id="trace-8220"></a>
<a id="trace-8227"></a>
<a id="trace-8244"></a>
<a id="trace-8251"></a>
<a id="trace-8257"></a>
<a id="trace-8344"></a>
<a id="trace-8351"></a>
<a id="trace-8360"></a>
<a id="trace-8371"></a>
<a id="trace-8376"></a>
<a id="trace-8445"></a>
<a id="trace-8450"></a>
<a id="trace-8459"></a>
<a id="trace-8464"></a>
<a id="trace-8472"></a>
<a id="trace-8480"></a>
<a id="trace-8491"></a>
<a id="trace-8502"></a>
<a id="trace-8508"></a>
<a id="trace-8575"></a>
<a id="trace-8581"></a>
<a id="trace-8592"></a>
<a id="trace-8598"></a>
<a id="trace-8606"></a>
<a id="trace-8622"></a>
<a id="trace-8710"></a>
<a id="trace-8716"></a>
<a id="trace-8727"></a>
<a id="trace-8741"></a>
<a id="trace-8748"></a>
<a id="trace-8756"></a>
<a id="trace-8763"></a>
<a id="trace-8771"></a>
<a id="trace-8780"></a>
<a id="trace-8847"></a>
<a id="trace-8853"></a>
<a id="trace-8863"></a>
<a id="trace-8869"></a>
<a id="trace-8885"></a>
<a id="trace-8895"></a>
<a id="trace-8900"></a>
<a id="trace-8909"></a>
<a id="trace-8918"></a>
<a id="trace-8986"></a>
<a id="trace-8996"></a>
<a id="trace-9007"></a>
<a id="trace-9012"></a>
<a id="trace-9023"></a>
<a id="trace-9039"></a>
<a id="trace-9044"></a>
<a id="trace-9054"></a>
<a id="trace-9061"></a>
<a id="trace-9135"></a>
<a id="trace-9142"></a>
<a id="trace-9149"></a>
<a id="trace-9165"></a>
<a id="trace-9176"></a>
<a id="trace-9186"></a>
<a id="trace-9198"></a>
<a id="trace-9205"></a>
<a id="trace-9278"></a>
<a id="trace-9285"></a>
<a id="trace-9292"></a>
<a id="trace-9300"></a>
<a id="trace-9309"></a>
<a id="trace-9317"></a>
<a id="trace-9335"></a>
<a id="trace-9342"></a>
<a id="trace-9431"></a>
<a id="trace-9436"></a>
<a id="trace-9444"></a>
<a id="trace-9460"></a>
<a id="trace-9478"></a>
<a id="trace-9485"></a>
<a id="trace-9613"></a>
<a id="trace-9623"></a>
<a id="trace-9635"></a>
<a id="trace-9645"></a>
<a id="trace-9653"></a>
<a id="trace-9667"></a>
<a id="trace-9675"></a>
<a id="trace-9689"></a>
<a id="trace-9772"></a>
<a id="trace-9786"></a>
<a id="trace-9818"></a>
<a id="trace-9846"></a>
<a id="trace-9868"></a>
<a id="trace-9938"></a>
<a id="trace-9951"></a>
<a id="trace-9960"></a>
<a id="trace-9967"></a>
<a id="trace-9982"></a>
<a id="trace-9993"></a>
<a id="trace-10014"></a>
<a id="trace-10037"></a>
<a id="trace-10109"></a>
<a id="trace-10120"></a>
<a id="trace-10132"></a>
<a id="trace-10163"></a>
<a id="trace-10174"></a>
<a id="trace-10184"></a>
<a id="trace-10193"></a>
<a id="trace-10208"></a>
<a id="trace-10217"></a>
<a id="trace-10285"></a>
<a id="trace-10299"></a>
<a id="trace-10325"></a>
<a id="trace-10334"></a>
<a id="trace-10339"></a>
<a id="trace-10350"></a>
<a id="trace-10360"></a>
<a id="trace-10434"></a>
<a id="trace-10442"></a>
<a id="trace-10447"></a>
<a id="trace-10455"></a>
<a id="trace-10464"></a>
<a id="trace-10473"></a>
<a id="trace-10491"></a>
<a id="trace-10568"></a>
<a id="trace-10573"></a>
<a id="trace-10589"></a>
<a id="trace-10599"></a>
<a id="trace-10606"></a>
<a id="trace-10614"></a>
<a id="trace-10621"></a>
<a id="trace-10630"></a>
<a id="trace-10641"></a>
<a id="trace-10713"></a>
<a id="trace-10744"></a>
<a id="trace-10754"></a>
<a id="trace-10858"></a>
<a id="trace-10863"></a>
<a id="trace-10873"></a>
<a id="trace-10896"></a>
<a id="trace-10906"></a>
<a id="trace-10915"></a>
<a id="trace-10982"></a>
<a id="trace-10990"></a>
<a id="trace-10999"></a>
<a id="trace-11020"></a>
<a id="trace-11030"></a>
<a id="trace-11049"></a>
<a id="trace-11128"></a>
<a id="trace-11135"></a>
<a id="trace-11143"></a>
<a id="trace-11160"></a>
<a id="trace-11174"></a>
<a id="trace-11186"></a>
<a id="trace-11194"></a>
<a id="trace-11264"></a>
<a id="trace-11271"></a>
<a id="trace-11280"></a>
<a id="trace-11285"></a>
<a id="trace-11293"></a>
<a id="trace-11302"></a>
<a id="trace-11310"></a>
<a id="trace-11326"></a>
<a id="trace-11336"></a>
<a id="trace-11405"></a>
<a id="trace-11422"></a>
<a id="trace-11436"></a>
<a id="trace-11443"></a>
<a id="trace-11453"></a>
<a id="trace-11461"></a>
<a id="trace-11470"></a>
<a id="trace-11480"></a>
<a id="trace-11547"></a>
<a id="trace-11552"></a>
<a id="trace-11561"></a>
<a id="trace-11566"></a>
<a id="trace-11577"></a>
<a id="trace-11586"></a>
<a id="trace-11596"></a>
<a id="trace-11602"></a>
<a id="trace-11611"></a>
<a id="trace-11622"></a>
<a id="trace-11691"></a>
<a id="trace-11699"></a>
<a id="trace-11706"></a>
<a id="trace-11711"></a>
<a id="trace-11726"></a>
<a id="trace-11737"></a>
<a id="trace-11742"></a>
<a id="trace-11752"></a>
<a id="trace-11761"></a>
<a id="trace-11831"></a>
<a id="trace-11839"></a>
<a id="trace-11846"></a>
<a id="trace-11864"></a>
<a id="trace-11871"></a>
<a id="trace-11880"></a>
<a id="trace-11885"></a>
<a id="trace-11896"></a>
<a id="trace-11904"></a>
<a id="trace-11983"></a>
<a id="trace-11991"></a>
<a id="trace-12002"></a>
<a id="trace-12012"></a>
<a id="trace-12023"></a>
<a id="trace-12029"></a>
<a id="trace-12114"></a>
<a id="trace-12119"></a>
<a id="trace-12127"></a>
<a id="trace-12132"></a>
<a id="trace-12149"></a>
<a id="trace-12157"></a>
<a id="trace-12165"></a>
<a id="trace-12177"></a>
<a id="trace-12187"></a>
<a id="trace-12258"></a>
<a id="trace-12271"></a>
<a id="trace-12276"></a>
<a id="trace-12291"></a>
<a id="trace-12313"></a>
<a id="trace-12324"></a>
<a id="trace-12396"></a>
<a id="trace-12406"></a>
<a id="trace-12426"></a>
<a id="trace-12433"></a>
<a id="trace-12454"></a>
<a id="trace-12464"></a>
<a id="trace-12531"></a>
<a id="trace-12538"></a>
<a id="trace-12546"></a>
<a id="trace-12552"></a>
<a id="trace-12564"></a>
<a id="trace-12571"></a>
<a id="trace-12582"></a>
<a id="trace-12592"></a>
<a id="trace-12603"></a>
<a id="trace-12611"></a>
<a id="trace-12678"></a>
<a id="trace-12685"></a>
<a id="trace-12706"></a>
<a id="trace-12713"></a>
<a id="trace-12722"></a>
<a id="trace-12727"></a>
<a id="trace-12739"></a>
<a id="trace-12815"></a>
<a id="trace-12821"></a>
<a id="trace-12840"></a>
<a id="trace-12849"></a>
<a id="trace-12858"></a>
<a id="trace-12866"></a>
<a id="trace-12871"></a>
<a id="trace-12887"></a>
<a id="trace-12956"></a>
<a id="trace-12969"></a>
<a id="trace-12975"></a>
<a id="trace-12985"></a>
<a id="trace-13009"></a>
<a id="trace-13017"></a>
<a id="trace-13026"></a>
<a id="trace-13102"></a>
<a id="trace-13127"></a>
<a id="trace-13135"></a>
<a id="trace-13144"></a>
<a id="trace-13153"></a>
<a id="trace-13174"></a>
<a id="trace-13243"></a>
<a id="trace-13248"></a>
<a id="trace-13257"></a>
<a id="trace-13271"></a>
<a id="trace-13278"></a>
<a id="trace-13288"></a>
<a id="trace-13301"></a>
<a id="trace-13311"></a>
<a id="trace-13378"></a>
<a id="trace-13389"></a>
<a id="trace-13418"></a>
<a id="trace-13430"></a>
<a id="trace-13435"></a>
<a id="trace-13447"></a>
<a id="trace-13454"></a>
<a id="trace-13521"></a>
<a id="trace-13535"></a>
<a id="trace-13542"></a>
<a id="trace-13553"></a>
<a id="trace-13570"></a>
<a id="trace-13575"></a>
<a id="trace-13588"></a>
<a id="trace-13597"></a>
<a id="trace-13670"></a>
<a id="trace-13683"></a>
<a id="trace-13691"></a>
<a id="trace-13701"></a>
<a id="trace-13709"></a>
<a id="trace-13714"></a>
<a id="trace-13808"></a>
<a id="trace-13816"></a>
<a id="trace-13822"></a>
<a id="trace-13833"></a>
<a id="trace-13842"></a>
<a id="trace-13850"></a>
<a id="trace-13857"></a>
<a id="trace-13867"></a>
<a id="trace-13874"></a>
<a id="trace-13944"></a>
<a id="trace-13950"></a>
<a id="trace-13959"></a>
<a id="trace-13967"></a>
<a id="trace-13984"></a>
<a id="trace-13992"></a>
<a id="trace-14000"></a>
<a id="trace-14011"></a>
<a id="trace-14021"></a>
<a id="trace-14093"></a>
<a id="trace-14101"></a>
<a id="trace-14106"></a>
<a id="trace-14117"></a>
<a id="trace-14140"></a>
<a id="trace-14149"></a>
<a id="trace-14159"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22922005872977136, 'next_transition': 753}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5155286950694128, 'next_transition': 751}.
<a id="trace-751"></a>
<a id="trace-775"></a>
<a id="trace-797"></a>
<a id="trace-817"></a>
<a id="trace-842"></a>
<a id="trace-873"></a>
<a id="trace-889"></a>
<a id="trace-902"></a>
<a id="trace-985"></a>
<a id="trace-998"></a>
<a id="trace-1012"></a>
<a id="trace-1033"></a>
<a id="trace-1052"></a>
<a id="trace-1070"></a>
<a id="trace-1087"></a>
<a id="trace-1097"></a>
<a id="trace-1117"></a>
<a id="trace-1129"></a>
<a id="trace-1207"></a>
<a id="trace-1220"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 751): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.96368335495628, 'next_transition': 775}.
<a id="trace-1224"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1224): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1133. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6765125302996711, 'next_transition': 1336}.
<a id="trace-1225"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1225): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1133. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6765125302996711, 'next_transition': 1336}.
<a id="trace-1336"></a>
<a id="trace-1359"></a>
<a id="trace-1376"></a>
<a id="trace-1391"></a>
<a id="trace-1418"></a>
<a id="trace-1435"></a>
<a id="trace-1445"></a>
<a id="trace-1458"></a>
<a id="trace-1538"></a>
<a id="trace-1554"></a>
<a id="trace-1571"></a>
<a id="trace-1583"></a>
<a id="trace-1604"></a>
<a id="trace-1619"></a>
<a id="trace-1631"></a>
<a id="trace-1639"></a>
<a id="trace-1652"></a>
- 16.25s–24.25s (×17), actor 5, squad 0 (trace 1336): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1136. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30124250147014825, 'next_transition': 1359}.
<a id="trace-1656"></a>
- 24.60s–24.60s (×1), actor 0, squad 0 (trace 1656): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1465. Next observer evidence: None.
<a id="trace-1740"></a>
<a id="trace-1812"></a>
<a id="trace-1825"></a>
- 24.75s–25.75s (×3), actor 5, squad 0 (trace 1740): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1468. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5308164374577778, 'next_transition': 1812}.
<a id="trace-1833"></a>
- 25.90s–25.90s (×1), actor 0, squad 0 (trace 1833): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16999748328202455, 'next_transition': 1975}.
<a id="trace-1834"></a>
- 25.90s–25.90s (×1), actor 0, squad 0 (trace 1834): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16999748328202455, 'next_transition': 1975}.
<a id="trace-1835"></a>
- 25.90s–25.90s (×1), actor 0, squad 0 (trace 1835): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16999748328202455, 'next_transition': 1975}.
<a id="trace-1975"></a>
<a id="trace-1986"></a>
- 26.25s–26.75s (×2), actor 5, squad 0 (trace 1975): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1746. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22324914994869124, 'next_transition': 1986}.
<a id="trace-1991"></a>
- 26.90s–26.90s (×1), actor 0, squad 0 (trace 1991): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1743. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08705166666666668, 'next_transition': 2146}.
<a id="trace-2146"></a>
<a id="trace-2159"></a>
<a id="trace-2190"></a>
<a id="trace-2217"></a>
- 27.25s–28.75s (×4), actor 5, squad 0 (trace 2146): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1746. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25443248328202456, 'next_transition': 2159}.
<a id="trace-2228"></a>
- 29.05s–29.05s (×1), actor 5, squad 0 (trace 2228): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 29.05s, trace 2228. Next observer evidence: {'until': 29.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2233}.
<a id="trace-2233"></a>
<a id="trace-2254"></a>
- 29.25s–29.75s (×2), actor 5, squad 0 (trace 2233): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 29.05s, trace 2228. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2254}.
<a id="trace-308"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 308): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2256"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 2256): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477597 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 2256. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2337}.
<a id="trace-2257"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 2257): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.477597 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 2257. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2337}.
<a id="trace-2337"></a>
- 30.25s–30.25s (×1), actor 5, squad 0 (trace 2337): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2268. Next observer evidence: {'until': 30.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2346}.
<a id="trace-2346"></a>
- 30.40s–30.40s (×1), actor 0, squad 0 (trace 2346): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 2265. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2582}.
<a id="trace-2347"></a>
- 30.40s–30.40s (×1), actor 0, squad 0 (trace 2347): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 2265. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2582}.
<a id="trace-2582"></a>
<a id="trace-2598"></a>
<a id="trace-2613"></a>
<a id="trace-2627"></a>
<a id="trace-2645"></a>
<a id="trace-2661"></a>
<a id="trace-2669"></a>
<a id="trace-2687"></a>
<a id="trace-2694"></a>
<a id="trace-2764"></a>
- 30.75s–35.25s (×10), actor 5, squad 0 (trace 2582): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2268. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2598}.
<a id="trace-2768"></a>
- 35.45s–35.45s (×1), actor 1, squad 0 (trace 2768): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25197540854491496, 'next_transition': 2776}.
<a id="trace-2769"></a>
- 35.45s–35.45s (×1), actor 1, squad 0 (trace 2769): NeedSupport. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25197540854491496, 'next_transition': 2776}.
<a id="trace-2776"></a>
<a id="trace-2789"></a>
- 35.75s–36.25s (×2), actor 5, squad 0 (trace 2776): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2700. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.756006458636455, 'next_transition': 2789}.
<a id="trace-2793"></a>
- 36.45s–36.45s (×1), actor 1, squad 0 (trace 2793): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199540803465004, 'next_transition': 2815}.
<a id="trace-2797"></a>
- 36.45s–36.45s (×1), actor 1, squad 0 (trace 2797): MoveTactically. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199540803465004, 'next_transition': 2815}.
<a id="trace-2798"></a>
- 36.45s–36.45s (×1), actor 1, squad 0 (trace 2798): Reorganise complete. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199540803465004, 'next_transition': 2815}.
<a id="trace-2815"></a>
<a id="trace-2833"></a>
- 36.75s–37.25s (×2), actor 5, squad 0 (trace 2815): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2700. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3860075238764036, 'next_transition': 2833}.
<a id="trace-2838"></a>
- 37.45s–37.45s (×1), actor 1, squad 0 (trace 2838): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 2698. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44100410100223025, 'next_transition': 2903}.
<a id="trace-2903"></a>
<a id="trace-2919"></a>
<a id="trace-2929"></a>
<a id="trace-2946"></a>
<a id="trace-2955"></a>
<a id="trace-3030"></a>
<a id="trace-3043"></a>
<a id="trace-3051"></a>
<a id="trace-3059"></a>
- 37.75s–41.75s (×9), actor 5, squad 0 (trace 2903): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2700. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3544514078653895, 'next_transition': 2919}.
<a id="trace-3063"></a>
- 42.05s–42.05s (×1), actor 1, squad 0 (trace 3063): traveling. Knowledge: actor memory at 40.00s, trace 2958. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600839654562676, 'next_transition': 3225}.
<a id="trace-3064"></a>
- 42.05s–42.05s (×1), actor 1, squad 0 (trace 3064): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 2958. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600839654562676, 'next_transition': 3225}.
<a id="trace-3225"></a>
<a id="trace-3233"></a>
<a id="trace-3255"></a>
<a id="trace-3260"></a>
<a id="trace-3279"></a>
<a id="trace-3297"></a>
<a id="trace-3371"></a>
<a id="trace-3382"></a>
<a id="trace-3400"></a>
<a id="trace-3407"></a>
<a id="trace-3420"></a>
<a id="trace-3431"></a>
<a id="trace-3449"></a>
<a id="trace-3462"></a>
<a id="trace-3473"></a>
<a id="trace-3480"></a>
<a id="trace-3557"></a>
<a id="trace-3567"></a>
<a id="trace-3576"></a>
<a id="trace-3590"></a>
<a id="trace-3604"></a>
<a id="trace-3619"></a>
<a id="trace-3633"></a>
<a id="trace-3639"></a>
<a id="trace-3656"></a>
<a id="trace-3670"></a>
<a id="trace-3744"></a>
<a id="trace-3754"></a>
- 42.25s–55.75s (×28), actor 5, squad 0 (trace 3225): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2960. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199683569441916, 'next_transition': 3233}.
<a id="trace-3760"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3760): traveling overwatch. Knowledge: actor memory at 55.00s, trace 3673. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1259989464241668, 'next_transition': 3814}.
<a id="trace-3761"></a>
- 56.05s–56.05s (×1), actor 1, squad 0 (trace 3761): matching received arrivals: traveling stage complete. Knowledge: actor memory at 55.00s, trace 3673. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1259989464241668, 'next_transition': 3814}.
<a id="trace-3814"></a>
<a id="trace-3828"></a>
<a id="trace-3840"></a>
<a id="trace-3850"></a>
<a id="trace-3869"></a>
<a id="trace-3874"></a>
<a id="trace-3887"></a>
<a id="trace-3896"></a>
<a id="trace-3974"></a>
<a id="trace-3989"></a>
<a id="trace-4001"></a>
<a id="trace-4009"></a>
<a id="trace-4030"></a>
<a id="trace-4040"></a>
<a id="trace-4051"></a>
<a id="trace-4057"></a>
<a id="trace-4073"></a>
<a id="trace-4081"></a>
<a id="trace-4156"></a>
<a id="trace-4163"></a>
<a id="trace-4180"></a>
- 56.25s–66.25s (×21), actor 5, squad 0 (trace 3814): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3675. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199987524600076, 'next_transition': 3828}.
<a id="trace-4184"></a>
- 66.45s–66.45s (×1), actor 1, squad 0 (trace 4184): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 65.00s, trace 4089. Next observer evidence: {'until': 66.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4312}.
<a id="trace-4312"></a>
<a id="trace-4326"></a>
<a id="trace-4334"></a>
<a id="trace-4349"></a>
<a id="trace-4362"></a>
<a id="trace-4380"></a>
<a id="trace-4394"></a>
<a id="trace-4470"></a>
<a id="trace-4476"></a>
- 66.75s–70.75s (×9), actor 5, squad 0 (trace 4312): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4091. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03150085840100225, 'next_transition': 4326}.
<a id="trace-4480"></a>
- 70.80s–70.80s (×1), actor 1, squad 0 (trace 4480): matching received arrivals: deployment leg complete. Knowledge: actor memory at 70.00s, trace 4398. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4486}.
<a id="trace-4486"></a>
<a id="trace-4492"></a>
<a id="trace-4504"></a>
<a id="trace-4512"></a>
<a id="trace-4529"></a>
<a id="trace-4534"></a>
- 71.25s–73.75s (×6), actor 5, squad 0 (trace 4486): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4400. Next observer evidence: {'until': 71.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4492}.
<a id="trace-592"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (events line 592): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4538"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (trace 4538): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.382570 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.05s, trace 4538. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058990684010274096, 'next_transition': 4547}.
<a id="trace-4539"></a>
- 74.05s–74.05s (×1), actor 5, squad 0 (trace 4539): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.382570 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 74.05s, trace 4539. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058990684010274096, 'next_transition': 4547}.
<a id="trace-4547"></a>
<a id="trace-4554"></a>
- 74.25s–74.75s (×2), actor 5, squad 0 (trace 4547): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 74.05s, trace 4539. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15050711943293574, 'next_transition': 4554}.
<a id="trace-4557"></a>
- 74.80s–74.80s (×1), actor 1, squad 0 (trace 4557): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 4398. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499794879901232, 'next_transition': 4994}.
<a id="trace-4561"></a>
- 74.80s–74.80s (×1), actor 1, squad 0 (trace 4561): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 4398. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499794879901232, 'next_transition': 4994}.
<a id="trace-4562"></a>
- 74.80s–74.80s (×1), actor 1, squad 0 (trace 4562): bounding overwatch. Knowledge: actor memory at 70.00s, trace 4398. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499794879901232, 'next_transition': 4994}.
<a id="trace-4563"></a>
- 74.80s–74.80s (×1), actor 1, squad 0 (trace 4563): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 4398. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499794879901232, 'next_transition': 4994}.
<a id="trace-4994"></a>
<a id="trace-5003"></a>
<a id="trace-5023"></a>
<a id="trace-5030"></a>
<a id="trace-5049"></a>
<a id="trace-5055"></a>
- 75.25s–77.75s (×6), actor 5, squad 0 (trace 4994): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4926. Next observer evidence: {'until': 75.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07358560323860781, 'next_transition': 5003}.
<a id="trace-5059"></a>
- 77.95s–77.95s (×1), actor 1, squad 0 (trace 5059): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 4924. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9600106377878952, 'next_transition': 5353}.
<a id="trace-5060"></a>
- 77.95s–77.95s (×1), actor 1, squad 0 (trace 5060): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 4924. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9600106377878952, 'next_transition': 5353}.
<a id="trace-5353"></a>
<a id="trace-5365"></a>
<a id="trace-5389"></a>
<a id="trace-5473"></a>
<a id="trace-5482"></a>
<a id="trace-5493"></a>
<a id="trace-5506"></a>
<a id="trace-5513"></a>
<a id="trace-5522"></a>
<a id="trace-5530"></a>
<a id="trace-5540"></a>
<a id="trace-5553"></a>
<a id="trace-5563"></a>
<a id="trace-5642"></a>
<a id="trace-5656"></a>
<a id="trace-5664"></a>
<a id="trace-5675"></a>
<a id="trace-5687"></a>
<a id="trace-5702"></a>
<a id="trace-5708"></a>
<a id="trace-5723"></a>
<a id="trace-5727"></a>
- 78.25s–89.75s (×22), actor 5, squad 0 (trace 5353): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4926. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9489659376995523, 'next_transition': 5365}.
<a id="trace-5800"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 5800): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: None.
<a id="trace-5801"></a>
- 90.20s–90.20s (×1), actor 1, squad 0 (trace 5801): NeedSupport. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: None.
<a id="trace-5807"></a>
- 90.25s–90.25s (×1), actor 5, squad 0 (trace 5807): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5738. Next observer evidence: {'until': 90.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25566900418999955, 'next_transition': 5813}.
<a id="trace-5813"></a>
- 90.45s–90.45s (×1), actor 1, squad 0 (trace 5813): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20712189141202117, 'next_transition': 6069}.
<a id="trace-5816"></a>
- 90.45s–90.45s (×1), actor 1, squad 0 (trace 5816): ReactToContact: cover and return fire. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20712189141202117, 'next_transition': 6069}.
<a id="trace-5817"></a>
- 90.45s–90.45s (×1), actor 1, squad 0 (trace 5817): Reorganise complete: known contact. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 90.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20712189141202117, 'next_transition': 6069}.
<a id="trace-6069"></a>
<a id="trace-6079"></a>
<a id="trace-6108"></a>
<a id="trace-6139"></a>
<a id="trace-6153"></a>
<a id="trace-6172"></a>
- 90.75s–93.25s (×6), actor 5, squad 0 (trace 6069): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5738. Next observer evidence: {'until': 91.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7824952965855345, 'next_transition': 6079}.
<a id="trace-6176"></a>
- 93.45s–93.45s (×1), actor 1, squad 0 (trace 6176): NeedSupport. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 93.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1579309096005487, 'next_transition': 6184}.
<a id="trace-6184"></a>
- 93.75s–93.75s (×1), actor 5, squad 0 (trace 6184): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5738. Next observer evidence: {'until': 94, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5451868192146715, 'next_transition': 6189}.
<a id="trace-6189"></a>
- 94.10s–94.10s (×1), actor 1, squad 0 (trace 6189): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21613572650812518, 'next_transition': 6374}.
<a id="trace-6190"></a>
- 94.10s–94.10s (×1), actor 1, squad 0 (trace 6190): rearward bound: one stationary suppressing element. Knowledge: actor memory at 90.00s, trace 5737. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21613572650812518, 'next_transition': 6374}.
<a id="trace-6374"></a>
<a id="trace-6397"></a>
<a id="trace-6476"></a>
<a id="trace-6491"></a>
<a id="trace-6507"></a>
<a id="trace-6517"></a>
<a id="trace-6548"></a>
<a id="trace-6576"></a>
<a id="trace-6604"></a>
<a id="trace-6637"></a>
<a id="trace-6665"></a>
<a id="trace-6686"></a>
<a id="trace-6773"></a>
<a id="trace-6787"></a>
<a id="trace-6801"></a>
<a id="trace-6806"></a>
<a id="trace-6814"></a>
<a id="trace-6825"></a>
<a id="trace-6834"></a>
<a id="trace-6838"></a>
<a id="trace-6852"></a>
<a id="trace-6860"></a>
<a id="trace-6937"></a>
<a id="trace-6941"></a>
<a id="trace-6952"></a>
<a id="trace-6964"></a>
<a id="trace-6976"></a>
<a id="trace-6985"></a>
<a id="trace-6998"></a>
<a id="trace-7002"></a>
<a id="trace-7020"></a>
<a id="trace-7025"></a>
<a id="trace-7094"></a>
<a id="trace-7105"></a>
<a id="trace-7118"></a>
<a id="trace-7124"></a>
<a id="trace-7141"></a>
<a id="trace-7151"></a>
<a id="trace-7165"></a>
<a id="trace-7170"></a>
- 94.25s–113.75s (×40), actor 5, squad 0 (trace 6374): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5738. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36917640401472857, 'next_transition': 6397}.
<a id="trace-7174"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 7174): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 7028. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17746666666666636, 'next_transition': 7205}.
<a id="trace-7196"></a>
- 113.85s–113.85s (×1), actor 1, squad 0 (trace 7196): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 7028. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17746666666666636, 'next_transition': 7205}.
<a id="trace-7205"></a>
<a id="trace-7217"></a>
<a id="trace-7288"></a>
<a id="trace-7294"></a>
<a id="trace-7301"></a>
<a id="trace-7315"></a>
<a id="trace-7321"></a>
<a id="trace-7330"></a>
<a id="trace-7335"></a>
<a id="trace-7342"></a>
<a id="trace-7349"></a>
<a id="trace-7417"></a>
<a id="trace-7421"></a>
<a id="trace-7427"></a>
<a id="trace-7433"></a>
- 114.25s–121.75s (×15), actor 5, squad 0 (trace 7205): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 7029. Next observer evidence: {'until': 114.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7217}.
<a id="trace-7435"></a>
- 121.80s–121.80s (×1), actor 1, squad 0 (trace 7435): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 7353. Next observer evidence: {'until': 122.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7443}.
<a id="trace-7443"></a>
<a id="trace-7453"></a>
<a id="trace-7464"></a>
<a id="trace-7468"></a>
<a id="trace-7475"></a>
<a id="trace-7485"></a>
<a id="trace-7553"></a>
<a id="trace-7559"></a>
<a id="trace-7569"></a>
<a id="trace-7578"></a>
<a id="trace-7584"></a>
<a id="trace-7589"></a>
<a id="trace-7599"></a>
<a id="trace-7602"></a>
<a id="trace-7609"></a>
<a id="trace-7614"></a>
<a id="trace-7681"></a>
<a id="trace-7687"></a>
<a id="trace-7696"></a>
<a id="trace-7703"></a>
<a id="trace-7712"></a>
<a id="trace-7719"></a>
<a id="trace-7727"></a>
<a id="trace-7731"></a>
- 122.25s–133.80s (×24), actor 5, squad 0 (trace 7443): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 7354. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7453}.
<a id="trace-951"></a>
- 134.05s–134.05s (×1), actor 5, squad 0 (events line 951): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998400468183806, 'next_transition': 7739}.
<a id="trace-7733"></a>
- 134.05s–134.05s (×1), actor 5, squad 0 (trace 7733): renew committed intent (75 s lifetime). Knowledge: actor memory at 134.05s, trace 7733. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998400468183806, 'next_transition': 7739}.
<a id="trace-7739"></a>
<a id="trace-7743"></a>
<a id="trace-7809"></a>
<a id="trace-7813"></a>
<a id="trace-7821"></a>
<a id="trace-7827"></a>
<a id="trace-7837"></a>
<a id="trace-7844"></a>
<a id="trace-7852"></a>
<a id="trace-7859"></a>
<a id="trace-7869"></a>
<a id="trace-7875"></a>
<a id="trace-7944"></a>
<a id="trace-7950"></a>
<a id="trace-7956"></a>
<a id="trace-7963"></a>
<a id="trace-7970"></a>
<a id="trace-7977"></a>
<a id="trace-7988"></a>
<a id="trace-7991"></a>
<a id="trace-7998"></a>
<a id="trace-8004"></a>
<a id="trace-8071"></a>
<a id="trace-8076"></a>
<a id="trace-8082"></a>
<a id="trace-8087"></a>
<a id="trace-8093"></a>
<a id="trace-8099"></a>
<a id="trace-8111"></a>
<a id="trace-8114"></a>
<a id="trace-8121"></a>
<a id="trace-8126"></a>
<a id="trace-8194"></a>
<a id="trace-8200"></a>
<a id="trace-8207"></a>
<a id="trace-8212"></a>
<a id="trace-8218"></a>
<a id="trace-8225"></a>
<a id="trace-8236"></a>
<a id="trace-8242"></a>
<a id="trace-8249"></a>
<a id="trace-8255"></a>
<a id="trace-8323"></a>
<a id="trace-8326"></a>
<a id="trace-8332"></a>
<a id="trace-8335"></a>
<a id="trace-8342"></a>
<a id="trace-8349"></a>
<a id="trace-8358"></a>
<a id="trace-8362"></a>
<a id="trace-8369"></a>
<a id="trace-8374"></a>
<a id="trace-8443"></a>
<a id="trace-8448"></a>
<a id="trace-8457"></a>
<a id="trace-8462"></a>
<a id="trace-8470"></a>
<a id="trace-8478"></a>
<a id="trace-8489"></a>
<a id="trace-8493"></a>
<a id="trace-8500"></a>
<a id="trace-8506"></a>
<a id="trace-8573"></a>
<a id="trace-8579"></a>
<a id="trace-8590"></a>
<a id="trace-8596"></a>
<a id="trace-8604"></a>
<a id="trace-8613"></a>
<a id="trace-8620"></a>
<a id="trace-8628"></a>
<a id="trace-8635"></a>
<a id="trace-8641"></a>
<a id="trace-8708"></a>
<a id="trace-8714"></a>
<a id="trace-8725"></a>
<a id="trace-8731"></a>
<a id="trace-8739"></a>
<a id="trace-8746"></a>
<a id="trace-8754"></a>
<a id="trace-8761"></a>
<a id="trace-8769"></a>
<a id="trace-8778"></a>
<a id="trace-8845"></a>
<a id="trace-8851"></a>
<a id="trace-8861"></a>
<a id="trace-8867"></a>
<a id="trace-8877"></a>
<a id="trace-8883"></a>
<a id="trace-8893"></a>
<a id="trace-8898"></a>
<a id="trace-8907"></a>
<a id="trace-8916"></a>
<a id="trace-8984"></a>
<a id="trace-8994"></a>
<a id="trace-9005"></a>
<a id="trace-9010"></a>
<a id="trace-9021"></a>
<a id="trace-9028"></a>
<a id="trace-9037"></a>
<a id="trace-9042"></a>
<a id="trace-9052"></a>
<a id="trace-9059"></a>
<a id="trace-9126"></a>
<a id="trace-9133"></a>
<a id="trace-9140"></a>
<a id="trace-9147"></a>
<a id="trace-9157"></a>
<a id="trace-9163"></a>
<a id="trace-9174"></a>
<a id="trace-9184"></a>
<a id="trace-9196"></a>
<a id="trace-9203"></a>
<a id="trace-9271"></a>
<a id="trace-9276"></a>
<a id="trace-9283"></a>
<a id="trace-9290"></a>
<a id="trace-9298"></a>
<a id="trace-9307"></a>
<a id="trace-9315"></a>
<a id="trace-9321"></a>
- 134.30s–193.80s (×120), actor 5, squad 0 (trace 7739): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 134.05s, trace 7733. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300341339959287, 'next_transition': 7743}.
<a id="trace-1126"></a>
- 194.05s–194.05s (×1), actor 5, squad 0 (events line 1126): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9333}.
<a id="trace-9328"></a>
- 194.05s–194.05s (×1), actor 5, squad 0 (trace 9328): renew committed intent (75 s lifetime). Knowledge: actor memory at 194.05s, trace 9328. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9333}.
<a id="trace-9333"></a>
<a id="trace-9340"></a>
<a id="trace-9414"></a>
<a id="trace-9421"></a>
<a id="trace-9429"></a>
<a id="trace-9434"></a>
<a id="trace-9442"></a>
<a id="trace-9451"></a>
<a id="trace-9458"></a>
<a id="trace-9465"></a>
- 194.30s–198.80s (×10), actor 5, squad 0 (trace 9333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 194.05s, trace 9328. Next observer evidence: {'until': 194.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9340}.
<a id="trace-1151"></a>
- 198.85s–198.85s (×1), actor 5, squad 0 (events line 1151): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9469"></a>
- 198.85s–198.85s (×1), actor 5, squad 0 (trace 9469): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.394682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 198.85s, trace 9469. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9470"></a>
- 198.85s–198.85s (×1), actor 5, squad 0 (trace 9470): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.394682 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 198.85s, trace 9470. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}.
<a id="trace-9476"></a>
<a id="trace-9483"></a>
<a id="trace-9552"></a>
- 199.30s–200.30s (×3), actor 5, squad 0 (trace 9476): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 198.85s, trace 9470. Next observer evidence: {'until': 199.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9483}.
<a id="trace-9556"></a>
- 200.65s–200.65s (×1), actor 1, squad 0 (trace 9556): Withdraw to received rally. Knowledge: actor memory at 200.00s, trace 9488. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9611}.
<a id="trace-9557"></a>
- 200.65s–200.65s (×1), actor 1, squad 0 (trace 9557): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 9488. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9611}.
<a id="trace-9611"></a>
<a id="trace-9621"></a>
<a id="trace-9633"></a>
<a id="trace-9643"></a>
<a id="trace-9651"></a>
<a id="trace-9665"></a>
<a id="trace-9673"></a>
<a id="trace-9687"></a>
<a id="trace-9700"></a>
<a id="trace-9770"></a>
<a id="trace-9776"></a>
<a id="trace-9784"></a>
<a id="trace-9796"></a>
<a id="trace-9808"></a>
<a id="trace-9816"></a>
<a id="trace-9835"></a>
<a id="trace-9844"></a>
<a id="trace-9857"></a>
<a id="trace-9936"></a>
<a id="trace-9949"></a>
<a id="trace-9958"></a>
<a id="trace-9965"></a>
<a id="trace-9980"></a>
<a id="trace-9991"></a>
<a id="trace-10006"></a>
<a id="trace-10012"></a>
<a id="trace-10023"></a>
<a id="trace-10035"></a>
<a id="trace-10107"></a>
<a id="trace-10118"></a>
<a id="trace-10130"></a>
- 200.80s–216.30s (×31), actor 5, squad 0 (trace 9611): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 9489. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9621}.
<a id="trace-10134"></a>
- 216.45s–216.45s (×1), actor 1, squad 0 (trace 10134): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 215.00s, trace 10043. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2184000001959634, 'next_transition': 10147}.
<a id="trace-10135"></a>
- 216.45s–216.45s (×1), actor 1, squad 0 (trace 10135): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 215.00s, trace 10043. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2184000001959634, 'next_transition': 10147}.
<a id="trace-10147"></a>
<a id="trace-10161"></a>
<a id="trace-10172"></a>
<a id="trace-10182"></a>
<a id="trace-10191"></a>
<a id="trace-10206"></a>
<a id="trace-10215"></a>
<a id="trace-10283"></a>
<a id="trace-10290"></a>
<a id="trace-10297"></a>
<a id="trace-10305"></a>
<a id="trace-10314"></a>
<a id="trace-10323"></a>
<a id="trace-10332"></a>
<a id="trace-10337"></a>
<a id="trace-10348"></a>
<a id="trace-10358"></a>
<a id="trace-10428"></a>
<a id="trace-10432"></a>
<a id="trace-10440"></a>
<a id="trace-10445"></a>
<a id="trace-10453"></a>
<a id="trace-10462"></a>
<a id="trace-10471"></a>
<a id="trace-10478"></a>
<a id="trace-10489"></a>
<a id="trace-10498"></a>
<a id="trace-10566"></a>
<a id="trace-10571"></a>
<a id="trace-10580"></a>
<a id="trace-10587"></a>
<a id="trace-10597"></a>
<a id="trace-10604"></a>
<a id="trace-10612"></a>
<a id="trace-10619"></a>
<a id="trace-10628"></a>
<a id="trace-10639"></a>
<a id="trace-10706"></a>
<a id="trace-10711"></a>
<a id="trace-10722"></a>
<a id="trace-10726"></a>
<a id="trace-10736"></a>
<a id="trace-10742"></a>
<a id="trace-10752"></a>
<a id="trace-10757"></a>
<a id="trace-10767"></a>
<a id="trace-10777"></a>
<a id="trace-10843"></a>
<a id="trace-10849"></a>
<a id="trace-10856"></a>
<a id="trace-10861"></a>
<a id="trace-10871"></a>
<a id="trace-10880"></a>
<a id="trace-10890"></a>
<a id="trace-10894"></a>
<a id="trace-10904"></a>
<a id="trace-10913"></a>
<a id="trace-10980"></a>
<a id="trace-10988"></a>
<a id="trace-10997"></a>
<a id="trace-11005"></a>
<a id="trace-11012"></a>
<a id="trace-11018"></a>
<a id="trace-11028"></a>
<a id="trace-11033"></a>
<a id="trace-11047"></a>
<a id="trace-11055"></a>
<a id="trace-11122"></a>
<a id="trace-11126"></a>
<a id="trace-11133"></a>
<a id="trace-11141"></a>
<a id="trace-11149"></a>
<a id="trace-11158"></a>
<a id="trace-11168"></a>
<a id="trace-11172"></a>
<a id="trace-11184"></a>
<a id="trace-11192"></a>
<a id="trace-11262"></a>
<a id="trace-11269"></a>
<a id="trace-11278"></a>
<a id="trace-11283"></a>
<a id="trace-11291"></a>
<a id="trace-11300"></a>
<a id="trace-11308"></a>
<a id="trace-11315"></a>
<a id="trace-11324"></a>
- 216.80s–259.30s (×86), actor 5, squad 0 (trace 10147): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 10044. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.684600000020997, 'next_transition': 10161}.
<a id="trace-1445"></a>
- 259.45s–259.45s (×1), actor 5, squad 0 (events line 1445): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11327"></a>
- 259.45s–259.45s (×1), actor 5, squad 0 (trace 11327): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.45s, trace 11327. Next observer evidence: {'until': 259.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11334}.
<a id="trace-11334"></a>
<a id="trace-11403"></a>
<a id="trace-11410"></a>
<a id="trace-11420"></a>
<a id="trace-11425"></a>
<a id="trace-11434"></a>
<a id="trace-11441"></a>
<a id="trace-11451"></a>
<a id="trace-11459"></a>
<a id="trace-11468"></a>
<a id="trace-11478"></a>
<a id="trace-11545"></a>
<a id="trace-11550"></a>
<a id="trace-11559"></a>
<a id="trace-11564"></a>
<a id="trace-11575"></a>
<a id="trace-11584"></a>
<a id="trace-11594"></a>
<a id="trace-11600"></a>
<a id="trace-11609"></a>
<a id="trace-11620"></a>
<a id="trace-11689"></a>
<a id="trace-11697"></a>
<a id="trace-11704"></a>
<a id="trace-11709"></a>
<a id="trace-11718"></a>
<a id="trace-11724"></a>
<a id="trace-11735"></a>
<a id="trace-11740"></a>
<a id="trace-11750"></a>
<a id="trace-11759"></a>
<a id="trace-11829"></a>
<a id="trace-11837"></a>
<a id="trace-11844"></a>
<a id="trace-11854"></a>
<a id="trace-11862"></a>
<a id="trace-11869"></a>
<a id="trace-11878"></a>
<a id="trace-11883"></a>
<a id="trace-11894"></a>
<a id="trace-11902"></a>
<a id="trace-11971"></a>
<a id="trace-11975"></a>
<a id="trace-11981"></a>
<a id="trace-11989"></a>
<a id="trace-12000"></a>
<a id="trace-12010"></a>
<a id="trace-12021"></a>
<a id="trace-12027"></a>
<a id="trace-12037"></a>
<a id="trace-12044"></a>
<a id="trace-12112"></a>
<a id="trace-12117"></a>
<a id="trace-12125"></a>
<a id="trace-12130"></a>
<a id="trace-12138"></a>
<a id="trace-12147"></a>
<a id="trace-12155"></a>
<a id="trace-12163"></a>
<a id="trace-12175"></a>
<a id="trace-12185"></a>
<a id="trace-12256"></a>
<a id="trace-12261"></a>
<a id="trace-12269"></a>
<a id="trace-12274"></a>
<a id="trace-12283"></a>
<a id="trace-12289"></a>
<a id="trace-12297"></a>
<a id="trace-12303"></a>
<a id="trace-12311"></a>
<a id="trace-12322"></a>
<a id="trace-12390"></a>
<a id="trace-12394"></a>
<a id="trace-12404"></a>
<a id="trace-12413"></a>
<a id="trace-12424"></a>
<a id="trace-12431"></a>
<a id="trace-12440"></a>
<a id="trace-12444"></a>
<a id="trace-12452"></a>
<a id="trace-12462"></a>
<a id="trace-12529"></a>
<a id="trace-12536"></a>
<a id="trace-12544"></a>
<a id="trace-12550"></a>
<a id="trace-12562"></a>
<a id="trace-12569"></a>
<a id="trace-12580"></a>
<a id="trace-12590"></a>
<a id="trace-12601"></a>
<a id="trace-12609"></a>
<a id="trace-12676"></a>
<a id="trace-12683"></a>
<a id="trace-12690"></a>
<a id="trace-12696"></a>
<a id="trace-12704"></a>
<a id="trace-12711"></a>
<a id="trace-12720"></a>
<a id="trace-12725"></a>
<a id="trace-12737"></a>
<a id="trace-12745"></a>
<a id="trace-12813"></a>
<a id="trace-12819"></a>
<a id="trace-12831"></a>
<a id="trace-12838"></a>
<a id="trace-12847"></a>
<a id="trace-12856"></a>
<a id="trace-12864"></a>
<a id="trace-12869"></a>
<a id="trace-12879"></a>
<a id="trace-12885"></a>
<a id="trace-12954"></a>
<a id="trace-12959"></a>
<a id="trace-12967"></a>
<a id="trace-12973"></a>
<a id="trace-12983"></a>
<a id="trace-12996"></a>
<a id="trace-13007"></a>
<a id="trace-13015"></a>
<a id="trace-13024"></a>
- 259.80s–319.30s (×120), actor 5, squad 0 (trace 11334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 259.45s, trace 11327. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11403}.
<a id="trace-1707"></a>
- 319.45s–319.45s (×1), actor 5, squad 0 (events line 1707): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13027"></a>
- 319.45s–319.45s (×1), actor 5, squad 0 (trace 13027): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.45s, trace 13027. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13033}.
<a id="trace-13033"></a>
<a id="trace-13100"></a>
<a id="trace-13105"></a>
<a id="trace-13113"></a>
<a id="trace-13117"></a>
<a id="trace-13125"></a>
<a id="trace-13133"></a>
<a id="trace-13142"></a>
<a id="trace-13151"></a>
<a id="trace-13162"></a>
<a id="trace-13172"></a>
<a id="trace-13241"></a>
<a id="trace-13246"></a>
<a id="trace-13255"></a>
<a id="trace-13260"></a>
<a id="trace-13269"></a>
<a id="trace-13276"></a>
<a id="trace-13286"></a>
<a id="trace-13291"></a>
<a id="trace-13299"></a>
<a id="trace-13309"></a>
<a id="trace-13376"></a>
<a id="trace-13387"></a>
<a id="trace-13395"></a>
<a id="trace-13399"></a>
<a id="trace-13408"></a>
<a id="trace-13416"></a>
<a id="trace-13428"></a>
<a id="trace-13433"></a>
<a id="trace-13445"></a>
<a id="trace-13452"></a>
<a id="trace-13519"></a>
<a id="trace-13527"></a>
<a id="trace-13533"></a>
<a id="trace-13540"></a>
<a id="trace-13551"></a>
<a id="trace-13559"></a>
<a id="trace-13568"></a>
<a id="trace-13573"></a>
<a id="trace-13586"></a>
<a id="trace-13595"></a>
<a id="trace-13664"></a>
<a id="trace-13668"></a>
<a id="trace-13675"></a>
<a id="trace-13681"></a>
<a id="trace-13689"></a>
<a id="trace-13699"></a>
<a id="trace-13707"></a>
<a id="trace-13712"></a>
<a id="trace-13724"></a>
<a id="trace-13732"></a>
<a id="trace-13801"></a>
<a id="trace-13806"></a>
<a id="trace-13814"></a>
<a id="trace-13820"></a>
<a id="trace-13831"></a>
<a id="trace-13840"></a>
<a id="trace-13848"></a>
<a id="trace-13855"></a>
<a id="trace-13865"></a>
<a id="trace-13872"></a>
<a id="trace-13942"></a>
<a id="trace-13948"></a>
<a id="trace-13957"></a>
<a id="trace-13965"></a>
<a id="trace-13976"></a>
<a id="trace-13982"></a>
<a id="trace-13990"></a>
<a id="trace-13998"></a>
<a id="trace-14009"></a>
<a id="trace-14019"></a>
<a id="trace-14087"></a>
<a id="trace-14091"></a>
<a id="trace-14099"></a>
<a id="trace-14104"></a>
<a id="trace-14115"></a>
<a id="trace-14122"></a>
<a id="trace-14133"></a>
<a id="trace-14138"></a>
<a id="trace-14147"></a>
<a id="trace-14157"></a>
- 319.80s–359.80s (×81), actor 5, squad 0 (trace 13033): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 319.45s, trace 13027. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13100}.

## Net delivery

127 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.278s; maximum 2.950s. Message-level evidence is in the companion JSON.

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
- 15.00s leader 0, trace 1133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 29.05s leader 5, trace 2228: estimate 6.89; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 2256: estimate 6.88; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 2257: estimate 6.88; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2265: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2268: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2269: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2271: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2272: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2273: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2274: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2275: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2276: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2700: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2701: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2703: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2704: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2705: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2706: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2707: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2708: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2960: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2961: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2963: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2964: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2965: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2966: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2967: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2968: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3303: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3304: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3306: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3307: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3308: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3309: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3310: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3311: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3486: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3487: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3489: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3490: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3491: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3492: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3493: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3494: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3675: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3676: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3678: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3679: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3680: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3682: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3683: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3903: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3904: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3906: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3907: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3908: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3910: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3911: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4091: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4092: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4094: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4095: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4096: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4098: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4099: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4400: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4401: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4403: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4404: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4405: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4407: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4408: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.05s leader 5, trace 4538: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 74.05s leader 5, trace 4539: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4924: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4926: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4927: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4929: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4930: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4931: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4932: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4933: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4934: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5397: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5399: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5400: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5402: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5403: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5404: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5405: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5406: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5407: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5573: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5574: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5575: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5576: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5578: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5579: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5580: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5581: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5582: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5583: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5737: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5738: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5739: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5740: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5741: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5742: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5743: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5744: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5745: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5746: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 6402: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 6403: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 6404: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 6405: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 6406: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 6407: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 6408: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 6409: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 6410: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 6411: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 6695: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 6696: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 6697: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 6698: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 6699: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 6700: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 6701: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 6702: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 6703: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 6871: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 6872: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 6873: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 6874: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 6875: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 6876: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 6877: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 6878: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 6879: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 7028: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 7029: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 7030: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 7031: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 7032: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 7033: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 7034: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 7035: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 7036: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 7224: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 7225: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 7226: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 7227: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 7228: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 7229: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 7230: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 7231: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 7232: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 7353: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 7354: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 7355: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 7356: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 7357: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 7358: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 7359: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 7360: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 7361: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 7489: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 7490: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 7491: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 7492: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 7493: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 7494: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 7495: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 7496: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 7497: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 7617: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 7618: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 7619: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 7620: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 7621: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 7622: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 7623: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 7624: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 7625: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 134.05s leader 5, trace 7733: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 7745: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 7746: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 7747: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 7748: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 7749: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 7750: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 7751: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 7752: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 7753: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7878: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7879: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7880: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7881: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7882: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 7883: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7884: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7885: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7886: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 8007: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 8008: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 8009: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 8010: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 8011: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 8012: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 8013: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 8014: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 8015: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 8130: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 8131: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 8132: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 8133: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 8134: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 8135: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 8136: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 8137: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 8138: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 8259: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 8260: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 8261: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 8262: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 8263: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 8264: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 8265: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 8266: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 8267: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 8377: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 8378: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 8379: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 8380: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 8381: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 8382: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 8383: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 8384: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 8385: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 8509: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 8510: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 8511: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 8512: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 8513: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 8514: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 8515: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 8516: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8645: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8646: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8647: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8648: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8649: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8650: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8651: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8652: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8781: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8782: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8783: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8784: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8785: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8786: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8787: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 8788: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8920: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8921: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8922: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8923: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8924: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8925: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8926: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8927: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 9063: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 9064: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 9065: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 9066: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 9067: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 9068: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 9069: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 9070: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 9206: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 9207: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 9208: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 9209: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 9210: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 9211: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 9212: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 9213: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 194.05s leader 5, trace 9328: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9345: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9346: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9347: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9348: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9349: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9350: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9351: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 9352: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.85s leader 5, trace 9469: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.85s leader 5, trace 9470: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9489: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9490: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9491: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9492: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9493: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9494: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9495: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9705: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9706: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 9707: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9708: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9709: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9710: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9711: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 9712: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9869: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9870: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9871: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9872: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9873: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9874: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9875: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 9876: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10043: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10044: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10045: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10046: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10047: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10048: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10049: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10050: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10218: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10219: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10220: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10221: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10222: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10223: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10224: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10225: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10362: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10363: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10364: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10365: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10366: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10367: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10368: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10369: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10502: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10503: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10504: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10505: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10506: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10507: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10508: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10509: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10642: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10643: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10644: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10645: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10646: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10647: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10648: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10649: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 10779: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 10780: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 10781: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 10782: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 10783: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 10784: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 10785: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 10786: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 10917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 10919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 10920: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 10921: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 10922: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 10923: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 10924: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11060: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11061: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11062: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11063: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11064: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11199: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11200: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11201: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11202: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11203: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.45s leader 5, trace 11327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11342: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11343: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11344: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11345: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11346: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 11481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 11482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 11483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 11484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 11485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 11486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 11487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 11488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 11623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 11624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 11625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 11626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 11627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 11628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 11629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 11630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 11765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 11766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 11767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 11768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 11769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 11770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 11771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 11772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 12193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 12194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 12195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 12196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 12197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 12198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 12199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 12200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 12326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 12327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 12328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 12329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 12330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 12331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 12332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 12333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 12465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 12466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 12467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 12468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 12469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 12470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 12471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 12472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 12613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 12614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 12615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 12616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 12617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 12618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 12619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 12620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 12747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 12748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 12749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 12750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 12751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 12752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 12753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 12754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.45s leader 5, trace 13027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 13037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 13038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 13039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 13040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 13041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 13042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 13043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 13044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 13175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 13176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 13177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 13178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 13179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 13180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 13181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 13182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 13312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 13313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 13314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 13315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 13316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 13317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 13318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 13456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 13457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 13458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 13459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 13460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 13461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 13462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 13463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 13598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 13599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 13600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 13601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 13602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 13603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 13604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 13605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 13735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 13736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 13737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 13738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 13739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 13740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 13741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 13742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 14022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 14023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 14024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 14025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 14026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 14027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 14028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 14029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 14160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 14161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 14162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 14163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 14164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 14165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 14166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 14167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Tern incapacitated
- 1: Reed incapacitated
- 1: Bram killed in action

## Outcome attribution

- 74.05s, evidence 592: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 74.05s, evidence 4538: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.382570 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058990684010274096, 'next_transition': 4547}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 74.05s, evidence 4539: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.382570 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.058990684010274096, 'next_transition': 4547}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 134.05s, evidence 951: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20998400468183806, 'next_transition': 7739}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 194.05s, evidence 1126: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9333}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 198.85s, evidence 1151: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 198.85s, evidence 9469: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.394682 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 198.85s, evidence 9470: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.394682 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9476}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 259.45s, evidence 1445: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 319.45s, evidence 1707: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
