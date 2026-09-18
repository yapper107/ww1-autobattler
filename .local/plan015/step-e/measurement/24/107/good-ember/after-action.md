# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/24/107/good-ember/battle-107-1789674197199243003`

## Battle summary

**Ember** · 360 s · 262 shots.

### Turning points

- 14.6s, squad 1: contact (events line 170). First recorded contact.
- 24.9s, squad 1: withdrawal ([trace 6519](#trace-6519)). No completion observed before termination.
- 42.1s, squad 0: help call ([trace 11723](#trace-11723)). No completion observed before termination.
- 49.7s, squad 1: help call ([trace 13162](#trace-13162)). No completion observed before termination.
- 50.2s, squad 0: withdrawal ([trace 13242](#trace-13242)). 99.1s, squad 0: took cover and returned fire.
- 98.8s, squad 0: help call ([trace 15663](#trace-15663)). No completion observed before termination.
- 102.7s, squad 0: withdrawal ([trace 15854](#trace-15854)). 124.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 103.7s, squad 0: help call ([trace 15959](#trace-15959)). No completion observed before termination.
- 132.9s, squad 0: withdrawal ([trace 16855](#trace-16855)). 172.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 271.5s, squad 0: withdrawal ([trace 22500](#trace-22500)). 291.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 1 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 41 shots, 7/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 9 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 158 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 54 shots, 0/2 lost.

### Decisions and attribution

At 24.9s, squad 1 chose broke contact ([trace 6519](#trace-6519)), followed by 7 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 16.8s, squad 0 chose took cover and returned fire ([trace 3504](#trace-3504)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 265.6s, squad 0 chose leader risk threshold crossed without support ([trace 21956](#trace-21956)), followed by 1 shots and 0 own casualties; estimate 5.4 against 4 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1382](#trace-1382)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1402}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1384](#trace-1384)). Following evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.699065590896495, 'next_transition': 1836}.

### Communication

188 matched deliveries (mean 0.53s, max 5.35s); 89 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 14.55s, squad 1, contact, evidence events line 170: First recorded contact; .
- 24.90s, squad 1, withdrawal, evidence 6519: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 42.10s, squad 0, help call, evidence 11723: NeedSupport; No completion observed before termination.
- 49.65s, squad 1, help call, evidence 13162: NeedSupport; No completion observed before termination.
- 50.20s, squad 0, withdrawal, evidence 13242: BreakContact: believed ratio at least two without superiority; 99.1s, squad 0: took cover and returned fire.
- 98.75s, squad 0, help call, evidence 15663: NeedSupport; No completion observed before termination.
- 102.70s, squad 0, withdrawal, evidence 15854: BreakContact: believed ratio at least two without superiority; 124.3s, squad 0: contact broken or rally reached: Occupy and report strength.
- 103.70s, squad 0, help call, evidence 15959: NeedSupport; No completion observed before termination.
- 132.90s, squad 0, withdrawal, evidence 16855: Withdraw to received rally; 172.4s, squad 0: contact broken or rally reached: Occupy and report strength.
- 271.50s, squad 0, withdrawal, evidence 22500: BreakContact: believed ratio at least two without superiority; 291.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 312.65s, squad 0, withdrawal, evidence 23821: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948079836842675, 'next_transition': 823}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948079836842675, 'next_transition': 823}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.948079836842675, 'next_transition': 823}.
<a id="trace-327"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 327): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1137}.
<a id="trace-328"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 328): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1137}.
<a id="trace-329"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 329): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.190705964343916, 'next_transition': 1137}.
<a id="trace-570"></a>
<a id="trace-572"></a>
<a id="trace-598"></a>
<a id="trace-600"></a>
<a id="trace-629"></a>
<a id="trace-631"></a>
<a id="trace-654"></a>
<a id="trace-656"></a>
<a id="trace-673"></a>
<a id="trace-675"></a>
<a id="trace-697"></a>
<a id="trace-699"></a>
<a id="trace-723"></a>
<a id="trace-725"></a>
<a id="trace-827"></a>
<a id="trace-829"></a>
<a id="trace-858"></a>
<a id="trace-860"></a>
<a id="trace-890"></a>
<a id="trace-892"></a>
<a id="trace-913"></a>
<a id="trace-915"></a>
<a id="trace-941"></a>
<a id="trace-943"></a>
<a id="trace-972"></a>
<a id="trace-974"></a>
<a id="trace-999"></a>
<a id="trace-1001"></a>
<a id="trace-1026"></a>
<a id="trace-1028"></a>
<a id="trace-1043"></a>
<a id="trace-1045"></a>
<a id="trace-1134"></a>
<a id="trace-1136"></a>
<a id="trace-1295"></a>
<a id="trace-1297"></a>
<a id="trace-1318"></a>
<a id="trace-1320"></a>
<a id="trace-1342"></a>
<a id="trace-1344"></a>
<a id="trace-1379"></a>
<a id="trace-1381"></a>
<a id="trace-1406"></a>
<a id="trace-1408"></a>
<a id="trace-1755"></a>
<a id="trace-1757"></a>
<a id="trace-1780"></a>
<a id="trace-1782"></a>
<a id="trace-1819"></a>
<a id="trace-1821"></a>
<a id="trace-2036"></a>
<a id="trace-2038"></a>
<a id="trace-2322"></a>
<a id="trace-2324"></a>
<a id="trace-2764"></a>
<a id="trace-2766"></a>
<a id="trace-3028"></a>
<a id="trace-3030"></a>
<a id="trace-3501"></a>
<a id="trace-3503"></a>
<a id="trace-3954"></a>
<a id="trace-3956"></a>
<a id="trace-4834"></a>
<a id="trace-4836"></a>
<a id="trace-4892"></a>
<a id="trace-4894"></a>
<a id="trace-4949"></a>
<a id="trace-4951"></a>
<a id="trace-5436"></a>
<a id="trace-5438"></a>
<a id="trace-5489"></a>
<a id="trace-5491"></a>
<a id="trace-5633"></a>
<a id="trace-5635"></a>
<a id="trace-6131"></a>
<a id="trace-6133"></a>
<a id="trace-6164"></a>
<a id="trace-6166"></a>
<a id="trace-6232"></a>
<a id="trace-6234"></a>
<a id="trace-6282"></a>
<a id="trace-6284"></a>
<a id="trace-6330"></a>
<a id="trace-6332"></a>
<a id="trace-6374"></a>
<a id="trace-6376"></a>
<a id="trace-6428"></a>
<a id="trace-6430"></a>
<a id="trace-6480"></a>
<a id="trace-6482"></a>
<a id="trace-6512"></a>
<a id="trace-6514"></a>
<a id="trace-6661"></a>
<a id="trace-6663"></a>
<a id="trace-6685"></a>
<a id="trace-6687"></a>
<a id="trace-6714"></a>
<a id="trace-6716"></a>
<a id="trace-6751"></a>
<a id="trace-6753"></a>
<a id="trace-7231"></a>
<a id="trace-7233"></a>
<a id="trace-7258"></a>
<a id="trace-7260"></a>
<a id="trace-7305"></a>
<a id="trace-7307"></a>
<a id="trace-7349"></a>
<a id="trace-7351"></a>
<a id="trace-7380"></a>
<a id="trace-7382"></a>
<a id="trace-7411"></a>
<a id="trace-7413"></a>
<a id="trace-7516"></a>
<a id="trace-7518"></a>
<a id="trace-7555"></a>
<a id="trace-7557"></a>
<a id="trace-7583"></a>
<a id="trace-7585"></a>
<a id="trace-7613"></a>
<a id="trace-7615"></a>
<a id="trace-7642"></a>
<a id="trace-7644"></a>
<a id="trace-7664"></a>
<a id="trace-7666"></a>
<a id="trace-7696"></a>
<a id="trace-7698"></a>
<a id="trace-10788"></a>
<a id="trace-10790"></a>
<a id="trace-10804"></a>
<a id="trace-10806"></a>
<a id="trace-10828"></a>
<a id="trace-10830"></a>
<a id="trace-10927"></a>
<a id="trace-10929"></a>
<a id="trace-10941"></a>
<a id="trace-10943"></a>
<a id="trace-10981"></a>
<a id="trace-10983"></a>
<a id="trace-11016"></a>
<a id="trace-11018"></a>
<a id="trace-11059"></a>
<a id="trace-11061"></a>
<a id="trace-11085"></a>
<a id="trace-11087"></a>
<a id="trace-11121"></a>
<a id="trace-11123"></a>
<a id="trace-11167"></a>
<a id="trace-11169"></a>
<a id="trace-11217"></a>
<a id="trace-11219"></a>
<a id="trace-11255"></a>
<a id="trace-11257"></a>
<a id="trace-11404"></a>
<a id="trace-11406"></a>
<a id="trace-11486"></a>
<a id="trace-11488"></a>
<a id="trace-11566"></a>
<a id="trace-11568"></a>
<a id="trace-11657"></a>
<a id="trace-11659"></a>
<a id="trace-11767"></a>
<a id="trace-11769"></a>
<a id="trace-11865"></a>
<a id="trace-11867"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-12028"></a>
<a id="trace-12030"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12767"></a>
<a id="trace-12769"></a>
<a id="trace-12902"></a>
<a id="trace-12904"></a>
<a id="trace-12955"></a>
<a id="trace-12957"></a>
<a id="trace-13010"></a>
<a id="trace-13012"></a>
<a id="trace-13040"></a>
<a id="trace-13042"></a>
<a id="trace-13077"></a>
<a id="trace-13079"></a>
<a id="trace-13093"></a>
<a id="trace-13095"></a>
<a id="trace-13113"></a>
<a id="trace-13115"></a>
<a id="trace-13134"></a>
<a id="trace-13136"></a>
<a id="trace-13148"></a>
<a id="trace-13150"></a>
<a id="trace-13170"></a>
<a id="trace-13172"></a>
<a id="trace-13404"></a>
<a id="trace-13406"></a>
<a id="trace-13416"></a>
<a id="trace-13418"></a>
<a id="trace-13439"></a>
<a id="trace-13441"></a>
<a id="trace-13454"></a>
<a id="trace-13456"></a>
<a id="trace-13473"></a>
<a id="trace-13475"></a>
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13510"></a>
<a id="trace-13512"></a>
<a id="trace-13523"></a>
<a id="trace-13525"></a>
<a id="trace-13537"></a>
<a id="trace-13539"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13628"></a>
<a id="trace-13630"></a>
<a id="trace-13638"></a>
<a id="trace-13640"></a>
<a id="trace-13658"></a>
<a id="trace-13660"></a>
<a id="trace-13674"></a>
<a id="trace-13676"></a>
<a id="trace-13690"></a>
<a id="trace-13692"></a>
<a id="trace-13700"></a>
<a id="trace-13702"></a>
<a id="trace-13720"></a>
<a id="trace-13722"></a>
<a id="trace-13732"></a>
<a id="trace-13734"></a>
<a id="trace-13752"></a>
<a id="trace-13754"></a>
<a id="trace-13764"></a>
<a id="trace-13766"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13857"></a>
<a id="trace-13859"></a>
<a id="trace-13878"></a>
<a id="trace-13880"></a>
<a id="trace-13888"></a>
<a id="trace-13890"></a>
<a id="trace-13906"></a>
<a id="trace-13908"></a>
<a id="trace-13914"></a>
<a id="trace-13916"></a>
<a id="trace-13933"></a>
<a id="trace-13935"></a>
<a id="trace-14052"></a>
<a id="trace-14054"></a>
<a id="trace-14072"></a>
<a id="trace-14074"></a>
<a id="trace-14090"></a>
<a id="trace-14092"></a>
<a id="trace-14168"></a>
<a id="trace-14170"></a>
<a id="trace-14179"></a>
<a id="trace-14181"></a>
<a id="trace-14199"></a>
<a id="trace-14201"></a>
<a id="trace-14212"></a>
<a id="trace-14214"></a>
<a id="trace-14227"></a>
<a id="trace-14229"></a>
<a id="trace-14234"></a>
<a id="trace-14236"></a>
<a id="trace-14250"></a>
<a id="trace-14252"></a>
<a id="trace-14260"></a>
<a id="trace-14262"></a>
<a id="trace-14278"></a>
<a id="trace-14280"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14363"></a>
<a id="trace-14365"></a>
<a id="trace-14377"></a>
<a id="trace-14379"></a>
<a id="trace-14393"></a>
<a id="trace-14395"></a>
<a id="trace-14560"></a>
<a id="trace-14562"></a>
<a id="trace-14571"></a>
<a id="trace-14573"></a>
<a id="trace-14584"></a>
<a id="trace-14586"></a>
<a id="trace-14606"></a>
<a id="trace-14608"></a>
<a id="trace-14617"></a>
<a id="trace-14619"></a>
<a id="trace-14632"></a>
<a id="trace-14634"></a>
<a id="trace-14649"></a>
<a id="trace-14651"></a>
<a id="trace-14721"></a>
<a id="trace-14723"></a>
<a id="trace-14731"></a>
<a id="trace-14733"></a>
<a id="trace-14748"></a>
<a id="trace-14750"></a>
<a id="trace-14756"></a>
<a id="trace-14758"></a>
<a id="trace-14774"></a>
<a id="trace-14776"></a>
<a id="trace-14786"></a>
<a id="trace-14788"></a>
<a id="trace-14802"></a>
<a id="trace-14804"></a>
<a id="trace-14910"></a>
<a id="trace-14912"></a>
<a id="trace-14929"></a>
<a id="trace-14931"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-15020"></a>
<a id="trace-15022"></a>
<a id="trace-15033"></a>
<a id="trace-15035"></a>
<a id="trace-15051"></a>
<a id="trace-15053"></a>
<a id="trace-15071"></a>
<a id="trace-15073"></a>
<a id="trace-15081"></a>
<a id="trace-15083"></a>
<a id="trace-15092"></a>
<a id="trace-15094"></a>
<a id="trace-15108"></a>
<a id="trace-15110"></a>
<a id="trace-15117"></a>
<a id="trace-15119"></a>
<a id="trace-15131"></a>
<a id="trace-15133"></a>
<a id="trace-15140"></a>
<a id="trace-15142"></a>
<a id="trace-15211"></a>
<a id="trace-15213"></a>
<a id="trace-15218"></a>
<a id="trace-15220"></a>
<a id="trace-15235"></a>
<a id="trace-15237"></a>
<a id="trace-15244"></a>
<a id="trace-15246"></a>
<a id="trace-15264"></a>
<a id="trace-15266"></a>
<a id="trace-15276"></a>
<a id="trace-15278"></a>
<a id="trace-15289"></a>
<a id="trace-15291"></a>
<a id="trace-15301"></a>
<a id="trace-15303"></a>
<a id="trace-15312"></a>
<a id="trace-15314"></a>
<a id="trace-15322"></a>
<a id="trace-15324"></a>
<a id="trace-15396"></a>
<a id="trace-15398"></a>
<a id="trace-15407"></a>
<a id="trace-15409"></a>
<a id="trace-15424"></a>
<a id="trace-15426"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15450"></a>
<a id="trace-15452"></a>
<a id="trace-15461"></a>
<a id="trace-15463"></a>
<a id="trace-15475"></a>
<a id="trace-15477"></a>
<a id="trace-15484"></a>
<a id="trace-15486"></a>
<a id="trace-15497"></a>
<a id="trace-15499"></a>
<a id="trace-15507"></a>
<a id="trace-15509"></a>
<a id="trace-15576"></a>
<a id="trace-15578"></a>
<a id="trace-15584"></a>
<a id="trace-15586"></a>
<a id="trace-15598"></a>
<a id="trace-15600"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15620"></a>
<a id="trace-15622"></a>
<a id="trace-15630"></a>
<a id="trace-15632"></a>
<a id="trace-15643"></a>
<a id="trace-15645"></a>
<a id="trace-15657"></a>
<a id="trace-15659"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
<a id="trace-15717"></a>
<a id="trace-15719"></a>
<a id="trace-15793"></a>
<a id="trace-15795"></a>
<a id="trace-15805"></a>
<a id="trace-15807"></a>
<a id="trace-15817"></a>
<a id="trace-15819"></a>
<a id="trace-15832"></a>
<a id="trace-15834"></a>
<a id="trace-15844"></a>
<a id="trace-15846"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15948"></a>
<a id="trace-15950"></a>
<a id="trace-15964"></a>
<a id="trace-15966"></a>
<a id="trace-15980"></a>
<a id="trace-15982"></a>
<a id="trace-15986"></a>
<a id="trace-15988"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16069"></a>
<a id="trace-16071"></a>
<a id="trace-16081"></a>
<a id="trace-16083"></a>
<a id="trace-16089"></a>
<a id="trace-16091"></a>
<a id="trace-16100"></a>
<a id="trace-16102"></a>
<a id="trace-16108"></a>
<a id="trace-16110"></a>
<a id="trace-16120"></a>
<a id="trace-16122"></a>
<a id="trace-16132"></a>
<a id="trace-16134"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16148"></a>
<a id="trace-16150"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16219"></a>
<a id="trace-16221"></a>
<a id="trace-16229"></a>
<a id="trace-16231"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-16243"></a>
<a id="trace-16245"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16259"></a>
<a id="trace-16261"></a>
<a id="trace-16269"></a>
<a id="trace-16271"></a>
<a id="trace-16279"></a>
<a id="trace-16281"></a>
<a id="trace-16283"></a>
<a id="trace-16285"></a>
<a id="trace-16349"></a>
<a id="trace-16351"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16365"></a>
<a id="trace-16367"></a>
<a id="trace-16371"></a>
<a id="trace-16373"></a>
<a id="trace-16380"></a>
<a id="trace-16382"></a>
<a id="trace-16386"></a>
<a id="trace-16388"></a>
<a id="trace-16397"></a>
<a id="trace-16399"></a>
<a id="trace-16406"></a>
<a id="trace-16408"></a>
<a id="trace-16417"></a>
<a id="trace-16419"></a>
<a id="trace-16421"></a>
<a id="trace-16423"></a>
<a id="trace-16490"></a>
<a id="trace-16492"></a>
<a id="trace-16510"></a>
<a id="trace-16512"></a>
<a id="trace-16520"></a>
<a id="trace-16522"></a>
<a id="trace-16527"></a>
<a id="trace-16529"></a>
<a id="trace-16536"></a>
<a id="trace-16538"></a>
<a id="trace-16541"></a>
<a id="trace-16543"></a>
<a id="trace-16550"></a>
<a id="trace-16552"></a>
<a id="trace-16558"></a>
<a id="trace-16560"></a>
<a id="trace-16568"></a>
<a id="trace-16570"></a>
<a id="trace-16576"></a>
<a id="trace-16578"></a>
<a id="trace-16646"></a>
<a id="trace-16648"></a>
<a id="trace-16658"></a>
<a id="trace-16660"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16700"></a>
<a id="trace-16702"></a>
<a id="trace-16712"></a>
<a id="trace-16714"></a>
<a id="trace-16724"></a>
<a id="trace-16726"></a>
<a id="trace-16731"></a>
<a id="trace-16733"></a>
<a id="trace-16740"></a>
<a id="trace-16742"></a>
<a id="trace-16744"></a>
<a id="trace-16746"></a>
<a id="trace-16813"></a>
<a id="trace-16815"></a>
<a id="trace-16818"></a>
<a id="trace-16820"></a>
<a id="trace-16827"></a>
<a id="trace-16829"></a>
<a id="trace-16833"></a>
<a id="trace-16835"></a>
<a id="trace-16846"></a>
<a id="trace-16848"></a>
<a id="trace-16852"></a>
<a id="trace-16854"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-16959"></a>
<a id="trace-16961"></a>
<a id="trace-16983"></a>
<a id="trace-16985"></a>
<a id="trace-16989"></a>
<a id="trace-16991"></a>
<a id="trace-17060"></a>
<a id="trace-17062"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17081"></a>
<a id="trace-17083"></a>
<a id="trace-17088"></a>
<a id="trace-17090"></a>
<a id="trace-17098"></a>
<a id="trace-17100"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17114"></a>
<a id="trace-17116"></a>
<a id="trace-17123"></a>
<a id="trace-17125"></a>
<a id="trace-17138"></a>
<a id="trace-17140"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17213"></a>
<a id="trace-17215"></a>
<a id="trace-17228"></a>
<a id="trace-17230"></a>
<a id="trace-17241"></a>
<a id="trace-17243"></a>
<a id="trace-17249"></a>
<a id="trace-17251"></a>
<a id="trace-17262"></a>
<a id="trace-17264"></a>
<a id="trace-17269"></a>
<a id="trace-17271"></a>
<a id="trace-17279"></a>
<a id="trace-17281"></a>
<a id="trace-17288"></a>
<a id="trace-17290"></a>
<a id="trace-17298"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
<a id="trace-17423"></a>
<a id="trace-17425"></a>
<a id="trace-17436"></a>
<a id="trace-17438"></a>
<a id="trace-17450"></a>
<a id="trace-17452"></a>
<a id="trace-17461"></a>
<a id="trace-17463"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17491"></a>
<a id="trace-17493"></a>
<a id="trace-17504"></a>
<a id="trace-17506"></a>
<a id="trace-17514"></a>
<a id="trace-17516"></a>
<a id="trace-17526"></a>
<a id="trace-17528"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17597"></a>
<a id="trace-17599"></a>
<a id="trace-17603"></a>
<a id="trace-17605"></a>
<a id="trace-17615"></a>
<a id="trace-17617"></a>
<a id="trace-17622"></a>
<a id="trace-17624"></a>
<a id="trace-17637"></a>
<a id="trace-17639"></a>
<a id="trace-17645"></a>
<a id="trace-17647"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17676"></a>
<a id="trace-17678"></a>
<a id="trace-17686"></a>
<a id="trace-17688"></a>
<a id="trace-17692"></a>
<a id="trace-17694"></a>
<a id="trace-17761"></a>
<a id="trace-17763"></a>
<a id="trace-17770"></a>
<a id="trace-17772"></a>
<a id="trace-17782"></a>
<a id="trace-17784"></a>
<a id="trace-17790"></a>
<a id="trace-17792"></a>
<a id="trace-17855"></a>
<a id="trace-17857"></a>
<a id="trace-17866"></a>
<a id="trace-17868"></a>
<a id="trace-17879"></a>
<a id="trace-17881"></a>
<a id="trace-17891"></a>
<a id="trace-17893"></a>
<a id="trace-17902"></a>
<a id="trace-17904"></a>
<a id="trace-17914"></a>
<a id="trace-17916"></a>
<a id="trace-17989"></a>
<a id="trace-17991"></a>
<a id="trace-17994"></a>
<a id="trace-17996"></a>
<a id="trace-18004"></a>
<a id="trace-18006"></a>
<a id="trace-18013"></a>
<a id="trace-18015"></a>
<a id="trace-18025"></a>
<a id="trace-18027"></a>
<a id="trace-18034"></a>
<a id="trace-18036"></a>
<a id="trace-18048"></a>
<a id="trace-18050"></a>
<a id="trace-18057"></a>
<a id="trace-18059"></a>
<a id="trace-18066"></a>
<a id="trace-18068"></a>
<a id="trace-18072"></a>
<a id="trace-18074"></a>
<a id="trace-18142"></a>
<a id="trace-18144"></a>
<a id="trace-18146"></a>
<a id="trace-18148"></a>
<a id="trace-18215"></a>
<a id="trace-18217"></a>
<a id="trace-18226"></a>
<a id="trace-18228"></a>
<a id="trace-18247"></a>
<a id="trace-18249"></a>
<a id="trace-18254"></a>
<a id="trace-18256"></a>
<a id="trace-18267"></a>
<a id="trace-18269"></a>
<a id="trace-18278"></a>
<a id="trace-18280"></a>
<a id="trace-18292"></a>
<a id="trace-18294"></a>
<a id="trace-18300"></a>
<a id="trace-18302"></a>
<a id="trace-18369"></a>
<a id="trace-18371"></a>
<a id="trace-18374"></a>
<a id="trace-18376"></a>
<a id="trace-18384"></a>
<a id="trace-18386"></a>
<a id="trace-18392"></a>
<a id="trace-18394"></a>
<a id="trace-18407"></a>
<a id="trace-18409"></a>
<a id="trace-18417"></a>
<a id="trace-18419"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18456"></a>
<a id="trace-18458"></a>
<a id="trace-18463"></a>
<a id="trace-18465"></a>
<a id="trace-18474"></a>
<a id="trace-18476"></a>
<a id="trace-18544"></a>
<a id="trace-18546"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18563"></a>
<a id="trace-18565"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18582"></a>
<a id="trace-18584"></a>
<a id="trace-18588"></a>
<a id="trace-18590"></a>
<a id="trace-18598"></a>
<a id="trace-18600"></a>
<a id="trace-18609"></a>
<a id="trace-18611"></a>
<a id="trace-18617"></a>
<a id="trace-18619"></a>
<a id="trace-18626"></a>
<a id="trace-18628"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18714"></a>
<a id="trace-18716"></a>
<a id="trace-18720"></a>
<a id="trace-18722"></a>
<a id="trace-18729"></a>
<a id="trace-18731"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18748"></a>
<a id="trace-18750"></a>
<a id="trace-18756"></a>
<a id="trace-18758"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18773"></a>
<a id="trace-18775"></a>
<a id="trace-18842"></a>
<a id="trace-18844"></a>
<a id="trace-18847"></a>
<a id="trace-18849"></a>
<a id="trace-18862"></a>
<a id="trace-18864"></a>
<a id="trace-18877"></a>
<a id="trace-18879"></a>
<a id="trace-18886"></a>
<a id="trace-18888"></a>
<a id="trace-18891"></a>
<a id="trace-18893"></a>
<a id="trace-18901"></a>
<a id="trace-18903"></a>
<a id="trace-18909"></a>
<a id="trace-18911"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18922"></a>
<a id="trace-18924"></a>
<a id="trace-18990"></a>
<a id="trace-18992"></a>
<a id="trace-18996"></a>
<a id="trace-18998"></a>
<a id="trace-19009"></a>
<a id="trace-19011"></a>
<a id="trace-19020"></a>
<a id="trace-19022"></a>
<a id="trace-19031"></a>
<a id="trace-19033"></a>
<a id="trace-19040"></a>
<a id="trace-19042"></a>
<a id="trace-19058"></a>
<a id="trace-19060"></a>
<a id="trace-19065"></a>
<a id="trace-19067"></a>
<a id="trace-19073"></a>
<a id="trace-19075"></a>
<a id="trace-19077"></a>
<a id="trace-19079"></a>
<a id="trace-19142"></a>
<a id="trace-19144"></a>
<a id="trace-19147"></a>
<a id="trace-19149"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19166"></a>
<a id="trace-19168"></a>
<a id="trace-19181"></a>
<a id="trace-19183"></a>
<a id="trace-19187"></a>
<a id="trace-19189"></a>
<a id="trace-19203"></a>
<a id="trace-19205"></a>
<a id="trace-19211"></a>
<a id="trace-19213"></a>
<a id="trace-19223"></a>
<a id="trace-19225"></a>
<a id="trace-19335"></a>
<a id="trace-19337"></a>
<a id="trace-19408"></a>
<a id="trace-19410"></a>
<a id="trace-19419"></a>
<a id="trace-19421"></a>
<a id="trace-19430"></a>
<a id="trace-19432"></a>
<a id="trace-19438"></a>
<a id="trace-19440"></a>
<a id="trace-19455"></a>
<a id="trace-19457"></a>
<a id="trace-19462"></a>
<a id="trace-19464"></a>
<a id="trace-19475"></a>
<a id="trace-19477"></a>
<a id="trace-19486"></a>
<a id="trace-19488"></a>
<a id="trace-19499"></a>
<a id="trace-19501"></a>
<a id="trace-19505"></a>
<a id="trace-19507"></a>
<a id="trace-19580"></a>
<a id="trace-19582"></a>
<a id="trace-19587"></a>
<a id="trace-19589"></a>
<a id="trace-19604"></a>
<a id="trace-19606"></a>
<a id="trace-19619"></a>
<a id="trace-19621"></a>
<a id="trace-19631"></a>
<a id="trace-19633"></a>
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19743"></a>
<a id="trace-19745"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19870"></a>
<a id="trace-19872"></a>
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19898"></a>
<a id="trace-19900"></a>
<a id="trace-19910"></a>
<a id="trace-19912"></a>
<a id="trace-19930"></a>
<a id="trace-19932"></a>
<a id="trace-19940"></a>
<a id="trace-19942"></a>
<a id="trace-19950"></a>
<a id="trace-19952"></a>
<a id="trace-19956"></a>
<a id="trace-19958"></a>
<a id="trace-20023"></a>
<a id="trace-20025"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20051"></a>
<a id="trace-20053"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20089"></a>
<a id="trace-20091"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20118"></a>
<a id="trace-20120"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20201"></a>
<a id="trace-20203"></a>
<a id="trace-20241"></a>
<a id="trace-20243"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20263"></a>
<a id="trace-20265"></a>
<a id="trace-20271"></a>
<a id="trace-20273"></a>
<a id="trace-20279"></a>
<a id="trace-20281"></a>
<a id="trace-20291"></a>
<a id="trace-20293"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20308"></a>
<a id="trace-20310"></a>
<a id="trace-20319"></a>
<a id="trace-20321"></a>
<a id="trace-20387"></a>
<a id="trace-20389"></a>
<a id="trace-20398"></a>
<a id="trace-20400"></a>
<a id="trace-20420"></a>
<a id="trace-20422"></a>
<a id="trace-20429"></a>
<a id="trace-20431"></a>
<a id="trace-20439"></a>
<a id="trace-20441"></a>
<a id="trace-20445"></a>
<a id="trace-20447"></a>
<a id="trace-20455"></a>
<a id="trace-20457"></a>
<a id="trace-20464"></a>
<a id="trace-20466"></a>
<a id="trace-20475"></a>
<a id="trace-20477"></a>
<a id="trace-20481"></a>
<a id="trace-20483"></a>
<a id="trace-20600"></a>
<a id="trace-20602"></a>
<a id="trace-20609"></a>
<a id="trace-20611"></a>
<a id="trace-20628"></a>
<a id="trace-20630"></a>
<a id="trace-20635"></a>
<a id="trace-20637"></a>
<a id="trace-20652"></a>
<a id="trace-20654"></a>
<a id="trace-20662"></a>
<a id="trace-20664"></a>
<a id="trace-20683"></a>
<a id="trace-20685"></a>
<a id="trace-20691"></a>
<a id="trace-20693"></a>
<a id="trace-20700"></a>
<a id="trace-20702"></a>
<a id="trace-20705"></a>
<a id="trace-20707"></a>
<a id="trace-20771"></a>
<a id="trace-20773"></a>
<a id="trace-20777"></a>
<a id="trace-20779"></a>
<a id="trace-20789"></a>
<a id="trace-20791"></a>
<a id="trace-20797"></a>
<a id="trace-20799"></a>
<a id="trace-20809"></a>
<a id="trace-20811"></a>
<a id="trace-20816"></a>
<a id="trace-20818"></a>
<a id="trace-20832"></a>
<a id="trace-20834"></a>
<a id="trace-20841"></a>
<a id="trace-20843"></a>
<a id="trace-20856"></a>
<a id="trace-20858"></a>
<a id="trace-20914"></a>
<a id="trace-20916"></a>
<a id="trace-20981"></a>
<a id="trace-20983"></a>
<a id="trace-20989"></a>
<a id="trace-20991"></a>
<a id="trace-21000"></a>
<a id="trace-21002"></a>
<a id="trace-21006"></a>
<a id="trace-21008"></a>
<a id="trace-21020"></a>
<a id="trace-21022"></a>
<a id="trace-21025"></a>
<a id="trace-21027"></a>
<a id="trace-21036"></a>
<a id="trace-21038"></a>
<a id="trace-21043"></a>
<a id="trace-21045"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21062"></a>
<a id="trace-21064"></a>
<a id="trace-21129"></a>
<a id="trace-21131"></a>
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21162"></a>
<a id="trace-21164"></a>
<a id="trace-21169"></a>
<a id="trace-21171"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21190"></a>
<a id="trace-21192"></a>
<a id="trace-21201"></a>
<a id="trace-21203"></a>
<a id="trace-21210"></a>
<a id="trace-21212"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21224"></a>
<a id="trace-21226"></a>
<a id="trace-21292"></a>
<a id="trace-21294"></a>
<a id="trace-21296"></a>
<a id="trace-21298"></a>
<a id="trace-21311"></a>
<a id="trace-21313"></a>
<a id="trace-21318"></a>
<a id="trace-21320"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21347"></a>
<a id="trace-21349"></a>
<a id="trace-21363"></a>
<a id="trace-21365"></a>
<a id="trace-21374"></a>
<a id="trace-21376"></a>
<a id="trace-21388"></a>
<a id="trace-21390"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21462"></a>
<a id="trace-21464"></a>
<a id="trace-21583"></a>
<a id="trace-21585"></a>
<a id="trace-21589"></a>
<a id="trace-21591"></a>
<a id="trace-21603"></a>
<a id="trace-21605"></a>
<a id="trace-21616"></a>
<a id="trace-21618"></a>
<a id="trace-21625"></a>
<a id="trace-21627"></a>
<a id="trace-21644"></a>
<a id="trace-21646"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21672"></a>
<a id="trace-21674"></a>
<a id="trace-21741"></a>
<a id="trace-21743"></a>
<a id="trace-21801"></a>
<a id="trace-21803"></a>
<a id="trace-21814"></a>
<a id="trace-21816"></a>
<a id="trace-21823"></a>
<a id="trace-21825"></a>
<a id="trace-21838"></a>
<a id="trace-21840"></a>
<a id="trace-21843"></a>
<a id="trace-21845"></a>
<a id="trace-21854"></a>
<a id="trace-21856"></a>
<a id="trace-21865"></a>
<a id="trace-21867"></a>
<a id="trace-21878"></a>
<a id="trace-21880"></a>
<a id="trace-21883"></a>
<a id="trace-21885"></a>
<a id="trace-21952"></a>
<a id="trace-21954"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-22150"></a>
<a id="trace-22152"></a>
<a id="trace-22176"></a>
<a id="trace-22178"></a>
<a id="trace-22187"></a>
<a id="trace-22189"></a>
<a id="trace-22365"></a>
<a id="trace-22367"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22400"></a>
<a id="trace-22402"></a>
<a id="trace-22406"></a>
<a id="trace-22408"></a>
<a id="trace-22475"></a>
<a id="trace-22477"></a>
<a id="trace-22482"></a>
<a id="trace-22484"></a>
<a id="trace-22494"></a>
<a id="trace-22496"></a>
<a id="trace-22555"></a>
<a id="trace-22557"></a>
<a id="trace-22572"></a>
<a id="trace-22574"></a>
<a id="trace-22581"></a>
<a id="trace-22583"></a>
<a id="trace-22594"></a>
<a id="trace-22596"></a>
<a id="trace-22608"></a>
<a id="trace-22610"></a>
<a id="trace-22620"></a>
<a id="trace-22622"></a>
<a id="trace-22627"></a>
<a id="trace-22629"></a>
<a id="trace-22693"></a>
<a id="trace-22695"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22716"></a>
<a id="trace-22718"></a>
<a id="trace-22724"></a>
<a id="trace-22726"></a>
<a id="trace-22739"></a>
<a id="trace-22741"></a>
<a id="trace-22750"></a>
<a id="trace-22752"></a>
<a id="trace-22764"></a>
<a id="trace-22766"></a>
<a id="trace-22775"></a>
<a id="trace-22777"></a>
<a id="trace-22786"></a>
<a id="trace-22788"></a>
<a id="trace-22791"></a>
<a id="trace-22793"></a>
<a id="trace-22855"></a>
<a id="trace-22857"></a>
<a id="trace-22861"></a>
<a id="trace-22863"></a>
<a id="trace-22872"></a>
<a id="trace-22874"></a>
<a id="trace-22878"></a>
<a id="trace-22880"></a>
<a id="trace-22891"></a>
<a id="trace-22893"></a>
<a id="trace-22900"></a>
<a id="trace-22902"></a>
<a id="trace-22911"></a>
<a id="trace-22913"></a>
<a id="trace-22924"></a>
<a id="trace-22926"></a>
<a id="trace-22937"></a>
<a id="trace-22939"></a>
<a id="trace-22941"></a>
<a id="trace-22943"></a>
<a id="trace-23005"></a>
<a id="trace-23007"></a>
<a id="trace-23013"></a>
<a id="trace-23015"></a>
<a id="trace-23023"></a>
<a id="trace-23025"></a>
<a id="trace-23028"></a>
<a id="trace-23030"></a>
<a id="trace-23039"></a>
<a id="trace-23041"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23058"></a>
<a id="trace-23060"></a>
<a id="trace-23066"></a>
<a id="trace-23068"></a>
<a id="trace-23077"></a>
<a id="trace-23079"></a>
<a id="trace-23085"></a>
<a id="trace-23087"></a>
<a id="trace-23159"></a>
<a id="trace-23161"></a>
<a id="trace-23169"></a>
<a id="trace-23171"></a>
<a id="trace-23179"></a>
<a id="trace-23181"></a>
<a id="trace-23194"></a>
<a id="trace-23196"></a>
<a id="trace-23205"></a>
<a id="trace-23207"></a>
<a id="trace-23216"></a>
<a id="trace-23218"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23239"></a>
<a id="trace-23241"></a>
<a id="trace-23248"></a>
<a id="trace-23250"></a>
<a id="trace-23253"></a>
<a id="trace-23255"></a>
<a id="trace-23320"></a>
<a id="trace-23322"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23339"></a>
<a id="trace-23341"></a>
<a id="trace-23355"></a>
<a id="trace-23357"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23380"></a>
<a id="trace-23382"></a>
<a id="trace-23392"></a>
<a id="trace-23394"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23409"></a>
<a id="trace-23411"></a>
<a id="trace-23413"></a>
<a id="trace-23415"></a>
<a id="trace-23477"></a>
<a id="trace-23479"></a>
<a id="trace-23481"></a>
<a id="trace-23483"></a>
<a id="trace-23490"></a>
<a id="trace-23492"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23509"></a>
<a id="trace-23511"></a>
<a id="trace-23519"></a>
<a id="trace-23521"></a>
<a id="trace-23537"></a>
<a id="trace-23539"></a>
<a id="trace-23549"></a>
<a id="trace-23551"></a>
<a id="trace-23563"></a>
<a id="trace-23565"></a>
<a id="trace-23568"></a>
<a id="trace-23570"></a>
<a id="trace-23632"></a>
<a id="trace-23634"></a>
<a id="trace-23636"></a>
<a id="trace-23638"></a>
<a id="trace-23645"></a>
<a id="trace-23647"></a>
<a id="trace-23650"></a>
<a id="trace-23652"></a>
<a id="trace-23659"></a>
<a id="trace-23661"></a>
<a id="trace-23665"></a>
<a id="trace-23667"></a>
<a id="trace-23677"></a>
<a id="trace-23679"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23699"></a>
<a id="trace-23701"></a>
<a id="trace-23711"></a>
<a id="trace-23713"></a>
<a id="trace-23781"></a>
<a id="trace-23783"></a>
<a id="trace-23788"></a>
<a id="trace-23790"></a>
<a id="trace-23799"></a>
<a id="trace-23801"></a>
<a id="trace-23806"></a>
<a id="trace-23808"></a>
<a id="trace-23816"></a>
<a id="trace-23818"></a>
<a id="trace-23875"></a>
<a id="trace-23877"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23896"></a>
<a id="trace-23898"></a>
<a id="trace-23906"></a>
<a id="trace-23908"></a>
<a id="trace-23912"></a>
<a id="trace-23914"></a>
<a id="trace-23981"></a>
<a id="trace-23983"></a>
<a id="trace-23987"></a>
<a id="trace-23989"></a>
<a id="trace-24003"></a>
<a id="trace-24005"></a>
<a id="trace-24008"></a>
<a id="trace-24010"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24031"></a>
<a id="trace-24033"></a>
<a id="trace-24041"></a>
<a id="trace-24043"></a>
<a id="trace-24053"></a>
<a id="trace-24055"></a>
<a id="trace-24063"></a>
<a id="trace-24065"></a>
<a id="trace-24067"></a>
<a id="trace-24069"></a>
<a id="trace-24131"></a>
<a id="trace-24133"></a>
<a id="trace-24135"></a>
<a id="trace-24137"></a>
<a id="trace-24146"></a>
<a id="trace-24148"></a>
<a id="trace-24151"></a>
<a id="trace-24153"></a>
<a id="trace-24164"></a>
<a id="trace-24166"></a>
<a id="trace-24170"></a>
<a id="trace-24172"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24200"></a>
<a id="trace-24202"></a>
<a id="trace-24215"></a>
<a id="trace-24217"></a>
<a id="trace-24282"></a>
<a id="trace-24284"></a>
<a id="trace-24287"></a>
<a id="trace-24289"></a>
<a id="trace-24296"></a>
<a id="trace-24298"></a>
<a id="trace-24301"></a>
<a id="trace-24303"></a>
<a id="trace-24310"></a>
<a id="trace-24312"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24327"></a>
<a id="trace-24329"></a>
<a id="trace-24337"></a>
<a id="trace-24339"></a>
<a id="trace-24349"></a>
<a id="trace-24351"></a>
<a id="trace-24360"></a>
<a id="trace-24362"></a>
<a id="trace-24428"></a>
<a id="trace-24430"></a>
<a id="trace-24434"></a>
<a id="trace-24436"></a>
<a id="trace-24445"></a>
<a id="trace-24447"></a>
<a id="trace-24450"></a>
<a id="trace-24452"></a>
<a id="trace-24461"></a>
<a id="trace-24463"></a>
<a id="trace-24468"></a>
<a id="trace-24470"></a>
<a id="trace-24479"></a>
<a id="trace-24481"></a>
<a id="trace-24487"></a>
<a id="trace-24489"></a>
<a id="trace-24497"></a>
<a id="trace-24499"></a>
<a id="trace-24503"></a>
<a id="trace-24505"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24588"></a>
<a id="trace-24590"></a>
<a id="trace-24597"></a>
<a id="trace-24599"></a>
<a id="trace-24607"></a>
<a id="trace-24609"></a>
<a id="trace-24612"></a>
<a id="trace-24614"></a>
<a id="trace-24623"></a>
<a id="trace-24625"></a>
<a id="trace-24635"></a>
<a id="trace-24637"></a>
<a id="trace-24645"></a>
<a id="trace-24647"></a>
<a id="trace-24653"></a>
<a id="trace-24655"></a>
<a id="trace-24717"></a>
<a id="trace-24719"></a>
<a id="trace-24721"></a>
<a id="trace-24723"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24739"></a>
<a id="trace-24741"></a>
<a id="trace-24750"></a>
<a id="trace-24752"></a>
<a id="trace-24761"></a>
<a id="trace-24763"></a>
<a id="trace-24775"></a>
<a id="trace-24777"></a>
<a id="trace-24784"></a>
<a id="trace-24786"></a>
<a id="trace-24794"></a>
<a id="trace-24796"></a>
<a id="trace-24800"></a>
<a id="trace-24802"></a>
<a id="trace-24866"></a>
<a id="trace-24868"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24887"></a>
<a id="trace-24889"></a>
<a id="trace-24896"></a>
<a id="trace-24898"></a>
<a id="trace-24903"></a>
<a id="trace-24905"></a>
<a id="trace-24915"></a>
<a id="trace-24917"></a>
<a id="trace-24925"></a>
<a id="trace-24927"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24945"></a>
<a id="trace-24947"></a>
<a id="trace-25013"></a>
<a id="trace-25015"></a>
<a id="trace-25018"></a>
<a id="trace-25020"></a>
<a id="trace-25027"></a>
<a id="trace-25029"></a>
<a id="trace-25034"></a>
<a id="trace-25036"></a>
<a id="trace-25045"></a>
<a id="trace-25047"></a>
<a id="trace-25050"></a>
<a id="trace-25052"></a>
<a id="trace-25062"></a>
<a id="trace-25064"></a>
<a id="trace-25072"></a>
<a id="trace-25074"></a>
<a id="trace-25085"></a>
<a id="trace-25087"></a>
<a id="trace-25089"></a>
<a id="trace-25091"></a>
<a id="trace-25157"></a>
<a id="trace-25159"></a>
<a id="trace-25161"></a>
<a id="trace-25163"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25185"></a>
<a id="trace-25187"></a>
<a id="trace-25197"></a>
<a id="trace-25199"></a>
<a id="trace-25208"></a>
<a id="trace-25210"></a>
<a id="trace-25216"></a>
<a id="trace-25218"></a>
<a id="trace-25227"></a>
<a id="trace-25229"></a>
<a id="trace-25235"></a>
<a id="trace-25237"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 570): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000617292524974, 'next_transition': 598}.
<a id="trace-823"></a>
<a id="trace-825"></a>
<a id="trace-909"></a>
<a id="trace-911"></a>
<a id="trace-937"></a>
<a id="trace-939"></a>
<a id="trace-968"></a>
<a id="trace-970"></a>
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1039"></a>
<a id="trace-1041"></a>
<a id="trace-1130"></a>
<a id="trace-1132"></a>
<a id="trace-1291"></a>
<a id="trace-1293"></a>
<a id="trace-1314"></a>
<a id="trace-1316"></a>
<a id="trace-1338"></a>
<a id="trace-1340"></a>
<a id="trace-1375"></a>
<a id="trace-1377"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 823): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 737. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.64780659224565, 'next_transition': 909}.
<a id="trace-1137"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1137): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.3326404763859605, 'next_transition': 136}.
<a id="trace-1138"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1138): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.3326404763859605, 'next_transition': 136}.
<a id="trace-135"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 135): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1402}.
<a id="trace-136"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 136): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.699065590896495, 'next_transition': 1836}.
<a id="trace-1382"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1382): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1382. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1402}.
<a id="trace-1383"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1383): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1383. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1402}.
<a id="trace-1384"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1384): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1384. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.699065590896495, 'next_transition': 1836}.
<a id="trace-1385"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1385): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1385. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.699065590896495, 'next_transition': 1836}.
<a id="trace-1402"></a>
<a id="trace-1404"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1402): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1385. Next observer evidence: None.
<a id="trace-1412"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1412): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1051. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1751}.
<a id="trace-1413"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1413): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1051. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724798762976573, 'next_transition': 1751}.
<a id="trace-1751"></a>
<a id="trace-1753"></a>
<a id="trace-1776"></a>
<a id="trace-1778"></a>
<a id="trace-2318"></a>
<a id="trace-2320"></a>
<a id="trace-3024"></a>
<a id="trace-3026"></a>
- 13.20s–16.25s (×8), actor 5, squad 0 (trace 1751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1385. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41344887927848795, 'next_transition': 1776}.
<a id="trace-1836"></a>
- 14.55s–14.55s (×1), actor 8, squad 1 (trace 1836): ReactToContact: cover and return fire. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2046}.
<a id="trace-1837"></a>
- 14.55s–14.55s (×1), actor 8, squad 1 (trace 1837): bounding overwatch. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2046}.
<a id="trace-1838"></a>
<a id="trace-2046"></a>
<a id="trace-2332"></a>
<a id="trace-2533"></a>
<a id="trace-2801"></a>
<a id="trace-3032"></a>
<a id="trace-3260"></a>
- 14.55s–16.50s (×7), actor 8, squad 1 (trace 1838): new contact inside 100 m. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 14.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7875073203146131, 'next_transition': 2046}.
<a id="trace-3504"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3504): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3960}.
<a id="trace-3505"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 3505): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3960}.
<a id="trace-3506"></a>
<a id="trace-3960"></a>
<a id="trace-4401"></a>
- 16.75s–17.70s (×3), actor 0, squad 0 (trace 3506): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 17.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9449943686307054, 'next_transition': 3960}.
<a id="trace-4830"></a>
<a id="trace-4832"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
- 17.75s–18.75s (×4), actor 5, squad 0 (trace 4830): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2244. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.109815820463686, 'next_transition': 4945}.
<a id="trace-4952"></a>
- 18.75s–18.75s (×1), actor 0, squad 0 (trace 4952): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2239. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.667256249948057, 'next_transition': 5432}.
<a id="trace-5432"></a>
<a id="trace-5434"></a>
<a id="trace-5485"></a>
<a id="trace-5487"></a>
<a id="trace-5629"></a>
<a id="trace-5631"></a>
- 19.25s–20.25s (×6), actor 5, squad 0 (trace 5432): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2244. Next observer evidence: {'until': 19.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5709423424816438, 'next_transition': 5485}.
<a id="trace-5637"></a>
- 20.25s–20.25s (×1), actor 0, squad 0 (trace 5637): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 5523. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5129763160738006, 'next_transition': 6127}.
<a id="trace-6127"></a>
<a id="trace-6129"></a>
<a id="trace-6228"></a>
<a id="trace-6230"></a>
<a id="trace-6278"></a>
<a id="trace-6280"></a>
<a id="trace-6326"></a>
<a id="trace-6328"></a>
<a id="trace-6370"></a>
<a id="trace-6372"></a>
<a id="trace-6424"></a>
<a id="trace-6426"></a>
- 20.75s–23.75s (×12), actor 5, squad 0 (trace 6127): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5528. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9114731380051695, 'next_transition': 6228}.
<a id="trace-6149"></a>
- 21.00s–21.00s (×1), actor 9, squad 1 (trace 6149): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5531. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.462235015913612, 'next_transition': 6386}.
<a id="trace-6386"></a>
- 23.30s–23.30s (×1), actor 9, squad 1 (trace 6386): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 5531. Next observer evidence: {'until': 24.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6519}.
<a id="trace-6439"></a>
- 23.80s–23.80s (×1), actor 0, squad 0 (trace 6439): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 5523. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1696836451698399, 'next_transition': 6476}.
<a id="trace-6476"></a>
<a id="trace-6478"></a>
<a id="trace-6659"></a>
<a id="trace-6683"></a>
<a id="trace-6712"></a>
<a id="trace-6747"></a>
<a id="trace-6749"></a>
- 24.25s–26.75s (×7), actor 5, squad 0 (trace 6476): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 5528. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.922058670642273, 'next_transition': 6659}.
<a id="trace-6519"></a>
- 24.90s–24.90s (×1), actor 9, squad 1 (trace 6519): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 5531. Next observer evidence: {'until': 49.6, 'shots': 7, 'casualties': 0, 'mean_displacement': 2.2438000000000002, 'next_transition': 13162}.
<a id="trace-6520"></a>
- 24.90s–24.90s (×1), actor 9, squad 1 (trace 6520): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 5531. Next observer evidence: {'until': 49.6, 'shots': 7, 'casualties': 0, 'mean_displacement': 2.2438000000000002, 'next_transition': 13162}.
<a id="trace-6770"></a>
- 27.00s–27.00s (×1), actor 0, squad 0 (trace 6770): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 6574. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.00014608430784999194, 'next_transition': 7227}.
<a id="trace-7227"></a>
<a id="trace-7229"></a>
<a id="trace-7254"></a>
<a id="trace-7256"></a>
<a id="trace-7301"></a>
<a id="trace-7303"></a>
<a id="trace-7345"></a>
<a id="trace-7347"></a>
<a id="trace-7512"></a>
<a id="trace-7514"></a>
- 27.25s–30.25s (×10), actor 5, squad 0 (trace 7227): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 6579. Next observer evidence: {'until': 27.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.01206880825982827, 'next_transition': 7254}.
<a id="trace-7541"></a>
- 30.60s–30.60s (×1), actor 0, squad 0 (trace 7541): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7422. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3624363178624416, 'next_transition': 7660}.
<a id="trace-7660"></a>
<a id="trace-7662"></a>
- 32.75s–32.75s (×2), actor 5, squad 0 (trace 7660): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7427. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.526962720961911, 'next_transition': 7707}.
<a id="trace-7707"></a>
- 33.60s–33.60s (×1), actor 0, squad 0 (trace 7707): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 7422. Next observer evidence: None.
<a id="trace-10390"></a>
- 33.60s–33.60s (×1), actor 0, squad 0 (trace 10390): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 7422. Next observer evidence: None.
<a id="trace-10391"></a>
- 33.60s–33.60s (×1), actor 0, squad 0 (trace 10391): MoveTactically. Knowledge: actor memory at 30.00s, trace 7422. Next observer evidence: None.
<a id="trace-10392"></a>
- 33.60s–33.60s (×1), actor 0, squad 0 (trace 10392): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 7422. Next observer evidence: None.
<a id="trace-10784"></a>
<a id="trace-10786"></a>
<a id="trace-10923"></a>
<a id="trace-10925"></a>
<a id="trace-10937"></a>
<a id="trace-10939"></a>
<a id="trace-10977"></a>
<a id="trace-10979"></a>
<a id="trace-11012"></a>
<a id="trace-11014"></a>
<a id="trace-11055"></a>
<a id="trace-11057"></a>
<a id="trace-11081"></a>
<a id="trace-11083"></a>
<a id="trace-11163"></a>
<a id="trace-11165"></a>
<a id="trace-11213"></a>
<a id="trace-11215"></a>
<a id="trace-11251"></a>
<a id="trace-11253"></a>
- 33.75s–39.75s (×20), actor 5, squad 0 (trace 10784): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7427. Next observer evidence: {'until': 35.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.082807768014803, 'next_transition': 10923}.
<a id="trace-746"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 746): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11272"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 11272): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.591008 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 11272. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7436625417024262, 'next_transition': 11400}.
<a id="trace-11273"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 11273): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.591008 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 11273. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7436625417024262, 'next_transition': 11400}.
<a id="trace-11400"></a>
<a id="trace-11402"></a>
<a id="trace-11482"></a>
<a id="trace-11484"></a>
<a id="trace-11562"></a>
<a id="trace-11564"></a>
- 40.25s–41.25s (×6), actor 5, squad 0 (trace 11400): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11293. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7438524470104497, 'next_transition': 11482}.
<a id="trace-11723"></a>
- 42.10s–42.10s (×1), actor 0, squad 0 (trace 11723): NeedSupport. Knowledge: actor memory at 40.00s, trace 11288. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28941728105783276, 'next_transition': 11763}.
<a id="trace-11763"></a>
<a id="trace-11765"></a>
<a id="trace-11861"></a>
<a id="trace-11863"></a>
<a id="trace-11950"></a>
<a id="trace-11952"></a>
- 42.25s–43.25s (×6), actor 5, squad 0 (trace 11763): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11293. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4994177502450221, 'next_transition': 11861}.
<a id="trace-12045"></a>
- 43.85s–43.85s (×1), actor 0, squad 0 (trace 12045): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 11288. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21169849463598092, 'next_transition': 12692}.
<a id="trace-12046"></a>
- 43.85s–43.85s (×1), actor 0, squad 0 (trace 12046): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 11288. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.21169849463598092, 'next_transition': 12692}.
<a id="trace-12692"></a>
<a id="trace-12694"></a>
<a id="trace-12898"></a>
<a id="trace-13073"></a>
<a id="trace-13109"></a>
<a id="trace-13144"></a>
- 44.25s–49.25s (×6), actor 5, squad 0 (trace 12692): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 11293. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6514764394782747, 'next_transition': 12898}.
<a id="trace-13154"></a>
- 49.30s–49.30s (×1), actor 5, squad 0 (trace 13154): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 49.30s, trace 13154. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9729481472004753, 'next_transition': 13242}.
<a id="trace-13162"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 13162): NeedSupport. Knowledge: actor memory at 45.00s, trace 12804. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 2.2438000000000002, 'next_transition': None}.
<a id="trace-13242"></a>
- 50.20s–50.20s (×1), actor 1, squad 0 (trace 13242): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 13177. Next observer evidence: None.
<a id="trace-13243"></a>
- 50.20s–50.20s (×1), actor 1, squad 0 (trace 13243): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 13177. Next observer evidence: None.
<a id="trace-13398"></a>
<a id="trace-13400"></a>
<a id="trace-13433"></a>
<a id="trace-13435"></a>
<a id="trace-13467"></a>
<a id="trace-13469"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13532"></a>
<a id="trace-13622"></a>
<a id="trace-13624"></a>
<a id="trace-13652"></a>
<a id="trace-13654"></a>
<a id="trace-13684"></a>
<a id="trace-13686"></a>
<a id="trace-13715"></a>
<a id="trace-13746"></a>
<a id="trace-13748"></a>
<a id="trace-13838"></a>
<a id="trace-13840"></a>
<a id="trace-13872"></a>
<a id="trace-13874"></a>
<a id="trace-13902"></a>
<a id="trace-13927"></a>
<a id="trace-13929"></a>
- 50.25s–63.25s (×25), actor 5, squad 0 (trace 13398): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 13179. Next observer evidence: {'until': 51.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9168053237150704, 'next_transition': 13433}.
<a id="trace-13939"></a>
- 63.45s–63.45s (×1), actor 1, squad 0 (trace 13939): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 13774. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14067}.
<a id="trace-14042"></a>
- 63.45s–63.45s (×1), actor 1, squad 0 (trace 14042): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 13774. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14067}.
<a id="trace-14067"></a>
<a id="trace-14163"></a>
<a id="trace-14221"></a>
<a id="trace-14223"></a>
<a id="trace-14244"></a>
<a id="trace-14246"></a>
<a id="trace-14272"></a>
<a id="trace-14274"></a>
<a id="trace-14358"></a>
<a id="trace-14387"></a>
<a id="trace-14389"></a>
- 64.25s–71.25s (×11), actor 5, squad 0 (trace 14067): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 13776. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6470274999999999, 'next_transition': 14163}.
<a id="trace-14405"></a>
- 71.70s–71.70s (×1), actor 1, squad 0 (trace 14405): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 14298. Next observer evidence: {'until': 73.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.6609738968244303, 'next_transition': 14602}.
<a id="trace-14406"></a>
- 71.70s–71.70s (×1), actor 1, squad 0 (trace 14406): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 14298. Next observer evidence: {'until': 73.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.6609738968244303, 'next_transition': 14602}.
<a id="trace-14602"></a>
<a id="trace-14628"></a>
<a id="trace-14717"></a>
<a id="trace-14744"></a>
<a id="trace-14770"></a>
<a id="trace-14798"></a>
- 73.25s–78.25s (×6), actor 5, squad 0 (trace 14602): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 14300. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4345862733320076, 'next_transition': 14628}.
<a id="trace-14807"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 14807): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 14656. Next observer evidence: {'until': 79.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30180000000000007, 'next_transition': 14925}.
<a id="trace-14895"></a>
- 78.25s–78.25s (×1), actor 1, squad 0 (trace 14895): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 14656. Next observer evidence: {'until': 79.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.30180000000000007, 'next_transition': 14925}.
<a id="trace-14925"></a>
- 79.25s–79.25s (×1), actor 5, squad 0 (trace 14925): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 14658. Next observer evidence: {'until': 83.2, 'shots': 4, 'casualties': 1, 'mean_displacement': 0.2654499999999995, 'next_transition': 15104}.
<a id="trace-15104"></a>
<a id="trace-15127"></a>
- 83.25s–84.25s (×2), actor 1, squad 0 (trace 15104): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 80.00s, trace 14951. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15127}.
<a id="trace-1259"></a>
- 85.15s–85.15s (×1), actor 1, squad 0 (events line 1259): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15159"></a>
- 85.15s–85.15s (×1), actor 1, squad 0 (trace 15159): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 85.15s, trace 15159. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15207}.
<a id="trace-15160"></a>
- 85.15s–85.15s (×1), actor 1, squad 0 (trace 15160): renew committed intent (75 s lifetime). Knowledge: actor memory at 85.15s, trace 15160. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15207}.
<a id="trace-15207"></a>
<a id="trace-15231"></a>
<a id="trace-15260"></a>
<a id="trace-15285"></a>
<a id="trace-15308"></a>
<a id="trace-15392"></a>
<a id="trace-15420"></a>
<a id="trace-15446"></a>
<a id="trace-15471"></a>
<a id="trace-15493"></a>
<a id="trace-15572"></a>
<a id="trace-15594"></a>
<a id="trace-15616"></a>
<a id="trace-15639"></a>
- 85.25s–98.25s (×14), actor 1, squad 0 (trace 15207): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 85.15s, trace 15160. Next observer evidence: {'until': 86.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.13089999999999927, 'next_transition': 15231}.
<a id="trace-15662"></a>
- 98.75s–98.75s (×1), actor 1, squad 0 (trace 15662): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 95.00s, trace 15513. Next observer evidence: {'until': 99, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 15669}.
<a id="trace-15663"></a>
- 98.75s–98.75s (×1), actor 1, squad 0 (trace 15663): NeedSupport. Knowledge: actor memory at 95.00s, trace 15513. Next observer evidence: {'until': 99, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 15669}.
<a id="trace-15669"></a>
- 99.10s–99.10s (×1), actor 1, squad 0 (trace 15669): Reorganise: completed/failed drill. Knowledge: actor memory at 95.00s, trace 15513. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15789}.
<a id="trace-15672"></a>
- 99.10s–99.10s (×1), actor 1, squad 0 (trace 15672): ReactToContact: cover and return fire. Knowledge: actor memory at 95.00s, trace 15513. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15789}.
<a id="trace-15673"></a>
- 99.10s–99.10s (×1), actor 1, squad 0 (trace 15673): Reorganise complete: known contact. Knowledge: actor memory at 95.00s, trace 15513. Next observer evidence: {'until': 100.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15789}.
<a id="trace-15789"></a>
<a id="trace-15813"></a>
<a id="trace-15840"></a>
- 100.25s–102.25s (×3), actor 1, squad 0 (trace 15789): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15813}.
<a id="trace-15851"></a>
- 102.70s–102.70s (×1), actor 1, squad 0 (trace 15851): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15944}.
<a id="trace-15854"></a>
- 102.70s–102.70s (×1), actor 1, squad 0 (trace 15854): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15944}.
<a id="trace-15855"></a>
- 102.70s–102.70s (×1), actor 1, squad 0 (trace 15855): rearward bound: one stationary suppressing element. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15944}.
<a id="trace-15944"></a>
- 103.25s–103.25s (×1), actor 1, squad 0 (trace 15944): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15959}.
<a id="trace-15959"></a>
- 103.70s–103.70s (×1), actor 1, squad 0 (trace 15959): NeedSupport. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 104.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15976}.
<a id="trace-15976"></a>
<a id="trace-16052"></a>
<a id="trace-16077"></a>
<a id="trace-16096"></a>
<a id="trace-16116"></a>
<a id="trace-16140"></a>
<a id="trace-16209"></a>
<a id="trace-16225"></a>
<a id="trace-16239"></a>
<a id="trace-16255"></a>
<a id="trace-16275"></a>
<a id="trace-16345"></a>
<a id="trace-16361"></a>
<a id="trace-16376"></a>
<a id="trace-16393"></a>
<a id="trace-16413"></a>
<a id="trace-16486"></a>
<a id="trace-16516"></a>
<a id="trace-16532"></a>
<a id="trace-16546"></a>
<a id="trace-16564"></a>
- 104.25s–124.25s (×21), actor 1, squad 0 (trace 15976): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 100.00s, trace 15728. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16052}.
<a id="trace-16571"></a>
- 124.30s–124.30s (×1), actor 1, squad 0 (trace 16571): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 120.00s, trace 16425. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16642}.
<a id="trace-16642"></a>
<a id="trace-16664"></a>
<a id="trace-16696"></a>
<a id="trace-16720"></a>
<a id="trace-16736"></a>
- 125.25s–129.30s (×5), actor 1, squad 0 (trace 16642): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 125.00s, trace 16579. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16664}.
<a id="trace-1389"></a>
- 130.15s–130.15s (×1), actor 1, squad 0 (events line 1389): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-16760"></a>
- 130.15s–130.15s (×1), actor 1, squad 0 (trace 16760): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.183581 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 130.15s, trace 16760. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16809}.
<a id="trace-16761"></a>
- 130.15s–130.15s (×1), actor 1, squad 0 (trace 16761): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.183581 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 130.15s, trace 16761. Next observer evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16809}.
<a id="trace-16809"></a>
<a id="trace-16823"></a>
<a id="trace-16842"></a>
- 130.30s–132.30s (×3), actor 1, squad 0 (trace 16809): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.15s, trace 16761. Next observer evidence: {'until': 131.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16823}.
<a id="trace-16855"></a>
- 132.90s–132.90s (×1), actor 1, squad 0 (trace 16855): Withdraw to received rally. Knowledge: actor memory at 130.15s, trace 16761. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450000052910056, 'next_transition': 16979}.
<a id="trace-16856"></a>
- 132.90s–132.90s (×1), actor 1, squad 0 (trace 16856): rearward bound: one stationary suppressing element. Knowledge: actor memory at 130.15s, trace 16761. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450000052910056, 'next_transition': 16979}.
<a id="trace-16979"></a>
<a id="trace-17056"></a>
<a id="trace-17077"></a>
<a id="trace-17094"></a>
<a id="trace-17110"></a>
<a id="trace-17134"></a>
<a id="trace-17209"></a>
<a id="trace-17237"></a>
<a id="trace-17258"></a>
<a id="trace-17275"></a>
<a id="trace-17294"></a>
- 134.30s–144.30s (×11), actor 1, squad 0 (trace 16979): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 130.15s, trace 16761. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750000071428565, 'next_transition': 17056}.
<a id="trace-17306"></a>
- 144.85s–144.85s (×1), actor 1, squad 0 (trace 17306): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 140.00s, trace 17150. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17419}.
<a id="trace-17307"></a>
- 144.85s–144.85s (×1), actor 1, squad 0 (trace 17307): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 140.00s, trace 17150. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17419}.
<a id="trace-17419"></a>
<a id="trace-17446"></a>
<a id="trace-17478"></a>
<a id="trace-17500"></a>
<a id="trace-17522"></a>
<a id="trace-17593"></a>
<a id="trace-17611"></a>
<a id="trace-17633"></a>
<a id="trace-17655"></a>
<a id="trace-17682"></a>
<a id="trace-17757"></a>
<a id="trace-17778"></a>
- 145.30s–156.30s (×12), actor 1, squad 0 (trace 17419): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 145.00s, trace 17361. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937500000000007, 'next_transition': 17446}.
<a id="trace-17794"></a>
- 156.85s–156.85s (×1), actor 1, squad 0 (trace 17794): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 17697. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17851}.
<a id="trace-17795"></a>
- 156.85s–156.85s (×1), actor 1, squad 0 (trace 17795): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 17697. Next observer evidence: {'until': 157.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17851}.
<a id="trace-17851"></a>
<a id="trace-17875"></a>
<a id="trace-17898"></a>
<a id="trace-17985"></a>
<a id="trace-18000"></a>
<a id="trace-18021"></a>
<a id="trace-18044"></a>
<a id="trace-18062"></a>
<a id="trace-18138"></a>
- 157.30s–165.30s (×9), actor 1, squad 0 (trace 17851): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 155.00s, trace 17697. Next observer evidence: {'until': 158.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237500048840047, 'next_transition': 17875}.
<a id="trace-18150"></a>
- 165.85s–165.85s (×1), actor 1, squad 0 (trace 18150): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 18075. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18211}.
<a id="trace-18151"></a>
- 165.85s–165.85s (×1), actor 1, squad 0 (trace 18151): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 18075. Next observer evidence: {'until': 166.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18211}.
<a id="trace-18211"></a>
<a id="trace-18243"></a>
<a id="trace-18263"></a>
<a id="trace-18288"></a>
<a id="trace-18365"></a>
<a id="trace-18380"></a>
<a id="trace-18403"></a>
- 166.30s–172.30s (×7), actor 1, squad 0 (trace 18211): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 165.00s, trace 18075. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937500000000007, 'next_transition': 18243}.
<a id="trace-18411"></a>
- 172.45s–172.45s (×1), actor 1, squad 0 (trace 18411): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 170.00s, trace 18305. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600000009920687, 'next_transition': 18432}.
<a id="trace-18432"></a>
<a id="trace-18540"></a>
<a id="trace-18559"></a>
<a id="trace-18578"></a>
<a id="trace-18594"></a>
<a id="trace-18613"></a>
<a id="trace-18695"></a>
<a id="trace-18710"></a>
<a id="trace-18725"></a>
<a id="trace-18744"></a>
<a id="trace-18763"></a>
<a id="trace-18838"></a>
<a id="trace-18858"></a>
<a id="trace-18882"></a>
<a id="trace-18897"></a>
<a id="trace-18913"></a>
<a id="trace-18986"></a>
<a id="trace-19005"></a>
- 173.30s–191.30s (×18), actor 1, squad 0 (trace 18432): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 170.00s, trace 18305. Next observer evidence: {'until': 175.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0475500024419437, 'next_transition': 18540}.
<a id="trace-1606"></a>
- 192.05s–192.05s (×1), actor 1, squad 0 (events line 1606): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19027}.
<a id="trace-19023"></a>
- 192.05s–192.05s (×1), actor 1, squad 0 (trace 19023): renew committed intent (75 s lifetime). Knowledge: actor memory at 192.05s, trace 19023. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19027}.
<a id="trace-19027"></a>
<a id="trace-19054"></a>
<a id="trace-19069"></a>
<a id="trace-19138"></a>
<a id="trace-19154"></a>
- 192.30s–196.30s (×5), actor 1, squad 0 (trace 19027): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 192.05s, trace 19023. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19054}.
<a id="trace-1623"></a>
- 197.00s–197.00s (×1), actor 1, squad 0 (events line 1623): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19177}.
<a id="trace-19171"></a>
- 197.00s–197.00s (×1), actor 1, squad 0 (trace 19171): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.00s, trace 19171. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19177}.
<a id="trace-19172"></a>
- 197.00s–197.00s (×1), actor 1, squad 0 (trace 19172): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.00s, trace 19172. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19177}.
<a id="trace-19177"></a>
<a id="trace-19199"></a>
<a id="trace-19219"></a>
- 197.30s–199.30s (×3), actor 1, squad 0 (trace 19177): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 197.00s, trace 19172. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19199}.
<a id="trace-19226"></a>
- 199.65s–199.65s (×1), actor 1, squad 0 (trace 19226): MoveTactically. Knowledge: actor memory at 197.00s, trace 19172. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19404}.
<a id="trace-19227"></a>
- 199.65s–199.65s (×1), actor 1, squad 0 (trace 19227): traveling. Knowledge: actor memory at 197.00s, trace 19172. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19404}.
<a id="trace-19228"></a>
- 199.65s–199.65s (×1), actor 1, squad 0 (trace 19228): received platoon directive. Knowledge: actor memory at 197.00s, trace 19172. Next observer evidence: {'until': 200.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19404}.
<a id="trace-19404"></a>
<a id="trace-19426"></a>
<a id="trace-19451"></a>
<a id="trace-19471"></a>
<a id="trace-19495"></a>
<a id="trace-19576"></a>
<a id="trace-19600"></a>
<a id="trace-19627"></a>
<a id="trace-19646"></a>
<a id="trace-19666"></a>
<a id="trace-19739"></a>
- 200.30s–210.30s (×11), actor 1, squad 0 (trace 19404): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 200.00s, trace 19346. Next observer evidence: {'until': 201.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0475000026973746, 'next_transition': 19426}.
<a id="trace-19746"></a>
- 210.30s–210.30s (×1), actor 1, squad 0 (trace 19746): matching received arrivals: traveling stage complete. Knowledge: actor memory at 210.00s, trace 19680. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150000000000013, 'next_transition': 19866}.
<a id="trace-19866"></a>
<a id="trace-19894"></a>
<a id="trace-19926"></a>
<a id="trace-19946"></a>
<a id="trace-20019"></a>
<a id="trace-20037"></a>
<a id="trace-20059"></a>
<a id="trace-20085"></a>
<a id="trace-20114"></a>
<a id="trace-20197"></a>
- 211.30s–220.30s (×10), actor 1, squad 0 (trace 19866): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 210.00s, trace 19680. Next observer evidence: {'until': 212.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.835000000000001, 'next_transition': 19894}.
<a id="trace-20207"></a>
- 220.45s–220.45s (×1), actor 1, squad 0 (trace 20207): traveling overwatch. Knowledge: actor memory at 220.00s, trace 20139. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20250}.
<a id="trace-20208"></a>
- 220.45s–220.45s (×1), actor 1, squad 0 (trace 20208): matching received arrivals: traveling stage complete. Knowledge: actor memory at 220.00s, trace 20139. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20250}.
<a id="trace-20250"></a>
<a id="trace-20287"></a>
<a id="trace-20304"></a>
<a id="trace-20383"></a>
<a id="trace-20416"></a>
<a id="trace-20435"></a>
<a id="trace-20451"></a>
<a id="trace-20471"></a>
- 221.30s–229.30s (×8), actor 1, squad 0 (trace 20250): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 220.00s, trace 20139. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5987257656397675, 'next_transition': 20287}.
<a id="trace-20496"></a>
- 230.05s–230.05s (×1), actor 1, squad 0 (trace 20496): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 20484. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20596}.
<a id="trace-20596"></a>
<a id="trace-20624"></a>
<a id="trace-20648"></a>
<a id="trace-20679"></a>
<a id="trace-20696"></a>
<a id="trace-20767"></a>
<a id="trace-20785"></a>
<a id="trace-20805"></a>
<a id="trace-20828"></a>
<a id="trace-20852"></a>
- 230.30s–239.30s (×10), actor 1, squad 0 (trace 20596): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 230.00s, trace 20484. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07874508810078241, 'next_transition': 20624}.
<a id="trace-20869"></a>
- 239.65s–239.65s (×1), actor 1, squad 0 (trace 20869): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 235.00s, trace 20708. Next observer evidence: {'until': 240.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20977}.
<a id="trace-20977"></a>
<a id="trace-21016"></a>
<a id="trace-21032"></a>
<a id="trace-21050"></a>
<a id="trace-21125"></a>
<a id="trace-21158"></a>
<a id="trace-21180"></a>
<a id="trace-21197"></a>
<a id="trace-21216"></a>
- 240.30s–249.30s (×9), actor 1, squad 0 (trace 20977): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 240.00s, trace 20917. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.283686906079727, 'next_transition': 21016}.
<a id="trace-21284"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 21284): matching received arrivals: deployment leg complete. Knowledge: actor memory at 250.00s, trace 21227. Next observer evidence: None.
<a id="trace-21288"></a>
<a id="trace-21307"></a>
<a id="trace-21329"></a>
- 250.30s–252.30s (×3), actor 1, squad 0 (trace 21288): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 250.00s, trace 21227. Next observer evidence: {'until': 251.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21307}.
<a id="trace-1834"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (events line 1834): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21354"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (trace 21354): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.25s, trace 21354. Next observer evidence: None.
<a id="trace-21355"></a>
- 253.25s–253.25s (×1), actor 1, squad 0 (trace 21355): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 253.25s, trace 21355. Next observer evidence: None.
<a id="trace-21358"></a>
<a id="trace-21384"></a>
<a id="trace-21454"></a>
- 253.30s–255.30s (×3), actor 1, squad 0 (trace 21358): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 253.25s, trace 21355. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21384}.
<a id="trace-21466"></a>
- 256.20s–256.20s (×1), actor 1, squad 0 (trace 21466): Reorganise: completed/failed drill. Knowledge: actor memory at 255.00s, trace 21395. Next observer evidence: None.
<a id="trace-21469"></a>
- 256.20s–256.20s (×1), actor 1, squad 0 (trace 21469): MoveTactically. Knowledge: actor memory at 255.00s, trace 21395. Next observer evidence: None.
<a id="trace-21470"></a>
- 256.20s–256.20s (×1), actor 1, squad 0 (trace 21470): Reorganise complete. Knowledge: actor memory at 255.00s, trace 21395. Next observer evidence: None.
<a id="trace-21579"></a>
<a id="trace-21599"></a>
<a id="trace-21621"></a>
<a id="trace-21659"></a>
<a id="trace-21737"></a>
- 256.30s–260.30s (×5), actor 1, squad 0 (trace 21579): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 255.00s, trace 21395. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21599}.
<a id="trace-21747"></a>
- 260.75s–260.75s (×1), actor 1, squad 0 (trace 21747): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 260.00s, trace 21677. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21810}.
<a id="trace-21810"></a>
<a id="trace-21834"></a>
<a id="trace-21850"></a>
<a id="trace-21874"></a>
<a id="trace-21948"></a>
- 261.30s–265.30s (×5), actor 1, squad 0 (trace 21810): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 260.00s, trace 21677. Next observer evidence: {'until': 262.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5512533701711037, 'next_transition': 21834}.
<a id="trace-21956"></a>
- 265.60s–265.60s (×1), actor 1, squad 0 (trace 21956): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 265.60s, trace 21956. Next observer evidence: {'until': 266.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7258860830219845, 'next_transition': 21973}.
<a id="trace-21973"></a>
- 266.30s–266.30s (×1), actor 1, squad 0 (trace 21973): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 265.60s, trace 21956. Next observer evidence: None.
<a id="trace-21982"></a>
- 266.35s–266.35s (×1), actor 1, squad 0 (trace 21982): ReactToContact: cover and return fire. Knowledge: actor memory at 265.60s, trace 21956. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37293131016314557, 'next_transition': 1922}.
<a id="trace-21983"></a>
- 266.35s–266.35s (×1), actor 1, squad 0 (trace 21983): bounding overwatch. Knowledge: actor memory at 265.60s, trace 21956. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37293131016314557, 'next_transition': 1922}.
<a id="trace-21984"></a>
- 266.35s–266.35s (×1), actor 1, squad 0 (trace 21984): new contact inside 100 m. Knowledge: actor memory at 265.60s, trace 21956. Next observer evidence: {'until': 267.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37293131016314557, 'next_transition': 1922}.
<a id="trace-1922"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (events line 1922): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22167"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (trace 22167): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.375502 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.25s, trace 22167. Next observer evidence: None.
<a id="trace-22168"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (trace 22168): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.375502 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 267.25s, trace 22168. Next observer evidence: None.
<a id="trace-22171"></a>
- 267.30s–267.30s (×1), actor 1, squad 0 (trace 22171): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 267.25s, trace 22168. Next observer evidence: {'until': 267.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39603229464274725, 'next_transition': 22195}.
<a id="trace-22195"></a>
- 267.90s–267.90s (×1), actor 1, squad 0 (trace 22195): new contact inside 100 m. Knowledge: actor memory at 267.25s, trace 22168. Next observer evidence: {'until': 268.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.034228642976314685, 'next_transition': 22361}.
<a id="trace-22361"></a>
<a id="trace-22396"></a>
<a id="trace-22471"></a>
<a id="trace-22490"></a>
- 268.30s–271.30s (×4), actor 1, squad 0 (trace 22361): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 267.25s, trace 22168. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22396}.
<a id="trace-22500"></a>
- 271.50s–271.50s (×1), actor 1, squad 0 (trace 22500): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 270.00s, trace 22411. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22568}.
<a id="trace-22501"></a>
- 271.50s–271.50s (×1), actor 1, squad 0 (trace 22501): rearward bound: one stationary suppressing element. Knowledge: actor memory at 270.00s, trace 22411. Next observer evidence: {'until': 272.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22568}.
<a id="trace-22568"></a>
<a id="trace-22590"></a>
<a id="trace-22616"></a>
<a id="trace-22712"></a>
<a id="trace-22735"></a>
<a id="trace-22760"></a>
<a id="trace-22782"></a>
<a id="trace-22851"></a>
<a id="trace-22868"></a>
<a id="trace-22887"></a>
<a id="trace-22907"></a>
- 272.30s–283.30s (×11), actor 1, squad 0 (trace 22568): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 270.00s, trace 22411. Next observer evidence: {'until': 273.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1500031571412714, 'next_transition': 22590}.
<a id="trace-22915"></a>
- 283.45s–283.45s (×1), actor 1, squad 0 (trace 22915): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 22794. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22933}.
<a id="trace-22916"></a>
- 283.45s–283.45s (×1), actor 1, squad 0 (trace 22916): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 22794. Next observer evidence: {'until': 284.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22933}.
<a id="trace-22933"></a>
<a id="trace-23001"></a>
<a id="trace-23019"></a>
<a id="trace-23035"></a>
<a id="trace-23054"></a>
<a id="trace-23073"></a>
<a id="trace-23155"></a>
<a id="trace-23175"></a>
- 284.30s–291.30s (×8), actor 1, squad 0 (trace 22933): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 280.00s, trace 22794. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23001}.
<a id="trace-23183"></a>
- 291.55s–291.55s (×1), actor 1, squad 0 (trace 23183): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: {'until': 291.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23186}.
<a id="trace-23186"></a>
- 291.60s–291.60s (×1), actor 1, squad 0 (trace 23186): MoveTactically. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: None.
<a id="trace-23187"></a>
- 291.60s–291.60s (×1), actor 1, squad 0 (trace 23187): traveling overwatch. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: None.
<a id="trace-23188"></a>
- 291.60s–291.60s (×1), actor 1, squad 0 (trace 23188): received platoon directive. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: None.
<a id="trace-23192"></a>
- 291.65s–291.65s (×1), actor 1, squad 0 (trace 23192): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23201}.
<a id="trace-23201"></a>
<a id="trace-23222"></a>
<a id="trace-23244"></a>
<a id="trace-23316"></a>
<a id="trace-23335"></a>
<a id="trace-23364"></a>
<a id="trace-23388"></a>
<a id="trace-23405"></a>
<a id="trace-23473"></a>
<a id="trace-23486"></a>
<a id="trace-23505"></a>
<a id="trace-23533"></a>
<a id="trace-23559"></a>
<a id="trace-23628"></a>
<a id="trace-23641"></a>
<a id="trace-23655"></a>
<a id="trace-23673"></a>
<a id="trace-23695"></a>
<a id="trace-23777"></a>
- 292.30s–310.30s (×19), actor 1, squad 0 (trace 23201): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 290.00s, trace 23097. Next observer evidence: {'until': 293.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23222}.
<a id="trace-2051"></a>
- 310.60s–310.60s (×1), actor 1, squad 0 (events line 2051): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23784"></a>
- 310.60s–310.60s (×1), actor 1, squad 0 (trace 23784): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.128493 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 310.60s, trace 23784. Next observer evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23795}.
<a id="trace-23785"></a>
- 310.60s–310.60s (×1), actor 1, squad 0 (trace 23785): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.128493 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 310.60s, trace 23785. Next observer evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23795}.
<a id="trace-23795"></a>
<a id="trace-23812"></a>
- 311.30s–312.30s (×2), actor 1, squad 0 (trace 23795): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 310.60s, trace 23785. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23812}.
<a id="trace-23821"></a>
- 312.65s–312.65s (×1), actor 1, squad 0 (trace 23821): Withdraw to received rally. Knowledge: actor memory at 310.60s, trace 23785. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23881}.
<a id="trace-23822"></a>
- 312.65s–312.65s (×1), actor 1, squad 0 (trace 23822): rearward bound: one stationary suppressing element. Knowledge: actor memory at 310.60s, trace 23785. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23881}.
<a id="trace-23881"></a>
<a id="trace-23902"></a>
<a id="trace-23977"></a>
<a id="trace-23999"></a>
<a id="trace-24018"></a>
<a id="trace-24037"></a>
<a id="trace-24059"></a>
<a id="trace-24127"></a>
<a id="trace-24142"></a>
<a id="trace-24160"></a>
<a id="trace-24182"></a>
<a id="trace-24208"></a>
<a id="trace-24278"></a>
<a id="trace-24292"></a>
<a id="trace-24306"></a>
<a id="trace-24323"></a>
<a id="trace-24345"></a>
<a id="trace-24424"></a>
<a id="trace-24441"></a>
<a id="trace-24457"></a>
<a id="trace-24475"></a>
<a id="trace-24493"></a>
<a id="trace-24565"></a>
<a id="trace-24584"></a>
<a id="trace-24603"></a>
<a id="trace-24619"></a>
<a id="trace-24641"></a>
<a id="trace-24713"></a>
<a id="trace-24728"></a>
<a id="trace-24746"></a>
<a id="trace-24771"></a>
<a id="trace-24790"></a>
<a id="trace-24862"></a>
<a id="trace-24877"></a>
<a id="trace-24892"></a>
<a id="trace-24911"></a>
<a id="trace-24937"></a>
<a id="trace-25009"></a>
<a id="trace-25023"></a>
<a id="trace-25041"></a>
<a id="trace-25058"></a>
<a id="trace-25081"></a>
<a id="trace-25153"></a>
<a id="trace-25172"></a>
<a id="trace-25190"></a>
<a id="trace-25204"></a>
<a id="trace-25223"></a>
- 313.30s–359.30s (×47), actor 1, squad 0 (trace 23881): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=1. Knowledge: actor memory at 310.60s, trace 23785. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23902}.

## Net delivery

188 matched order/radio deliveries; 89 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.526s; maximum 5.350s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2247: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2255: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2256: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2258: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 5523: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 5524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 5525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 5526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 5527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 5528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 5529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 5530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 5531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 5532: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 5533: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 5534: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 5535: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 5536: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 5537: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 5538: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 5539: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 5540: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 5541: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 6574: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 6575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 6576: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 6577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 6578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 6579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 6580: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 6581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 6582: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 6583: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 6584: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 6585: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 6586: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 6587: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 6588: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 6589: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 6590: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 6591: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 6592: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7422: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7423: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7424: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7425: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7427: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7428: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7430: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7431: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7432: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7433: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7434: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7435: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7436: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7437: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7438: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7439: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7440: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 10842: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 10843: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 10844: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 10845: estimate 10.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 10846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 10847: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 10848: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 10849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 10850: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 10851: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 10852: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 10853: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 10854: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 10855: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 10856: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 10857: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 10858: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 10859: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 10860: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 11272: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 11273: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 11288: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11289: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11290: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11291: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11292: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11293: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11294: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 11295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11296: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11297: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11298: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11299: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11300: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11301: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11302: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11303: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11304: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11305: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11306: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 12797: estimate 12.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 12798: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 12799: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 12800: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 12801: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 12802: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 12803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 12804: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 12805: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 12806: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 12807: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 12808: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 12809: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 12810: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 12811: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 12812: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 12813: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 12814: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.30s leader 5, trace 13154: estimate 14.14; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 13177: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 13178: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 13179: estimate 14.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 13180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 13181: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 13182: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 13183: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 13184: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 13185: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 13186: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 13187: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 13188: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 13189: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 13190: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 13191: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 13561: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 13562: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 13563: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 13564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 13565: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 13566: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 13567: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 13568: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 13569: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 13570: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 13571: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 13572: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 13573: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 13574: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 13575: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 13774: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 13775: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 13776: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 13777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 13778: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 13779: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 13780: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 13781: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 13782: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 13783: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 13784: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 13785: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 13786: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 13787: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 13788: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 14102: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 14103: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 14104: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 14105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 14106: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 14107: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 14108: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 14109: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 14110: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 14111: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 14112: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 14113: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 14114: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 14115: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 14116: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 14298: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 14299: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 14300: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 14301: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 14302: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 14303: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 14304: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 14305: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 14306: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 14307: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 14308: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 14309: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 14310: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 14311: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 14312: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 14656: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 14657: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 14658: estimate 13.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 14659: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 14660: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 14661: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 14662: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 14663: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 14664: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 14665: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 14666: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 14667: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 14668: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 14669: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14951: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14952: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14953: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14954: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14955: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14956: estimate 11.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 14957: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14958: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14959: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14960: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14961: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 14962: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 14963: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 15145: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 15146: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 15147: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 15148: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 15149: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 15150: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 15151: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 15152: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 15153: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 15154: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 15155: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 15156: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.15s leader 1, trace 15159: estimate 11.62; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.15s leader 1, trace 15160: estimate 11.62; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 15330: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15331: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 15332: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15333: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15334: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 15335: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15336: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15337: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15338: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15339: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 15340: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 15341: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 15513: estimate 12.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15514: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 15515: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15516: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15517: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 15518: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15519: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15520: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15521: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15522: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 15523: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 15524: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 15728: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15729: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15730: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15731: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 15732: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15733: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15734: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15735: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15736: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 15737: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 15738: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15995: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15996: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15997: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15998: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15999: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 16000: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 16001: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 16002: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 16003: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 16004: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 16005: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 16152: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 16153: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 16154: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 16155: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 16156: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 16157: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 16158: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 16159: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 16160: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 16161: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 16162: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16287: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16288: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16289: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16290: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16291: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16292: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16293: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16294: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16295: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16296: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16297: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16425: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16426: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16427: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16428: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16429: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16430: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16431: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16432: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16433: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16434: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16435: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16579: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16580: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16581: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16582: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16583: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16584: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16585: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16586: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16587: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16588: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16589: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16747: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16748: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16749: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16750: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16751: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16752: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16753: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16754: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16755: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16756: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16757: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.15s leader 1, trace 16760: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.15s leader 1, trace 16761: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 16992: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16993: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16994: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16995: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16996: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16997: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16998: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16999: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17000: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17001: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17002: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17150: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17151: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17152: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17153: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17154: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17155: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17156: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17157: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17158: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17159: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17160: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17361: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17363: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17364: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17365: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17366: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17367: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17368: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17369: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17370: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17371: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 17534: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 17535: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17536: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17537: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17538: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17539: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17540: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17541: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17542: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17543: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17544: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 17697: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17699: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17700: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17701: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17702: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17703: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17704: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17705: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17706: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17707: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17917: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17919: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17920: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17921: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17922: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17923: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17924: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17925: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17926: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 17927: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18075: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18077: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18078: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18079: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18080: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18081: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18082: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18083: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18084: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18085: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18305: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18307: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18308: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18309: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18310: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18311: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18312: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18313: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18314: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18315: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18477: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18479: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18480: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18481: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18482: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18483: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18484: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18485: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18486: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 18487: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 18629: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 18630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 18631: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 18632: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 18633: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 18634: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 18635: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 18636: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 18637: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 18638: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 18639: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 18776: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 18777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 18778: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 18779: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 18780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 18781: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 18782: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 18783: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 18784: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 18785: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 18786: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 18925: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 18926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 18927: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 18928: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 18929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 18930: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 18931: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 18932: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 18933: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 18934: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 18935: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.05s leader 1, trace 19023: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 19080: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 19081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 19082: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 19083: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 19084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 19085: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 19086: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 19087: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 19088: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 19089: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 19090: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.00s leader 1, trace 19171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.00s leader 1, trace 19172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 19346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 19347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 19348: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 19349: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 19350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 19351: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 19352: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 19353: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 19354: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 19355: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 19356: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 19514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 19515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 19516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 19517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 19518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 19519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 19520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 19521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 19522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 19523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 19524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 19680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 19681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 19682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 19683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 19684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 19685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 19686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 19687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 19688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 19689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 19690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 19960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 19961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 19962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 19963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 19964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 19965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 20139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 20145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 20322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 20323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 20324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 20325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 20326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 20327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 20328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 20329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 20330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 20331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 20332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 20484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 20485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 20486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 20487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 20488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 20489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 20490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 20491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 20492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 20493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 20494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 20708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 20709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 20710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 20711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 20712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 20713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 20714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 20715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 20716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 20717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 20718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 20917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 20918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 20919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 20920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 20921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 20922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 20923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 20924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 20925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 20926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 20927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 21066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 21067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 21068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 21069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 21070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 21071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 21072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 21073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 21074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 21075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 21076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 21227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 21228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 21229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 21230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 21231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 21232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 21233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 21234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 21235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 21236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 21237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.25s leader 1, trace 21354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 253.25s leader 1, trace 21355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 21395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 21396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 21397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 21398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 21399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 21400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 21401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 21402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 21403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 21404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 21405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 21677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 21678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 21679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 21680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 21681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 21682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 21683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 21684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 21685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 21686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 21687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 21887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 21888: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 21889: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 21890: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 21891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 21892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 21893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 21894: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 21895: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 21896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 21897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.60s leader 1, trace 21956: estimate 5.36; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.25s leader 1, trace 22167: estimate 5.33; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 267.25s leader 1, trace 22168: estimate 5.33; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 22411: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 22412: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 22413: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 22414: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 22415: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 22416: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 22417: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 22418: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 22419: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 22420: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 22632: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 22633: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 22634: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 22635: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 22636: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 22637: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 22638: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 22639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 22640: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 22641: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 22794: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 22795: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 22796: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 22797: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 22798: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 22799: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 22800: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 22801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 22802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 22803: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 22944: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 22945: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 22946: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 22947: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 22948: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 22949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 22950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 22951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 22952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 22953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 23097: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 23098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 23099: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 23100: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 23101: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 23102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 23103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 23104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 23105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 23106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 23258: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 23259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 23260: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 23261: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 23262: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 23263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 23264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 23265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 23266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 23267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 23416: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 23417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 23418: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 23419: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 23420: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 23421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 23422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 23423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 23424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 23425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 23571: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 23572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 23573: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 23574: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 23575: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 23576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 23577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 23578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 23579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 23580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 23714: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 23715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 23716: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 23717: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 23718: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 23719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 23720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 23721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 23722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 23723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.60s leader 1, trace 23784: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.60s leader 1, trace 23785: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 23918: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 23919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 23920: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 23921: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 23922: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 23923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 23924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 23925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 23926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 23927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 24070: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 24071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 24072: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 24073: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 24074: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 24075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 24076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 24077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 24078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 24079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 24219: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 24220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 24221: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 24222: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 24223: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 24224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 24225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 24226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 24227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 24228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 24363: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 24364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 24365: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 24366: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 24367: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 24368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 24369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 24370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 24371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 24372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 24506: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 24507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 24508: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 24509: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 24510: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 24511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 24512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 24513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 24514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 24515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 24656: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 24657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 24658: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 24659: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 24660: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 24661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 24662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 24663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 24664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 24665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 24803: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 24804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 24805: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 24806: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 24807: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 24808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 24809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 24810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 24811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 24812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24952: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24954: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24955: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24956: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 25094: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 25095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 25096: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 25097: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 25098: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 25099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 25100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 25101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 25102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 25103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 25238: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 25239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 25240: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 25241: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 25242: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 25243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 25244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 25245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 25246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 25247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Moss killed in action
- 1: Ash killed in action
- 1: Vale killed in action
- 1: Soren incapacitated
- 1: Cole incapacitated
- 1: Pike incapacitated
- 1: Iven killed in action
- 1: Reed killed in action
- 1: Tern killed in action

## Outcome attribution

- 130.15s, evidence 1389: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 130.15s, evidence 16760: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.183581 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16809}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 130.15s, evidence 16761: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.183581 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 130.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16809}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 192.05s, evidence 1606: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19027}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 310.60s, evidence 2051: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 310.60s, evidence 23784: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.128493 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23795}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 310.60s, evidence 23785: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.128493 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 311.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23795}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
