# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/107/good-ember/battle-107-1789673911585531965`

## Battle summary

**Ember** · 360 s · 692 shots.

### Turning points

- 25.6s, squad 4: contact (events line 297). First recorded contact.
- 41.4s, squad 0: withdrawal ([trace 5134](#trace-5134)). 52.0s, squad 0: took cover and returned fire.
- 51.7s, squad 0: help call ([trace 6129](#trace-6129)). No completion observed before termination.
- 56.1s, squad 0: withdrawal ([trace 6533](#trace-6533)). 77.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 58.7s, squad 0: help call ([trace 6861](#trace-6861)). No completion observed before termination.
- 93.2s, squad 1: help call ([trace 16091](#trace-16091)). No completion observed before termination.
- 98.4s, squad 1: help call ([trace 16578](#trace-16578)). No completion observed before termination.
- 139.8s, squad 0: help call ([trace 18644](#trace-18644)). No completion observed before termination.
- 144.8s, squad 0: withdrawal ([trace 19156](#trace-19156)). 180.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 156.2s, squad 0: help call ([trace 19974](#trace-19974)). No completion observed before termination.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 6 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 8 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 564 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 114 shots, 0/4 lost.

### Decisions and attribution

At 90.8s, squad 1 chose prepared a base of fire ([trace 14013](#trace-14013)), followed by 1 shots and 1 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 90.8s, squad 1 chose advanced tactically ([trace 15894](#trace-15894)), followed by 1 shots and 1 own casualties; estimate 12.4 against 0 distinct squad-reported contacts; At 26.1s, squad 1 chose took cover and returned fire ([trace 3578](#trace-3578)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1745](#trace-1745)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212041435272558, 'next_transition': 1780}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1747](#trace-1747)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14597039318262447, 'next_transition': 1858}.

### Communication

241 matched deliveries (mean 0.46s, max 5.25s); 301 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 25.65s, squad 4, contact, evidence events line 297: First recorded contact; .
- 41.35s, squad 0, withdrawal, evidence 5134: BreakContact: believed ratio at least two without superiority; 52.0s, squad 0: took cover and returned fire.
- 51.70s, squad 0, help call, evidence 6129: NeedSupport; No completion observed before termination.
- 56.10s, squad 0, withdrawal, evidence 6533: BreakContact: believed ratio at least two without superiority; 77.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 58.65s, squad 0, help call, evidence 6861: NeedSupport; No completion observed before termination.
- 93.25s, squad 1, help call, evidence 16091: NeedSupport; No completion observed before termination.
- 98.40s, squad 1, help call, evidence 16578: NeedSupport; No completion observed before termination.
- 139.80s, squad 0, help call, evidence 18644: NeedSupport; No completion observed before termination.
- 144.80s, squad 0, withdrawal, evidence 19156: BreakContact: believed ratio at least two without superiority; 180.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 156.20s, squad 0, help call, evidence 19974: NeedSupport; No completion observed before termination.
- 201.40s, squad 0, withdrawal, evidence 21914: BreakContact: believed ratio at least two without superiority; 221.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 259.20s, squad 0, withdrawal, evidence 24011: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478864745217773, 'next_transition': 982}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478864745217773, 'next_transition': 982}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.478864745217773, 'next_transition': 982}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.23347582675116, 'next_transition': 163}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.23347582675116, 'next_transition': 163}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.23347582675116, 'next_transition': 163}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-728"></a>
<a id="trace-730"></a>
<a id="trace-765"></a>
<a id="trace-767"></a>
<a id="trace-792"></a>
<a id="trace-794"></a>
<a id="trace-816"></a>
<a id="trace-818"></a>
<a id="trace-841"></a>
<a id="trace-843"></a>
<a id="trace-872"></a>
<a id="trace-874"></a>
<a id="trace-986"></a>
<a id="trace-988"></a>
<a id="trace-1017"></a>
<a id="trace-1019"></a>
<a id="trace-1058"></a>
<a id="trace-1060"></a>
<a id="trace-1084"></a>
<a id="trace-1086"></a>
<a id="trace-1115"></a>
<a id="trace-1117"></a>
<a id="trace-1148"></a>
<a id="trace-1150"></a>
<a id="trace-1180"></a>
<a id="trace-1182"></a>
<a id="trace-1199"></a>
<a id="trace-1201"></a>
<a id="trace-1218"></a>
<a id="trace-1220"></a>
<a id="trace-1310"></a>
<a id="trace-1312"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1667"></a>
<a id="trace-1669"></a>
<a id="trace-1703"></a>
<a id="trace-1705"></a>
<a id="trace-1741"></a>
<a id="trace-1743"></a>
<a id="trace-1784"></a>
<a id="trace-1786"></a>
<a id="trace-1819"></a>
<a id="trace-1821"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-2080"></a>
<a id="trace-2082"></a>
<a id="trace-2112"></a>
<a id="trace-2114"></a>
<a id="trace-2204"></a>
<a id="trace-2206"></a>
<a id="trace-2230"></a>
<a id="trace-2232"></a>
<a id="trace-2267"></a>
<a id="trace-2269"></a>
<a id="trace-2307"></a>
<a id="trace-2309"></a>
<a id="trace-2331"></a>
<a id="trace-2333"></a>
<a id="trace-2473"></a>
<a id="trace-2475"></a>
<a id="trace-2508"></a>
<a id="trace-2510"></a>
<a id="trace-2542"></a>
<a id="trace-2544"></a>
<a id="trace-2584"></a>
<a id="trace-2586"></a>
<a id="trace-2606"></a>
<a id="trace-2608"></a>
<a id="trace-2721"></a>
<a id="trace-2723"></a>
<a id="trace-2752"></a>
<a id="trace-2754"></a>
<a id="trace-2782"></a>
<a id="trace-2784"></a>
<a id="trace-2805"></a>
<a id="trace-2807"></a>
<a id="trace-2840"></a>
<a id="trace-2842"></a>
<a id="trace-2855"></a>
<a id="trace-2857"></a>
<a id="trace-2879"></a>
<a id="trace-2881"></a>
<a id="trace-2894"></a>
<a id="trace-2896"></a>
<a id="trace-3271"></a>
<a id="trace-3273"></a>
<a id="trace-3298"></a>
<a id="trace-3300"></a>
<a id="trace-3392"></a>
<a id="trace-3394"></a>
<a id="trace-3416"></a>
<a id="trace-3418"></a>
<a id="trace-3764"></a>
<a id="trace-3766"></a>
<a id="trace-3812"></a>
<a id="trace-3814"></a>
<a id="trace-3854"></a>
<a id="trace-3856"></a>
<a id="trace-3889"></a>
<a id="trace-3891"></a>
<a id="trace-3921"></a>
<a id="trace-3923"></a>
<a id="trace-3956"></a>
<a id="trace-3958"></a>
<a id="trace-3973"></a>
<a id="trace-3975"></a>
<a id="trace-3988"></a>
<a id="trace-3990"></a>
<a id="trace-4086"></a>
<a id="trace-4088"></a>
<a id="trace-4105"></a>
<a id="trace-4107"></a>
<a id="trace-4129"></a>
<a id="trace-4131"></a>
<a id="trace-4148"></a>
<a id="trace-4150"></a>
<a id="trace-4182"></a>
<a id="trace-4184"></a>
<a id="trace-4205"></a>
<a id="trace-4207"></a>
<a id="trace-4228"></a>
<a id="trace-4230"></a>
<a id="trace-4244"></a>
<a id="trace-4246"></a>
<a id="trace-4262"></a>
<a id="trace-4264"></a>
<a id="trace-4272"></a>
<a id="trace-4274"></a>
<a id="trace-4352"></a>
<a id="trace-4354"></a>
<a id="trace-4473"></a>
<a id="trace-4475"></a>
<a id="trace-4498"></a>
<a id="trace-4500"></a>
<a id="trace-4521"></a>
<a id="trace-4523"></a>
<a id="trace-4546"></a>
<a id="trace-4548"></a>
<a id="trace-4907"></a>
<a id="trace-4909"></a>
<a id="trace-4942"></a>
<a id="trace-4944"></a>
<a id="trace-4965"></a>
<a id="trace-4967"></a>
<a id="trace-4986"></a>
<a id="trace-4988"></a>
<a id="trace-4999"></a>
<a id="trace-5001"></a>
<a id="trace-5091"></a>
<a id="trace-5093"></a>
<a id="trace-5111"></a>
<a id="trace-5113"></a>
<a id="trace-5128"></a>
<a id="trace-5130"></a>
<a id="trace-5541"></a>
<a id="trace-5543"></a>
<a id="trace-5574"></a>
<a id="trace-5576"></a>
<a id="trace-5598"></a>
<a id="trace-5600"></a>
<a id="trace-5623"></a>
<a id="trace-5625"></a>
<a id="trace-5637"></a>
<a id="trace-5639"></a>
<a id="trace-5668"></a>
<a id="trace-5670"></a>
<a id="trace-5687"></a>
<a id="trace-5689"></a>
<a id="trace-5766"></a>
<a id="trace-5768"></a>
<a id="trace-5785"></a>
<a id="trace-5787"></a>
<a id="trace-5808"></a>
<a id="trace-5810"></a>
<a id="trace-5822"></a>
<a id="trace-5824"></a>
<a id="trace-5846"></a>
<a id="trace-5848"></a>
<a id="trace-5861"></a>
<a id="trace-5863"></a>
<a id="trace-5892"></a>
<a id="trace-5894"></a>
<a id="trace-5914"></a>
<a id="trace-5916"></a>
<a id="trace-5944"></a>
<a id="trace-5946"></a>
<a id="trace-5978"></a>
<a id="trace-5980"></a>
<a id="trace-6062"></a>
<a id="trace-6064"></a>
<a id="trace-6089"></a>
<a id="trace-6091"></a>
<a id="trace-6117"></a>
<a id="trace-6119"></a>
<a id="trace-6138"></a>
<a id="trace-6140"></a>
<a id="trace-6314"></a>
<a id="trace-6316"></a>
<a id="trace-6337"></a>
<a id="trace-6339"></a>
<a id="trace-6365"></a>
<a id="trace-6367"></a>
<a id="trace-6386"></a>
<a id="trace-6388"></a>
<a id="trace-6409"></a>
<a id="trace-6411"></a>
<a id="trace-6428"></a>
<a id="trace-6430"></a>
<a id="trace-6508"></a>
<a id="trace-6510"></a>
<a id="trace-6520"></a>
<a id="trace-6522"></a>
<a id="trace-6722"></a>
<a id="trace-6724"></a>
<a id="trace-6744"></a>
<a id="trace-6746"></a>
<a id="trace-6785"></a>
<a id="trace-6787"></a>
<a id="trace-6811"></a>
<a id="trace-6813"></a>
<a id="trace-6840"></a>
<a id="trace-6842"></a>
<a id="trace-6876"></a>
<a id="trace-6878"></a>
<a id="trace-6896"></a>
<a id="trace-6898"></a>
<a id="trace-6915"></a>
<a id="trace-6917"></a>
<a id="trace-6996"></a>
<a id="trace-6998"></a>
<a id="trace-7013"></a>
<a id="trace-7015"></a>
<a id="trace-8752"></a>
<a id="trace-8754"></a>
<a id="trace-8767"></a>
<a id="trace-8769"></a>
<a id="trace-8803"></a>
<a id="trace-8805"></a>
<a id="trace-8820"></a>
<a id="trace-8822"></a>
<a id="trace-8844"></a>
<a id="trace-8846"></a>
<a id="trace-8859"></a>
<a id="trace-8861"></a>
<a id="trace-8882"></a>
<a id="trace-8884"></a>
<a id="trace-8896"></a>
<a id="trace-8898"></a>
<a id="trace-8979"></a>
<a id="trace-8981"></a>
<a id="trace-8993"></a>
<a id="trace-8995"></a>
<a id="trace-9023"></a>
<a id="trace-9025"></a>
<a id="trace-9037"></a>
<a id="trace-9039"></a>
<a id="trace-9065"></a>
<a id="trace-9067"></a>
<a id="trace-9081"></a>
<a id="trace-9083"></a>
<a id="trace-9106"></a>
<a id="trace-9108"></a>
<a id="trace-9279"></a>
<a id="trace-9281"></a>
<a id="trace-9302"></a>
<a id="trace-9304"></a>
<a id="trace-9325"></a>
<a id="trace-9327"></a>
<a id="trace-9460"></a>
<a id="trace-9462"></a>
<a id="trace-9480"></a>
<a id="trace-9482"></a>
<a id="trace-9502"></a>
<a id="trace-9504"></a>
<a id="trace-9523"></a>
<a id="trace-9525"></a>
<a id="trace-9560"></a>
<a id="trace-9562"></a>
<a id="trace-9578"></a>
<a id="trace-9580"></a>
<a id="trace-9601"></a>
<a id="trace-9603"></a>
<a id="trace-9615"></a>
<a id="trace-9617"></a>
<a id="trace-9643"></a>
<a id="trace-9645"></a>
<a id="trace-9661"></a>
<a id="trace-9663"></a>
<a id="trace-9747"></a>
<a id="trace-9749"></a>
<a id="trace-9764"></a>
<a id="trace-9766"></a>
<a id="trace-9793"></a>
<a id="trace-9795"></a>
<a id="trace-9810"></a>
<a id="trace-9812"></a>
<a id="trace-9861"></a>
<a id="trace-9863"></a>
<a id="trace-10420"></a>
<a id="trace-10422"></a>
<a id="trace-10646"></a>
<a id="trace-10648"></a>
<a id="trace-10696"></a>
<a id="trace-10698"></a>
<a id="trace-10738"></a>
<a id="trace-10740"></a>
<a id="trace-10778"></a>
<a id="trace-10780"></a>
<a id="trace-10871"></a>
<a id="trace-10873"></a>
<a id="trace-10909"></a>
<a id="trace-10911"></a>
<a id="trace-10938"></a>
<a id="trace-10940"></a>
<a id="trace-10964"></a>
<a id="trace-10966"></a>
<a id="trace-10994"></a>
<a id="trace-10996"></a>
<a id="trace-11012"></a>
<a id="trace-11014"></a>
<a id="trace-12957"></a>
<a id="trace-12959"></a>
<a id="trace-13369"></a>
<a id="trace-13371"></a>
<a id="trace-13395"></a>
<a id="trace-13397"></a>
<a id="trace-13425"></a>
<a id="trace-13427"></a>
<a id="trace-13519"></a>
<a id="trace-13521"></a>
<a id="trace-13543"></a>
<a id="trace-13545"></a>
<a id="trace-13573"></a>
<a id="trace-13575"></a>
<a id="trace-13592"></a>
<a id="trace-13594"></a>
<a id="trace-13630"></a>
<a id="trace-13632"></a>
<a id="trace-13649"></a>
<a id="trace-13651"></a>
<a id="trace-13671"></a>
<a id="trace-13673"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13869"></a>
<a id="trace-13871"></a>
<a id="trace-13901"></a>
<a id="trace-13903"></a>
<a id="trace-13990"></a>
<a id="trace-13992"></a>
<a id="trace-14008"></a>
<a id="trace-14010"></a>
<a id="trace-15994"></a>
<a id="trace-15996"></a>
<a id="trace-16017"></a>
<a id="trace-16019"></a>
<a id="trace-16041"></a>
<a id="trace-16043"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16084"></a>
<a id="trace-16086"></a>
<a id="trace-16224"></a>
<a id="trace-16226"></a>
<a id="trace-16246"></a>
<a id="trace-16248"></a>
<a id="trace-16346"></a>
<a id="trace-16348"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16448"></a>
<a id="trace-16450"></a>
<a id="trace-16471"></a>
<a id="trace-16473"></a>
<a id="trace-16490"></a>
<a id="trace-16492"></a>
<a id="trace-16531"></a>
<a id="trace-16533"></a>
<a id="trace-16545"></a>
<a id="trace-16547"></a>
<a id="trace-16570"></a>
<a id="trace-16572"></a>
<a id="trace-16599"></a>
<a id="trace-16601"></a>
<a id="trace-16616"></a>
<a id="trace-16618"></a>
<a id="trace-16631"></a>
<a id="trace-16633"></a>
<a id="trace-16711"></a>
<a id="trace-16713"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16755"></a>
<a id="trace-16757"></a>
<a id="trace-16768"></a>
<a id="trace-16770"></a>
<a id="trace-16794"></a>
<a id="trace-16796"></a>
<a id="trace-16809"></a>
<a id="trace-16811"></a>
<a id="trace-16833"></a>
<a id="trace-16835"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16871"></a>
<a id="trace-16873"></a>
<a id="trace-16892"></a>
<a id="trace-16894"></a>
<a id="trace-16970"></a>
<a id="trace-16972"></a>
<a id="trace-16984"></a>
<a id="trace-16986"></a>
<a id="trace-17060"></a>
<a id="trace-17062"></a>
<a id="trace-17075"></a>
<a id="trace-17077"></a>
<a id="trace-17092"></a>
<a id="trace-17094"></a>
<a id="trace-17105"></a>
<a id="trace-17107"></a>
<a id="trace-17124"></a>
<a id="trace-17126"></a>
<a id="trace-17138"></a>
<a id="trace-17140"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17168"></a>
<a id="trace-17170"></a>
<a id="trace-17242"></a>
<a id="trace-17244"></a>
<a id="trace-17253"></a>
<a id="trace-17255"></a>
<a id="trace-17265"></a>
<a id="trace-17267"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17305"></a>
<a id="trace-17307"></a>
<a id="trace-17322"></a>
<a id="trace-17324"></a>
<a id="trace-17333"></a>
<a id="trace-17335"></a>
<a id="trace-17351"></a>
<a id="trace-17353"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17433"></a>
<a id="trace-17435"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17490"></a>
<a id="trace-17492"></a>
<a id="trace-17499"></a>
<a id="trace-17501"></a>
<a id="trace-17520"></a>
<a id="trace-17522"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17548"></a>
<a id="trace-17550"></a>
<a id="trace-17558"></a>
<a id="trace-17560"></a>
<a id="trace-17569"></a>
<a id="trace-17571"></a>
<a id="trace-17578"></a>
<a id="trace-17580"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17685"></a>
<a id="trace-17687"></a>
<a id="trace-17703"></a>
<a id="trace-17705"></a>
<a id="trace-17711"></a>
<a id="trace-17713"></a>
<a id="trace-17731"></a>
<a id="trace-17733"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17753"></a>
<a id="trace-17755"></a>
<a id="trace-17763"></a>
<a id="trace-17765"></a>
<a id="trace-17779"></a>
<a id="trace-17781"></a>
<a id="trace-17790"></a>
<a id="trace-17792"></a>
<a id="trace-18021"></a>
<a id="trace-18023"></a>
<a id="trace-18039"></a>
<a id="trace-18041"></a>
<a id="trace-18067"></a>
<a id="trace-18069"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18105"></a>
<a id="trace-18107"></a>
<a id="trace-18129"></a>
<a id="trace-18131"></a>
<a id="trace-18147"></a>
<a id="trace-18149"></a>
<a id="trace-18165"></a>
<a id="trace-18167"></a>
<a id="trace-18180"></a>
<a id="trace-18182"></a>
<a id="trace-18194"></a>
<a id="trace-18196"></a>
<a id="trace-18270"></a>
<a id="trace-18272"></a>
<a id="trace-18282"></a>
<a id="trace-18284"></a>
<a id="trace-18296"></a>
<a id="trace-18298"></a>
<a id="trace-18310"></a>
<a id="trace-18312"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18355"></a>
<a id="trace-18357"></a>
<a id="trace-18368"></a>
<a id="trace-18370"></a>
<a id="trace-18380"></a>
<a id="trace-18382"></a>
<a id="trace-18401"></a>
<a id="trace-18403"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18489"></a>
<a id="trace-18491"></a>
<a id="trace-18501"></a>
<a id="trace-18503"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18542"></a>
<a id="trace-18544"></a>
<a id="trace-18560"></a>
<a id="trace-18562"></a>
<a id="trace-18574"></a>
<a id="trace-18576"></a>
<a id="trace-18594"></a>
<a id="trace-18596"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18626"></a>
<a id="trace-18628"></a>
<a id="trace-18637"></a>
<a id="trace-18639"></a>
<a id="trace-18718"></a>
<a id="trace-18720"></a>
<a id="trace-19016"></a>
<a id="trace-19018"></a>
<a id="trace-19033"></a>
<a id="trace-19035"></a>
<a id="trace-19053"></a>
<a id="trace-19055"></a>
<a id="trace-19071"></a>
<a id="trace-19073"></a>
<a id="trace-19087"></a>
<a id="trace-19089"></a>
<a id="trace-19106"></a>
<a id="trace-19108"></a>
<a id="trace-19121"></a>
<a id="trace-19123"></a>
<a id="trace-19141"></a>
<a id="trace-19143"></a>
<a id="trace-19151"></a>
<a id="trace-19153"></a>
<a id="trace-19403"></a>
<a id="trace-19405"></a>
<a id="trace-19421"></a>
<a id="trace-19423"></a>
<a id="trace-19434"></a>
<a id="trace-19436"></a>
<a id="trace-19455"></a>
<a id="trace-19457"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19484"></a>
<a id="trace-19486"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19522"></a>
<a id="trace-19524"></a>
<a id="trace-19540"></a>
<a id="trace-19542"></a>
<a id="trace-19550"></a>
<a id="trace-19552"></a>
<a id="trace-19627"></a>
<a id="trace-19629"></a>
<a id="trace-19662"></a>
<a id="trace-19664"></a>
<a id="trace-19697"></a>
<a id="trace-19699"></a>
<a id="trace-19717"></a>
<a id="trace-19719"></a>
<a id="trace-19750"></a>
<a id="trace-19752"></a>
<a id="trace-19776"></a>
<a id="trace-19778"></a>
<a id="trace-19798"></a>
<a id="trace-19800"></a>
<a id="trace-19832"></a>
<a id="trace-19834"></a>
<a id="trace-19851"></a>
<a id="trace-19853"></a>
<a id="trace-19865"></a>
<a id="trace-19867"></a>
<a id="trace-19944"></a>
<a id="trace-19946"></a>
<a id="trace-19960"></a>
<a id="trace-19962"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20001"></a>
<a id="trace-20003"></a>
<a id="trace-20075"></a>
<a id="trace-20077"></a>
<a id="trace-20091"></a>
<a id="trace-20093"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20125"></a>
<a id="trace-20127"></a>
<a id="trace-20139"></a>
<a id="trace-20141"></a>
<a id="trace-20148"></a>
<a id="trace-20150"></a>
<a id="trace-20221"></a>
<a id="trace-20223"></a>
<a id="trace-20233"></a>
<a id="trace-20235"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20264"></a>
<a id="trace-20266"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20292"></a>
<a id="trace-20294"></a>
<a id="trace-20306"></a>
<a id="trace-20308"></a>
<a id="trace-20321"></a>
<a id="trace-20323"></a>
<a id="trace-20334"></a>
<a id="trace-20336"></a>
<a id="trace-20345"></a>
<a id="trace-20347"></a>
<a id="trace-20417"></a>
<a id="trace-20419"></a>
<a id="trace-20427"></a>
<a id="trace-20429"></a>
<a id="trace-20443"></a>
<a id="trace-20445"></a>
<a id="trace-20453"></a>
<a id="trace-20455"></a>
<a id="trace-20467"></a>
<a id="trace-20469"></a>
<a id="trace-20478"></a>
<a id="trace-20480"></a>
<a id="trace-20491"></a>
<a id="trace-20493"></a>
<a id="trace-20505"></a>
<a id="trace-20507"></a>
<a id="trace-20516"></a>
<a id="trace-20518"></a>
<a id="trace-20525"></a>
<a id="trace-20527"></a>
<a id="trace-20596"></a>
<a id="trace-20598"></a>
<a id="trace-20606"></a>
<a id="trace-20608"></a>
<a id="trace-20623"></a>
<a id="trace-20625"></a>
<a id="trace-20636"></a>
<a id="trace-20638"></a>
<a id="trace-20650"></a>
<a id="trace-20652"></a>
<a id="trace-20661"></a>
<a id="trace-20663"></a>
<a id="trace-20674"></a>
<a id="trace-20676"></a>
<a id="trace-20688"></a>
<a id="trace-20690"></a>
<a id="trace-20699"></a>
<a id="trace-20701"></a>
<a id="trace-20710"></a>
<a id="trace-20712"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20792"></a>
<a id="trace-20794"></a>
<a id="trace-20813"></a>
<a id="trace-20815"></a>
<a id="trace-20825"></a>
<a id="trace-20827"></a>
<a id="trace-20839"></a>
<a id="trace-20841"></a>
<a id="trace-20851"></a>
<a id="trace-20853"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
<a id="trace-20878"></a>
<a id="trace-20880"></a>
<a id="trace-20891"></a>
<a id="trace-20893"></a>
<a id="trace-20901"></a>
<a id="trace-20903"></a>
<a id="trace-20971"></a>
<a id="trace-20973"></a>
<a id="trace-20983"></a>
<a id="trace-20985"></a>
<a id="trace-21003"></a>
<a id="trace-21005"></a>
<a id="trace-21014"></a>
<a id="trace-21016"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21071"></a>
<a id="trace-21073"></a>
<a id="trace-21084"></a>
<a id="trace-21086"></a>
<a id="trace-21099"></a>
<a id="trace-21101"></a>
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21180"></a>
<a id="trace-21182"></a>
<a id="trace-21189"></a>
<a id="trace-21191"></a>
<a id="trace-21203"></a>
<a id="trace-21205"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21228"></a>
<a id="trace-21230"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21253"></a>
<a id="trace-21255"></a>
<a id="trace-21268"></a>
<a id="trace-21270"></a>
<a id="trace-21286"></a>
<a id="trace-21288"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21366"></a>
<a id="trace-21368"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21419"></a>
<a id="trace-21421"></a>
<a id="trace-21430"></a>
<a id="trace-21432"></a>
<a id="trace-21443"></a>
<a id="trace-21445"></a>
<a id="trace-21454"></a>
<a id="trace-21456"></a>
<a id="trace-21469"></a>
<a id="trace-21471"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21550"></a>
<a id="trace-21552"></a>
<a id="trace-21565"></a>
<a id="trace-21567"></a>
<a id="trace-21581"></a>
<a id="trace-21583"></a>
<a id="trace-21594"></a>
<a id="trace-21596"></a>
<a id="trace-21612"></a>
<a id="trace-21614"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21768"></a>
<a id="trace-21770"></a>
<a id="trace-21784"></a>
<a id="trace-21786"></a>
<a id="trace-21797"></a>
<a id="trace-21799"></a>
<a id="trace-21805"></a>
<a id="trace-21807"></a>
<a id="trace-21880"></a>
<a id="trace-21882"></a>
<a id="trace-21896"></a>
<a id="trace-21898"></a>
<a id="trace-21908"></a>
<a id="trace-21910"></a>
<a id="trace-21973"></a>
<a id="trace-21975"></a>
<a id="trace-22001"></a>
<a id="trace-22003"></a>
<a id="trace-22011"></a>
<a id="trace-22013"></a>
<a id="trace-22025"></a>
<a id="trace-22027"></a>
<a id="trace-22043"></a>
<a id="trace-22045"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22081"></a>
<a id="trace-22083"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22158"></a>
<a id="trace-22160"></a>
<a id="trace-22178"></a>
<a id="trace-22180"></a>
<a id="trace-22189"></a>
<a id="trace-22191"></a>
<a id="trace-22208"></a>
<a id="trace-22210"></a>
<a id="trace-22219"></a>
<a id="trace-22221"></a>
<a id="trace-22237"></a>
<a id="trace-22239"></a>
<a id="trace-22257"></a>
<a id="trace-22259"></a>
<a id="trace-22273"></a>
<a id="trace-22275"></a>
<a id="trace-22281"></a>
<a id="trace-22283"></a>
<a id="trace-22358"></a>
<a id="trace-22360"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22378"></a>
<a id="trace-22380"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22406"></a>
<a id="trace-22408"></a>
<a id="trace-22423"></a>
<a id="trace-22425"></a>
<a id="trace-22438"></a>
<a id="trace-22440"></a>
<a id="trace-22448"></a>
<a id="trace-22450"></a>
<a id="trace-22471"></a>
<a id="trace-22473"></a>
<a id="trace-22477"></a>
<a id="trace-22479"></a>
<a id="trace-22546"></a>
<a id="trace-22548"></a>
<a id="trace-22558"></a>
<a id="trace-22560"></a>
<a id="trace-22569"></a>
<a id="trace-22571"></a>
<a id="trace-22582"></a>
<a id="trace-22584"></a>
<a id="trace-22597"></a>
<a id="trace-22599"></a>
<a id="trace-22605"></a>
<a id="trace-22607"></a>
<a id="trace-22621"></a>
<a id="trace-22623"></a>
<a id="trace-22635"></a>
<a id="trace-22637"></a>
<a id="trace-22651"></a>
<a id="trace-22653"></a>
<a id="trace-22657"></a>
<a id="trace-22659"></a>
<a id="trace-22722"></a>
<a id="trace-22724"></a>
<a id="trace-22729"></a>
<a id="trace-22731"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22753"></a>
<a id="trace-22755"></a>
<a id="trace-22773"></a>
<a id="trace-22775"></a>
<a id="trace-22781"></a>
<a id="trace-22783"></a>
<a id="trace-22793"></a>
<a id="trace-22795"></a>
<a id="trace-22806"></a>
<a id="trace-22808"></a>
<a id="trace-22822"></a>
<a id="trace-22824"></a>
<a id="trace-22833"></a>
<a id="trace-22835"></a>
<a id="trace-22901"></a>
<a id="trace-22903"></a>
<a id="trace-22913"></a>
<a id="trace-22915"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22931"></a>
<a id="trace-22933"></a>
<a id="trace-22946"></a>
<a id="trace-22948"></a>
<a id="trace-22954"></a>
<a id="trace-22956"></a>
<a id="trace-22966"></a>
<a id="trace-22968"></a>
<a id="trace-22979"></a>
<a id="trace-22981"></a>
<a id="trace-22988"></a>
<a id="trace-22990"></a>
<a id="trace-22997"></a>
<a id="trace-22999"></a>
<a id="trace-23062"></a>
<a id="trace-23064"></a>
<a id="trace-23073"></a>
<a id="trace-23075"></a>
<a id="trace-23090"></a>
<a id="trace-23092"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23122"></a>
<a id="trace-23124"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23140"></a>
<a id="trace-23142"></a>
<a id="trace-23152"></a>
<a id="trace-23154"></a>
<a id="trace-23161"></a>
<a id="trace-23163"></a>
<a id="trace-23171"></a>
<a id="trace-23173"></a>
<a id="trace-23240"></a>
<a id="trace-23242"></a>
<a id="trace-23245"></a>
<a id="trace-23247"></a>
<a id="trace-23257"></a>
<a id="trace-23259"></a>
<a id="trace-23267"></a>
<a id="trace-23269"></a>
<a id="trace-23285"></a>
<a id="trace-23287"></a>
<a id="trace-23300"></a>
<a id="trace-23302"></a>
<a id="trace-23313"></a>
<a id="trace-23315"></a>
<a id="trace-23322"></a>
<a id="trace-23324"></a>
<a id="trace-23337"></a>
<a id="trace-23339"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23411"></a>
<a id="trace-23413"></a>
<a id="trace-23417"></a>
<a id="trace-23419"></a>
<a id="trace-23429"></a>
<a id="trace-23431"></a>
<a id="trace-23437"></a>
<a id="trace-23439"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23465"></a>
<a id="trace-23467"></a>
<a id="trace-23475"></a>
<a id="trace-23477"></a>
<a id="trace-23486"></a>
<a id="trace-23488"></a>
<a id="trace-23505"></a>
<a id="trace-23507"></a>
<a id="trace-23513"></a>
<a id="trace-23515"></a>
<a id="trace-23580"></a>
<a id="trace-23582"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23601"></a>
<a id="trace-23603"></a>
<a id="trace-23610"></a>
<a id="trace-23612"></a>
<a id="trace-23624"></a>
<a id="trace-23626"></a>
<a id="trace-23632"></a>
<a id="trace-23634"></a>
<a id="trace-23644"></a>
<a id="trace-23646"></a>
<a id="trace-23657"></a>
<a id="trace-23659"></a>
<a id="trace-23667"></a>
<a id="trace-23669"></a>
<a id="trace-23675"></a>
<a id="trace-23677"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23752"></a>
<a id="trace-23754"></a>
<a id="trace-23766"></a>
<a id="trace-23768"></a>
<a id="trace-23780"></a>
<a id="trace-23782"></a>
<a id="trace-23799"></a>
<a id="trace-23801"></a>
<a id="trace-23807"></a>
<a id="trace-23809"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23828"></a>
<a id="trace-23830"></a>
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23851"></a>
<a id="trace-23853"></a>
<a id="trace-23919"></a>
<a id="trace-23921"></a>
<a id="trace-23926"></a>
<a id="trace-23928"></a>
<a id="trace-23938"></a>
<a id="trace-23940"></a>
<a id="trace-23946"></a>
<a id="trace-23948"></a>
<a id="trace-23965"></a>
<a id="trace-23967"></a>
<a id="trace-23976"></a>
<a id="trace-23978"></a>
<a id="trace-23989"></a>
<a id="trace-23991"></a>
<a id="trace-24007"></a>
<a id="trace-24009"></a>
<a id="trace-24071"></a>
<a id="trace-24073"></a>
<a id="trace-24076"></a>
<a id="trace-24078"></a>
<a id="trace-24150"></a>
<a id="trace-24152"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
<a id="trace-24178"></a>
<a id="trace-24180"></a>
<a id="trace-24191"></a>
<a id="trace-24193"></a>
<a id="trace-24208"></a>
<a id="trace-24210"></a>
<a id="trace-24218"></a>
<a id="trace-24220"></a>
<a id="trace-24229"></a>
<a id="trace-24231"></a>
<a id="trace-24244"></a>
<a id="trace-24246"></a>
<a id="trace-24263"></a>
<a id="trace-24265"></a>
<a id="trace-24275"></a>
<a id="trace-24277"></a>
<a id="trace-24355"></a>
<a id="trace-24357"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
<a id="trace-24378"></a>
<a id="trace-24380"></a>
<a id="trace-24390"></a>
<a id="trace-24392"></a>
<a id="trace-24402"></a>
<a id="trace-24404"></a>
<a id="trace-24413"></a>
<a id="trace-24415"></a>
<a id="trace-24435"></a>
<a id="trace-24437"></a>
<a id="trace-24448"></a>
<a id="trace-24450"></a>
<a id="trace-24464"></a>
<a id="trace-24466"></a>
<a id="trace-24473"></a>
<a id="trace-24475"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24562"></a>
<a id="trace-24564"></a>
<a id="trace-24579"></a>
<a id="trace-24581"></a>
<a id="trace-24592"></a>
<a id="trace-24594"></a>
<a id="trace-24617"></a>
<a id="trace-24619"></a>
<a id="trace-24629"></a>
<a id="trace-24631"></a>
<a id="trace-24648"></a>
<a id="trace-24650"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24678"></a>
<a id="trace-24680"></a>
<a id="trace-24684"></a>
<a id="trace-24686"></a>
<a id="trace-24753"></a>
<a id="trace-24755"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24773"></a>
<a id="trace-24775"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24804"></a>
<a id="trace-24806"></a>
<a id="trace-24812"></a>
<a id="trace-24814"></a>
<a id="trace-24826"></a>
<a id="trace-24828"></a>
<a id="trace-24844"></a>
<a id="trace-24846"></a>
<a id="trace-24855"></a>
<a id="trace-24857"></a>
<a id="trace-24860"></a>
<a id="trace-24862"></a>
<a id="trace-24927"></a>
<a id="trace-24929"></a>
<a id="trace-24933"></a>
<a id="trace-24935"></a>
<a id="trace-24945"></a>
<a id="trace-24947"></a>
<a id="trace-24958"></a>
<a id="trace-24960"></a>
<a id="trace-24972"></a>
<a id="trace-24974"></a>
<a id="trace-24982"></a>
<a id="trace-24984"></a>
<a id="trace-24994"></a>
<a id="trace-24996"></a>
<a id="trace-25007"></a>
<a id="trace-25009"></a>
<a id="trace-25022"></a>
<a id="trace-25024"></a>
<a id="trace-25031"></a>
<a id="trace-25033"></a>
<a id="trace-25106"></a>
<a id="trace-25108"></a>
<a id="trace-25112"></a>
<a id="trace-25114"></a>
<a id="trace-25121"></a>
<a id="trace-25123"></a>
<a id="trace-25131"></a>
<a id="trace-25133"></a>
<a id="trace-25143"></a>
<a id="trace-25145"></a>
<a id="trace-25154"></a>
<a id="trace-25156"></a>
<a id="trace-25168"></a>
<a id="trace-25170"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25194"></a>
<a id="trace-25196"></a>
<a id="trace-25265"></a>
<a id="trace-25267"></a>
<a id="trace-25275"></a>
<a id="trace-25277"></a>
<a id="trace-25288"></a>
<a id="trace-25290"></a>
<a id="trace-25305"></a>
<a id="trace-25307"></a>
<a id="trace-25317"></a>
<a id="trace-25319"></a>
<a id="trace-25326"></a>
<a id="trace-25328"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25347"></a>
<a id="trace-25349"></a>
<a id="trace-25359"></a>
<a id="trace-25361"></a>
<a id="trace-25369"></a>
<a id="trace-25371"></a>
<a id="trace-25433"></a>
<a id="trace-25435"></a>
<a id="trace-25441"></a>
<a id="trace-25443"></a>
<a id="trace-25451"></a>
<a id="trace-25453"></a>
<a id="trace-25464"></a>
<a id="trace-25466"></a>
<a id="trace-25481"></a>
<a id="trace-25483"></a>
<a id="trace-25493"></a>
<a id="trace-25495"></a>
<a id="trace-25512"></a>
<a id="trace-25514"></a>
<a id="trace-25523"></a>
<a id="trace-25525"></a>
<a id="trace-25534"></a>
<a id="trace-25536"></a>
<a id="trace-25541"></a>
<a id="trace-25543"></a>
<a id="trace-25605"></a>
<a id="trace-25607"></a>
<a id="trace-25613"></a>
<a id="trace-25615"></a>
<a id="trace-25628"></a>
<a id="trace-25630"></a>
<a id="trace-25637"></a>
<a id="trace-25639"></a>
<a id="trace-25652"></a>
<a id="trace-25654"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25673"></a>
<a id="trace-25675"></a>
<a id="trace-25688"></a>
<a id="trace-25690"></a>
<a id="trace-25702"></a>
<a id="trace-25704"></a>
<a id="trace-25709"></a>
<a id="trace-25711"></a>
<a id="trace-25783"></a>
<a id="trace-25785"></a>
<a id="trace-25788"></a>
<a id="trace-25790"></a>
<a id="trace-25800"></a>
<a id="trace-25802"></a>
<a id="trace-25808"></a>
<a id="trace-25810"></a>
<a id="trace-25823"></a>
<a id="trace-25825"></a>
<a id="trace-25830"></a>
<a id="trace-25832"></a>
<a id="trace-25843"></a>
<a id="trace-25845"></a>
<a id="trace-25855"></a>
<a id="trace-25857"></a>
<a id="trace-25866"></a>
<a id="trace-25868"></a>
<a id="trace-25873"></a>
<a id="trace-25875"></a>
<a id="trace-25946"></a>
<a id="trace-25948"></a>
<a id="trace-25951"></a>
<a id="trace-25953"></a>
<a id="trace-25965"></a>
<a id="trace-25967"></a>
<a id="trace-25982"></a>
<a id="trace-25984"></a>
<a id="trace-25995"></a>
<a id="trace-25997"></a>
<a id="trace-26002"></a>
<a id="trace-26004"></a>
<a id="trace-26014"></a>
<a id="trace-26016"></a>
<a id="trace-26024"></a>
<a id="trace-26026"></a>
<a id="trace-26037"></a>
<a id="trace-26039"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26115"></a>
<a id="trace-26117"></a>
<a id="trace-26121"></a>
<a id="trace-26123"></a>
<a id="trace-26133"></a>
<a id="trace-26135"></a>
<a id="trace-26145"></a>
<a id="trace-26147"></a>
<a id="trace-26162"></a>
<a id="trace-26164"></a>
<a id="trace-26172"></a>
<a id="trace-26174"></a>
<a id="trace-26193"></a>
<a id="trace-26195"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26214"></a>
<a id="trace-26216"></a>
<a id="trace-26223"></a>
<a id="trace-26225"></a>
<a id="trace-26288"></a>
<a id="trace-26290"></a>
<a id="trace-26295"></a>
<a id="trace-26297"></a>
<a id="trace-26309"></a>
<a id="trace-26311"></a>
<a id="trace-26317"></a>
<a id="trace-26319"></a>
<a id="trace-26331"></a>
<a id="trace-26333"></a>
<a id="trace-26338"></a>
<a id="trace-26340"></a>
<a id="trace-26354"></a>
<a id="trace-26356"></a>
<a id="trace-26368"></a>
<a id="trace-26370"></a>
<a id="trace-26396"></a>
<a id="trace-26398"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26466"></a>
<a id="trace-26468"></a>
<a id="trace-26478"></a>
<a id="trace-26480"></a>
<a id="trace-26486"></a>
<a id="trace-26488"></a>
<a id="trace-26500"></a>
<a id="trace-26502"></a>
<a id="trace-26510"></a>
<a id="trace-26512"></a>
<a id="trace-26520"></a>
<a id="trace-26522"></a>
<a id="trace-26532"></a>
<a id="trace-26534"></a>
<a id="trace-26543"></a>
<a id="trace-26545"></a>
<a id="trace-26554"></a>
<a id="trace-26556"></a>
<a id="trace-26624"></a>
<a id="trace-26626"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26653"></a>
<a id="trace-26655"></a>
<a id="trace-26662"></a>
<a id="trace-26664"></a>
<a id="trace-26674"></a>
<a id="trace-26676"></a>
<a id="trace-26683"></a>
<a id="trace-26685"></a>
<a id="trace-26693"></a>
<a id="trace-26695"></a>
<a id="trace-26705"></a>
<a id="trace-26707"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26727"></a>
<a id="trace-26729"></a>
<a id="trace-26794"></a>
<a id="trace-26796"></a>
<a id="trace-26813"></a>
<a id="trace-26815"></a>
<a id="trace-26826"></a>
<a id="trace-26828"></a>
<a id="trace-26843"></a>
<a id="trace-26845"></a>
<a id="trace-26850"></a>
<a id="trace-26852"></a>
<a id="trace-26869"></a>
<a id="trace-26871"></a>
<a id="trace-26878"></a>
<a id="trace-26880"></a>
<a id="trace-26890"></a>
<a id="trace-26892"></a>
<a id="trace-26896"></a>
<a id="trace-26898"></a>
<a id="trace-26963"></a>
<a id="trace-26965"></a>
<a id="trace-26970"></a>
<a id="trace-26972"></a>
<a id="trace-26984"></a>
<a id="trace-26986"></a>
<a id="trace-26994"></a>
<a id="trace-26996"></a>
<a id="trace-27006"></a>
<a id="trace-27008"></a>
<a id="trace-27015"></a>
<a id="trace-27017"></a>
<a id="trace-27033"></a>
<a id="trace-27035"></a>
<a id="trace-27042"></a>
<a id="trace-27044"></a>
<a id="trace-27057"></a>
<a id="trace-27059"></a>
<a id="trace-27073"></a>
<a id="trace-27075"></a>
<a id="trace-27137"></a>
<a id="trace-27139"></a>
<a id="trace-27154"></a>
<a id="trace-27156"></a>
<a id="trace-27163"></a>
<a id="trace-27165"></a>
<a id="trace-27177"></a>
<a id="trace-27179"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27199"></a>
<a id="trace-27201"></a>
<a id="trace-27208"></a>
<a id="trace-27210"></a>
<a id="trace-27220"></a>
<a id="trace-27222"></a>
<a id="trace-27231"></a>
<a id="trace-27233"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27310"></a>
<a id="trace-27312"></a>
<a id="trace-27330"></a>
<a id="trace-27332"></a>
<a id="trace-27339"></a>
<a id="trace-27341"></a>
<a id="trace-27351"></a>
<a id="trace-27353"></a>
<a id="trace-27360"></a>
<a id="trace-27362"></a>
<a id="trace-27370"></a>
<a id="trace-27372"></a>
<a id="trace-27381"></a>
<a id="trace-27383"></a>
<a id="trace-27395"></a>
<a id="trace-27397"></a>
<a id="trace-27401"></a>
<a id="trace-27403"></a>
<a id="trace-27468"></a>
<a id="trace-27470"></a>
<a id="trace-27475"></a>
<a id="trace-27477"></a>
<a id="trace-27491"></a>
<a id="trace-27493"></a>
<a id="trace-27504"></a>
<a id="trace-27506"></a>
<a id="trace-27532"></a>
<a id="trace-27534"></a>
<a id="trace-27543"></a>
<a id="trace-27545"></a>
<a id="trace-27552"></a>
<a id="trace-27554"></a>
<a id="trace-27565"></a>
<a id="trace-27567"></a>
<a id="trace-27571"></a>
<a id="trace-27573"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42199754025604697, 'next_transition': 728}.
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1080"></a>
<a id="trace-1082"></a>
<a id="trace-1111"></a>
<a id="trace-1113"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1176"></a>
<a id="trace-1178"></a>
<a id="trace-1214"></a>
<a id="trace-1216"></a>
<a id="trace-1306"></a>
<a id="trace-1308"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
- 5.70s–10.70s (×16), actor 5, squad 0 (trace 982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 887. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.640279256853108, 'next_transition': 1080}.
<a id="trace-1341"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1341): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1227. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37873927694671694, 'next_transition': 1663}.
<a id="trace-1663"></a>
<a id="trace-1665"></a>
<a id="trace-1699"></a>
<a id="trace-1701"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
- 11.20s–12.20s (×6), actor 5, squad 0 (trace 1663): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1232. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5323408760874606, 'next_transition': 1699}.
<a id="trace-162"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 162): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212041435272558, 'next_transition': 1780}.
<a id="trace-163"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 163): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14597039318262447, 'next_transition': 1858}.
<a id="trace-1745"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1745): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1745. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212041435272558, 'next_transition': 1780}.
<a id="trace-1746"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1746): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1746. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7212041435272558, 'next_transition': 1780}.
<a id="trace-1747"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1747): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1747. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14597039318262447, 'next_transition': 1858}.
<a id="trace-1748"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1748): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1748. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14597039318262447, 'next_transition': 1858}.
<a id="trace-1780"></a>
<a id="trace-1782"></a>
<a id="trace-1815"></a>
<a id="trace-1817"></a>
<a id="trace-1848"></a>
<a id="trace-1850"></a>
<a id="trace-2200"></a>
<a id="trace-2202"></a>
<a id="trace-2263"></a>
<a id="trace-2265"></a>
<a id="trace-2469"></a>
<a id="trace-2471"></a>
<a id="trace-2538"></a>
<a id="trace-2540"></a>
<a id="trace-2580"></a>
<a id="trace-2582"></a>
<a id="trace-2602"></a>
<a id="trace-2604"></a>
<a id="trace-2717"></a>
<a id="trace-2719"></a>
<a id="trace-2748"></a>
<a id="trace-2750"></a>
<a id="trace-2801"></a>
<a id="trace-2803"></a>
<a id="trace-2836"></a>
<a id="trace-2838"></a>
<a id="trace-2851"></a>
<a id="trace-2853"></a>
<a id="trace-2875"></a>
<a id="trace-2877"></a>
<a id="trace-2890"></a>
<a id="trace-2892"></a>
- 12.70s–23.75s (×32), actor 5, squad 0 (trace 1780): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1748. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.75858279115945, 'next_transition': 1815}.
<a id="trace-1858"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1858): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1235. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.701901109586261, 'next_transition': 2353}.
<a id="trace-2353"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2353): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2130. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.651057189688505, 'next_transition': 3420}.
<a id="trace-2354"></a>
- 17.60s–17.60s (×1), actor 8, squad 1 (trace 2354): received platoon directive. Knowledge: actor memory at 15.00s, trace 2130. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.651057189688505, 'next_transition': 3420}.
<a id="trace-2897"></a>
- 24.00s–24.00s (×1), actor 0, squad 0 (trace 2897): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2624. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3267}.
<a id="trace-2898"></a>
- 24.00s–24.00s (×1), actor 0, squad 0 (trace 2898): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2624. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3267}.
<a id="trace-3267"></a>
<a id="trace-3269"></a>
<a id="trace-3388"></a>
<a id="trace-3390"></a>
<a id="trace-3412"></a>
<a id="trace-3414"></a>
<a id="trace-3760"></a>
<a id="trace-3762"></a>
<a id="trace-3808"></a>
<a id="trace-3810"></a>
<a id="trace-3850"></a>
<a id="trace-3852"></a>
<a id="trace-3885"></a>
<a id="trace-3887"></a>
<a id="trace-3917"></a>
<a id="trace-3919"></a>
<a id="trace-3952"></a>
<a id="trace-3954"></a>
<a id="trace-4082"></a>
<a id="trace-4084"></a>
<a id="trace-4201"></a>
<a id="trace-4203"></a>
<a id="trace-4242"></a>
<a id="trace-4350"></a>
- 24.25s–35.25s (×24), actor 5, squad 0 (trace 3267): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2629. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7012200069292558, 'next_transition': 3388}.
<a id="trace-3420"></a>
- 25.80s–25.80s (×1), actor 8, squad 1 (trace 3420): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 3313. Next observer evidence: {'until': 26, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3578}.
<a id="trace-3578"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 3578): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3313. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.28327908704359017, 'next_transition': 4026}.
<a id="trace-3579"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 3579): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3313. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.28327908704359017, 'next_transition': 4026}.
<a id="trace-3580"></a>
- 26.05s–26.05s (×1), actor 8, squad 1 (trace 3580): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3313. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.28327908704359017, 'next_transition': 4026}.
<a id="trace-4026"></a>
- 30.05s–30.05s (×1), actor 9, squad 1 (trace 4026): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 4003. Next observer evidence: {'until': 41, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5117}.
<a id="trace-4357"></a>
- 35.25s–35.25s (×1), actor 1, squad 0 (trace 4357): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4281. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4469}.
<a id="trace-4469"></a>
<a id="trace-4471"></a>
<a id="trace-4494"></a>
<a id="trace-4496"></a>
<a id="trace-4517"></a>
<a id="trace-4519"></a>
<a id="trace-4542"></a>
<a id="trace-4544"></a>
- 35.75s–37.25s (×8), actor 5, squad 0 (trace 4469): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4285. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10380461132653532, 'next_transition': 4494}.
<a id="trace-4555"></a>
- 37.50s–37.50s (×1), actor 1, squad 0 (trace 4555): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4281. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0728472500286366, 'next_transition': 4903}.
<a id="trace-4556"></a>
- 37.50s–37.50s (×1), actor 1, squad 0 (trace 4556): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4281. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0728472500286366, 'next_transition': 4903}.
<a id="trace-4557"></a>
- 37.50s–37.50s (×1), actor 1, squad 0 (trace 4557): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4281. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0728472500286366, 'next_transition': 4903}.
<a id="trace-4903"></a>
<a id="trace-4905"></a>
<a id="trace-4963"></a>
<a id="trace-4984"></a>
<a id="trace-4997"></a>
<a id="trace-5089"></a>
<a id="trace-5107"></a>
<a id="trace-5109"></a>
<a id="trace-5124"></a>
<a id="trace-5126"></a>
- 37.75s–41.25s (×10), actor 5, squad 0 (trace 4903): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4285. Next observer evidence: {'until': 38.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5442894683406261, 'next_transition': 4963}.
<a id="trace-5117"></a>
- 41.05s–41.05s (×1), actor 9, squad 1 (trace 5117): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 40.00s, trace 5012. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 696}.
<a id="trace-5134"></a>
- 41.35s–41.35s (×1), actor 1, squad 0 (trace 5134): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 5005. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.018865924289137, 'next_transition': 5570}.
<a id="trace-5135"></a>
- 41.35s–41.35s (×1), actor 1, squad 0 (trace 5135): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 5005. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.018865924289137, 'next_transition': 5570}.
<a id="trace-5570"></a>
<a id="trace-5572"></a>
<a id="trace-5594"></a>
<a id="trace-5596"></a>
<a id="trace-5619"></a>
<a id="trace-5621"></a>
<a id="trace-5683"></a>
<a id="trace-5685"></a>
<a id="trace-5762"></a>
<a id="trace-5764"></a>
<a id="trace-5781"></a>
<a id="trace-5783"></a>
<a id="trace-5804"></a>
<a id="trace-5806"></a>
<a id="trace-5818"></a>
<a id="trace-5820"></a>
<a id="trace-5842"></a>
<a id="trace-5844"></a>
<a id="trace-5910"></a>
<a id="trace-5912"></a>
<a id="trace-5940"></a>
<a id="trace-5942"></a>
<a id="trace-5974"></a>
<a id="trace-5976"></a>
<a id="trace-6058"></a>
<a id="trace-6060"></a>
<a id="trace-6085"></a>
<a id="trace-6087"></a>
<a id="trace-6113"></a>
<a id="trace-6115"></a>
- 42.25s–51.25s (×30), actor 5, squad 0 (trace 5570): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5009. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4157087998125098, 'next_transition': 5594}.
<a id="trace-6128"></a>
- 51.70s–51.70s (×1), actor 1, squad 0 (trace 6128): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 5985. Next observer evidence: None.
<a id="trace-6129"></a>
- 51.70s–51.70s (×1), actor 1, squad 0 (trace 6129): NeedSupport. Knowledge: actor memory at 50.00s, trace 5985. Next observer evidence: None.
<a id="trace-6134"></a>
<a id="trace-6136"></a>
- 51.75s–51.75s (×2), actor 5, squad 0 (trace 6134): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5989. Next observer evidence: {'until': 51.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10499573800874067, 'next_transition': 6149}.
<a id="trace-6149"></a>
- 51.95s–51.95s (×1), actor 1, squad 0 (trace 6149): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 5985. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001074707949774, 'next_transition': 6310}.
<a id="trace-6154"></a>
- 51.95s–51.95s (×1), actor 1, squad 0 (trace 6154): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 5985. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001074707949774, 'next_transition': 6310}.
<a id="trace-6155"></a>
- 51.95s–51.95s (×1), actor 1, squad 0 (trace 6155): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 5985. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21001074707949774, 'next_transition': 6310}.
<a id="trace-6310"></a>
<a id="trace-6312"></a>
<a id="trace-6333"></a>
<a id="trace-6335"></a>
<a id="trace-6361"></a>
<a id="trace-6363"></a>
- 52.25s–53.25s (×6), actor 5, squad 0 (trace 6310): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 5989. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999432598154733, 'next_transition': 6333}.
<a id="trace-695"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (events line 695): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-696"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (events line 696): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6374"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 6374): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.199828 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 6374. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8004097175882464, 'next_transition': 6405}.
<a id="trace-6375"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 6375): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.199828 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 6375. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8004097175882464, 'next_transition': 6405}.
<a id="trace-6376"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 6376): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.199828 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 6376. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6763}.
<a id="trace-6377"></a>
- 53.65s–53.65s (×1), actor 5, squad 1 (trace 6377): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.199828 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 6377. Next observer evidence: {'until': 57, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6763}.
<a id="trace-6405"></a>
<a id="trace-6407"></a>
<a id="trace-6424"></a>
<a id="trace-6426"></a>
<a id="trace-6504"></a>
<a id="trace-6506"></a>
<a id="trace-6516"></a>
<a id="trace-6518"></a>
- 54.25s–55.75s (×8), actor 5, squad 0 (trace 6405): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.65s, trace 6377. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6313502980092286, 'next_transition': 6424}.
<a id="trace-6533"></a>
- 56.10s–56.10s (×1), actor 1, squad 0 (trace 6533): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 6433. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23445184711658687, 'next_transition': 6718}.
<a id="trace-6534"></a>
- 56.10s–56.10s (×1), actor 1, squad 0 (trace 6534): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 6433. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23445184711658687, 'next_transition': 6718}.
<a id="trace-6718"></a>
<a id="trace-6720"></a>
<a id="trace-6781"></a>
<a id="trace-6783"></a>
<a id="trace-6807"></a>
<a id="trace-6809"></a>
<a id="trace-6836"></a>
<a id="trace-6838"></a>
- 56.25s–58.25s (×8), actor 5, squad 0 (trace 6718): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6436. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47679963797580543, 'next_transition': 6781}.
<a id="trace-6763"></a>
- 57.05s–57.05s (×1), actor 9, squad 1 (trace 6763): new contact inside 100 m. Knowledge: actor memory at 55.00s, trace 6439. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7018}.
<a id="trace-6861"></a>
- 58.65s–58.65s (×1), actor 1, squad 0 (trace 6861): NeedSupport. Knowledge: actor memory at 55.00s, trace 6433. Next observer evidence: None.
<a id="trace-6872"></a>
<a id="trace-6874"></a>
<a id="trace-6911"></a>
<a id="trace-6913"></a>
<a id="trace-6992"></a>
<a id="trace-6994"></a>
<a id="trace-8748"></a>
<a id="trace-8750"></a>
<a id="trace-8763"></a>
<a id="trace-8765"></a>
<a id="trace-8799"></a>
<a id="trace-8801"></a>
<a id="trace-8816"></a>
<a id="trace-8818"></a>
<a id="trace-8840"></a>
<a id="trace-8842"></a>
<a id="trace-8855"></a>
<a id="trace-8857"></a>
<a id="trace-8878"></a>
<a id="trace-8880"></a>
<a id="trace-8892"></a>
<a id="trace-8894"></a>
<a id="trace-8975"></a>
<a id="trace-8977"></a>
<a id="trace-8989"></a>
<a id="trace-8991"></a>
<a id="trace-9019"></a>
<a id="trace-9021"></a>
<a id="trace-9033"></a>
<a id="trace-9035"></a>
<a id="trace-9061"></a>
<a id="trace-9063"></a>
<a id="trace-9077"></a>
<a id="trace-9079"></a>
<a id="trace-9102"></a>
<a id="trace-9104"></a>
- 58.75s–68.25s (×36), actor 5, squad 0 (trace 6872): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6436. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249969907426982, 'next_transition': 6911}.
<a id="trace-7018"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 7018): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 6927. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.590000112225795, 'next_transition': 9361}.
<a id="trace-7020"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 7020): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 6927. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.590000112225795, 'next_transition': 9361}.
<a id="trace-8673"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 8673): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 60.00s, trace 6927. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.590000112225795, 'next_transition': 9361}.
<a id="trace-8674"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 8674): MoveTactically. Knowledge: actor memory at 60.00s, trace 6927. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.590000112225795, 'next_transition': 9361}.
<a id="trace-8675"></a>
- 60.75s–60.75s (×1), actor 9, squad 1 (trace 8675): contact cover complete: assessment resumes closure. Knowledge: actor memory at 60.00s, trace 6927. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 24.590000112225795, 'next_transition': 9361}.
<a id="trace-9115"></a>
- 68.70s–68.70s (×1), actor 1, squad 0 (trace 9115): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 65.00s, trace 8907. Next observer evidence: None.
<a id="trace-9116"></a>
- 68.70s–68.70s (×1), actor 1, squad 0 (trace 9116): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 65.00s, trace 8907. Next observer evidence: None.
<a id="trace-9275"></a>
<a id="trace-9277"></a>
<a id="trace-9298"></a>
<a id="trace-9300"></a>
<a id="trace-9321"></a>
<a id="trace-9323"></a>
<a id="trace-9456"></a>
<a id="trace-9458"></a>
<a id="trace-9476"></a>
<a id="trace-9478"></a>
<a id="trace-9498"></a>
<a id="trace-9500"></a>
<a id="trace-9519"></a>
<a id="trace-9521"></a>
<a id="trace-9556"></a>
<a id="trace-9558"></a>
<a id="trace-9597"></a>
<a id="trace-9599"></a>
<a id="trace-9657"></a>
<a id="trace-9659"></a>
<a id="trace-9743"></a>
<a id="trace-9745"></a>
<a id="trace-9789"></a>
<a id="trace-9791"></a>
<a id="trace-9806"></a>
<a id="trace-9808"></a>
<a id="trace-9857"></a>
<a id="trace-9859"></a>
- 68.75s–77.25s (×28), actor 5, squad 0 (trace 9275): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 8910. Next observer evidence: {'until': 69.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250049762653564, 'next_transition': 9298}.
<a id="trace-9361"></a>
- 70.10s–70.10s (×1), actor 9, squad 1 (trace 9361): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 9345. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.43927236298944, 'next_transition': 9866}.
<a id="trace-9866"></a>
- 77.25s–77.25s (×1), actor 9, squad 1 (trace 9866): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 9674. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0046359605713278, 'next_transition': 10894}.
<a id="trace-9867"></a>
- 77.25s–77.25s (×1), actor 9, squad 1 (trace 9867): new contact inside 100 m. Knowledge: actor memory at 75.00s, trace 9674. Next observer evidence: {'until': 80.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.0046359605713278, 'next_transition': 10894}.
<a id="trace-10259"></a>
- 77.45s–77.45s (×1), actor 1, squad 0 (trace 10259): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 9668. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28435880617711284, 'next_transition': 10282}.
<a id="trace-10282"></a>
- 77.70s–77.70s (×1), actor 1, squad 0 (trace 10282): MoveTactically. Knowledge: actor memory at 75.00s, trace 9668. Next observer evidence: None.
<a id="trace-10283"></a>
- 77.70s–77.70s (×1), actor 1, squad 0 (trace 10283): received platoon directive. Knowledge: actor memory at 75.00s, trace 9668. Next observer evidence: None.
<a id="trace-10416"></a>
<a id="trace-10418"></a>
- 77.75s–77.75s (×2), actor 5, squad 0 (trace 10416): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9671. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4888701524270962, 'next_transition': 10473}.
<a id="trace-10473"></a>
- 78.20s–78.20s (×1), actor 1, squad 0 (trace 10473): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 75.00s, trace 9668. Next observer evidence: None.
<a id="trace-10642"></a>
<a id="trace-10644"></a>
<a id="trace-10692"></a>
<a id="trace-10694"></a>
<a id="trace-10734"></a>
<a id="trace-10736"></a>
<a id="trace-10774"></a>
<a id="trace-10776"></a>
<a id="trace-10867"></a>
<a id="trace-10869"></a>
<a id="trace-10905"></a>
<a id="trace-10907"></a>
<a id="trace-10960"></a>
<a id="trace-10962"></a>
<a id="trace-10990"></a>
<a id="trace-10992"></a>
<a id="trace-11008"></a>
<a id="trace-11010"></a>
<a id="trace-13391"></a>
<a id="trace-13393"></a>
<a id="trace-13421"></a>
<a id="trace-13423"></a>
<a id="trace-13515"></a>
<a id="trace-13517"></a>
<a id="trace-13539"></a>
<a id="trace-13541"></a>
<a id="trace-13569"></a>
<a id="trace-13571"></a>
<a id="trace-13626"></a>
<a id="trace-13628"></a>
<a id="trace-13645"></a>
<a id="trace-13647"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
- 78.25s–88.25s (×34), actor 5, squad 0 (trace 10642): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 9671. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15900268060991576, 'next_transition': 10692}.
<a id="trace-10894"></a>
- 80.55s–80.55s (×1), actor 9, squad 1 (trace 10894): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.34417110082952, 'next_transition': 1043}.
<a id="trace-1043"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (events line 1043): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10943"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 10943): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.034013 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 10943. Next observer evidence: {'until': 82.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.932293975306041, 'next_transition': 11025}.
<a id="trace-10944"></a>
- 81.30s–81.30s (×1), actor 5, squad 1 (trace 10944): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.034013 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 10944. Next observer evidence: {'until': 82.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.932293975306041, 'next_transition': 11025}.
<a id="trace-11025"></a>
- 82.95s–82.95s (×1), actor 9, squad 1 (trace 11025): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3850004331588109, 'next_transition': 12964}.
<a id="trace-12901"></a>
- 82.95s–82.95s (×1), actor 9, squad 1 (trace 12901): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3850004331588109, 'next_transition': 12964}.
<a id="trace-12902"></a>
- 82.95s–82.95s (×1), actor 9, squad 1 (trace 12902): MoveTactically. Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3850004331588109, 'next_transition': 12964}.
<a id="trace-12903"></a>
- 82.95s–82.95s (×1), actor 9, squad 1 (trace 12903): contact cover complete: assessment resumes closure. Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 83.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3850004331588109, 'next_transition': 12964}.
<a id="trace-12964"></a>
- 83.40s–83.40s (×1), actor 9, squad 1 (trace 12964): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 86.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6221724893468051, 'next_transition': 13597}.
<a id="trace-12965"></a>
- 83.40s–83.40s (×1), actor 9, squad 1 (trace 12965): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 80.00s, trace 10794. Next observer evidence: {'until': 86.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6221724893468051, 'next_transition': 13597}.
<a id="trace-13597"></a>
- 86.75s–86.75s (×1), actor 9, squad 1 (trace 13597): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 85.00s, trace 13446. Next observer evidence: {'until': 87.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13635}.
<a id="trace-13635"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 13635): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 13446. Next observer evidence: {'until': 90.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.8044966666666665, 'next_transition': 14013}.
<a id="trace-13636"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 13636): ; retain contact cover stage. Knowledge: actor memory at 85.00s, trace 13446. Next observer evidence: {'until': 90.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.8044966666666665, 'next_transition': 14013}.
<a id="trace-13678"></a>
- 88.45s–88.45s (×1), actor 1, squad 0 (trace 13678): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 13440. Next observer evidence: {'until': 88.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29499587721297144, 'next_transition': 13840}.
<a id="trace-13840"></a>
<a id="trace-13842"></a>
<a id="trace-13865"></a>
<a id="trace-13867"></a>
<a id="trace-13897"></a>
<a id="trace-13899"></a>
<a id="trace-13986"></a>
<a id="trace-13988"></a>
<a id="trace-14004"></a>
<a id="trace-14006"></a>
<a id="trace-15990"></a>
<a id="trace-15992"></a>
<a id="trace-16013"></a>
<a id="trace-16015"></a>
<a id="trace-16037"></a>
<a id="trace-16039"></a>
<a id="trace-16052"></a>
<a id="trace-16054"></a>
<a id="trace-16082"></a>
- 88.75s–93.25s (×19), actor 5, squad 0 (trace 13840): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13443. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4100007473424263, 'next_transition': 13865}.
<a id="trace-14013"></a>
- 90.75s–90.75s (×1), actor 10, squad 1 (trace 14013): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.878154414310302, 'next_transition': 16089}.
<a id="trace-15893"></a>
- 90.75s–90.75s (×1), actor 10, squad 1 (trace 15893): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.878154414310302, 'next_transition': 16089}.
<a id="trace-15894"></a>
- 90.75s–90.75s (×1), actor 10, squad 1 (trace 15894): MoveTactically. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.878154414310302, 'next_transition': 16089}.
<a id="trace-15895"></a>
- 90.75s–90.75s (×1), actor 10, squad 1 (trace 15895): contact cover complete: assessment resumes closure. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.878154414310302, 'next_transition': 16089}.
<a id="trace-15962"></a>
- 90.75s–90.75s (×1), actor 10, squad 1 (trace 15962): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 93.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 1.878154414310302, 'next_transition': 16089}.
<a id="trace-16089"></a>
- 93.25s–93.25s (×1), actor 10, squad 1 (trace 16089): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: None.
<a id="trace-16091"></a>
- 93.25s–93.25s (×1), actor 10, squad 1 (trace 16091): NeedSupport. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: None.
<a id="trace-16098"></a>
- 93.30s–93.30s (×1), actor 10, squad 1 (trace 16098): Reorganise: completed/failed drill. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 97, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.051364197355013, 'next_transition': 16504}.
<a id="trace-16100"></a>
- 93.30s–93.30s (×1), actor 10, squad 1 (trace 16100): MoveTactically. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 97, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.051364197355013, 'next_transition': 16504}.
<a id="trace-16101"></a>
- 93.30s–93.30s (×1), actor 10, squad 1 (trace 16101): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 90.00s, trace 13915. Next observer evidence: {'until': 97, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.051364197355013, 'next_transition': 16504}.
<a id="trace-16257"></a>
- 94.45s–94.45s (×1), actor 1, squad 0 (trace 16257): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 90.00s, trace 13909. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16344}.
<a id="trace-16344"></a>
<a id="trace-16446"></a>
<a id="trace-16469"></a>
<a id="trace-16486"></a>
<a id="trace-16488"></a>
<a id="trace-16527"></a>
<a id="trace-16529"></a>
<a id="trace-16566"></a>
<a id="trace-16568"></a>
<a id="trace-16612"></a>
<a id="trace-16614"></a>
<a id="trace-16627"></a>
<a id="trace-16629"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16751"></a>
<a id="trace-16753"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16805"></a>
<a id="trace-16807"></a>
<a id="trace-16829"></a>
<a id="trace-16831"></a>
<a id="trace-16844"></a>
<a id="trace-16846"></a>
<a id="trace-16867"></a>
<a id="trace-16869"></a>
<a id="trace-16888"></a>
<a id="trace-16890"></a>
<a id="trace-16968"></a>
<a id="trace-16982"></a>
- 94.75s–105.75s (×31), actor 5, squad 0 (trace 16344): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 13912. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04748527628827637, 'next_transition': 16446}.
<a id="trace-16504"></a>
- 97.00s–97.00s (×1), actor 10, squad 1 (trace 16504): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 16358. Next observer evidence: {'until': 98.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1289187589142874, 'next_transition': 16578}.
<a id="trace-16578"></a>
- 98.40s–98.40s (×1), actor 10, squad 1 (trace 16578): NeedSupport. Knowledge: actor memory at 95.00s, trace 16358. Next observer evidence: {'until': 128.4, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.2624815591617818, 'next_transition': None}.
<a id="trace-16991"></a>
- 105.85s–105.85s (×1), actor 1, squad 0 (trace 16991): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 105.00s, trace 16903. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199972761579011, 'next_transition': 17058}.
<a id="trace-17058"></a>
<a id="trace-17073"></a>
<a id="trace-17090"></a>
<a id="trace-17103"></a>
<a id="trace-17122"></a>
<a id="trace-17136"></a>
<a id="trace-17157"></a>
<a id="trace-17166"></a>
<a id="trace-17240"></a>
<a id="trace-17251"></a>
<a id="trace-17263"></a>
<a id="trace-17273"></a>
<a id="trace-17292"></a>
<a id="trace-17303"></a>
<a id="trace-17320"></a>
<a id="trace-17331"></a>
<a id="trace-17349"></a>
<a id="trace-17358"></a>
<a id="trace-17431"></a>
- 106.25s–115.25s (×19), actor 5, squad 0 (trace 17058): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 16906. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34817377270468053, 'next_transition': 17073}.
<a id="trace-17438"></a>
- 115.45s–115.45s (×1), actor 1, squad 0 (trace 17438): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 115.00s, trace 17366. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17470}.
<a id="trace-17470"></a>
<a id="trace-17488"></a>
<a id="trace-17518"></a>
<a id="trace-17546"></a>
<a id="trace-17556"></a>
<a id="trace-17567"></a>
<a id="trace-17576"></a>
<a id="trace-17656"></a>
<a id="trace-17683"></a>
<a id="trace-17701"></a>
<a id="trace-17709"></a>
<a id="trace-17729"></a>
<a id="trace-17739"></a>
- 115.75s–122.75s (×13), actor 5, squad 0 (trace 17470): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 17369. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.026247525928382167, 'next_transition': 17488}.
<a id="trace-1395"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 1395): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34266645783472877, 'next_transition': 17761}.
<a id="trace-17744"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 17744): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.80s, trace 17744. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34266645783472877, 'next_transition': 17761}.
<a id="trace-17761"></a>
<a id="trace-17777"></a>
- 123.75s–124.25s (×2), actor 5, squad 0 (trace 17761): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 17744. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000001, 'next_transition': 17777}.
<a id="trace-17816"></a>
- 125.05s–125.05s (×1), actor 1, squad 0 (trace 17816): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 17797. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21000236612423637, 'next_transition': 18019}.
<a id="trace-18019"></a>
<a id="trace-18037"></a>
<a id="trace-18065"></a>
<a id="trace-18103"></a>
<a id="trace-18127"></a>
<a id="trace-18145"></a>
<a id="trace-18163"></a>
<a id="trace-18178"></a>
<a id="trace-18192"></a>
<a id="trace-18268"></a>
<a id="trace-18280"></a>
<a id="trace-18308"></a>
<a id="trace-18332"></a>
<a id="trace-18353"></a>
<a id="trace-18366"></a>
<a id="trace-18487"></a>
<a id="trace-18499"></a>
<a id="trace-18520"></a>
<a id="trace-18540"></a>
<a id="trace-18558"></a>
<a id="trace-18572"></a>
<a id="trace-18607"></a>
<a id="trace-18635"></a>
- 125.25s–139.80s (×23), actor 5, squad 0 (trace 18019): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 17800. Next observer evidence: {'until': 125.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38787992426064605, 'next_transition': 18037}.
<a id="trace-18642"></a>
- 139.80s–139.80s (×1), actor 1, squad 0 (trace 18642): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 135.00s, trace 18419. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1782276548423158, 'next_transition': 18726}.
<a id="trace-18644"></a>
- 139.80s–139.80s (×1), actor 1, squad 0 (trace 18644): NeedSupport. Knowledge: actor memory at 135.00s, trace 18419. Next observer evidence: {'until': 140.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1782276548423158, 'next_transition': 18726}.
<a id="trace-18726"></a>
- 140.65s–140.65s (×1), actor 1, squad 0 (trace 18726): Reorganise: completed/failed drill. Knowledge: actor memory at 140.00s, trace 18650. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29693576114338, 'next_transition': 19014}.
<a id="trace-18729"></a>
- 140.65s–140.65s (×1), actor 1, squad 0 (trace 18729): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 18650. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29693576114338, 'next_transition': 19014}.
<a id="trace-18730"></a>
- 140.65s–140.65s (×1), actor 1, squad 0 (trace 18730): Reorganise complete: known contact. Knowledge: actor memory at 140.00s, trace 18650. Next observer evidence: {'until': 140.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29693576114338, 'next_transition': 19014}.
<a id="trace-19014"></a>
<a id="trace-19031"></a>
<a id="trace-19069"></a>
<a id="trace-19104"></a>
<a id="trace-19139"></a>
- 140.80s–144.30s (×5), actor 5, squad 0 (trace 19014): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 18651. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5939553532109835, 'next_transition': 19031}.
<a id="trace-19156"></a>
- 144.80s–144.80s (×1), actor 1, squad 0 (trace 19156): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 140.00s, trace 18650. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8731877217221728, 'next_transition': 19419}.
<a id="trace-19157"></a>
- 144.80s–144.80s (×1), actor 1, squad 0 (trace 19157): rearward bound: one stationary suppressing element. Knowledge: actor memory at 140.00s, trace 18650. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8731877217221728, 'next_transition': 19419}.
<a id="trace-19419"></a>
<a id="trace-19453"></a>
<a id="trace-19472"></a>
<a id="trace-19482"></a>
<a id="trace-19503"></a>
<a id="trace-19520"></a>
<a id="trace-19538"></a>
<a id="trace-19548"></a>
<a id="trace-19625"></a>
<a id="trace-19715"></a>
<a id="trace-19748"></a>
<a id="trace-19774"></a>
<a id="trace-19796"></a>
<a id="trace-19830"></a>
<a id="trace-19863"></a>
<a id="trace-19942"></a>
<a id="trace-19958"></a>
- 145.80s–155.80s (×17), actor 5, squad 0 (trace 19419): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 19334. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3540530452487585, 'next_transition': 19453}.
<a id="trace-19974"></a>
- 156.20s–156.20s (×1), actor 1, squad 0 (trace 19974): NeedSupport. Knowledge: actor memory at 155.00s, trace 19871. Next observer evidence: None.
<a id="trace-19984"></a>
<a id="trace-19999"></a>
- 156.30s–156.80s (×2), actor 5, squad 0 (trace 19984): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19872. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8487161614187317, 'next_transition': 19999}.
<a id="trace-20007"></a>
- 156.85s–156.85s (×1), actor 1, squad 0 (trace 20007): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 19871. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5851479986114272, 'next_transition': 20073}.
<a id="trace-20008"></a>
- 156.85s–156.85s (×1), actor 1, squad 0 (trace 20008): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 19871. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5851479986114272, 'next_transition': 20073}.
<a id="trace-20073"></a>
<a id="trace-20089"></a>
<a id="trace-20104"></a>
<a id="trace-20123"></a>
<a id="trace-20146"></a>
<a id="trace-20219"></a>
<a id="trace-20231"></a>
<a id="trace-20248"></a>
<a id="trace-20262"></a>
<a id="trace-20277"></a>
<a id="trace-20290"></a>
<a id="trace-20304"></a>
<a id="trace-20319"></a>
<a id="trace-20332"></a>
<a id="trace-20343"></a>
<a id="trace-20415"></a>
<a id="trace-20425"></a>
<a id="trace-20441"></a>
<a id="trace-20451"></a>
<a id="trace-20465"></a>
<a id="trace-20489"></a>
<a id="trace-20503"></a>
<a id="trace-20514"></a>
<a id="trace-20594"></a>
<a id="trace-20604"></a>
<a id="trace-20621"></a>
<a id="trace-20634"></a>
<a id="trace-20648"></a>
<a id="trace-20659"></a>
<a id="trace-20672"></a>
<a id="trace-20686"></a>
<a id="trace-20708"></a>
<a id="trace-20778"></a>
<a id="trace-20790"></a>
<a id="trace-20811"></a>
<a id="trace-20823"></a>
<a id="trace-20837"></a>
<a id="trace-20863"></a>
<a id="trace-20876"></a>
<a id="trace-20889"></a>
<a id="trace-20899"></a>
<a id="trace-20969"></a>
- 157.30s–180.30s (×42), actor 5, squad 0 (trace 20073): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19872. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8942307297620797, 'next_transition': 20089}.
<a id="trace-20976"></a>
- 180.55s–180.55s (×1), actor 1, squad 0 (trace 20976): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 180.00s, trace 20907. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20981}.
<a id="trace-20981"></a>
<a id="trace-21001"></a>
<a id="trace-21012"></a>
<a id="trace-21054"></a>
<a id="trace-21069"></a>
<a id="trace-21082"></a>
<a id="trace-21097"></a>
<a id="trace-21178"></a>
<a id="trace-21187"></a>
<a id="trace-21201"></a>
<a id="trace-21213"></a>
<a id="trace-21226"></a>
<a id="trace-21266"></a>
<a id="trace-21284"></a>
<a id="trace-21294"></a>
<a id="trace-21364"></a>
<a id="trace-21373"></a>
<a id="trace-21388"></a>
- 180.80s–191.30s (×18), actor 5, squad 0 (trace 20981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 20908. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21001}.
<a id="trace-1948"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 1948): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21408"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 21408): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.85s, trace 21408. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21417}.
<a id="trace-21417"></a>
<a id="trace-21428"></a>
<a id="trace-21441"></a>
<a id="trace-21452"></a>
<a id="trace-21548"></a>
<a id="trace-21563"></a>
<a id="trace-21579"></a>
<a id="trace-21592"></a>
<a id="trace-21623"></a>
- 192.30s–197.80s (×9), actor 5, squad 0 (trace 21417): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 21408. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21428}.
<a id="trace-21630"></a>
- 197.80s–197.80s (×1), actor 1, squad 0 (trace 21630): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 195.00s, trace 21484. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21782}.
<a id="trace-21631"></a>
- 197.80s–197.80s (×1), actor 1, squad 0 (trace 21631): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 21484. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21782}.
<a id="trace-21632"></a>
- 197.80s–197.80s (×1), actor 1, squad 0 (trace 21632): . Knowledge: actor memory at 195.00s, trace 21484. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21782}.
<a id="trace-21782"></a>
<a id="trace-21795"></a>
<a id="trace-21878"></a>
<a id="trace-21894"></a>
- 198.80s–200.80s (×4), actor 5, squad 0 (trace 21782): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 21485. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21795}.
<a id="trace-21914"></a>
- 201.40s–201.40s (×1), actor 1, squad 0 (trace 21914): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 200.00s, trace 21810. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400150139177768, 'next_transition': 21971}.
<a id="trace-21915"></a>
- 201.40s–201.40s (×1), actor 1, squad 0 (trace 21915): rearward bound: one stationary suppressing element. Knowledge: actor memory at 200.00s, trace 21810. Next observer evidence: {'until': 201.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400150139177768, 'next_transition': 21971}.
<a id="trace-21971"></a>
<a id="trace-21999"></a>
<a id="trace-22009"></a>
<a id="trace-22023"></a>
<a id="trace-22041"></a>
<a id="trace-22060"></a>
<a id="trace-22079"></a>
<a id="trace-22148"></a>
<a id="trace-22176"></a>
<a id="trace-22187"></a>
<a id="trace-22206"></a>
<a id="trace-22217"></a>
<a id="trace-22235"></a>
<a id="trace-22255"></a>
- 201.80s–208.80s (×14), actor 5, squad 0 (trace 21971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 21811. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449736469643245, 'next_transition': 21999}.
<a id="trace-22262"></a>
- 208.85s–208.85s (×1), actor 5, squad 0 (trace 22262): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 208.85s, trace 22262. Next observer evidence: {'until': 209.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500152867325, 'next_transition': 22279}.
<a id="trace-22279"></a>
<a id="trace-22356"></a>
<a id="trace-22376"></a>
<a id="trace-22385"></a>
<a id="trace-22404"></a>
<a id="trace-22421"></a>
- 209.80s–212.80s (×6), actor 5, squad 0 (trace 22279): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 208.85s, trace 22262. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600203844481974, 'next_transition': 22356}.
<a id="trace-22428"></a>
- 213.25s–213.25s (×1), actor 1, squad 0 (trace 22428): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 22285. Next observer evidence: None.
<a id="trace-22429"></a>
- 213.25s–213.25s (×1), actor 1, squad 0 (trace 22429): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 22285. Next observer evidence: None.
<a id="trace-22436"></a>
<a id="trace-22446"></a>
<a id="trace-22469"></a>
<a id="trace-22475"></a>
<a id="trace-22544"></a>
<a id="trace-22567"></a>
<a id="trace-22595"></a>
<a id="trace-22619"></a>
<a id="trace-22649"></a>
<a id="trace-22655"></a>
<a id="trace-22720"></a>
<a id="trace-22737"></a>
- 213.30s–221.30s (×12), actor 5, squad 0 (trace 22436): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 22286. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599970511725642, 'next_transition': 22446}.
<a id="trace-22745"></a>
- 221.45s–221.45s (×1), actor 1, squad 0 (trace 22745): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 220.00s, trace 22660. Next observer evidence: {'until': 221.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22751}.
<a id="trace-22751"></a>
<a id="trace-22779"></a>
<a id="trace-22791"></a>
<a id="trace-22820"></a>
<a id="trace-22831"></a>
<a id="trace-22899"></a>
<a id="trace-22911"></a>
<a id="trace-22921"></a>
<a id="trace-22944"></a>
<a id="trace-22952"></a>
<a id="trace-22964"></a>
<a id="trace-22986"></a>
<a id="trace-22995"></a>
<a id="trace-23060"></a>
<a id="trace-23071"></a>
<a id="trace-23088"></a>
<a id="trace-23101"></a>
<a id="trace-23120"></a>
<a id="trace-23128"></a>
<a id="trace-23138"></a>
<a id="trace-23150"></a>
<a id="trace-23159"></a>
<a id="trace-23169"></a>
<a id="trace-23238"></a>
<a id="trace-23255"></a>
<a id="trace-23265"></a>
<a id="trace-23283"></a>
<a id="trace-23311"></a>
<a id="trace-23320"></a>
<a id="trace-23335"></a>
<a id="trace-23342"></a>
<a id="trace-23409"></a>
<a id="trace-23415"></a>
<a id="trace-23427"></a>
<a id="trace-23452"></a>
<a id="trace-23463"></a>
<a id="trace-23473"></a>
<a id="trace-23484"></a>
<a id="trace-23503"></a>
<a id="trace-23511"></a>
<a id="trace-23599"></a>
<a id="trace-23608"></a>
<a id="trace-23630"></a>
<a id="trace-23642"></a>
<a id="trace-23655"></a>
<a id="trace-23673"></a>
<a id="trace-23740"></a>
<a id="trace-23778"></a>
<a id="trace-23805"></a>
<a id="trace-23815"></a>
<a id="trace-23826"></a>
- 221.80s–253.80s (×51), actor 5, squad 0 (trace 22751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 220.00s, trace 22661. Next observer evidence: {'until': 222.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22779}.
<a id="trace-2181"></a>
- 253.85s–253.85s (×1), actor 5, squad 0 (events line 2181): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23831"></a>
- 253.85s–253.85s (×1), actor 5, squad 0 (trace 23831): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.208920 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 253.85s, trace 23831. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23838}.
<a id="trace-23832"></a>
- 253.85s–253.85s (×1), actor 5, squad 0 (trace 23832): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.208920 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 253.85s, trace 23832. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23838}.
<a id="trace-23838"></a>
- 254.30s–254.30s (×1), actor 5, squad 0 (trace 23838): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 253.85s, trace 23832. Next observer evidence: {'until': 254.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2182}.
<a id="trace-2182"></a>
- 254.40s–254.40s (×1), actor 5, squad 0 (events line 2182): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23843"></a>
- 254.40s–254.40s (×1), actor 5, squad 0 (trace 23843): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220003 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 254.40s, trace 23843. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23849}.
<a id="trace-23844"></a>
- 254.40s–254.40s (×1), actor 5, squad 0 (trace 23844): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.220003 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 254.40s, trace 23844. Next observer evidence: {'until': 254.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23849}.
<a id="trace-23849"></a>
<a id="trace-23924"></a>
<a id="trace-23936"></a>
<a id="trace-23963"></a>
<a id="trace-23987"></a>
<a id="trace-24005"></a>
- 254.80s–258.80s (×6), actor 5, squad 0 (trace 23849): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 254.40s, trace 23844. Next observer evidence: {'until': 255.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23924}.
<a id="trace-24011"></a>
- 259.20s–259.20s (×1), actor 1, squad 0 (trace 24011): Withdraw to received rally. Knowledge: actor memory at 255.00s, trace 23854. Next observer evidence: None.
<a id="trace-24012"></a>
- 259.20s–259.20s (×1), actor 1, squad 0 (trace 24012): rearward bound: one stationary suppressing element. Knowledge: actor memory at 255.00s, trace 23854. Next observer evidence: None.
<a id="trace-24069"></a>
<a id="trace-24157"></a>
<a id="trace-24176"></a>
<a id="trace-24206"></a>
<a id="trace-24227"></a>
<a id="trace-24242"></a>
<a id="trace-24261"></a>
<a id="trace-24273"></a>
<a id="trace-24353"></a>
<a id="trace-24362"></a>
<a id="trace-24388"></a>
<a id="trace-24411"></a>
- 259.30s–267.80s (×12), actor 5, squad 0 (trace 24069): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 23855. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.049994068834075, 'next_transition': 24157}.
<a id="trace-2256"></a>
- 268.20s–268.20s (×1), actor 5, squad 0 (events line 2256): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24418"></a>
- 268.20s–268.20s (×1), actor 5, squad 0 (trace 24418): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 268.20s, trace 24418. Next observer evidence: None.
<a id="trace-24419"></a>
- 268.20s–268.20s (×1), actor 5, squad 0 (trace 24419): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 268.20s, trace 24419. Next observer evidence: None.
<a id="trace-24433"></a>
<a id="trace-24462"></a>
<a id="trace-24471"></a>
<a id="trace-24548"></a>
<a id="trace-24560"></a>
- 268.30s–270.80s (×5), actor 5, squad 0 (trace 24433): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 268.20s, trace 24419. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.150067010579933, 'next_transition': 24462}.
<a id="trace-24566"></a>
- 270.85s–270.85s (×1), actor 1, squad 0 (trace 24566): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 24476. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.100033335772426, 'next_transition': 24590}.
<a id="trace-24567"></a>
- 270.85s–270.85s (×1), actor 1, squad 0 (trace 24567): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 24476. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.100033335772426, 'next_transition': 24590}.
<a id="trace-24590"></a>
<a id="trace-24615"></a>
<a id="trace-24627"></a>
<a id="trace-24646"></a>
<a id="trace-24655"></a>
<a id="trace-24676"></a>
<a id="trace-24682"></a>
<a id="trace-24751"></a>
<a id="trace-24761"></a>
<a id="trace-24771"></a>
<a id="trace-24782"></a>
<a id="trace-24802"></a>
<a id="trace-24810"></a>
<a id="trace-24824"></a>
<a id="trace-24842"></a>
<a id="trace-24853"></a>
<a id="trace-24925"></a>
<a id="trace-24931"></a>
<a id="trace-24943"></a>
<a id="trace-24956"></a>
<a id="trace-24970"></a>
<a id="trace-24980"></a>
<a id="trace-24992"></a>
<a id="trace-25005"></a>
<a id="trace-25020"></a>
<a id="trace-25029"></a>
<a id="trace-25104"></a>
<a id="trace-25110"></a>
<a id="trace-25129"></a>
<a id="trace-25141"></a>
<a id="trace-25152"></a>
<a id="trace-25166"></a>
<a id="trace-25187"></a>
<a id="trace-25263"></a>
<a id="trace-25273"></a>
<a id="trace-25286"></a>
<a id="trace-25303"></a>
<a id="trace-25324"></a>
<a id="trace-25336"></a>
<a id="trace-25345"></a>
<a id="trace-25367"></a>
<a id="trace-25439"></a>
<a id="trace-25449"></a>
<a id="trace-25462"></a>
<a id="trace-25479"></a>
<a id="trace-25491"></a>
<a id="trace-25510"></a>
<a id="trace-25532"></a>
<a id="trace-25611"></a>
<a id="trace-25626"></a>
<a id="trace-25635"></a>
<a id="trace-25650"></a>
<a id="trace-25657"></a>
<a id="trace-25686"></a>
<a id="trace-25700"></a>
<a id="trace-25707"></a>
<a id="trace-25781"></a>
<a id="trace-25798"></a>
<a id="trace-25806"></a>
<a id="trace-25821"></a>
<a id="trace-25828"></a>
<a id="trace-25853"></a>
<a id="trace-25864"></a>
<a id="trace-25944"></a>
<a id="trace-25963"></a>
<a id="trace-25980"></a>
<a id="trace-25993"></a>
<a id="trace-26000"></a>
<a id="trace-26012"></a>
<a id="trace-26022"></a>
<a id="trace-26035"></a>
<a id="trace-26047"></a>
<a id="trace-26119"></a>
<a id="trace-26131"></a>
<a id="trace-26143"></a>
<a id="trace-26160"></a>
<a id="trace-26170"></a>
<a id="trace-26191"></a>
<a id="trace-26201"></a>
<a id="trace-26212"></a>
<a id="trace-26221"></a>
<a id="trace-26286"></a>
<a id="trace-26307"></a>
<a id="trace-26315"></a>
<a id="trace-26329"></a>
<a id="trace-26336"></a>
<a id="trace-26352"></a>
<a id="trace-26366"></a>
<a id="trace-26380"></a>
<a id="trace-26394"></a>
<a id="trace-26476"></a>
<a id="trace-26484"></a>
<a id="trace-26498"></a>
<a id="trace-26518"></a>
<a id="trace-26530"></a>
- 271.80s–328.80s (×95), actor 5, squad 0 (trace 24590): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 24477. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400000008465643, 'next_transition': 24615}.
<a id="trace-26535"></a>
- 328.85s–328.85s (×1), actor 1, squad 0 (trace 26535): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 325.00s, trace 26400. Next observer evidence: {'until': 330.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26622}.
<a id="trace-26622"></a>
<a id="trace-26633"></a>
<a id="trace-26660"></a>
<a id="trace-26672"></a>
<a id="trace-26681"></a>
<a id="trace-26691"></a>
<a id="trace-26703"></a>
<a id="trace-26718"></a>
<a id="trace-26792"></a>
<a id="trace-26811"></a>
<a id="trace-26824"></a>
- 330.30s–336.80s (×11), actor 5, squad 0 (trace 26622): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 26559. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26633}.
<a id="trace-2538"></a>
- 337.20s–337.20s (×1), actor 5, squad 0 (events line 2538): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26832"></a>
- 337.20s–337.20s (×1), actor 5, squad 0 (trace 26832): renew committed intent (75 s lifetime). Knowledge: actor memory at 337.20s, trace 26832. Next observer evidence: None.
<a id="trace-26841"></a>
<a id="trace-26867"></a>
<a id="trace-26876"></a>
<a id="trace-26961"></a>
<a id="trace-26968"></a>
<a id="trace-26982"></a>
<a id="trace-26992"></a>
<a id="trace-27004"></a>
<a id="trace-27013"></a>
<a id="trace-27031"></a>
<a id="trace-27040"></a>
<a id="trace-27055"></a>
<a id="trace-27071"></a>
<a id="trace-27142"></a>
<a id="trace-27152"></a>
<a id="trace-27175"></a>
<a id="trace-27186"></a>
<a id="trace-27206"></a>
<a id="trace-27229"></a>
<a id="trace-27308"></a>
<a id="trace-27328"></a>
<a id="trace-27337"></a>
<a id="trace-27349"></a>
<a id="trace-27358"></a>
<a id="trace-27368"></a>
<a id="trace-27379"></a>
<a id="trace-27399"></a>
<a id="trace-27466"></a>
<a id="trace-27473"></a>
<a id="trace-27489"></a>
<a id="trace-27502"></a>
<a id="trace-27530"></a>
<a id="trace-27541"></a>
<a id="trace-27550"></a>
<a id="trace-27563"></a>
<a id="trace-27569"></a>
- 337.30s–359.80s (×36), actor 5, squad 0 (trace 26841): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 337.20s, trace 26832. Next observer evidence: {'until': 338.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26867}.

## Net delivery

241 matched order/radio deliveries; 301 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.463s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 3995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 3997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 3998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4006: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4007: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4008: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4009: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4010: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4011: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4012: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4013: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4014: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4015: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4016: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4017: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4282: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4291: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4292: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4293: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4294: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4295: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4296: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4297: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4298: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4299: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4300: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4301: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4302: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5005: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5006: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 5013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 5014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5015: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5016: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5017: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5018: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5019: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5020: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5021: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5022: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5023: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5024: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 5025: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 5026: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 5693: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 5694: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 5695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 5696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 5697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 5698: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 5699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 5700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 5701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 5702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 5703: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 5704: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 5705: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 5706: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 5707: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 5708: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 5709: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 5710: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 5711: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 5712: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 5713: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 5714: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 5985: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 5986: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 5987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 5988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 5989: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 5990: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 5991: estimate 15.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 5992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 5993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 5994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 5995: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 5996: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 5997: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 5998: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 5999: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6000: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6001: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6002: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6003: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6004: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 6005: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 6006: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 6374: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 6375: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 6376: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 6377: estimate 15.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6433: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6436: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6437: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6438: estimate 15.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 6440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 6441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6442: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6443: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6444: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6445: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6446: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6447: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6448: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6449: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6450: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6451: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 6452: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 6453: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 6921: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 6922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 6923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 6924: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 6925: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 6926: estimate 14.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 6927: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 6928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 6929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 6930: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 6931: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 6932: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 6933: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 6934: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 6935: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 6936: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 6937: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 6938: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 6939: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 6940: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 6941: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8907: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8910: estimate 16.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8911: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8912: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8913: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 8914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 8915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8916: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8917: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8918: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8919: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8920: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8921: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8922: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8923: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8924: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8925: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 8926: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 8927: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 9339: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 9340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 9341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 9342: estimate 15.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 9343: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 9344: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 9345: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 9346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 9347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 9348: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 9349: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 9350: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 9351: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 9352: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 9353: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 9354: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 9355: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 9356: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 9357: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 9358: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 9359: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9668: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9671: estimate 15.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9672: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9673: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9674: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9675: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9677: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9678: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9679: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9680: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9681: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9682: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9683: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9684: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9685: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9686: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9687: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9688: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 10788: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 10789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 10790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 10791: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 10792: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 10793: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 10794: estimate 15.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 10795: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 10796: estimate 15.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 10797: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 10798: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 10799: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 10800: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 10801: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 10802: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 10803: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 10804: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 10805: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 10806: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 10807: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 10808: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 10943: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 10944: estimate 15.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13440: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13443: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13444: estimate 15.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13445: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13446: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13447: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 13448: estimate 15.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13449: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13450: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13451: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13452: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13453: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13454: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13455: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13456: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13457: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13458: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13459: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13460: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 13909: estimate 13.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 13910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13912: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13913: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13914: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 13915: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 13916: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13917: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13918: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13919: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13920: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13921: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13922: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13923: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13924: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13925: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13926: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13927: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13928: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 16352: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 16353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 16354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 16355: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 16356: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 16357: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 16358: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 16359: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 16360: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 16361: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 16362: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 16363: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 16364: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 16365: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 16366: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 16367: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 16368: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 16369: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 16370: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 16637: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 16638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 16639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 16640: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 16641: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 16642: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 16643: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 16644: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 16645: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 16646: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 16647: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 16648: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 16649: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 16650: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 16651: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 16652: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 16653: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 16654: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 16903: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 16904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 16905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 16906: estimate 14.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 16907: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 16908: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 16909: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 16910: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 16911: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16912: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16913: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16914: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16915: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 16916: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16917: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16918: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 16919: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 16920: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 17172: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 17173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 17174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 17175: estimate 14.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 17176: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 17177: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 17178: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 17179: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 17180: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 17181: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 17182: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 17183: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 17184: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 17185: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 17186: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 17187: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 17188: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 17189: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 17366: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 17367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 17368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 17369: estimate 14.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 17370: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 17371: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 17372: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 17373: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 17374: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 17375: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 17376: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 17377: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 17378: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 17379: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 17380: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 17381: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 17382: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 17383: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 17582: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 17583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 17584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 17585: estimate 14.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 17586: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 17587: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 17588: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 17589: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 17590: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 17591: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 17592: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 17593: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 17594: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 17595: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 17596: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 17597: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 17598: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 17599: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 17744: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 17797: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 17798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 17799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 17800: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 17801: estimate 13.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 17802: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 17803: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 17804: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 17805: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 17806: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 17807: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 17808: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 17809: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 17810: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 17811: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 17812: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 17813: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 17814: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 18197: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 18198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 18199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 18200: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 18201: estimate 13.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 18202: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 18203: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 18204: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 18205: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 18206: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 18207: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 18208: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 18209: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 18210: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 18211: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 18212: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 18213: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 18214: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 18419: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 18420: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 18421: estimate 15.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 18422: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 18423: estimate 13.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 18424: estimate 15.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 18425: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 18426: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 18427: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 18428: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 18429: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 18430: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 18431: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 18432: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 18433: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 18434: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 18435: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 18436: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 18650: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 18651: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 18652: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 18653: estimate 15.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 18654: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 18655: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 18656: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 18657: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 18658: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 18659: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 18660: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 18661: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 18662: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 18663: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 18664: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 18665: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 19333: estimate 15.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 19334: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 19335: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 19336: estimate 15.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 19337: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 19338: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 19339: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 19340: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 19341: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 19342: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 19343: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 19344: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 19345: estimate 9.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 19346: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 19347: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 19348: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 19556: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 19557: estimate 14.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 19558: estimate 15.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 19559: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 19560: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 19561: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 19562: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 19563: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 19564: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 19565: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 19566: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 19567: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 19568: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 19569: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 19570: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 19571: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 19871: estimate 14.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19872: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19873: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 19874: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19875: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19876: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19877: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19878: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19879: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19880: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19881: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19882: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19883: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19884: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 19885: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 19886: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 20154: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 20155: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 20156: estimate 14.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 20157: estimate 15.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 20158: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 20159: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 20160: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 20161: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 20162: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 20163: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 20164: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 20165: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 20166: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 20167: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 20168: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 20169: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 20350: estimate 14.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20351: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20352: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 20353: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20354: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20355: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20356: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20357: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 20358: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20359: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20360: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20361: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20362: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20363: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 20364: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 20365: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 20531: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20532: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 20533: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 20534: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20535: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20536: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20537: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20538: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 20539: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20540: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20541: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20542: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20543: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20544: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 20545: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 20546: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 20716: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 20717: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 20718: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 20719: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20720: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20721: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20722: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20723: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 20724: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20725: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20726: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20727: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20728: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20729: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 20730: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 20731: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 20907: estimate 13.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20908: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20909: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 20910: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20911: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20912: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20913: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20914: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 20915: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20916: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20917: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20918: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20919: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20920: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 20921: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 20922: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 21116: estimate 13.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21117: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 21118: estimate 13.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 21119: estimate 13.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21120: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21121: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21122: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21123: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 21124: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21125: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21126: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21127: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21128: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21129: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 21130: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 21131: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 21303: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21304: estimate 14.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21305: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 21306: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21307: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21308: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21309: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21310: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 21311: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21312: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21313: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21314: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21315: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21316: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 21317: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 21318: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 21408: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 21484: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21485: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21486: estimate 13.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21487: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21488: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21489: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21490: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21491: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21492: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21493: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21494: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21495: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21496: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21497: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 21498: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 21499: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 21810: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21811: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21812: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21813: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21814: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21815: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21816: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21817: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21818: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21819: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21820: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21821: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21822: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 21823: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 21824: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 22086: estimate 12.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22087: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 22088: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22089: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22090: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22091: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22092: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22093: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22094: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22095: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22096: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22097: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22098: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 22099: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 22100: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 208.85s leader 5, trace 22262: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 22285: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22286: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22287: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22288: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22289: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22290: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22291: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22292: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22293: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22294: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22295: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22296: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22297: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 22298: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 22299: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 22482: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22483: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22484: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22485: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22486: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22487: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22488: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22489: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22490: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22491: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22492: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22493: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22494: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22495: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22496: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 22660: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22661: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22662: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 22663: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22664: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22665: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22666: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22667: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22668: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22669: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22670: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22671: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22672: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 22673: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 22674: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 22836: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22837: estimate 12.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22838: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22839: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22840: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22841: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22842: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22843: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22844: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22845: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22846: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22847: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22848: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 22849: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22850: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 23000: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23001: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 23002: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23003: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23004: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23005: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23006: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23007: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23008: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23009: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23010: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23011: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 23012: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 23013: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 23014: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 23174: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23175: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23176: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23177: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23178: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23179: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23180: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23181: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23182: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23183: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23184: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23185: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 23186: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 23187: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 23188: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 23347: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23348: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23349: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23350: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23351: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23352: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23353: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23354: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23355: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23356: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23357: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23358: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23359: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23360: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23361: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23519: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23520: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23521: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23522: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23523: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23524: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23525: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23526: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23527: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23528: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23529: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23530: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23531: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 23532: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 23533: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 23678: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23679: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23680: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23681: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23682: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23683: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23684: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23685: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23686: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23687: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23688: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23689: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23690: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 23691: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23692: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.85s leader 5, trace 23831: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.85s leader 5, trace 23832: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.40s leader 5, trace 23843: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.40s leader 5, trace 23844: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 23854: estimate 1.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 23855: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 23856: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 23857: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23858: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 23859: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23860: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23861: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23862: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23863: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23864: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23865: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23866: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 23867: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 23868: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 24083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24086: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24087: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24088: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24089: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24091: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24092: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24094: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 24095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 24096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 24097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 24284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24287: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24288: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24289: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24290: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24292: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24293: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24295: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.20s leader 5, trace 24418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 268.20s leader 5, trace 24419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 24476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24479: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24480: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24481: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24482: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24484: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24485: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24487: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 24489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 24490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 24691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 24693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24694: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24695: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24696: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24697: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24699: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24700: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24702: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 24704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 24705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 24865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 24866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24868: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24869: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24870: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24871: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24873: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24874: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24876: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 24878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 24879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 25035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 25037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25038: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25039: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25040: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25041: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25043: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25044: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25046: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 25047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 25048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 25049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 25199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25202: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25203: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25204: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25205: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25207: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25208: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25210: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 25372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25375: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25376: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25377: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25378: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25380: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25381: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25383: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 25544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 25557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 25558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 25720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 25722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 25733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 25734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 25879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 25880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 25881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 25884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 25892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 25893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 26052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 26054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 26065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 26066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 26226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 26228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 26239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 26240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 26400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 26402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 26413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 26414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 26558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 26571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 26572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 26730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 26732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 26743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 26744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 337.20s leader 5, trace 26832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 26899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 26900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 26901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 26902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 26912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 26913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 27076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 27089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 27090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 27238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 27240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 27251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 27252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 27406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 27408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 27419: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 27420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 27574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 27576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 27587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 27588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Vale incapacitated
- 1: Soren incapacitated
- 1: Cole killed in action
- 1: Ellis killed in action
- 1: Dane killed in action
- 1: Tern incapacitated
- 1: Ash incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 253.85s, evidence 2181: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 253.85s, evidence 23831: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.208920 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23838}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 253.85s, evidence 23832: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.208920 retreat threshold=0.220000 initiative=requires intent. Following evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23838}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
