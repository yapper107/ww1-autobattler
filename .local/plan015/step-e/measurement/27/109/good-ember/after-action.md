# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/27/109/good-ember/battle-109-1789674284184999815`

## Battle summary

**Ember** · 360 s · 248 shots.

### Turning points

- 17.7s, squad 4: contact (events line 195). First recorded contact.
- 46.7s, squad 0: help call ([trace 3623](#trace-3623)). No completion observed before termination.
- 181.2s, squad 0: help call ([trace 14951](#trace-14951)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 42 shots, 5/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 206 shots, 1/6 lost.

### Decisions and attribution

At 210.1s, squad 0 chose advanced tactically ([trace 15877](#trace-15877)), followed by 1 shots and 1 own casualties; estimate 6.4 against 0 distinct squad-reported contacts; At 18.0s, squad 0 chose took cover and returned fire ([trace 1385](#trace-1385)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 204.7s, squad 0 chose renewed the existing objective ([trace 15719](#trace-15719)), followed by 1 shots and 0 own casualties; estimate 6.5 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 766](#trace-766)). Following evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999849597488876, 'next_transition': 773}.
- 38.9s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.602161 retreat threshold=0.220000 initiative=requires intent ([trace 3332](#trace-3332)). Following evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3346}.

### Communication

128 matched deliveries (mean 0.38s, max 5.35s); 150 explicit drops; 2 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.70s, squad 4, contact, evidence events line 195: First recorded contact; .
- 46.65s, squad 0, help call, evidence 3623: NeedSupport; No completion observed before termination.
- 181.15s, squad 0, help call, evidence 14951: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.576547182556903, 'next_transition': 504}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.576547182556903, 'next_transition': 504}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.576547182556903, 'next_transition': 504}.
<a id="trace-334"></a>
<a id="trace-353"></a>
<a id="trace-369"></a>
<a id="trace-384"></a>
<a id="trace-395"></a>
<a id="trace-411"></a>
<a id="trace-430"></a>
<a id="trace-506"></a>
<a id="trace-520"></a>
<a id="trace-543"></a>
<a id="trace-562"></a>
<a id="trace-576"></a>
<a id="trace-595"></a>
<a id="trace-619"></a>
<a id="trace-644"></a>
<a id="trace-657"></a>
<a id="trace-663"></a>
<a id="trace-745"></a>
<a id="trace-752"></a>
<a id="trace-764"></a>
<a id="trace-897"></a>
<a id="trace-911"></a>
<a id="trace-931"></a>
<a id="trace-950"></a>
<a id="trace-965"></a>
<a id="trace-993"></a>
<a id="trace-1011"></a>
<a id="trace-1091"></a>
<a id="trace-1105"></a>
<a id="trace-1121"></a>
<a id="trace-1136"></a>
<a id="trace-1353"></a>
<a id="trace-1372"></a>
<a id="trace-1594"></a>
<a id="trace-1616"></a>
<a id="trace-1639"></a>
<a id="trace-1667"></a>
<a id="trace-1749"></a>
<a id="trace-1776"></a>
<a id="trace-1791"></a>
<a id="trace-1805"></a>
<a id="trace-2028"></a>
<a id="trace-2042"></a>
<a id="trace-2277"></a>
<a id="trace-2294"></a>
<a id="trace-2324"></a>
<a id="trace-2360"></a>
<a id="trace-2442"></a>
<a id="trace-2460"></a>
<a id="trace-2485"></a>
<a id="trace-2495"></a>
<a id="trace-2506"></a>
<a id="trace-2514"></a>
<a id="trace-2525"></a>
<a id="trace-2530"></a>
<a id="trace-2542"></a>
<a id="trace-2549"></a>
<a id="trace-2620"></a>
<a id="trace-2625"></a>
<a id="trace-2634"></a>
<a id="trace-2828"></a>
<a id="trace-2838"></a>
<a id="trace-2852"></a>
<a id="trace-2873"></a>
<a id="trace-2881"></a>
<a id="trace-2895"></a>
<a id="trace-3101"></a>
<a id="trace-3191"></a>
<a id="trace-3212"></a>
<a id="trace-3226"></a>
<a id="trace-3247"></a>
<a id="trace-3268"></a>
<a id="trace-3285"></a>
<a id="trace-3310"></a>
<a id="trace-3330"></a>
<a id="trace-3348"></a>
<a id="trace-3358"></a>
<a id="trace-3434"></a>
<a id="trace-3447"></a>
<a id="trace-3456"></a>
<a id="trace-3463"></a>
<a id="trace-3476"></a>
<a id="trace-3481"></a>
<a id="trace-3493"></a>
<a id="trace-3500"></a>
<a id="trace-3511"></a>
<a id="trace-3524"></a>
<a id="trace-3598"></a>
<a id="trace-3605"></a>
<a id="trace-3616"></a>
<a id="trace-3631"></a>
<a id="trace-3641"></a>
<a id="trace-3646"></a>
<a id="trace-3656"></a>
<a id="trace-3665"></a>
<a id="trace-3672"></a>
<a id="trace-3677"></a>
<a id="trace-3752"></a>
<a id="trace-3762"></a>
<a id="trace-3769"></a>
<a id="trace-3779"></a>
<a id="trace-3796"></a>
<a id="trace-3810"></a>
<a id="trace-3822"></a>
<a id="trace-3827"></a>
<a id="trace-3838"></a>
<a id="trace-3842"></a>
<a id="trace-3919"></a>
<a id="trace-3928"></a>
<a id="trace-3940"></a>
<a id="trace-3950"></a>
<a id="trace-3961"></a>
<a id="trace-3965"></a>
<a id="trace-3976"></a>
<a id="trace-3982"></a>
<a id="trace-4004"></a>
<a id="trace-4011"></a>
<a id="trace-4089"></a>
<a id="trace-4107"></a>
<a id="trace-4120"></a>
<a id="trace-4130"></a>
<a id="trace-4146"></a>
<a id="trace-4160"></a>
<a id="trace-4171"></a>
<a id="trace-4181"></a>
<a id="trace-4197"></a>
<a id="trace-4205"></a>
<a id="trace-4288"></a>
<a id="trace-4303"></a>
<a id="trace-4318"></a>
<a id="trace-4335"></a>
<a id="trace-4362"></a>
<a id="trace-4374"></a>
<a id="trace-4381"></a>
<a id="trace-4390"></a>
<a id="trace-4395"></a>
<a id="trace-4467"></a>
<a id="trace-4479"></a>
<a id="trace-4487"></a>
<a id="trace-4493"></a>
<a id="trace-4509"></a>
<a id="trace-4519"></a>
<a id="trace-4531"></a>
<a id="trace-4679"></a>
<a id="trace-4692"></a>
<a id="trace-4712"></a>
<a id="trace-4786"></a>
<a id="trace-4795"></a>
<a id="trace-4815"></a>
<a id="trace-4827"></a>
<a id="trace-7530"></a>
<a id="trace-7541"></a>
<a id="trace-7546"></a>
<a id="trace-7550"></a>
<a id="trace-7556"></a>
<a id="trace-7563"></a>
<a id="trace-7634"></a>
<a id="trace-7641"></a>
<a id="trace-7651"></a>
<a id="trace-7664"></a>
<a id="trace-7676"></a>
<a id="trace-7681"></a>
<a id="trace-7688"></a>
<a id="trace-7692"></a>
<a id="trace-7700"></a>
<a id="trace-7706"></a>
<a id="trace-7774"></a>
<a id="trace-7777"></a>
<a id="trace-7781"></a>
<a id="trace-7786"></a>
<a id="trace-7796"></a>
<a id="trace-7801"></a>
<a id="trace-7808"></a>
<a id="trace-7811"></a>
<a id="trace-7820"></a>
<a id="trace-7829"></a>
<a id="trace-7897"></a>
<a id="trace-7905"></a>
<a id="trace-7912"></a>
<a id="trace-7918"></a>
<a id="trace-7928"></a>
<a id="trace-7933"></a>
<a id="trace-7942"></a>
<a id="trace-7946"></a>
<a id="trace-7955"></a>
<a id="trace-7963"></a>
<a id="trace-8033"></a>
<a id="trace-8040"></a>
<a id="trace-8047"></a>
<a id="trace-8054"></a>
<a id="trace-8064"></a>
<a id="trace-8070"></a>
<a id="trace-8080"></a>
<a id="trace-8089"></a>
<a id="trace-8103"></a>
<a id="trace-8115"></a>
<a id="trace-8185"></a>
<a id="trace-8194"></a>
<a id="trace-8201"></a>
<a id="trace-8206"></a>
<a id="trace-8213"></a>
<a id="trace-8220"></a>
<a id="trace-8228"></a>
<a id="trace-8234"></a>
<a id="trace-8244"></a>
<a id="trace-8252"></a>
<a id="trace-8328"></a>
<a id="trace-8339"></a>
<a id="trace-8346"></a>
<a id="trace-8353"></a>
<a id="trace-8366"></a>
<a id="trace-8373"></a>
<a id="trace-8380"></a>
<a id="trace-8386"></a>
<a id="trace-8395"></a>
<a id="trace-8403"></a>
<a id="trace-8474"></a>
<a id="trace-8482"></a>
<a id="trace-8490"></a>
<a id="trace-8498"></a>
<a id="trace-8509"></a>
<a id="trace-8516"></a>
<a id="trace-8524"></a>
<a id="trace-8535"></a>
<a id="trace-8545"></a>
<a id="trace-8554"></a>
<a id="trace-8624"></a>
<a id="trace-8630"></a>
<a id="trace-8638"></a>
<a id="trace-8643"></a>
<a id="trace-8653"></a>
<a id="trace-8660"></a>
<a id="trace-8669"></a>
<a id="trace-8676"></a>
<a id="trace-8689"></a>
<a id="trace-8700"></a>
<a id="trace-8770"></a>
<a id="trace-8779"></a>
<a id="trace-8795"></a>
<a id="trace-8802"></a>
<a id="trace-8808"></a>
<a id="trace-8817"></a>
<a id="trace-8822"></a>
<a id="trace-8831"></a>
<a id="trace-8840"></a>
<a id="trace-8911"></a>
<a id="trace-8922"></a>
<a id="trace-8932"></a>
<a id="trace-8943"></a>
<a id="trace-8952"></a>
<a id="trace-8958"></a>
<a id="trace-8967"></a>
<a id="trace-8974"></a>
<a id="trace-8985"></a>
<a id="trace-8993"></a>
<a id="trace-9063"></a>
<a id="trace-9071"></a>
<a id="trace-9079"></a>
<a id="trace-9088"></a>
<a id="trace-9097"></a>
<a id="trace-9105"></a>
<a id="trace-9117"></a>
<a id="trace-9123"></a>
<a id="trace-9133"></a>
<a id="trace-9141"></a>
<a id="trace-9211"></a>
<a id="trace-9222"></a>
<a id="trace-9231"></a>
<a id="trace-9235"></a>
<a id="trace-9244"></a>
<a id="trace-9251"></a>
<a id="trace-9259"></a>
<a id="trace-9267"></a>
<a id="trace-9276"></a>
<a id="trace-9284"></a>
<a id="trace-9356"></a>
<a id="trace-9367"></a>
<a id="trace-9386"></a>
<a id="trace-9396"></a>
<a id="trace-9408"></a>
<a id="trace-9418"></a>
<a id="trace-9428"></a>
<a id="trace-9439"></a>
<a id="trace-9451"></a>
<a id="trace-9464"></a>
<a id="trace-9536"></a>
<a id="trace-11180"></a>
<a id="trace-11198"></a>
<a id="trace-11207"></a>
<a id="trace-11220"></a>
<a id="trace-11234"></a>
<a id="trace-11247"></a>
<a id="trace-11258"></a>
<a id="trace-11266"></a>
<a id="trace-11273"></a>
<a id="trace-11349"></a>
<a id="trace-11362"></a>
<a id="trace-11372"></a>
<a id="trace-11380"></a>
<a id="trace-11394"></a>
<a id="trace-11406"></a>
<a id="trace-11417"></a>
<a id="trace-11422"></a>
<a id="trace-11436"></a>
<a id="trace-11443"></a>
<a id="trace-11517"></a>
<a id="trace-11527"></a>
<a id="trace-11540"></a>
<a id="trace-11557"></a>
<a id="trace-11570"></a>
<a id="trace-11695"></a>
<a id="trace-11711"></a>
<a id="trace-11719"></a>
<a id="trace-11733"></a>
<a id="trace-11740"></a>
<a id="trace-11824"></a>
<a id="trace-11836"></a>
<a id="trace-12007"></a>
<a id="trace-12026"></a>
<a id="trace-12043"></a>
<a id="trace-12054"></a>
<a id="trace-12066"></a>
<a id="trace-12074"></a>
<a id="trace-12087"></a>
<a id="trace-12101"></a>
<a id="trace-12173"></a>
<a id="trace-12181"></a>
<a id="trace-12395"></a>
<a id="trace-12407"></a>
<a id="trace-12419"></a>
<a id="trace-12435"></a>
<a id="trace-12447"></a>
<a id="trace-12460"></a>
<a id="trace-12474"></a>
<a id="trace-12481"></a>
<a id="trace-14533"></a>
<a id="trace-14546"></a>
<a id="trace-14556"></a>
<a id="trace-14561"></a>
<a id="trace-14578"></a>
<a id="trace-14590"></a>
<a id="trace-14600"></a>
<a id="trace-14612"></a>
<a id="trace-14623"></a>
<a id="trace-14638"></a>
<a id="trace-14713"></a>
<a id="trace-14723"></a>
<a id="trace-14741"></a>
<a id="trace-14760"></a>
<a id="trace-14775"></a>
<a id="trace-14789"></a>
<a id="trace-14804"></a>
<a id="trace-14818"></a>
<a id="trace-14833"></a>
<a id="trace-14850"></a>
<a id="trace-14929"></a>
<a id="trace-14945"></a>
<a id="trace-14968"></a>
<a id="trace-14980"></a>
<a id="trace-14993"></a>
<a id="trace-15008"></a>
<a id="trace-15023"></a>
<a id="trace-15038"></a>
<a id="trace-15054"></a>
<a id="trace-15068"></a>
<a id="trace-15152"></a>
<a id="trace-15163"></a>
<a id="trace-15173"></a>
<a id="trace-15180"></a>
<a id="trace-15192"></a>
<a id="trace-15202"></a>
<a id="trace-15208"></a>
<a id="trace-15217"></a>
<a id="trace-15223"></a>
<a id="trace-15293"></a>
<a id="trace-15304"></a>
<a id="trace-15317"></a>
<a id="trace-15330"></a>
<a id="trace-15347"></a>
<a id="trace-15364"></a>
<a id="trace-15381"></a>
<a id="trace-15388"></a>
<a id="trace-15397"></a>
<a id="trace-15409"></a>
<a id="trace-15476"></a>
<a id="trace-15482"></a>
<a id="trace-15491"></a>
<a id="trace-15500"></a>
<a id="trace-15507"></a>
<a id="trace-15517"></a>
<a id="trace-15529"></a>
<a id="trace-15537"></a>
<a id="trace-15546"></a>
<a id="trace-15555"></a>
<a id="trace-15627"></a>
<a id="trace-15638"></a>
<a id="trace-15653"></a>
<a id="trace-15660"></a>
<a id="trace-15677"></a>
<a id="trace-15689"></a>
<a id="trace-15697"></a>
<a id="trace-15706"></a>
<a id="trace-15715"></a>
<a id="trace-15727"></a>
<a id="trace-15793"></a>
<a id="trace-15800"></a>
<a id="trace-15813"></a>
<a id="trace-15819"></a>
<a id="trace-15827"></a>
<a id="trace-15831"></a>
<a id="trace-15840"></a>
<a id="trace-15848"></a>
<a id="trace-15854"></a>
<a id="trace-15861"></a>
<a id="trace-16055"></a>
<a id="trace-16060"></a>
<a id="trace-16065"></a>
<a id="trace-16069"></a>
<a id="trace-16074"></a>
<a id="trace-16079"></a>
<a id="trace-16082"></a>
<a id="trace-16085"></a>
<a id="trace-16089"></a>
<a id="trace-16094"></a>
<a id="trace-16156"></a>
<a id="trace-16159"></a>
<a id="trace-16162"></a>
<a id="trace-16166"></a>
<a id="trace-16170"></a>
<a id="trace-16174"></a>
<a id="trace-16177"></a>
<a id="trace-16181"></a>
<a id="trace-16187"></a>
<a id="trace-16192"></a>
<a id="trace-16256"></a>
<a id="trace-16259"></a>
<a id="trace-16262"></a>
<a id="trace-16265"></a>
<a id="trace-16270"></a>
<a id="trace-16276"></a>
<a id="trace-16280"></a>
<a id="trace-16284"></a>
<a id="trace-16292"></a>
<a id="trace-16297"></a>
<a id="trace-16363"></a>
<a id="trace-16369"></a>
<a id="trace-16374"></a>
<a id="trace-16378"></a>
<a id="trace-16383"></a>
<a id="trace-16389"></a>
<a id="trace-16393"></a>
<a id="trace-16399"></a>
<a id="trace-16405"></a>
<a id="trace-16410"></a>
<a id="trace-16474"></a>
<a id="trace-16479"></a>
<a id="trace-16485"></a>
<a id="trace-16490"></a>
<a id="trace-16504"></a>
<a id="trace-16508"></a>
<a id="trace-16512"></a>
<a id="trace-16518"></a>
<a id="trace-16523"></a>
<a id="trace-16530"></a>
<a id="trace-16593"></a>
<a id="trace-16597"></a>
<a id="trace-16602"></a>
<a id="trace-16605"></a>
<a id="trace-16615"></a>
<a id="trace-16619"></a>
<a id="trace-16626"></a>
<a id="trace-16631"></a>
<a id="trace-16642"></a>
<a id="trace-16649"></a>
<a id="trace-16712"></a>
<a id="trace-16718"></a>
<a id="trace-16722"></a>
<a id="trace-16725"></a>
<a id="trace-16731"></a>
<a id="trace-16735"></a>
<a id="trace-16741"></a>
<a id="trace-16745"></a>
<a id="trace-16754"></a>
<a id="trace-16759"></a>
<a id="trace-16825"></a>
<a id="trace-16837"></a>
<a id="trace-16841"></a>
<a id="trace-16846"></a>
<a id="trace-16851"></a>
<a id="trace-16855"></a>
<a id="trace-16860"></a>
<a id="trace-16864"></a>
<a id="trace-16871"></a>
<a id="trace-16876"></a>
<a id="trace-16940"></a>
<a id="trace-16947"></a>
<a id="trace-16951"></a>
<a id="trace-16959"></a>
<a id="trace-16970"></a>
<a id="trace-16976"></a>
<a id="trace-16980"></a>
<a id="trace-16984"></a>
<a id="trace-16990"></a>
<a id="trace-16995"></a>
<a id="trace-17060"></a>
<a id="trace-17064"></a>
<a id="trace-17069"></a>
<a id="trace-17072"></a>
<a id="trace-17080"></a>
<a id="trace-17086"></a>
<a id="trace-17093"></a>
<a id="trace-17105"></a>
<a id="trace-17110"></a>
<a id="trace-17115"></a>
<a id="trace-17179"></a>
<a id="trace-17183"></a>
<a id="trace-17189"></a>
<a id="trace-17192"></a>
<a id="trace-17198"></a>
<a id="trace-17202"></a>
<a id="trace-17206"></a>
<a id="trace-17215"></a>
<a id="trace-17229"></a>
<a id="trace-17298"></a>
<a id="trace-17302"></a>
<a id="trace-17307"></a>
<a id="trace-17310"></a>
<a id="trace-17317"></a>
<a id="trace-17321"></a>
<a id="trace-17326"></a>
<a id="trace-17330"></a>
<a id="trace-17335"></a>
<a id="trace-17342"></a>
<a id="trace-17408"></a>
<a id="trace-17414"></a>
<a id="trace-17421"></a>
<a id="trace-17424"></a>
<a id="trace-17436"></a>
<a id="trace-17440"></a>
<a id="trace-17446"></a>
<a id="trace-17450"></a>
<a id="trace-17456"></a>
<a id="trace-17461"></a>
<a id="trace-17524"></a>
<a id="trace-17530"></a>
<a id="trace-17534"></a>
<a id="trace-17539"></a>
<a id="trace-17547"></a>
<a id="trace-17551"></a>
<a id="trace-17559"></a>
<a id="trace-17569"></a>
<a id="trace-17576"></a>
<a id="trace-17581"></a>
<a id="trace-17645"></a>
<a id="trace-17649"></a>
<a id="trace-17653"></a>
<a id="trace-17658"></a>
<a id="trace-17663"></a>
<a id="trace-17669"></a>
<a id="trace-17673"></a>
<a id="trace-17680"></a>
<a id="trace-17686"></a>
<a id="trace-17694"></a>
<a id="trace-17765"></a>
<a id="trace-17769"></a>
<a id="trace-17774"></a>
<a id="trace-17777"></a>
<a id="trace-17782"></a>
<a id="trace-17788"></a>
<a id="trace-17792"></a>
<a id="trace-17798"></a>
<a id="trace-17803"></a>
<a id="trace-17808"></a>
<a id="trace-17875"></a>
<a id="trace-17879"></a>
<a id="trace-17888"></a>
<a id="trace-17897"></a>
<a id="trace-17903"></a>
<a id="trace-17907"></a>
<a id="trace-17911"></a>
<a id="trace-17917"></a>
<a id="trace-17922"></a>
<a id="trace-17929"></a>
<a id="trace-17992"></a>
<a id="trace-17996"></a>
<a id="trace-18001"></a>
<a id="trace-18007"></a>
<a id="trace-18014"></a>
<a id="trace-18021"></a>
<a id="trace-18032"></a>
<a id="trace-18036"></a>
<a id="trace-18041"></a>
<a id="trace-18048"></a>
<a id="trace-18111"></a>
<a id="trace-18117"></a>
<a id="trace-18121"></a>
<a id="trace-18124"></a>
<a id="trace-18130"></a>
<a id="trace-18134"></a>
<a id="trace-18143"></a>
<a id="trace-18147"></a>
<a id="trace-18156"></a>
<a id="trace-18161"></a>
<a id="trace-18230"></a>
<a id="trace-18236"></a>
<a id="trace-18240"></a>
<a id="trace-18245"></a>
<a id="trace-18250"></a>
<a id="trace-18254"></a>
<a id="trace-18259"></a>
<a id="trace-18263"></a>
<a id="trace-18270"></a>
<a id="trace-18275"></a>
<a id="trace-18342"></a>
<a id="trace-18346"></a>
<a id="trace-18353"></a>
<a id="trace-18364"></a>
<a id="trace-18369"></a>
<a id="trace-18375"></a>
<a id="trace-18379"></a>
<a id="trace-18383"></a>
<a id="trace-18389"></a>
<a id="trace-18394"></a>
<a id="trace-18459"></a>
<a id="trace-18463"></a>
<a id="trace-18468"></a>
<a id="trace-18474"></a>
<a id="trace-18479"></a>
<a id="trace-18488"></a>
<a id="trace-18498"></a>
<a id="trace-18504"></a>
<a id="trace-18509"></a>
<a id="trace-18514"></a>
<a id="trace-18578"></a>
<a id="trace-18582"></a>
<a id="trace-18588"></a>
<a id="trace-18591"></a>
<a id="trace-18597"></a>
<a id="trace-18601"></a>
<a id="trace-18608"></a>
<a id="trace-18614"></a>
<a id="trace-18622"></a>
<a id="trace-18635"></a>
<a id="trace-18698"></a>
<a id="trace-18702"></a>
<a id="trace-18707"></a>
<a id="trace-18710"></a>
<a id="trace-18717"></a>
<a id="trace-18721"></a>
<a id="trace-18726"></a>
<a id="trace-18730"></a>
<a id="trace-18735"></a>
<a id="trace-18745"></a>
<a id="trace-18808"></a>
<a id="trace-18817"></a>
<a id="trace-18827"></a>
<a id="trace-18830"></a>
<a id="trace-18836"></a>
<a id="trace-18840"></a>
<a id="trace-18846"></a>
<a id="trace-18850"></a>
<a id="trace-18856"></a>
<a id="trace-18861"></a>
<a id="trace-18924"></a>
<a id="trace-18930"></a>
<a id="trace-18937"></a>
<a id="trace-18942"></a>
<a id="trace-18950"></a>
<a id="trace-18954"></a>
<a id="trace-18965"></a>
<a id="trace-18969"></a>
<a id="trace-18976"></a>
<a id="trace-18981"></a>
<a id="trace-19045"></a>
<a id="trace-19049"></a>
<a id="trace-19053"></a>
<a id="trace-19058"></a>
<a id="trace-19063"></a>
<a id="trace-19069"></a>
<a id="trace-19076"></a>
<a id="trace-19080"></a>
<a id="trace-19089"></a>
<a id="trace-19100"></a>
<a id="trace-19165"></a>
<a id="trace-19169"></a>
<a id="trace-19174"></a>
<a id="trace-19177"></a>
<a id="trace-19182"></a>
<a id="trace-19188"></a>
<a id="trace-19192"></a>
<a id="trace-19198"></a>
<a id="trace-19203"></a>
<a id="trace-19211"></a>
<a id="trace-19275"></a>
<a id="trace-19282"></a>
<a id="trace-19294"></a>
<a id="trace-19297"></a>
<a id="trace-19303"></a>
<a id="trace-19307"></a>
<a id="trace-19311"></a>
<a id="trace-19317"></a>
<a id="trace-19322"></a>
<a id="trace-19329"></a>
<a id="trace-19392"></a>
<a id="trace-19396"></a>
<a id="trace-19404"></a>
<a id="trace-19407"></a>
<a id="trace-19417"></a>
<a id="trace-19427"></a>
<a id="trace-19432"></a>
<a id="trace-19436"></a>
<a id="trace-19441"></a>
<a id="trace-19448"></a>
- 1.60s–359.80s (×713), actor 37, squad 4 (trace 334): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5617410301765847, 'next_transition': 353}.
<a id="trace-504"></a>
<a id="trace-518"></a>
<a id="trace-541"></a>
<a id="trace-560"></a>
<a id="trace-574"></a>
<a id="trace-593"></a>
<a id="trace-617"></a>
<a id="trace-642"></a>
<a id="trace-743"></a>
<a id="trace-750"></a>
<a id="trace-762"></a>
- 5.20s–11.20s (×11), actor 5, squad 0 (trace 504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 437. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.259954944727536, 'next_transition': 518}.
<a id="trace-117"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 117): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999849597488876, 'next_transition': 773}.
<a id="trace-766"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 766): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 766. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999849597488876, 'next_transition': 773}.
<a id="trace-767"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 767): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 767. Next observer evidence: {'until': 11.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999849597488876, 'next_transition': 773}.
<a id="trace-773"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 773): traveling overwatch. Knowledge: actor memory at 10.00s, trace 665. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 895}.
<a id="trace-774"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 774): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 665. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2183413225579066, 'next_transition': 895}.
<a id="trace-895"></a>
<a id="trace-909"></a>
<a id="trace-929"></a>
<a id="trace-948"></a>
<a id="trace-991"></a>
<a id="trace-1089"></a>
<a id="trace-1103"></a>
<a id="trace-1119"></a>
- 11.70s–16.25s (×8), actor 5, squad 0 (trace 895): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 767. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06684908338514707, 'next_transition': 909}.
<a id="trace-1137"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 1137): received platoon directive. Knowledge: actor memory at 15.00s, trace 1014. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600132054365014, 'next_transition': 1351}.
<a id="trace-1351"></a>
- 17.25s–17.25s (×1), actor 5, squad 0 (trace 1351): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1017. Next observer evidence: {'until': 18, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.286250799512776, 'next_transition': 1385}.
<a id="trace-1385"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1385): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1014. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5685091572735314, 'next_transition': 1614}.
<a id="trace-1386"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1386): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1014. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5685091572735314, 'next_transition': 1614}.
<a id="trace-1387"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1387): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1014. Next observer evidence: {'until': 18.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5685091572735314, 'next_transition': 1614}.
<a id="trace-1614"></a>
<a id="trace-1637"></a>
<a id="trace-1747"></a>
<a id="trace-1774"></a>
<a id="trace-1789"></a>
<a id="trace-1803"></a>
- 18.75s–21.75s (×6), actor 5, squad 0 (trace 1614): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1017. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500221086084834, 'next_transition': 1637}.
<a id="trace-1807"></a>
- 21.85s–21.85s (×1), actor 0, squad 0 (trace 1807): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1668. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099906212786655, 'next_transition': 2026}.
<a id="trace-2026"></a>
- 22.25s–22.25s (×1), actor 5, squad 0 (trace 2026): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1671. Next observer evidence: {'until': 22.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46269031204752925, 'next_transition': 2052}.
<a id="trace-2052"></a>
- 22.95s–22.95s (×1), actor 0, squad 0 (trace 2052): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 1668. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6379051031290575, 'next_transition': 2292}.
<a id="trace-2292"></a>
<a id="trace-2322"></a>
<a id="trace-2358"></a>
<a id="trace-2458"></a>
<a id="trace-2483"></a>
- 23.75s–26.25s (×5), actor 5, squad 0 (trace 2292): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1671. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18320875906204062, 'next_transition': 2322}.
<a id="trace-2486"></a>
- 26.45s–26.45s (×1), actor 0, squad 0 (trace 2486): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 2367. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1981795489224634, 'next_transition': 2504}.
<a id="trace-2488"></a>
- 26.45s–26.45s (×1), actor 0, squad 0 (trace 2488): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 25.00s, trace 2367. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1981795489224634, 'next_transition': 2504}.
<a id="trace-2504"></a>
<a id="trace-2512"></a>
<a id="trace-2523"></a>
<a id="trace-2528"></a>
<a id="trace-2540"></a>
<a id="trace-2547"></a>
<a id="trace-2618"></a>
<a id="trace-2623"></a>
<a id="trace-2632"></a>
- 27.25s–31.25s (×9), actor 5, squad 0 (trace 2504): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 2370. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08647065629449098, 'next_transition': 2512}.
<a id="trace-2638"></a>
- 31.65s–31.65s (×1), actor 0, squad 0 (trace 2638): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2550. Next observer evidence: None.
<a id="trace-2826"></a>
<a id="trace-2850"></a>
<a id="trace-2879"></a>
<a id="trace-2893"></a>
- 31.75s–34.25s (×4), actor 5, squad 0 (trace 2826): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2553. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3027703127636071, 'next_transition': 2850}.
<a id="trace-2897"></a>
- 34.50s–34.50s (×1), actor 0, squad 0 (trace 2897): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 2550. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4422887453860192, 'next_transition': 3210}.
<a id="trace-3210"></a>
<a id="trace-3224"></a>
<a id="trace-3266"></a>
- 35.75s–37.25s (×3), actor 5, squad 0 (trace 3210): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3110. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22680120205932666, 'next_transition': 3224}.
<a id="trace-3290"></a>
- 38.05s–38.05s (×1), actor 0, squad 0 (trace 3290): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 3107. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09619999999999962, 'next_transition': 3308}.
<a id="trace-3308"></a>
<a id="trace-3328"></a>
- 38.25s–38.75s (×2), actor 5, squad 0 (trace 3308): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 3110. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09761666666666713, 'next_transition': 3328}.
<a id="trace-492"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 492): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3332"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 3332): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.602161 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 3332. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3346}.
<a id="trace-3333"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 3333): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.602161 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 3333. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3346}.
<a id="trace-3346"></a>
<a id="trace-3356"></a>
<a id="trace-3445"></a>
- 39.25s–40.75s (×3), actor 5, squad 0 (trace 3346): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 3333. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08050229915626292, 'next_transition': 3356}.
<a id="trace-3450"></a>
- 40.95s–40.95s (×1), actor 0, squad 0 (trace 3450): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 40.00s, trace 3360. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3505357263337796, 'next_transition': 3461}.
<a id="trace-3461"></a>
<a id="trace-3474"></a>
<a id="trace-3479"></a>
<a id="trace-3491"></a>
<a id="trace-3498"></a>
<a id="trace-3509"></a>
<a id="trace-3522"></a>
- 41.75s–44.75s (×7), actor 5, squad 0 (trace 3461): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3363. Next observer evidence: {'until': 42.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13048250820405846, 'next_transition': 3474}.
<a id="trace-3592"></a>
- 45.15s–45.15s (×1), actor 0, squad 0 (trace 3592): received platoon directive; retain held slots. Knowledge: actor memory at 45.00s, trace 3526. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3614}.
<a id="trace-3614"></a>
- 46.25s–46.25s (×1), actor 5, squad 0 (trace 3614): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3529. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3623}.
<a id="trace-3623"></a>
- 46.65s–46.65s (×1), actor 0, squad 0 (trace 3623): NeedSupport. Knowledge: actor memory at 45.00s, trace 3526. Next observer evidence: None.
<a id="trace-3629"></a>
<a id="trace-3644"></a>
<a id="trace-3654"></a>
<a id="trace-3663"></a>
<a id="trace-3750"></a>
<a id="trace-3777"></a>
<a id="trace-3808"></a>
<a id="trace-3820"></a>
<a id="trace-3917"></a>
<a id="trace-3926"></a>
<a id="trace-3938"></a>
<a id="trace-3959"></a>
<a id="trace-3974"></a>
<a id="trace-3980"></a>
<a id="trace-4002"></a>
<a id="trace-4009"></a>
<a id="trace-4105"></a>
<a id="trace-4118"></a>
<a id="trace-4144"></a>
<a id="trace-4179"></a>
<a id="trace-4195"></a>
<a id="trace-4203"></a>
<a id="trace-4301"></a>
<a id="trace-4316"></a>
- 46.75s–66.25s (×24), actor 5, squad 0 (trace 3629): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3529. Next observer evidence: {'until': 47.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28215829793684616, 'next_transition': 3644}.
<a id="trace-1146"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (events line 1146): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4327"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 4327): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.297329 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 4327. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4382432167362001, 'next_transition': 4350}.
<a id="trace-4328"></a>
- 66.45s–66.45s (×1), actor 5, squad 0 (trace 4328): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.297329 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 66.45s, trace 4328. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4382432167362001, 'next_transition': 4350}.
<a id="trace-4350"></a>
<a id="trace-4360"></a>
<a id="trace-4372"></a>
<a id="trace-4388"></a>
<a id="trace-4393"></a>
<a id="trace-4465"></a>
<a id="trace-4477"></a>
<a id="trace-4485"></a>
<a id="trace-4491"></a>
<a id="trace-4507"></a>
- 67.25s–72.25s (×10), actor 5, squad 0 (trace 4350): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 66.45s, trace 4328. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1203251266822981, 'next_transition': 4360}.
<a id="trace-4510"></a>
- 72.35s–72.35s (×1), actor 0, squad 0 (trace 4510): received platoon directive; retain held slots. Knowledge: actor memory at 70.00s, trace 4397. Next observer evidence: {'until': 72.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08342271894130518, 'next_transition': 4513}.
<a id="trace-4513"></a>
- 72.40s–72.40s (×1), actor 0, squad 0 (trace 4513): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 4397. Next observer evidence: {'until': 73.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3174785299908722, 'next_transition': 4532}.
<a id="trace-4532"></a>
- 73.40s–73.40s (×1), actor 0, squad 0 (trace 4532): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 4397. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3425719982983673, 'next_transition': 4677}.
<a id="trace-4536"></a>
- 73.40s–73.40s (×1), actor 0, squad 0 (trace 4536): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 4397. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3425719982983673, 'next_transition': 4677}.
<a id="trace-4537"></a>
- 73.40s–73.40s (×1), actor 0, squad 0 (trace 4537): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 4397. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3425719982983673, 'next_transition': 4677}.
<a id="trace-4677"></a>
<a id="trace-4690"></a>
<a id="trace-4710"></a>
<a id="trace-4784"></a>
<a id="trace-4793"></a>
<a id="trace-4813"></a>
<a id="trace-4825"></a>
- 73.75s–76.75s (×7), actor 5, squad 0 (trace 4677): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4400. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.028195013572347, 'next_transition': 4690}.
<a id="trace-4836"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 4836): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 4713. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199249022770226, 'next_transition': 7528}.
<a id="trace-4838"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 4838): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 75.00s, trace 4713. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199249022770226, 'next_transition': 7528}.
<a id="trace-7517"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 7517): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 75.00s, trace 4713. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199249022770226, 'next_transition': 7528}.
<a id="trace-7518"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 7518): MoveTactically. Knowledge: actor memory at 75.00s, trace 4713. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199249022770226, 'next_transition': 7528}.
<a id="trace-7519"></a>
- 77.05s–77.05s (×1), actor 0, squad 0 (trace 7519): contact cover complete: assessment resumes closure. Knowledge: actor memory at 75.00s, trace 4713. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25199249022770226, 'next_transition': 7528}.
<a id="trace-7528"></a>
<a id="trace-7539"></a>
<a id="trace-7548"></a>
<a id="trace-7554"></a>
<a id="trace-7561"></a>
<a id="trace-7632"></a>
<a id="trace-7639"></a>
<a id="trace-7649"></a>
- 77.25s–81.25s (×8), actor 5, squad 0 (trace 7528): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4715. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.12000646418879446, 'next_transition': 7539}.
<a id="trace-7652"></a>
- 81.35s–81.35s (×1), actor 4, squad 0 (trace 7652): traveling overwatch. Knowledge: actor memory at 80.00s, trace 7564. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299990931852055, 'next_transition': 7662}.
<a id="trace-7653"></a>
- 81.35s–81.35s (×1), actor 4, squad 0 (trace 7653): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 80.00s, trace 7564. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299990931852055, 'next_transition': 7662}.
<a id="trace-7662"></a>
<a id="trace-7674"></a>
<a id="trace-7679"></a>
<a id="trace-7686"></a>
<a id="trace-7690"></a>
<a id="trace-7784"></a>
<a id="trace-7794"></a>
<a id="trace-7799"></a>
<a id="trace-7806"></a>
<a id="trace-7818"></a>
<a id="trace-7827"></a>
<a id="trace-7903"></a>
<a id="trace-7916"></a>
<a id="trace-7926"></a>
<a id="trace-7953"></a>
<a id="trace-7961"></a>
<a id="trace-8031"></a>
<a id="trace-8045"></a>
<a id="trace-8052"></a>
<a id="trace-8062"></a>
<a id="trace-8068"></a>
<a id="trace-8078"></a>
<a id="trace-8087"></a>
<a id="trace-8101"></a>
<a id="trace-8113"></a>
<a id="trace-8183"></a>
<a id="trace-8192"></a>
<a id="trace-8211"></a>
<a id="trace-8218"></a>
<a id="trace-8226"></a>
<a id="trace-8232"></a>
<a id="trace-8242"></a>
<a id="trace-8250"></a>
<a id="trace-8326"></a>
<a id="trace-8337"></a>
<a id="trace-8351"></a>
<a id="trace-8371"></a>
<a id="trace-8378"></a>
<a id="trace-8384"></a>
<a id="trace-8393"></a>
<a id="trace-8401"></a>
<a id="trace-8472"></a>
<a id="trace-8480"></a>
<a id="trace-8514"></a>
<a id="trace-8522"></a>
<a id="trace-8533"></a>
<a id="trace-8543"></a>
<a id="trace-8622"></a>
<a id="trace-8636"></a>
<a id="trace-8641"></a>
<a id="trace-8651"></a>
<a id="trace-8658"></a>
<a id="trace-8667"></a>
<a id="trace-8674"></a>
<a id="trace-8687"></a>
<a id="trace-8777"></a>
<a id="trace-8787"></a>
<a id="trace-8793"></a>
<a id="trace-8806"></a>
<a id="trace-8815"></a>
<a id="trace-8820"></a>
<a id="trace-8838"></a>
<a id="trace-8909"></a>
<a id="trace-8920"></a>
<a id="trace-8930"></a>
<a id="trace-8941"></a>
<a id="trace-8950"></a>
<a id="trace-8956"></a>
<a id="trace-8965"></a>
<a id="trace-8972"></a>
<a id="trace-8983"></a>
<a id="trace-8991"></a>
<a id="trace-9061"></a>
<a id="trace-9069"></a>
<a id="trace-9077"></a>
<a id="trace-9086"></a>
<a id="trace-9095"></a>
<a id="trace-9103"></a>
<a id="trace-9121"></a>
<a id="trace-9139"></a>
- 81.75s–134.80s (×80), actor 5, squad 0 (trace 7662): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 7565. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450098980926296, 'next_transition': 7674}.
<a id="trace-1572"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (events line 1572): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9214"></a>
- 135.60s–135.60s (×1), actor 5, squad 0 (trace 9214): renew committed intent (75 s lifetime). Knowledge: actor memory at 135.60s, trace 9214. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9229}.
<a id="trace-9229"></a>
<a id="trace-9242"></a>
<a id="trace-9249"></a>
<a id="trace-9257"></a>
<a id="trace-9282"></a>
<a id="trace-9354"></a>
<a id="trace-9365"></a>
- 136.30s–140.80s (×7), actor 5, squad 0 (trace 9229): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.60s, trace 9214. Next observer evidence: {'until': 137.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9242}.
<a id="trace-9372"></a>
- 141.15s–141.15s (×1), actor 4, squad 0 (trace 9372): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 9287. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9384}.
<a id="trace-9373"></a>
- 141.15s–141.15s (×1), actor 4, squad 0 (trace 9373): bounding overwatch. Knowledge: actor memory at 140.00s, trace 9287. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9384}.
<a id="trace-9374"></a>
- 141.15s–141.15s (×1), actor 4, squad 0 (trace 9374): new contact inside 100 m. Knowledge: actor memory at 140.00s, trace 9287. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9384}.
<a id="trace-9384"></a>
<a id="trace-9394"></a>
<a id="trace-9406"></a>
<a id="trace-9426"></a>
<a id="trace-9437"></a>
<a id="trace-9449"></a>
<a id="trace-9534"></a>
- 141.30s–145.30s (×7), actor 5, squad 0 (trace 9384): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 9288. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9394}.
<a id="trace-9537"></a>
- 145.45s–145.45s (×1), actor 4, squad 0 (trace 9537): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 9466. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11178}.
<a id="trace-9539"></a>
- 145.45s–145.45s (×1), actor 4, squad 0 (trace 9539): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 145.00s, trace 9466. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11178}.
<a id="trace-11168"></a>
- 145.45s–145.45s (×1), actor 4, squad 0 (trace 11168): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 145.00s, trace 9466. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11178}.
<a id="trace-11169"></a>
- 145.45s–145.45s (×1), actor 4, squad 0 (trace 11169): MoveTactically. Knowledge: actor memory at 145.00s, trace 9466. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11178}.
<a id="trace-11170"></a>
- 145.45s–145.45s (×1), actor 4, squad 0 (trace 11170): contact cover complete: assessment resumes closure. Knowledge: actor memory at 145.00s, trace 9466. Next observer evidence: {'until': 145.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11178}.
<a id="trace-11178"></a>
<a id="trace-11196"></a>
<a id="trace-11218"></a>
<a id="trace-11232"></a>
<a id="trace-11264"></a>
<a id="trace-11271"></a>
<a id="trace-11347"></a>
<a id="trace-11360"></a>
<a id="trace-11370"></a>
<a id="trace-11378"></a>
<a id="trace-11392"></a>
<a id="trace-11404"></a>
<a id="trace-11415"></a>
<a id="trace-11420"></a>
<a id="trace-11441"></a>
<a id="trace-11515"></a>
<a id="trace-11525"></a>
<a id="trace-11538"></a>
<a id="trace-11555"></a>
<a id="trace-11568"></a>
- 145.80s–157.30s (×20), actor 5, squad 0 (trace 11178): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 9467. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150186439323876, 'next_transition': 11196}.
<a id="trace-11574"></a>
- 157.75s–157.75s (×1), actor 4, squad 0 (trace 11574): ReactToContact: cover and return fire. Knowledge: actor memory at 155.00s, trace 11448. Next observer evidence: {'until': 158.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2780617771303762, 'next_transition': 11709}.
<a id="trace-11575"></a>
- 157.75s–157.75s (×1), actor 4, squad 0 (trace 11575): new contact inside 100 m. Knowledge: actor memory at 155.00s, trace 11448. Next observer evidence: {'until': 158.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2780617771303762, 'next_transition': 11709}.
<a id="trace-11709"></a>
<a id="trace-11717"></a>
<a id="trace-11822"></a>
<a id="trace-11834"></a>
- 158.30s–160.80s (×4), actor 5, squad 0 (trace 11709): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 11449. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175121566918112, 'next_transition': 11717}.
<a id="trace-11840"></a>
- 161.05s–161.05s (×1), actor 4, squad 0 (trace 11840): new contact inside 100 m. Knowledge: actor memory at 160.00s, trace 11743. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5918065567880245, 'next_transition': 12005}.
<a id="trace-12005"></a>
<a id="trace-12024"></a>
<a id="trace-12052"></a>
<a id="trace-12064"></a>
<a id="trace-12072"></a>
<a id="trace-12085"></a>
- 161.30s–164.30s (×6), actor 5, squad 0 (trace 12005): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 11744. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9781137028714675, 'next_transition': 12024}.
<a id="trace-12090"></a>
- 164.60s–164.60s (×1), actor 4, squad 0 (trace 12090): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 11743. Next observer evidence: {'until': 164.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3856982411355532, 'next_transition': 12099}.
<a id="trace-12099"></a>
<a id="trace-12171"></a>
- 164.80s–165.30s (×2), actor 5, squad 0 (trace 12099): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 11744. Next observer evidence: {'until': 165.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9247611786283353, 'next_transition': 12171}.
<a id="trace-12191"></a>
- 166.15s–166.15s (×1), actor 4, squad 0 (trace 12191): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 166.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3149801101189237, 'next_transition': 12393}.
<a id="trace-12393"></a>
<a id="trace-12405"></a>
<a id="trace-12417"></a>
<a id="trace-12433"></a>
<a id="trace-12445"></a>
<a id="trace-12458"></a>
<a id="trace-12479"></a>
- 166.30s–169.80s (×7), actor 5, squad 0 (trace 12393): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 12104. Next observer evidence: {'until': 166.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8876428912503415, 'next_transition': 12405}.
<a id="trace-12484"></a>
- 169.95s–169.95s (×1), actor 4, squad 0 (trace 12484): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4825300325648645, 'next_transition': 14544}.
<a id="trace-12486"></a>
- 169.95s–169.95s (×1), actor 4, squad 0 (trace 12486): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4825300325648645, 'next_transition': 14544}.
<a id="trace-14456"></a>
- 169.95s–169.95s (×1), actor 4, squad 0 (trace 14456): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4825300325648645, 'next_transition': 14544}.
<a id="trace-14457"></a>
- 169.95s–169.95s (×1), actor 4, squad 0 (trace 14457): MoveTactically. Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4825300325648645, 'next_transition': 14544}.
<a id="trace-14458"></a>
- 169.95s–169.95s (×1), actor 4, squad 0 (trace 14458): contact cover complete: assessment resumes closure. Knowledge: actor memory at 165.00s, trace 12103. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4825300325648645, 'next_transition': 14544}.
<a id="trace-14544"></a>
<a id="trace-14559"></a>
<a id="trace-14576"></a>
<a id="trace-14588"></a>
<a id="trace-14610"></a>
<a id="trace-14636"></a>
<a id="trace-14711"></a>
<a id="trace-14739"></a>
<a id="trace-14773"></a>
<a id="trace-14787"></a>
<a id="trace-14802"></a>
<a id="trace-14816"></a>
<a id="trace-14831"></a>
<a id="trace-14848"></a>
<a id="trace-14927"></a>
<a id="trace-14943"></a>
- 170.80s–180.80s (×16), actor 5, squad 0 (trace 14544): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14463. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.139041685572759, 'next_transition': 14559}.
<a id="trace-14951"></a>
- 181.15s–181.15s (×1), actor 4, squad 0 (trace 14951): NeedSupport. Knowledge: actor memory at 180.00s, trace 14853. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2277890684894476, 'next_transition': 14966}.
<a id="trace-14966"></a>
<a id="trace-14978"></a>
<a id="trace-15006"></a>
<a id="trace-15021"></a>
<a id="trace-15036"></a>
<a id="trace-15066"></a>
<a id="trace-15141"></a>
<a id="trace-15150"></a>
<a id="trace-15161"></a>
<a id="trace-15171"></a>
<a id="trace-15178"></a>
<a id="trace-15200"></a>
<a id="trace-15215"></a>
<a id="trace-15291"></a>
<a id="trace-15302"></a>
<a id="trace-15315"></a>
<a id="trace-15328"></a>
<a id="trace-15345"></a>
<a id="trace-15362"></a>
<a id="trace-15379"></a>
<a id="trace-15395"></a>
<a id="trace-15474"></a>
<a id="trace-15480"></a>
<a id="trace-15505"></a>
<a id="trace-15515"></a>
<a id="trace-15527"></a>
<a id="trace-15535"></a>
<a id="trace-15544"></a>
<a id="trace-15553"></a>
<a id="trace-15625"></a>
<a id="trace-15636"></a>
<a id="trace-15658"></a>
<a id="trace-15674"></a>
<a id="trace-15712"></a>
- 181.30s–204.30s (×34), actor 5, squad 0 (trace 14966): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 14854. Next observer evidence: {'until': 181.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26058521629353093, 'next_transition': 14978}.
<a id="trace-2092"></a>
- 204.65s–204.65s (×1), actor 5, squad 0 (events line 2092): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15719"></a>
- 204.65s–204.65s (×1), actor 5, squad 0 (trace 15719): renew committed intent (75 s lifetime). Knowledge: actor memory at 204.65s, trace 15719. Next observer evidence: {'until': 206.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9297969697426339, 'next_transition': 15810}.
<a id="trace-15810"></a>
<a id="trace-15824"></a>
<a id="trace-15837"></a>
- 206.30s–208.30s (×3), actor 5, squad 0 (trace 15810): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 15730. Next observer evidence: {'until': 207.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.0559634358323091, 'next_transition': 15824}.
<a id="trace-15871"></a>
- 210.00s–210.00s (×1), actor 4, squad 0 (trace 15871): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 210.00s, trace 15862. Next observer evidence: None.
<a id="trace-15875"></a>
- 210.05s–210.05s (×1), actor 4, squad 0 (trace 15875): Reorganise: completed/failed drill. Knowledge: actor memory at 210.00s, trace 15862. Next observer evidence: {'until': 240, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-15877"></a>
- 210.05s–210.05s (×1), actor 4, squad 0 (trace 15877): MoveTactically. Knowledge: actor memory at 210.00s, trace 15862. Next observer evidence: {'until': 240, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-15878"></a>
- 210.05s–210.05s (×1), actor 4, squad 0 (trace 15878): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 210.00s, trace 15862. Next observer evidence: {'until': 240, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

128 matched order/radio deliveries; 150 explicitly recorded losses; 2 unmatched orders (not classified as lost).
Matched delay: mean 0.380s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1668: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1677: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2367: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2376: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2377: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2378: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2550: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2551: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2554: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2556: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2557: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2558: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2559: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2560: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2561: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 3107: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3108: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3110: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3111: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3113: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3114: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3115: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3116: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3117: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3118: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 3332: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 3333: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 3360: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3361: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3363: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3364: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3366: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3367: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3368: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3369: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3370: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3371: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 3526: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3527: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3529: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3530: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3532: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3533: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3534: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3535: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3536: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3537: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 3680: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3681: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3683: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3684: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3686: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3687: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3688: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3689: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3690: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3691: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 3847: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3848: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3850: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3851: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3853: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3854: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3855: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3856: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3857: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3858: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 4014: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4015: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4017: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4018: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4020: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4021: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4022: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4023: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4024: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4025: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 4212: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4213: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4215: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4216: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4218: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4219: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4220: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4221: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4222: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4223: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 4327: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 66.45s leader 5, trace 4328: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 4397: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4398: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4400: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4401: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4403: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4404: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4405: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4406: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4407: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4408: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 4713: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4715: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4716: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4718: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4719: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4720: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4721: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4722: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4723: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 7564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 7565: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 7566: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 7567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 7568: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 7569: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 7570: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 7571: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 7572: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 7573: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 7707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 7708: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 7709: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 7710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 7711: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 7712: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 7713: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 7714: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 7715: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 7716: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 7830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 7831: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 7832: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 7833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 7834: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 7835: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 7836: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 7837: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 7838: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 7839: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 7966: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 7967: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 7969: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 7970: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 7971: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 7972: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 7973: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 7974: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 8116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 8117: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 8118: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 8119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 8120: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 8121: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 8122: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 8123: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 8124: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 8125: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 8255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 8256: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 8257: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 8258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 8259: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 8260: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 8261: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 8262: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 8263: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 8264: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 8405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 8406: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 8407: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 8408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 8409: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 8410: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 8411: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 8412: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 8413: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 8414: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 8556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 8557: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 8558: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 8559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 8560: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 8561: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 8562: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 8563: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 8564: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 8565: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 8701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 8702: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 8703: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 8704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 8705: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 8706: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 8707: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 8708: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 8709: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 8710: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 8843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 8844: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 8845: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 8846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 8847: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 8848: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 8849: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 8850: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 8851: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 8852: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 8994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 8995: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 8996: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 8997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 8998: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 8999: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 9000: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 9001: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 9002: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 9003: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 9143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 9144: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 9145: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 9146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 9147: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 9148: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 9149: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 9150: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 9151: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 9152: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.60s leader 5, trace 9214: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 9287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 9288: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 9289: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 9290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 9291: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 9292: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 9293: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 9294: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 9295: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 9296: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 9466: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 9467: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 9468: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 9469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 9470: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 9471: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 9472: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 9473: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 9474: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 9475: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 11278: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 11279: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 11280: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 11281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 11282: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 11283: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 11284: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 11285: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 11286: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 11287: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 11448: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 11449: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 11450: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 11451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 11452: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 11453: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 11454: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 11455: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 11456: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 11457: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 11743: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 11744: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 11745: estimate 5.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 11746: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 11747: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 11748: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 11749: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 11750: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 11751: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 11752: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 12103: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 12104: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 12105: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 12106: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 12107: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 12108: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 12109: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 12110: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 12111: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 12112: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14462: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14463: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14464: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14465: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14466: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14467: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14468: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14469: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14470: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14471: estimate 2.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14641: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 14642: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 14643: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14644: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14645: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 14646: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 14647: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14648: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14649: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14650: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14853: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 14854: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 14855: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14856: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14857: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 14858: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 14859: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14860: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 14861: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 15076: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 15077: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 15078: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 15079: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 15080: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 15081: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 15082: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 15083: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 15084: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15224: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15225: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 15226: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15227: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15228: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 15229: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15230: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 15231: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15232: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15410: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 15411: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 15412: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15413: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 15414: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 15415: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15416: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 15417: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15418: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15556: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 15557: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 15558: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15559: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 15560: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 15561: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15562: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 15563: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15564: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 204.65s leader 5, trace 15719: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15729: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 15730: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 15731: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 15732: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 15733: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15734: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 15735: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15736: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 15862: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 15863: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 15864: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 15865: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 15866: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 15867: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 15868: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 16095: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 16096: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 16097: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 16098: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 16099: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 16100: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 16193: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 16194: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 16195: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 16196: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 16197: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 16198: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 16299: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 16300: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 16301: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 16302: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 16303: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 16304: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 16413: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 16414: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 16415: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 16416: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 16417: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 16418: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 16531: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 16532: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 16533: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16534: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16535: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16536: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 16650: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 16651: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 16652: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16653: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16654: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16655: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 16764: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 16765: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 16766: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 16767: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 16768: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 16769: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 16877: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 16878: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 16879: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 16880: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 16881: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 16882: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 16997: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 16998: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 16999: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 17000: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 17001: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 17002: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 17118: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 17119: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 17120: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 17121: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 17122: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 17123: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 17230: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 17231: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 17232: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 17233: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 17234: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 17235: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 17343: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 17344: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 17345: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 17346: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 17347: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 17348: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 17463: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 17464: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 17465: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 17466: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 17467: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 17468: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 17582: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 17583: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 17584: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 17585: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 17586: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 17587: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 17696: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 17697: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 17698: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 17699: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 17700: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 17701: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 17811: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 17812: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 17813: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 17814: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 17815: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 17816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 17930: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 17931: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 17932: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 17933: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 17934: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 17935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 18049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 18050: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 18051: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 18052: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 18053: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 18054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 18169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 18170: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 18171: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 18172: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 18173: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 18174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 18279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 18280: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 18281: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 18282: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 18283: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 18284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 18396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 18397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 18398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 18399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 18400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 18401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 18517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 18518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 18519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 18520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 18521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 18522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 18636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 18637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 18638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 18639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 18640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 18641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 18746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 18747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 18748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 18749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 18750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 18751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 18863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 18864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 18865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 18866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 18867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 18868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 18982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 18983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 18984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 18985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 18986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 18987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 19102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 19103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 19104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 19105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 19106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 19107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 19214: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 19215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 19216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 19217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 19218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 19219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 19330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 19331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 19332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 19333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 19334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 19335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 19449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 19450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 19451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 19452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 19453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 19454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Rook killed in action
- 1: Vale killed in action
- 1: Voss killed in action
- 1: Moss killed in action
- 1: Reed incapacitated
- 1: Tern incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
