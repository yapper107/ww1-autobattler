# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/4/107/good-azure/battle-107-1789673703865877384`

## Battle summary

**Ember** · 360 s · 20 shots.

### Turning points

- 17.9s, squad 4: contact (events line 186). First recorded contact.
- 22.2s, squad 0: withdrawal ([trace 2645](#trace-2645)). 49.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 78.8s, squad 0: withdrawal ([trace 4798](#trace-4798)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 1 shots, 1/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 19 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 401](#trace-401)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 18.0s, squad 0 chose took cover and returned fire ([trace 1252](#trace-1252)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 400](#trace-400)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399844189882085, 'next_transition': 414}.
- 21.1s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.734923 retreat threshold=0.500000 initiative=delegated ([trace 2571](#trace-2571)). Following evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500023972757996, 'next_transition': 2588}.

### Communication

72 matched deliveries (mean 0.30s, max 0.75s); 249 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.85s, squad 4, contact, evidence events line 186: First recorded contact; .
- 22.25s, squad 0, withdrawal, evidence 2645: BreakContact: believed ratio at least two without superiority; 49.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 78.85s, squad 0, withdrawal, evidence 4798: Withdraw to received rally; No completion observed before termination.

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
<a id="trace-540"></a>
<a id="trace-557"></a>
<a id="trace-571"></a>
<a id="trace-589"></a>
<a id="trace-612"></a>
<a id="trace-637"></a>
<a id="trace-651"></a>
<a id="trace-657"></a>
<a id="trace-739"></a>
<a id="trace-746"></a>
<a id="trace-758"></a>
- 4.20s–11.20s (×15), actor 5, squad 0 (trace 414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 401. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400077263624559, 'next_transition': 433}.
<a id="trace-559"></a>
<a id="trace-614"></a>
<a id="trace-639"></a>
<a id="trace-659"></a>
<a id="trace-741"></a>
<a id="trace-748"></a>
<a id="trace-760"></a>
<a id="trace-984"></a>
<a id="trace-1065"></a>
<a id="trace-1084"></a>
<a id="trace-1180"></a>
<a id="trace-1228"></a>
<a id="trace-1244"></a>
<a id="trace-1616"></a>
<a id="trace-2372"></a>
<a id="trace-2433"></a>
<a id="trace-2522"></a>
<a id="trace-2549"></a>
<a id="trace-2615"></a>
<a id="trace-2644"></a>
<a id="trace-2956"></a>
<a id="trace-2975"></a>
<a id="trace-2992"></a>
<a id="trace-3010"></a>
<a id="trace-3024"></a>
<a id="trace-3111"></a>
<a id="trace-3125"></a>
<a id="trace-3158"></a>
<a id="trace-3165"></a>
<a id="trace-3178"></a>
<a id="trace-3193"></a>
<a id="trace-3205"></a>
<a id="trace-3212"></a>
<a id="trace-3293"></a>
<a id="trace-3303"></a>
<a id="trace-3313"></a>
<a id="trace-3319"></a>
<a id="trace-3334"></a>
<a id="trace-3348"></a>
<a id="trace-3357"></a>
<a id="trace-3363"></a>
<a id="trace-3379"></a>
<a id="trace-3467"></a>
<a id="trace-3480"></a>
<a id="trace-3493"></a>
<a id="trace-3503"></a>
<a id="trace-3528"></a>
<a id="trace-3533"></a>
<a id="trace-3547"></a>
<a id="trace-3632"></a>
<a id="trace-3661"></a>
<a id="trace-3668"></a>
<a id="trace-3695"></a>
<a id="trace-3703"></a>
<a id="trace-3713"></a>
<a id="trace-3724"></a>
<a id="trace-3732"></a>
<a id="trace-3810"></a>
<a id="trace-3820"></a>
<a id="trace-3830"></a>
<a id="trace-3835"></a>
<a id="trace-3851"></a>
<a id="trace-3870"></a>
<a id="trace-3884"></a>
<a id="trace-3891"></a>
<a id="trace-3978"></a>
<a id="trace-3992"></a>
<a id="trace-4002"></a>
<a id="trace-4010"></a>
<a id="trace-4025"></a>
<a id="trace-4034"></a>
<a id="trace-4041"></a>
<a id="trace-4049"></a>
<a id="trace-4076"></a>
<a id="trace-4148"></a>
<a id="trace-4156"></a>
<a id="trace-4169"></a>
<a id="trace-4179"></a>
<a id="trace-4184"></a>
<a id="trace-4196"></a>
<a id="trace-4207"></a>
<a id="trace-4214"></a>
<a id="trace-4307"></a>
<a id="trace-4318"></a>
<a id="trace-4323"></a>
<a id="trace-4336"></a>
<a id="trace-4345"></a>
<a id="trace-4350"></a>
<a id="trace-4358"></a>
<a id="trace-4434"></a>
<a id="trace-4445"></a>
<a id="trace-4456"></a>
<a id="trace-4464"></a>
<a id="trace-4473"></a>
<a id="trace-4482"></a>
<a id="trace-4503"></a>
<a id="trace-4512"></a>
<a id="trace-4517"></a>
<a id="trace-4590"></a>
<a id="trace-4598"></a>
<a id="trace-4606"></a>
<a id="trace-4613"></a>
<a id="trace-4621"></a>
<a id="trace-4629"></a>
<a id="trace-4644"></a>
<a id="trace-4654"></a>
<a id="trace-4659"></a>
<a id="trace-4742"></a>
<a id="trace-4753"></a>
<a id="trace-4766"></a>
<a id="trace-4777"></a>
<a id="trace-4790"></a>
<a id="trace-4797"></a>
<a id="trace-4971"></a>
<a id="trace-5101"></a>
<a id="trace-5119"></a>
<a id="trace-5130"></a>
<a id="trace-5143"></a>
<a id="trace-5153"></a>
<a id="trace-5179"></a>
<a id="trace-5259"></a>
<a id="trace-5269"></a>
<a id="trace-5284"></a>
<a id="trace-5293"></a>
<a id="trace-5307"></a>
<a id="trace-5343"></a>
<a id="trace-5360"></a>
<a id="trace-5462"></a>
<a id="trace-5487"></a>
<a id="trace-5498"></a>
<a id="trace-5519"></a>
<a id="trace-5528"></a>
<a id="trace-5545"></a>
<a id="trace-5558"></a>
<a id="trace-5576"></a>
<a id="trace-5581"></a>
<a id="trace-5663"></a>
<a id="trace-5673"></a>
<a id="trace-5687"></a>
<a id="trace-5696"></a>
<a id="trace-5704"></a>
<a id="trace-5712"></a>
<a id="trace-5718"></a>
<a id="trace-5729"></a>
<a id="trace-5735"></a>
<a id="trace-5814"></a>
<a id="trace-5845"></a>
<a id="trace-5852"></a>
<a id="trace-5860"></a>
<a id="trace-5879"></a>
<a id="trace-5962"></a>
<a id="trace-5971"></a>
<a id="trace-5977"></a>
<a id="trace-5988"></a>
<a id="trace-5995"></a>
<a id="trace-6002"></a>
<a id="trace-6009"></a>
<a id="trace-6021"></a>
<a id="trace-6026"></a>
<a id="trace-6128"></a>
<a id="trace-6139"></a>
<a id="trace-6144"></a>
<a id="trace-6152"></a>
<a id="trace-6161"></a>
<a id="trace-6170"></a>
<a id="trace-6247"></a>
<a id="trace-6268"></a>
<a id="trace-6279"></a>
<a id="trace-6284"></a>
<a id="trace-6298"></a>
<a id="trace-6310"></a>
<a id="trace-6319"></a>
<a id="trace-6327"></a>
<a id="trace-6400"></a>
<a id="trace-6408"></a>
<a id="trace-6420"></a>
<a id="trace-6430"></a>
<a id="trace-6435"></a>
<a id="trace-6444"></a>
<a id="trace-6452"></a>
<a id="trace-6462"></a>
<a id="trace-6467"></a>
<a id="trace-6542"></a>
<a id="trace-6556"></a>
<a id="trace-6567"></a>
<a id="trace-6577"></a>
<a id="trace-6586"></a>
<a id="trace-6598"></a>
<a id="trace-6613"></a>
<a id="trace-6618"></a>
<a id="trace-6690"></a>
<a id="trace-6696"></a>
<a id="trace-6706"></a>
<a id="trace-6715"></a>
<a id="trace-6724"></a>
<a id="trace-6741"></a>
<a id="trace-6753"></a>
<a id="trace-6758"></a>
<a id="trace-6768"></a>
<a id="trace-6845"></a>
<a id="trace-6871"></a>
<a id="trace-6878"></a>
<a id="trace-6909"></a>
<a id="trace-6914"></a>
<a id="trace-7002"></a>
<a id="trace-7016"></a>
<a id="trace-7026"></a>
<a id="trace-7031"></a>
<a id="trace-7038"></a>
<a id="trace-7053"></a>
<a id="trace-7060"></a>
<a id="trace-7132"></a>
<a id="trace-7141"></a>
<a id="trace-7150"></a>
<a id="trace-7161"></a>
<a id="trace-7178"></a>
<a id="trace-7193"></a>
<a id="trace-7198"></a>
<a id="trace-7207"></a>
<a id="trace-7214"></a>
<a id="trace-7285"></a>
<a id="trace-7299"></a>
<a id="trace-7306"></a>
<a id="trace-7316"></a>
<a id="trace-7325"></a>
<a id="trace-7343"></a>
<a id="trace-7363"></a>
<a id="trace-7437"></a>
<a id="trace-7445"></a>
<a id="trace-7452"></a>
<a id="trace-7460"></a>
<a id="trace-7469"></a>
<a id="trace-7474"></a>
<a id="trace-7483"></a>
<a id="trace-7488"></a>
<a id="trace-7500"></a>
<a id="trace-7581"></a>
<a id="trace-7587"></a>
<a id="trace-7597"></a>
<a id="trace-7611"></a>
<a id="trace-7623"></a>
<a id="trace-7630"></a>
<a id="trace-7637"></a>
<a id="trace-7642"></a>
<a id="trace-7652"></a>
<a id="trace-7658"></a>
<a id="trace-7731"></a>
<a id="trace-7747"></a>
<a id="trace-7753"></a>
<a id="trace-7771"></a>
<a id="trace-7781"></a>
<a id="trace-7794"></a>
<a id="trace-7806"></a>
<a id="trace-7811"></a>
<a id="trace-7883"></a>
<a id="trace-7889"></a>
<a id="trace-7899"></a>
<a id="trace-7905"></a>
<a id="trace-7916"></a>
<a id="trace-7921"></a>
<a id="trace-7930"></a>
<a id="trace-7937"></a>
<a id="trace-7949"></a>
<a id="trace-7956"></a>
<a id="trace-8035"></a>
<a id="trace-8052"></a>
<a id="trace-8058"></a>
<a id="trace-8069"></a>
<a id="trace-8074"></a>
<a id="trace-8087"></a>
<a id="trace-8105"></a>
<a id="trace-8176"></a>
<a id="trace-8184"></a>
<a id="trace-8194"></a>
<a id="trace-8209"></a>
<a id="trace-8217"></a>
<a id="trace-8232"></a>
<a id="trace-8240"></a>
<a id="trace-8250"></a>
<a id="trace-8256"></a>
<a id="trace-8327"></a>
<a id="trace-8336"></a>
<a id="trace-8345"></a>
<a id="trace-8353"></a>
<a id="trace-8362"></a>
<a id="trace-8367"></a>
<a id="trace-8375"></a>
<a id="trace-8393"></a>
<a id="trace-8398"></a>
<a id="trace-8479"></a>
<a id="trace-8488"></a>
<a id="trace-8496"></a>
<a id="trace-8504"></a>
<a id="trace-8514"></a>
<a id="trace-8523"></a>
<a id="trace-8530"></a>
<a id="trace-8535"></a>
<a id="trace-8545"></a>
<a id="trace-8550"></a>
<a id="trace-8623"></a>
<a id="trace-8632"></a>
<a id="trace-8640"></a>
<a id="trace-8657"></a>
<a id="trace-8671"></a>
<a id="trace-8700"></a>
<a id="trace-8705"></a>
<a id="trace-8777"></a>
<a id="trace-8783"></a>
<a id="trace-8792"></a>
<a id="trace-8798"></a>
<a id="trace-8808"></a>
<a id="trace-8813"></a>
<a id="trace-8823"></a>
<a id="trace-8830"></a>
<a id="trace-8840"></a>
<a id="trace-8930"></a>
<a id="trace-8936"></a>
<a id="trace-8946"></a>
<a id="trace-8952"></a>
<a id="trace-8974"></a>
<a id="trace-8979"></a>
<a id="trace-8988"></a>
<a id="trace-8995"></a>
<a id="trace-9069"></a>
<a id="trace-9077"></a>
<a id="trace-9088"></a>
<a id="trace-9094"></a>
<a id="trace-9111"></a>
<a id="trace-9129"></a>
<a id="trace-9134"></a>
<a id="trace-9144"></a>
<a id="trace-9149"></a>
<a id="trace-9220"></a>
<a id="trace-9234"></a>
<a id="trace-9242"></a>
<a id="trace-9251"></a>
<a id="trace-9267"></a>
<a id="trace-9276"></a>
<a id="trace-9295"></a>
<a id="trace-9303"></a>
<a id="trace-9375"></a>
<a id="trace-9387"></a>
<a id="trace-9403"></a>
<a id="trace-9410"></a>
<a id="trace-9421"></a>
<a id="trace-9439"></a>
<a id="trace-9513"></a>
<a id="trace-9524"></a>
<a id="trace-9554"></a>
<a id="trace-9561"></a>
<a id="trace-9568"></a>
<a id="trace-9574"></a>
<a id="trace-9583"></a>
<a id="trace-9588"></a>
<a id="trace-9666"></a>
<a id="trace-9675"></a>
<a id="trace-9682"></a>
<a id="trace-9697"></a>
<a id="trace-9702"></a>
<a id="trace-9712"></a>
<a id="trace-9736"></a>
<a id="trace-9743"></a>
<a id="trace-9814"></a>
<a id="trace-9820"></a>
<a id="trace-9828"></a>
<a id="trace-9834"></a>
<a id="trace-9846"></a>
<a id="trace-9851"></a>
<a id="trace-9860"></a>
<a id="trace-9865"></a>
<a id="trace-9879"></a>
<a id="trace-9959"></a>
<a id="trace-9973"></a>
<a id="trace-9983"></a>
<a id="trace-9989"></a>
<a id="trace-10011"></a>
<a id="trace-10016"></a>
<a id="trace-10027"></a>
<a id="trace-10032"></a>
<a id="trace-10104"></a>
<a id="trace-10114"></a>
<a id="trace-10124"></a>
<a id="trace-10132"></a>
<a id="trace-10141"></a>
<a id="trace-10149"></a>
<a id="trace-10166"></a>
<a id="trace-10171"></a>
<a id="trace-10186"></a>
<a id="trace-10258"></a>
<a id="trace-10265"></a>
<a id="trace-10280"></a>
<a id="trace-10291"></a>
<a id="trace-10298"></a>
<a id="trace-10312"></a>
<a id="trace-10322"></a>
<a id="trace-10408"></a>
<a id="trace-10417"></a>
<a id="trace-10425"></a>
<a id="trace-10431"></a>
<a id="trace-10441"></a>
<a id="trace-10465"></a>
<a id="trace-10478"></a>
<a id="trace-10550"></a>
<a id="trace-10559"></a>
<a id="trace-10573"></a>
<a id="trace-10599"></a>
<a id="trace-10606"></a>
<a id="trace-10614"></a>
<a id="trace-10630"></a>
<a id="trace-10703"></a>
<a id="trace-10721"></a>
<a id="trace-10732"></a>
<a id="trace-10751"></a>
<a id="trace-10763"></a>
<a id="trace-10776"></a>
<a id="trace-10851"></a>
<a id="trace-10859"></a>
<a id="trace-10872"></a>
<a id="trace-10884"></a>
<a id="trace-10897"></a>
<a id="trace-10911"></a>
<a id="trace-10989"></a>
<a id="trace-10997"></a>
<a id="trace-11020"></a>
<a id="trace-11033"></a>
<a id="trace-11038"></a>
<a id="trace-11053"></a>
<a id="trace-11068"></a>
<a id="trace-11145"></a>
<a id="trace-11152"></a>
<a id="trace-11160"></a>
<a id="trace-11172"></a>
<a id="trace-11188"></a>
<a id="trace-11209"></a>
<a id="trace-11218"></a>
<a id="trace-11293"></a>
<a id="trace-11306"></a>
<a id="trace-11320"></a>
<a id="trace-11327"></a>
<a id="trace-11334"></a>
<a id="trace-11341"></a>
<a id="trace-11350"></a>
<a id="trace-11358"></a>
<a id="trace-11431"></a>
<a id="trace-11440"></a>
<a id="trace-11456"></a>
<a id="trace-11467"></a>
<a id="trace-11477"></a>
<a id="trace-11482"></a>
<a id="trace-11489"></a>
<a id="trace-11496"></a>
<a id="trace-11504"></a>
<a id="trace-11511"></a>
<a id="trace-11582"></a>
<a id="trace-11595"></a>
<a id="trace-11605"></a>
<a id="trace-11616"></a>
<a id="trace-11625"></a>
<a id="trace-11641"></a>
<a id="trace-11646"></a>
<a id="trace-11658"></a>
<a id="trace-11735"></a>
<a id="trace-11763"></a>
<a id="trace-11768"></a>
<a id="trace-11778"></a>
<a id="trace-11796"></a>
<a id="trace-11801"></a>
<a id="trace-11877"></a>
<a id="trace-11900"></a>
<a id="trace-11908"></a>
<a id="trace-11917"></a>
<a id="trace-11922"></a>
<a id="trace-11944"></a>
<a id="trace-11949"></a>
<a id="trace-12027"></a>
<a id="trace-12038"></a>
<a id="trace-12048"></a>
<a id="trace-12072"></a>
<a id="trace-12082"></a>
<a id="trace-12087"></a>
<a id="trace-12097"></a>
<a id="trace-12102"></a>
<a id="trace-12175"></a>
<a id="trace-12181"></a>
<a id="trace-12189"></a>
<a id="trace-12196"></a>
<a id="trace-12205"></a>
<a id="trace-12224"></a>
<a id="trace-12248"></a>
<a id="trace-12329"></a>
<a id="trace-12335"></a>
<a id="trace-12344"></a>
<a id="trace-12350"></a>
<a id="trace-12364"></a>
<a id="trace-12372"></a>
<a id="trace-12379"></a>
<a id="trace-12397"></a>
<a id="trace-12476"></a>
<a id="trace-12508"></a>
<a id="trace-12516"></a>
<a id="trace-12524"></a>
<a id="trace-12529"></a>
<a id="trace-12545"></a>
<a id="trace-12616"></a>
<a id="trace-12625"></a>
<a id="trace-12639"></a>
<a id="trace-12649"></a>
<a id="trace-12657"></a>
<a id="trace-12666"></a>
<a id="trace-12671"></a>
<a id="trace-12690"></a>
<a id="trace-12768"></a>
<a id="trace-12783"></a>
<a id="trace-12791"></a>
<a id="trace-12814"></a>
<a id="trace-12819"></a>
<a id="trace-12830"></a>
<a id="trace-12909"></a>
<a id="trace-12915"></a>
<a id="trace-12925"></a>
<a id="trace-12939"></a>
<a id="trace-12951"></a>
<a id="trace-12965"></a>
<a id="trace-12970"></a>
<a id="trace-12981"></a>
<a id="trace-12988"></a>
<a id="trace-13061"></a>
<a id="trace-13074"></a>
<a id="trace-13080"></a>
<a id="trace-13098"></a>
<a id="trace-13105"></a>
<a id="trace-13132"></a>
<a id="trace-13138"></a>
<a id="trace-13210"></a>
<a id="trace-13217"></a>
<a id="trace-13228"></a>
<a id="trace-13234"></a>
<a id="trace-13244"></a>
<a id="trace-13249"></a>
<a id="trace-13256"></a>
<a id="trace-13274"></a>
<a id="trace-13354"></a>
<a id="trace-13360"></a>
<a id="trace-13375"></a>
<a id="trace-13408"></a>
<a id="trace-13413"></a>
<a id="trace-13422"></a>
<a id="trace-13429"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 446. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09450152262342333, 'next_transition': 614}.
<a id="trace-766"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 766): traveling overwatch. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21610562139263348, 'next_transition': 969}.
<a id="trace-767"></a>
- 11.55s–11.55s (×1), actor 0, squad 0 (trace 767): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 661. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21610562139263348, 'next_transition': 969}.
<a id="trace-969"></a>
<a id="trace-982"></a>
<a id="trace-1002"></a>
<a id="trace-1020"></a>
<a id="trace-1035"></a>
<a id="trace-1063"></a>
<a id="trace-1082"></a>
<a id="trace-1165"></a>
<a id="trace-1178"></a>
<a id="trace-1196"></a>
<a id="trace-1212"></a>
<a id="trace-1226"></a>
<a id="trace-1242"></a>
- 11.70s–17.75s (×13), actor 5, squad 0 (trace 969): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 664. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0662563057471106, 'next_transition': 982}.
<a id="trace-1252"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1252): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1088. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150015514362664, 'next_transition': 1614}.
<a id="trace-1253"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1253): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1088. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150015514362664, 'next_transition': 1614}.
<a id="trace-1254"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 1254): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1088. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150015514362664, 'next_transition': 1614}.
<a id="trace-1614"></a>
- 18.25s–18.25s (×1), actor 5, squad 0 (trace 1614): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1091. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149978216804134, 'next_transition': 1984}.
<a id="trace-1617"></a>
<a id="trace-1984"></a>
- 18.25s–18.55s (×2), actor 0, squad 0 (trace 1617): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1088. Next observer evidence: {'until': 18.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149978216804134, 'next_transition': 1984}.
<a id="trace-2370"></a>
<a id="trace-2400"></a>
<a id="trace-2431"></a>
<a id="trace-2520"></a>
<a id="trace-2547"></a>
- 18.75s–20.75s (×5), actor 5, squad 0 (trace 2370): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1091. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6646772813526374, 'next_transition': 2400}.
<a id="trace-252"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (events line 252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2571"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 2571): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.734923 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 2571. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500023972757996, 'next_transition': 2588}.
<a id="trace-2572"></a>
- 21.05s–21.05s (×1), actor 5, squad 0 (trace 2572): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.734923 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 21.05s, trace 2572. Next observer evidence: {'until': 21.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500023972757996, 'next_transition': 2588}.
<a id="trace-2588"></a>
<a id="trace-2613"></a>
<a id="trace-2642"></a>
- 21.25s–22.25s (×3), actor 5, squad 0 (trace 2588): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 2572. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300055988052994, 'next_transition': 2613}.
<a id="trace-2645"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 2645): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2437. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999689809878408, 'next_transition': 2954}.
<a id="trace-2646"></a>
- 22.25s–22.25s (×1), actor 0, squad 0 (trace 2646): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2437. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999689809878408, 'next_transition': 2954}.
<a id="trace-2954"></a>
<a id="trace-2973"></a>
<a id="trace-2990"></a>
<a id="trace-3008"></a>
<a id="trace-3022"></a>
<a id="trace-3109"></a>
<a id="trace-3123"></a>
<a id="trace-3138"></a>
<a id="trace-3145"></a>
<a id="trace-3156"></a>
<a id="trace-3163"></a>
<a id="trace-3176"></a>
<a id="trace-3190"></a>
<a id="trace-3202"></a>
<a id="trace-3209"></a>
<a id="trace-3291"></a>
<a id="trace-3301"></a>
<a id="trace-3311"></a>
<a id="trace-3317"></a>
- 22.75s–31.75s (×19), actor 5, squad 0 (trace 2954): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 21.05s, trace 2572. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500587402371466, 'next_transition': 2973}.
<a id="trace-3323"></a>
- 32.05s–32.05s (×1), actor 5, squad 0 (trace 3323): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 32.05s, trace 3323. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040119073185638, 'next_transition': 3332}.
<a id="trace-3332"></a>
<a id="trace-3346"></a>
<a id="trace-3355"></a>
<a id="trace-3361"></a>
<a id="trace-3377"></a>
<a id="trace-3382"></a>
<a id="trace-3456"></a>
<a id="trace-3465"></a>
<a id="trace-3478"></a>
<a id="trace-3491"></a>
<a id="trace-3501"></a>
<a id="trace-3508"></a>
<a id="trace-3526"></a>
<a id="trace-3531"></a>
<a id="trace-3545"></a>
<a id="trace-3552"></a>
<a id="trace-3630"></a>
<a id="trace-3646"></a>
- 32.25s–40.75s (×18), actor 5, squad 0 (trace 3332): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 32.05s, trace 3323. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0079904721616872, 'next_transition': 3346}.
<a id="trace-3650"></a>
- 41.05s–41.05s (×1), actor 1, squad 0 (trace 3650): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 3554. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519667501842952, 'next_transition': 3659}.
<a id="trace-3651"></a>
- 41.05s–41.05s (×1), actor 1, squad 0 (trace 3651): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 3554. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519667501842952, 'next_transition': 3659}.
<a id="trace-3659"></a>
<a id="trace-3666"></a>
<a id="trace-3693"></a>
<a id="trace-3701"></a>
<a id="trace-3711"></a>
<a id="trace-3722"></a>
<a id="trace-3730"></a>
<a id="trace-3735"></a>
<a id="trace-3808"></a>
<a id="trace-3818"></a>
<a id="trace-3828"></a>
<a id="trace-3833"></a>
<a id="trace-3849"></a>
<a id="trace-3868"></a>
<a id="trace-3876"></a>
<a id="trace-3882"></a>
<a id="trace-3889"></a>
- 41.25s–49.25s (×17), actor 5, squad 0 (trace 3659): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3556. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040115212042944, 'next_transition': 3666}.
<a id="trace-3892"></a>
- 49.25s–49.25s (×1), actor 1, squad 0 (trace 3892): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 45.00s, trace 3738. Next observer evidence: {'until': 49.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3899}.
<a id="trace-3899"></a>
<a id="trace-3976"></a>
<a id="trace-3990"></a>
<a id="trace-4000"></a>
<a id="trace-4008"></a>
<a id="trace-4023"></a>
<a id="trace-4032"></a>
<a id="trace-4039"></a>
<a id="trace-4047"></a>
<a id="trace-4068"></a>
<a id="trace-4074"></a>
<a id="trace-4146"></a>
<a id="trace-4154"></a>
<a id="trace-4163"></a>
<a id="trace-4167"></a>
<a id="trace-4177"></a>
<a id="trace-4182"></a>
<a id="trace-4190"></a>
<a id="trace-4194"></a>
<a id="trace-4205"></a>
<a id="trace-4212"></a>
<a id="trace-4285"></a>
<a id="trace-4305"></a>
<a id="trace-4316"></a>
<a id="trace-4321"></a>
<a id="trace-4330"></a>
<a id="trace-4334"></a>
<a id="trace-4343"></a>
<a id="trace-4348"></a>
<a id="trace-4356"></a>
<a id="trace-4361"></a>
<a id="trace-4432"></a>
<a id="trace-4443"></a>
<a id="trace-4454"></a>
<a id="trace-4462"></a>
<a id="trace-4471"></a>
<a id="trace-4480"></a>
<a id="trace-4494"></a>
<a id="trace-4501"></a>
<a id="trace-4510"></a>
<a id="trace-4515"></a>
<a id="trace-4588"></a>
<a id="trace-4596"></a>
<a id="trace-4604"></a>
<a id="trace-4611"></a>
<a id="trace-4619"></a>
<a id="trace-4627"></a>
<a id="trace-4635"></a>
<a id="trace-4642"></a>
<a id="trace-4652"></a>
<a id="trace-4657"></a>
<a id="trace-4740"></a>
<a id="trace-4751"></a>
<a id="trace-4760"></a>
<a id="trace-4764"></a>
- 49.75s–76.75s (×55), actor 5, squad 0 (trace 3899): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3740. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3976}.
<a id="trace-528"></a>
- 77.05s–77.05s (×1), actor 5, squad 0 (events line 528): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4769"></a>
- 77.05s–77.05s (×1), actor 5, squad 0 (trace 4769): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.05s, trace 4769. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4775}.
<a id="trace-4770"></a>
- 77.05s–77.05s (×1), actor 5, squad 0 (trace 4770): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454989 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 77.05s, trace 4770. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4775}.
<a id="trace-4775"></a>
<a id="trace-4782"></a>
<a id="trace-4788"></a>
<a id="trace-4795"></a>
- 77.25s–78.75s (×4), actor 5, squad 0 (trace 4775): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 77.05s, trace 4770. Next observer evidence: {'until': 77.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4782}.
<a id="trace-4798"></a>
- 78.85s–78.85s (×1), actor 1, squad 0 (trace 4798): Withdraw to received rally. Knowledge: actor memory at 75.00s, trace 4664. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4799"></a>
- 78.85s–78.85s (×1), actor 1, squad 0 (trace 4799): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 4664. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4959}.
<a id="trace-4959"></a>
<a id="trace-4969"></a>
<a id="trace-5054"></a>
<a id="trace-5067"></a>
<a id="trace-5085"></a>
<a id="trace-5099"></a>
<a id="trace-5117"></a>
<a id="trace-5128"></a>
<a id="trace-5141"></a>
<a id="trace-5151"></a>
<a id="trace-5165"></a>
<a id="trace-5177"></a>
<a id="trace-5257"></a>
<a id="trace-5267"></a>
<a id="trace-5282"></a>
<a id="trace-5291"></a>
<a id="trace-5305"></a>
<a id="trace-5313"></a>
<a id="trace-5330"></a>
<a id="trace-5341"></a>
<a id="trace-5358"></a>
<a id="trace-5379"></a>
<a id="trace-5460"></a>
<a id="trace-5470"></a>
- 79.25s–90.75s (×24), actor 5, squad 0 (trace 4959): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 77.05s, trace 4770. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03150010158713755, 'next_transition': 4969}.
<a id="trace-5475"></a>
- 90.85s–90.85s (×1), actor 1, squad 0 (trace 5475): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5384. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040000039682504, 'next_transition': 5485}.
<a id="trace-5476"></a>
- 90.85s–90.85s (×1), actor 1, squad 0 (trace 5476): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5384. Next observer evidence: {'until': 91.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040000039682504, 'next_transition': 5485}.
<a id="trace-5485"></a>
<a id="trace-5496"></a>
<a id="trace-5517"></a>
<a id="trace-5526"></a>
<a id="trace-5543"></a>
<a id="trace-5556"></a>
<a id="trace-5574"></a>
<a id="trace-5579"></a>
<a id="trace-5661"></a>
<a id="trace-5671"></a>
<a id="trace-5685"></a>
<a id="trace-5694"></a>
<a id="trace-5702"></a>
<a id="trace-5710"></a>
<a id="trace-5716"></a>
<a id="trace-5727"></a>
<a id="trace-5733"></a>
<a id="trace-5806"></a>
<a id="trace-5812"></a>
<a id="trace-5819"></a>
<a id="trace-5826"></a>
<a id="trace-5834"></a>
<a id="trace-5843"></a>
<a id="trace-5850"></a>
<a id="trace-5858"></a>
<a id="trace-5877"></a>
<a id="trace-5882"></a>
<a id="trace-5954"></a>
<a id="trace-5960"></a>
<a id="trace-5969"></a>
<a id="trace-5975"></a>
<a id="trace-5986"></a>
<a id="trace-5993"></a>
<a id="trace-6000"></a>
<a id="trace-6007"></a>
<a id="trace-6019"></a>
<a id="trace-6024"></a>
<a id="trace-6096"></a>
<a id="trace-6104"></a>
<a id="trace-6118"></a>
<a id="trace-6126"></a>
<a id="trace-6137"></a>
<a id="trace-6142"></a>
<a id="trace-6150"></a>
<a id="trace-6159"></a>
<a id="trace-6168"></a>
<a id="trace-6175"></a>
<a id="trace-6245"></a>
<a id="trace-6251"></a>
<a id="trace-6258"></a>
<a id="trace-6266"></a>
<a id="trace-6277"></a>
<a id="trace-6282"></a>
<a id="trace-6296"></a>
<a id="trace-6308"></a>
<a id="trace-6317"></a>
<a id="trace-6325"></a>
<a id="trace-6398"></a>
<a id="trace-6406"></a>
<a id="trace-6413"></a>
<a id="trace-6418"></a>
<a id="trace-6428"></a>
<a id="trace-6433"></a>
<a id="trace-6442"></a>
<a id="trace-6450"></a>
<a id="trace-6460"></a>
<a id="trace-6465"></a>
<a id="trace-6540"></a>
<a id="trace-6554"></a>
<a id="trace-6565"></a>
<a id="trace-6575"></a>
<a id="trace-6584"></a>
<a id="trace-6589"></a>
<a id="trace-6596"></a>
<a id="trace-6601"></a>
<a id="trace-6611"></a>
<a id="trace-6616"></a>
<a id="trace-6688"></a>
<a id="trace-6694"></a>
<a id="trace-6704"></a>
<a id="trace-6713"></a>
<a id="trace-6722"></a>
<a id="trace-6739"></a>
<a id="trace-6751"></a>
<a id="trace-6756"></a>
<a id="trace-6766"></a>
<a id="trace-6771"></a>
<a id="trace-6843"></a>
<a id="trace-6849"></a>
<a id="trace-6856"></a>
<a id="trace-6861"></a>
<a id="trace-6869"></a>
<a id="trace-6876"></a>
- 91.25s–137.80s (×93), actor 5, squad 0 (trace 5485): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5386. Next observer evidence: {'until': 91.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040000031746052, 'next_transition': 5496}.
<a id="trace-879"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (events line 879): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6883"></a>
- 138.10s–138.10s (×1), actor 5, squad 0 (trace 6883): renew committed intent (75 s lifetime). Knowledge: actor memory at 138.10s, trace 6883. Next observer evidence: {'until': 138.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6889}.
<a id="trace-6889"></a>
<a id="trace-6895"></a>
<a id="trace-6907"></a>
<a id="trace-6912"></a>
<a id="trace-6992"></a>
<a id="trace-7000"></a>
<a id="trace-7009"></a>
<a id="trace-7014"></a>
<a id="trace-7024"></a>
<a id="trace-7029"></a>
<a id="trace-7036"></a>
<a id="trace-7043"></a>
<a id="trace-7051"></a>
<a id="trace-7058"></a>
<a id="trace-7130"></a>
<a id="trace-7139"></a>
<a id="trace-7148"></a>
<a id="trace-7159"></a>
<a id="trace-7176"></a>
<a id="trace-7184"></a>
<a id="trace-7191"></a>
<a id="trace-7196"></a>
<a id="trace-7205"></a>
<a id="trace-7212"></a>
<a id="trace-7283"></a>
<a id="trace-7291"></a>
<a id="trace-7297"></a>
<a id="trace-7304"></a>
<a id="trace-7314"></a>
<a id="trace-7323"></a>
<a id="trace-7334"></a>
<a id="trace-7341"></a>
<a id="trace-7357"></a>
<a id="trace-7361"></a>
<a id="trace-7435"></a>
<a id="trace-7443"></a>
<a id="trace-7450"></a>
<a id="trace-7458"></a>
<a id="trace-7467"></a>
<a id="trace-7472"></a>
<a id="trace-7481"></a>
<a id="trace-7486"></a>
<a id="trace-7498"></a>
<a id="trace-7505"></a>
<a id="trace-7579"></a>
<a id="trace-7585"></a>
<a id="trace-7595"></a>
<a id="trace-7609"></a>
<a id="trace-7621"></a>
<a id="trace-7628"></a>
<a id="trace-7635"></a>
<a id="trace-7640"></a>
<a id="trace-7650"></a>
<a id="trace-7656"></a>
<a id="trace-7729"></a>
<a id="trace-7736"></a>
<a id="trace-7745"></a>
<a id="trace-7751"></a>
<a id="trace-7763"></a>
<a id="trace-7769"></a>
<a id="trace-7779"></a>
<a id="trace-7792"></a>
<a id="trace-7804"></a>
<a id="trace-7809"></a>
<a id="trace-7881"></a>
<a id="trace-7887"></a>
<a id="trace-7897"></a>
<a id="trace-7903"></a>
<a id="trace-7914"></a>
<a id="trace-7919"></a>
<a id="trace-7928"></a>
<a id="trace-7935"></a>
<a id="trace-7947"></a>
<a id="trace-7954"></a>
<a id="trace-8025"></a>
<a id="trace-8033"></a>
<a id="trace-8050"></a>
<a id="trace-8056"></a>
<a id="trace-8067"></a>
<a id="trace-8072"></a>
<a id="trace-8081"></a>
<a id="trace-8085"></a>
<a id="trace-8095"></a>
<a id="trace-8103"></a>
<a id="trace-8174"></a>
<a id="trace-8182"></a>
<a id="trace-8192"></a>
<a id="trace-8198"></a>
<a id="trace-8207"></a>
<a id="trace-8215"></a>
<a id="trace-8230"></a>
<a id="trace-8238"></a>
<a id="trace-8248"></a>
<a id="trace-8254"></a>
<a id="trace-8325"></a>
<a id="trace-8334"></a>
<a id="trace-8343"></a>
<a id="trace-8351"></a>
<a id="trace-8360"></a>
<a id="trace-8365"></a>
<a id="trace-8373"></a>
<a id="trace-8381"></a>
<a id="trace-8391"></a>
<a id="trace-8396"></a>
<a id="trace-8477"></a>
<a id="trace-8486"></a>
<a id="trace-8494"></a>
<a id="trace-8502"></a>
<a id="trace-8512"></a>
<a id="trace-8521"></a>
<a id="trace-8528"></a>
<a id="trace-8533"></a>
<a id="trace-8543"></a>
<a id="trace-8548"></a>
<a id="trace-8621"></a>
<a id="trace-8630"></a>
<a id="trace-8638"></a>
<a id="trace-8644"></a>
<a id="trace-8655"></a>
<a id="trace-8669"></a>
- 138.30s–197.80s (×120), actor 5, squad 0 (trace 6889): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 138.10s, trace 6883. Next observer evidence: {'until': 138.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6895}.
<a id="trace-1190"></a>
- 198.10s–198.10s (×1), actor 5, squad 0 (events line 1190): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8676"></a>
- 198.10s–198.10s (×1), actor 5, squad 0 (trace 8676): renew committed intent (75 s lifetime). Knowledge: actor memory at 198.10s, trace 8676. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8681}.
<a id="trace-8681"></a>
<a id="trace-8688"></a>
<a id="trace-8698"></a>
<a id="trace-8703"></a>
<a id="trace-8775"></a>
<a id="trace-8781"></a>
<a id="trace-8790"></a>
<a id="trace-8796"></a>
<a id="trace-8806"></a>
<a id="trace-8811"></a>
<a id="trace-8821"></a>
<a id="trace-8828"></a>
<a id="trace-8838"></a>
<a id="trace-8854"></a>
<a id="trace-8928"></a>
<a id="trace-8934"></a>
<a id="trace-8944"></a>
<a id="trace-8950"></a>
<a id="trace-8961"></a>
<a id="trace-8965"></a>
<a id="trace-8972"></a>
<a id="trace-8977"></a>
<a id="trace-8986"></a>
<a id="trace-8993"></a>
<a id="trace-9067"></a>
<a id="trace-9075"></a>
<a id="trace-9086"></a>
<a id="trace-9092"></a>
<a id="trace-9109"></a>
<a id="trace-9119"></a>
<a id="trace-9127"></a>
<a id="trace-9132"></a>
<a id="trace-9142"></a>
<a id="trace-9147"></a>
<a id="trace-9218"></a>
<a id="trace-9226"></a>
<a id="trace-9232"></a>
<a id="trace-9240"></a>
<a id="trace-9249"></a>
<a id="trace-9258"></a>
<a id="trace-9265"></a>
<a id="trace-9274"></a>
<a id="trace-9293"></a>
<a id="trace-9301"></a>
<a id="trace-9373"></a>
<a id="trace-9379"></a>
<a id="trace-9385"></a>
<a id="trace-9393"></a>
<a id="trace-9401"></a>
<a id="trace-9408"></a>
<a id="trace-9415"></a>
<a id="trace-9419"></a>
<a id="trace-9430"></a>
<a id="trace-9437"></a>
<a id="trace-9511"></a>
<a id="trace-9522"></a>
<a id="trace-9536"></a>
<a id="trace-9541"></a>
<a id="trace-9552"></a>
<a id="trace-9559"></a>
<a id="trace-9566"></a>
<a id="trace-9581"></a>
<a id="trace-9586"></a>
<a id="trace-9658"></a>
<a id="trace-9664"></a>
<a id="trace-9673"></a>
<a id="trace-9680"></a>
<a id="trace-9695"></a>
<a id="trace-9700"></a>
<a id="trace-9710"></a>
<a id="trace-9723"></a>
<a id="trace-9734"></a>
<a id="trace-9741"></a>
<a id="trace-9812"></a>
<a id="trace-9818"></a>
<a id="trace-9826"></a>
<a id="trace-9832"></a>
<a id="trace-9844"></a>
<a id="trace-9849"></a>
<a id="trace-9858"></a>
<a id="trace-9863"></a>
<a id="trace-9877"></a>
<a id="trace-9884"></a>
<a id="trace-9957"></a>
<a id="trace-9971"></a>
<a id="trace-9981"></a>
<a id="trace-9987"></a>
<a id="trace-9997"></a>
<a id="trace-10001"></a>
<a id="trace-10009"></a>
<a id="trace-10014"></a>
<a id="trace-10025"></a>
<a id="trace-10030"></a>
<a id="trace-10102"></a>
<a id="trace-10112"></a>
<a id="trace-10122"></a>
<a id="trace-10130"></a>
<a id="trace-10139"></a>
<a id="trace-10147"></a>
<a id="trace-10164"></a>
<a id="trace-10169"></a>
<a id="trace-10180"></a>
<a id="trace-10184"></a>
<a id="trace-10256"></a>
<a id="trace-10263"></a>
<a id="trace-10270"></a>
<a id="trace-10278"></a>
<a id="trace-10289"></a>
<a id="trace-10296"></a>
<a id="trace-10306"></a>
<a id="trace-10310"></a>
<a id="trace-10320"></a>
<a id="trace-10328"></a>
<a id="trace-10406"></a>
<a id="trace-10415"></a>
<a id="trace-10423"></a>
<a id="trace-10429"></a>
<a id="trace-10439"></a>
<a id="trace-10446"></a>
- 198.30s–257.80s (×119), actor 5, squad 0 (trace 8681): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 198.10s, trace 8676. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8688}.
<a id="trace-1493"></a>
- 258.10s–258.10s (×1), actor 5, squad 0 (events line 1493): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10450"></a>
- 258.10s–258.10s (×1), actor 5, squad 0 (trace 10450): renew committed intent (75 s lifetime). Knowledge: actor memory at 258.10s, trace 10450. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10455}.
<a id="trace-10455"></a>
<a id="trace-10463"></a>
<a id="trace-10472"></a>
<a id="trace-10476"></a>
<a id="trace-10548"></a>
<a id="trace-10557"></a>
<a id="trace-10566"></a>
<a id="trace-10571"></a>
<a id="trace-10590"></a>
<a id="trace-10597"></a>
<a id="trace-10604"></a>
<a id="trace-10612"></a>
<a id="trace-10621"></a>
<a id="trace-10628"></a>
<a id="trace-10701"></a>
<a id="trace-10707"></a>
<a id="trace-10714"></a>
<a id="trace-10719"></a>
<a id="trace-10730"></a>
<a id="trace-10738"></a>
<a id="trace-10745"></a>
<a id="trace-10749"></a>
<a id="trace-10761"></a>
<a id="trace-10774"></a>
<a id="trace-10849"></a>
<a id="trace-10857"></a>
<a id="trace-10865"></a>
<a id="trace-10870"></a>
<a id="trace-10882"></a>
<a id="trace-10887"></a>
<a id="trace-10895"></a>
<a id="trace-10900"></a>
<a id="trace-10909"></a>
<a id="trace-10914"></a>
<a id="trace-10987"></a>
<a id="trace-10995"></a>
<a id="trace-11002"></a>
<a id="trace-11018"></a>
<a id="trace-11031"></a>
<a id="trace-11036"></a>
<a id="trace-11045"></a>
<a id="trace-11051"></a>
<a id="trace-11062"></a>
<a id="trace-11066"></a>
<a id="trace-11138"></a>
<a id="trace-11143"></a>
<a id="trace-11150"></a>
<a id="trace-11158"></a>
<a id="trace-11170"></a>
<a id="trace-11177"></a>
<a id="trace-11186"></a>
<a id="trace-11192"></a>
<a id="trace-11207"></a>
<a id="trace-11216"></a>
<a id="trace-11291"></a>
<a id="trace-11297"></a>
<a id="trace-11304"></a>
<a id="trace-11310"></a>
<a id="trace-11318"></a>
<a id="trace-11325"></a>
<a id="trace-11332"></a>
<a id="trace-11339"></a>
<a id="trace-11348"></a>
<a id="trace-11356"></a>
<a id="trace-11429"></a>
<a id="trace-11438"></a>
<a id="trace-11454"></a>
<a id="trace-11465"></a>
<a id="trace-11475"></a>
<a id="trace-11480"></a>
<a id="trace-11487"></a>
<a id="trace-11494"></a>
<a id="trace-11509"></a>
<a id="trace-11580"></a>
<a id="trace-11586"></a>
<a id="trace-11593"></a>
<a id="trace-11603"></a>
<a id="trace-11614"></a>
<a id="trace-11623"></a>
<a id="trace-11639"></a>
<a id="trace-11644"></a>
<a id="trace-11656"></a>
<a id="trace-11663"></a>
<a id="trace-11733"></a>
<a id="trace-11741"></a>
<a id="trace-11747"></a>
<a id="trace-11752"></a>
<a id="trace-11761"></a>
<a id="trace-11766"></a>
<a id="trace-11776"></a>
<a id="trace-11781"></a>
<a id="trace-11794"></a>
<a id="trace-11799"></a>
<a id="trace-11875"></a>
<a id="trace-11889"></a>
<a id="trace-11898"></a>
<a id="trace-11906"></a>
<a id="trace-11915"></a>
<a id="trace-11920"></a>
<a id="trace-11928"></a>
<a id="trace-11932"></a>
<a id="trace-11942"></a>
<a id="trace-11947"></a>
<a id="trace-12020"></a>
<a id="trace-12025"></a>
<a id="trace-12036"></a>
<a id="trace-12046"></a>
<a id="trace-12058"></a>
<a id="trace-12070"></a>
<a id="trace-12080"></a>
<a id="trace-12085"></a>
<a id="trace-12095"></a>
<a id="trace-12100"></a>
<a id="trace-12173"></a>
<a id="trace-12179"></a>
<a id="trace-12187"></a>
<a id="trace-12194"></a>
<a id="trace-12203"></a>
<a id="trace-12211"></a>
<a id="trace-12222"></a>
<a id="trace-12229"></a>
- 258.30s–318.80s (×121), actor 5, squad 0 (trace 10455): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 258.10s, trace 10450. Next observer evidence: {'until': 258.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10463}.
<a id="trace-1801"></a>
- 319.30s–319.30s (×1), actor 5, squad 0 (events line 1801): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12237"></a>
- 319.30s–319.30s (×1), actor 5, squad 0 (trace 12237): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 315.00s, trace 12106. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12246}.
<a id="trace-12239"></a>
- 319.30s–319.30s (×1), actor 5, squad 0 (trace 12239): renew committed intent (75 s lifetime). Knowledge: actor memory at 319.30s, trace 12239. Next observer evidence: {'until': 319.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12246}.
<a id="trace-12246"></a>
<a id="trace-12327"></a>
<a id="trace-12333"></a>
<a id="trace-12342"></a>
<a id="trace-12348"></a>
<a id="trace-12358"></a>
<a id="trace-12362"></a>
<a id="trace-12370"></a>
<a id="trace-12377"></a>
<a id="trace-12387"></a>
<a id="trace-12395"></a>
<a id="trace-12469"></a>
<a id="trace-12474"></a>
<a id="trace-12482"></a>
<a id="trace-12490"></a>
<a id="trace-12506"></a>
<a id="trace-12514"></a>
<a id="trace-12522"></a>
<a id="trace-12527"></a>
<a id="trace-12536"></a>
<a id="trace-12543"></a>
<a id="trace-12614"></a>
<a id="trace-12623"></a>
<a id="trace-12632"></a>
<a id="trace-12637"></a>
<a id="trace-12647"></a>
<a id="trace-12655"></a>
<a id="trace-12664"></a>
<a id="trace-12669"></a>
<a id="trace-12688"></a>
<a id="trace-12696"></a>
<a id="trace-12766"></a>
<a id="trace-12774"></a>
<a id="trace-12781"></a>
<a id="trace-12789"></a>
<a id="trace-12799"></a>
<a id="trace-12803"></a>
<a id="trace-12812"></a>
<a id="trace-12817"></a>
<a id="trace-12828"></a>
<a id="trace-12836"></a>
<a id="trace-12907"></a>
<a id="trace-12913"></a>
<a id="trace-12923"></a>
<a id="trace-12937"></a>
<a id="trace-12949"></a>
<a id="trace-12956"></a>
<a id="trace-12963"></a>
<a id="trace-12968"></a>
<a id="trace-12979"></a>
<a id="trace-12986"></a>
<a id="trace-13059"></a>
<a id="trace-13065"></a>
<a id="trace-13072"></a>
<a id="trace-13078"></a>
<a id="trace-13090"></a>
<a id="trace-13096"></a>
<a id="trace-13103"></a>
<a id="trace-13119"></a>
<a id="trace-13130"></a>
<a id="trace-13136"></a>
<a id="trace-13208"></a>
<a id="trace-13215"></a>
<a id="trace-13226"></a>
<a id="trace-13232"></a>
<a id="trace-13242"></a>
<a id="trace-13247"></a>
<a id="trace-13254"></a>
<a id="trace-13261"></a>
<a id="trace-13272"></a>
<a id="trace-13279"></a>
<a id="trace-13352"></a>
<a id="trace-13358"></a>
<a id="trace-13373"></a>
<a id="trace-13382"></a>
<a id="trace-13393"></a>
<a id="trace-13399"></a>
<a id="trace-13406"></a>
<a id="trace-13411"></a>
<a id="trace-13420"></a>
<a id="trace-13427"></a>
- 319.80s–359.80s (×81), actor 5, squad 0 (trace 12246): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 319.30s, trace 12239. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12327}.

## Net delivery

72 matched order/radio deliveries; 249 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.302s; maximum 0.750s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2437: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2441: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2443: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2444: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2445: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2446: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 2571: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 21.05s leader 5, trace 2572: estimate 5.44; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3033: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3036: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3037: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3039: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3040: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3041: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3042: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3043: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3044: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 3216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 3217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 3218: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 3219: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 3220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 3221: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 3222: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 3223: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 3224: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 3225: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 3226: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 32.05s leader 5, trace 3323: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 3386: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 3387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 3388: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 3389: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 3390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 3391: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 3392: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 3393: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 3394: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 3395: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 3396: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3554: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3556: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3557: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 3558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3559: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3560: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3561: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3562: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3563: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3564: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3738: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3740: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3741: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3743: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3744: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3745: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3746: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3747: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3748: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3903: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3905: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3906: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3908: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3909: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3910: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3911: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3912: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3913: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 4077: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 4078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 4079: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 4080: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 4081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 4082: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 4083: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 4084: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 4085: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 4086: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 4087: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4215: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4217: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4218: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 4219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4220: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4221: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4222: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4223: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4224: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4225: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4364: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4366: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4367: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 4368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4369: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4370: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4371: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4372: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4373: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4374: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4518: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4520: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4521: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4523: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4524: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4525: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4526: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4527: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4528: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4664: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4666: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4667: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4669: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4670: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4671: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4672: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4673: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4674: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.05s leader 5, trace 4769: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 77.05s leader 5, trace 4770: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4975: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4977: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4978: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 4979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4980: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4981: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4982: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4983: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4984: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4985: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5184: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5186: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5187: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5189: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5190: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5191: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5192: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5193: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5194: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5384: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5386: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5387: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 5388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5389: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5390: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5391: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5392: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5393: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5394: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5586: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5588: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5589: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 5590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5591: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5592: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5593: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5594: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5595: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5596: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5736: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5738: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5739: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 5740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5741: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5742: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5743: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5744: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5745: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5746: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5885: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5887: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5888: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 5889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5890: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5891: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5892: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5893: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5894: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5895: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6029: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6031: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6032: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 6033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6034: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6035: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6036: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6037: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6038: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6039: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6177: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6179: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6180: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 6181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6182: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6183: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6184: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6185: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6186: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6187: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6328: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6330: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6331: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 6332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6333: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6334: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6335: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6336: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6337: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6338: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 6476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6477: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6478: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6479: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6480: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6481: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6482: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 6623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 6778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 138.10s leader 5, trace 6883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 6926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 6929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6932: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6934: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6935: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 7066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 7219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 7369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 7372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 7514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 7660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 7664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 7814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 7815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 7818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 7958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 7961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 8107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 8110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 8262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 8403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 8406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 8552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 8556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 198.10s leader 5, trace 8676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 8708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 8709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 8712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 8857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 8860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 8997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 9000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 9003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 9006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 9152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 9155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 9158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 9161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 9305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 9308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 9442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 9445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 9591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 9592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 9595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 9745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 9748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 9887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 9890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 10035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 10036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 10037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 10038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 10039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 10040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 10041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 10042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 10043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 10044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 10045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 10188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 10191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 10332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 10335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 258.10s leader 5, trace 10450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 10481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 10482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 10485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 10632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 10635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 10778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 10781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 10918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 10921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 11070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 11073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 11076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 11221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 11224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 11361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 11362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 11365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 11512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 11513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 11516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 11666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 11669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 11806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 11809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 11952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 11955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 12105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 12108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 319.30s leader 5, trace 12239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 12257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 12258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 12261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 12398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 12399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 12402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 12547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 12550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 12700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 12703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 12839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 12842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 12991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 12994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 13000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 13142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 13145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 13281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 13282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 13285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 13431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 13434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action

## Outcome attribution

- 77.05s, evidence 528: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 77.05s, evidence 4769: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454989 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4775}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 77.05s, evidence 4770: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.454989 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4775}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 138.10s, evidence 879: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 198.10s, evidence 1190: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 258.10s, evidence 1493: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 319.30s, evidence 1801: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
