# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/5/107/good-azure/battle-107-1789673719967637893`

## Battle summary

**Ember** · 360 s · 631 shots.

### Turning points

- 30.0s, squad 4: contact (events line 313). First recorded contact.
- 52.4s, squad 0: help call ([trace 6912](#trace-6912)). No completion observed before termination.
- 79.2s, squad 0: help call ([trace 8080](#trace-8080)). No completion observed before termination.
- 84.9s, squad 0: withdrawal ([trace 9306](#trace-9306)). 132.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 169.6s, squad 0: withdrawal ([trace 13598](#trace-13598)). 189.6s, squad 0: took cover and returned fire.
- 187.4s, squad 0: help call ([trace 14790](#trace-14790)). No completion observed before termination.
- 193.2s, squad 0: withdrawal ([trace 15096](#trace-15096)). 217.1s, squad 0: took cover and returned fire.
- 220.4s, squad 0: withdrawal ([trace 15898](#trace-15898)). 240.4s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 160 shots, 6/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 471 shots, 3/8 lost.

### Decisions and attribution

At 48.1s, squad 0 chose prepared a base of fire ([trace 4486](#trace-4486)), followed by 2 shots and 0 own casualties; estimate 8.4 against 0 distinct squad-reported contacts; At 48.1s, squad 0 chose advanced tactically ([trace 6269](#trace-6269)), followed by 2 shots and 0 own casualties; estimate 8.4 against 0 distinct squad-reported contacts; At 81.0s, squad 0 chose took cover and returned fire ([trace 8679](#trace-8679)), followed by 1 shots and 0 own casualties; estimate 10.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 536](#trace-536)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 550}.
- 39.6s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553900 retreat threshold=0.500000 initiative=delegated ([trace 4046](#trace-4046)). Following evidence: None.

### Communication

196 matched deliveries (mean 0.33s, max 1.85s); 253 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 30.00s, squad 4, contact, evidence events line 313: First recorded contact; .
- 52.40s, squad 0, help call, evidence 6912: NeedSupport; No completion observed before termination.
- 79.25s, squad 0, help call, evidence 8080: NeedSupport; No completion observed before termination.
- 84.90s, squad 0, withdrawal, evidence 9306: BreakContact: believed ratio at least two without superiority; 132.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 169.60s, squad 0, withdrawal, evidence 13598: Withdraw to received rally; 189.6s, squad 0: took cover and returned fire.
- 187.35s, squad 0, help call, evidence 14790: NeedSupport; No completion observed before termination.
- 193.25s, squad 0, withdrawal, evidence 15096: BreakContact: believed ratio at least two without superiority; 217.1s, squad 0: took cover and returned fire.
- 220.40s, squad 0, withdrawal, evidence 15898: BreakContact: believed ratio at least two without superiority; 240.4s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577869429761277, 'next_transition': 451}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577869429761277, 'next_transition': 451}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7577869429761277, 'next_transition': 451}.
<a id="trace-451"></a>
<a id="trace-471"></a>
<a id="trace-492"></a>
<a id="trace-514"></a>
<a id="trace-528"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2300040648473087, 'next_transition': 471}.
<a id="trace-78"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 78): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 550}.
<a id="trace-536"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 536): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 536. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 550}.
<a id="trace-537"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 537): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9149871829554761, 'next_transition': 550}.
<a id="trace-550"></a>
<a id="trace-572"></a>
<a id="trace-649"></a>
<a id="trace-668"></a>
<a id="trace-690"></a>
<a id="trace-713"></a>
<a id="trace-731"></a>
<a id="trace-750"></a>
<a id="trace-773"></a>
<a id="trace-792"></a>
<a id="trace-809"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-914"></a>
- 4.20s–10.70s (×14), actor 5, squad 0 (trace 550): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 537. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.91501314060579, 'next_transition': 572}.
<a id="trace-715"></a>
<a id="trace-775"></a>
<a id="trace-794"></a>
<a id="trace-820"></a>
<a id="trace-904"></a>
<a id="trace-916"></a>
<a id="trace-1240"></a>
<a id="trace-1292"></a>
<a id="trace-1393"></a>
<a id="trace-1416"></a>
<a id="trace-1515"></a>
<a id="trace-1578"></a>
<a id="trace-1599"></a>
<a id="trace-1622"></a>
<a id="trace-1641"></a>
<a id="trace-1675"></a>
<a id="trace-1760"></a>
<a id="trace-1787"></a>
<a id="trace-1810"></a>
<a id="trace-1832"></a>
<a id="trace-1841"></a>
<a id="trace-1850"></a>
<a id="trace-1864"></a>
<a id="trace-2200"></a>
<a id="trace-2219"></a>
<a id="trace-2308"></a>
<a id="trace-2327"></a>
<a id="trace-2396"></a>
<a id="trace-2408"></a>
<a id="trace-2426"></a>
<a id="trace-2441"></a>
<a id="trace-2457"></a>
<a id="trace-2472"></a>
<a id="trace-2565"></a>
<a id="trace-2583"></a>
<a id="trace-2597"></a>
<a id="trace-2607"></a>
<a id="trace-2635"></a>
<a id="trace-2650"></a>
<a id="trace-2664"></a>
<a id="trace-2676"></a>
<a id="trace-2847"></a>
<a id="trace-2950"></a>
<a id="trace-2963"></a>
<a id="trace-2983"></a>
<a id="trace-3921"></a>
<a id="trace-3988"></a>
<a id="trace-4014"></a>
<a id="trace-4025"></a>
<a id="trace-4177"></a>
<a id="trace-4217"></a>
<a id="trace-4231"></a>
<a id="trace-4249"></a>
<a id="trace-4267"></a>
<a id="trace-4287"></a>
<a id="trace-4300"></a>
<a id="trace-4317"></a>
<a id="trace-4406"></a>
<a id="trace-4412"></a>
<a id="trace-4426"></a>
<a id="trace-4447"></a>
<a id="trace-4470"></a>
<a id="trace-4478"></a>
<a id="trace-6691"></a>
<a id="trace-6732"></a>
<a id="trace-6837"></a>
<a id="trace-6851"></a>
<a id="trace-6883"></a>
<a id="trace-6893"></a>
<a id="trace-6906"></a>
<a id="trace-6926"></a>
<a id="trace-6934"></a>
<a id="trace-6942"></a>
<a id="trace-6975"></a>
<a id="trace-7050"></a>
<a id="trace-7060"></a>
<a id="trace-7093"></a>
<a id="trace-7107"></a>
<a id="trace-7276"></a>
<a id="trace-7307"></a>
<a id="trace-7326"></a>
<a id="trace-7333"></a>
<a id="trace-7426"></a>
<a id="trace-7459"></a>
<a id="trace-7466"></a>
<a id="trace-7498"></a>
<a id="trace-7515"></a>
<a id="trace-7523"></a>
<a id="trace-7544"></a>
<a id="trace-7632"></a>
<a id="trace-7645"></a>
<a id="trace-7654"></a>
<a id="trace-7669"></a>
<a id="trace-7677"></a>
<a id="trace-7689"></a>
<a id="trace-7714"></a>
<a id="trace-7727"></a>
<a id="trace-7735"></a>
<a id="trace-7814"></a>
<a id="trace-7829"></a>
<a id="trace-7838"></a>
<a id="trace-7845"></a>
<a id="trace-7862"></a>
<a id="trace-7871"></a>
<a id="trace-7895"></a>
<a id="trace-7905"></a>
<a id="trace-7919"></a>
<a id="trace-7995"></a>
<a id="trace-8012"></a>
<a id="trace-8039"></a>
<a id="trace-8052"></a>
<a id="trace-8066"></a>
<a id="trace-8071"></a>
<a id="trace-8092"></a>
<a id="trace-9185"></a>
<a id="trace-9213"></a>
<a id="trace-9227"></a>
<a id="trace-9247"></a>
<a id="trace-9266"></a>
<a id="trace-9297"></a>
<a id="trace-9775"></a>
<a id="trace-9791"></a>
<a id="trace-9809"></a>
<a id="trace-9826"></a>
<a id="trace-9843"></a>
<a id="trace-9882"></a>
<a id="trace-9896"></a>
<a id="trace-9978"></a>
<a id="trace-9995"></a>
<a id="trace-10000"></a>
<a id="trace-10016"></a>
<a id="trace-10030"></a>
<a id="trace-10056"></a>
<a id="trace-10075"></a>
<a id="trace-10099"></a>
<a id="trace-10135"></a>
<a id="trace-10267"></a>
<a id="trace-10317"></a>
<a id="trace-10353"></a>
<a id="trace-10401"></a>
<a id="trace-10438"></a>
<a id="trace-10452"></a>
<a id="trace-10476"></a>
<a id="trace-10526"></a>
<a id="trace-10548"></a>
<a id="trace-10631"></a>
<a id="trace-10700"></a>
<a id="trace-10727"></a>
<a id="trace-10734"></a>
<a id="trace-10909"></a>
<a id="trace-11006"></a>
<a id="trace-11019"></a>
<a id="trace-11031"></a>
<a id="trace-11041"></a>
<a id="trace-11051"></a>
<a id="trace-11067"></a>
<a id="trace-11078"></a>
<a id="trace-11092"></a>
<a id="trace-11105"></a>
<a id="trace-11200"></a>
<a id="trace-11213"></a>
<a id="trace-11221"></a>
<a id="trace-11240"></a>
<a id="trace-11250"></a>
<a id="trace-11263"></a>
<a id="trace-11344"></a>
<a id="trace-11376"></a>
<a id="trace-11389"></a>
<a id="trace-11400"></a>
<a id="trace-11416"></a>
<a id="trace-11426"></a>
<a id="trace-11435"></a>
<a id="trace-11446"></a>
<a id="trace-11512"></a>
<a id="trace-11522"></a>
<a id="trace-11531"></a>
<a id="trace-11653"></a>
<a id="trace-11658"></a>
<a id="trace-11673"></a>
<a id="trace-11684"></a>
<a id="trace-11696"></a>
<a id="trace-11710"></a>
<a id="trace-11776"></a>
<a id="trace-11782"></a>
<a id="trace-11791"></a>
<a id="trace-11795"></a>
<a id="trace-11800"></a>
<a id="trace-11815"></a>
<a id="trace-11834"></a>
<a id="trace-11841"></a>
<a id="trace-11907"></a>
<a id="trace-11912"></a>
<a id="trace-11919"></a>
<a id="trace-11926"></a>
<a id="trace-11939"></a>
<a id="trace-12015"></a>
<a id="trace-12030"></a>
<a id="trace-12098"></a>
<a id="trace-12119"></a>
<a id="trace-12207"></a>
<a id="trace-12240"></a>
<a id="trace-12246"></a>
<a id="trace-12275"></a>
<a id="trace-12282"></a>
<a id="trace-12359"></a>
<a id="trace-12373"></a>
<a id="trace-12386"></a>
<a id="trace-12390"></a>
<a id="trace-12400"></a>
<a id="trace-12446"></a>
<a id="trace-12465"></a>
<a id="trace-12530"></a>
<a id="trace-12535"></a>
<a id="trace-12550"></a>
<a id="trace-12554"></a>
<a id="trace-12563"></a>
<a id="trace-12577"></a>
<a id="trace-12587"></a>
<a id="trace-12597"></a>
<a id="trace-12610"></a>
<a id="trace-12678"></a>
<a id="trace-12699"></a>
<a id="trace-12703"></a>
<a id="trace-12715"></a>
<a id="trace-12723"></a>
<a id="trace-12842"></a>
<a id="trace-12870"></a>
<a id="trace-12937"></a>
<a id="trace-12946"></a>
<a id="trace-12962"></a>
<a id="trace-12972"></a>
<a id="trace-12983"></a>
<a id="trace-12989"></a>
<a id="trace-13003"></a>
<a id="trace-13009"></a>
<a id="trace-13020"></a>
<a id="trace-13098"></a>
<a id="trace-13108"></a>
<a id="trace-13119"></a>
<a id="trace-13125"></a>
<a id="trace-13138"></a>
<a id="trace-13145"></a>
<a id="trace-13155"></a>
<a id="trace-13163"></a>
<a id="trace-13176"></a>
<a id="trace-13189"></a>
<a id="trace-13257"></a>
<a id="trace-13276"></a>
<a id="trace-13528"></a>
<a id="trace-13556"></a>
<a id="trace-13566"></a>
<a id="trace-13580"></a>
<a id="trace-13593"></a>
<a id="trace-13900"></a>
<a id="trace-13976"></a>
<a id="trace-13994"></a>
<a id="trace-14003"></a>
<a id="trace-14012"></a>
<a id="trace-14022"></a>
<a id="trace-14031"></a>
<a id="trace-14043"></a>
<a id="trace-14050"></a>
<a id="trace-14059"></a>
<a id="trace-14067"></a>
<a id="trace-14141"></a>
<a id="trace-14151"></a>
<a id="trace-14162"></a>
<a id="trace-14168"></a>
<a id="trace-14181"></a>
<a id="trace-14219"></a>
<a id="trace-14286"></a>
<a id="trace-14384"></a>
<a id="trace-14423"></a>
<a id="trace-14469"></a>
<a id="trace-14645"></a>
<a id="trace-14661"></a>
<a id="trace-14682"></a>
<a id="trace-14690"></a>
<a id="trace-14703"></a>
<a id="trace-14712"></a>
<a id="trace-14773"></a>
<a id="trace-14777"></a>
<a id="trace-14782"></a>
<a id="trace-14785"></a>
<a id="trace-14789"></a>
<a id="trace-14798"></a>
<a id="trace-14811"></a>
<a id="trace-14841"></a>
<a id="trace-14978"></a>
<a id="trace-15046"></a>
<a id="trace-15049"></a>
<a id="trace-15062"></a>
<a id="trace-15071"></a>
<a id="trace-15081"></a>
<a id="trace-15095"></a>
<a id="trace-15226"></a>
<a id="trace-15233"></a>
<a id="trace-15244"></a>
<a id="trace-15253"></a>
<a id="trace-15318"></a>
<a id="trace-15321"></a>
<a id="trace-15331"></a>
<a id="trace-15346"></a>
<a id="trace-15351"></a>
<a id="trace-15368"></a>
<a id="trace-15374"></a>
<a id="trace-15436"></a>
<a id="trace-15438"></a>
<a id="trace-15446"></a>
<a id="trace-15450"></a>
<a id="trace-15456"></a>
<a id="trace-15459"></a>
<a id="trace-15465"></a>
<a id="trace-15470"></a>
<a id="trace-15476"></a>
<a id="trace-15542"></a>
<a id="trace-15544"></a>
<a id="trace-15552"></a>
<a id="trace-15558"></a>
<a id="trace-15572"></a>
<a id="trace-15577"></a>
<a id="trace-15583"></a>
<a id="trace-15588"></a>
<a id="trace-15650"></a>
<a id="trace-15652"></a>
<a id="trace-15658"></a>
<a id="trace-15663"></a>
<a id="trace-15670"></a>
<a id="trace-15684"></a>
<a id="trace-15689"></a>
<a id="trace-15695"></a>
<a id="trace-15700"></a>
<a id="trace-15762"></a>
<a id="trace-15775"></a>
<a id="trace-15781"></a>
<a id="trace-15798"></a>
<a id="trace-15814"></a>
<a id="trace-15820"></a>
<a id="trace-15827"></a>
<a id="trace-15835"></a>
<a id="trace-15897"></a>
<a id="trace-15917"></a>
<a id="trace-15931"></a>
<a id="trace-15935"></a>
<a id="trace-15945"></a>
<a id="trace-15963"></a>
<a id="trace-16023"></a>
<a id="trace-16028"></a>
<a id="trace-16049"></a>
<a id="trace-16054"></a>
<a id="trace-16061"></a>
<a id="trace-16066"></a>
<a id="trace-16074"></a>
<a id="trace-16083"></a>
<a id="trace-16149"></a>
<a id="trace-16158"></a>
<a id="trace-16163"></a>
<a id="trace-16172"></a>
<a id="trace-16176"></a>
<a id="trace-16187"></a>
<a id="trace-16198"></a>
<a id="trace-16206"></a>
<a id="trace-16268"></a>
<a id="trace-16271"></a>
<a id="trace-16282"></a>
<a id="trace-16289"></a>
<a id="trace-16295"></a>
<a id="trace-16300"></a>
<a id="trace-16310"></a>
<a id="trace-16314"></a>
<a id="trace-16323"></a>
<a id="trace-16393"></a>
<a id="trace-16400"></a>
<a id="trace-16414"></a>
<a id="trace-16419"></a>
<a id="trace-16443"></a>
<a id="trace-16448"></a>
<a id="trace-16456"></a>
<a id="trace-16464"></a>
<a id="trace-16526"></a>
<a id="trace-16531"></a>
<a id="trace-16542"></a>
<a id="trace-16547"></a>
<a id="trace-16554"></a>
<a id="trace-16558"></a>
<a id="trace-16568"></a>
<a id="trace-16573"></a>
<a id="trace-16590"></a>
<a id="trace-16652"></a>
<a id="trace-16655"></a>
<a id="trace-16670"></a>
<a id="trace-16677"></a>
<a id="trace-16684"></a>
<a id="trace-16696"></a>
<a id="trace-16704"></a>
<a id="trace-16773"></a>
<a id="trace-16778"></a>
<a id="trace-16790"></a>
<a id="trace-16794"></a>
<a id="trace-16801"></a>
<a id="trace-16819"></a>
<a id="trace-16835"></a>
<a id="trace-16897"></a>
<a id="trace-16901"></a>
<a id="trace-16915"></a>
<a id="trace-16926"></a>
<a id="trace-16937"></a>
<a id="trace-16942"></a>
<a id="trace-16957"></a>
<a id="trace-17020"></a>
<a id="trace-17038"></a>
<a id="trace-17044"></a>
<a id="trace-17061"></a>
<a id="trace-17070"></a>
<a id="trace-17080"></a>
<a id="trace-17141"></a>
<a id="trace-17145"></a>
<a id="trace-17159"></a>
<a id="trace-17167"></a>
<a id="trace-17181"></a>
<a id="trace-17193"></a>
<a id="trace-17262"></a>
<a id="trace-17267"></a>
<a id="trace-17282"></a>
<a id="trace-17289"></a>
<a id="trace-17294"></a>
<a id="trace-17308"></a>
<a id="trace-17324"></a>
<a id="trace-17388"></a>
<a id="trace-17399"></a>
<a id="trace-17404"></a>
<a id="trace-17411"></a>
<a id="trace-17426"></a>
<a id="trace-17438"></a>
<a id="trace-17446"></a>
<a id="trace-17508"></a>
<a id="trace-17522"></a>
<a id="trace-17532"></a>
<a id="trace-17538"></a>
<a id="trace-17546"></a>
<a id="trace-17552"></a>
<a id="trace-17561"></a>
<a id="trace-17568"></a>
<a id="trace-17630"></a>
<a id="trace-17635"></a>
<a id="trace-17646"></a>
<a id="trace-17652"></a>
<a id="trace-17661"></a>
<a id="trace-17665"></a>
<a id="trace-17677"></a>
<a id="trace-17682"></a>
<a id="trace-17690"></a>
<a id="trace-17698"></a>
<a id="trace-17803"></a>
<a id="trace-17822"></a>
<a id="trace-17832"></a>
<a id="trace-17841"></a>
<a id="trace-17876"></a>
<a id="trace-17892"></a>
<a id="trace-17898"></a>
<a id="trace-17913"></a>
<a id="trace-17983"></a>
<a id="trace-18013"></a>
<a id="trace-18022"></a>
<a id="trace-18029"></a>
<a id="trace-18044"></a>
<a id="trace-18050"></a>
<a id="trace-18113"></a>
<a id="trace-18126"></a>
<a id="trace-18132"></a>
<a id="trace-18139"></a>
<a id="trace-18145"></a>
<a id="trace-18167"></a>
<a id="trace-18174"></a>
<a id="trace-18239"></a>
<a id="trace-18248"></a>
<a id="trace-18255"></a>
<a id="trace-18268"></a>
<a id="trace-18276"></a>
<a id="trace-18280"></a>
<a id="trace-18290"></a>
<a id="trace-18297"></a>
<a id="trace-18359"></a>
<a id="trace-18365"></a>
<a id="trace-18374"></a>
<a id="trace-18379"></a>
<a id="trace-18387"></a>
<a id="trace-18402"></a>
<a id="trace-18422"></a>
<a id="trace-18484"></a>
<a id="trace-18489"></a>
<a id="trace-18497"></a>
<a id="trace-18503"></a>
<a id="trace-18517"></a>
<a id="trace-18525"></a>
<a id="trace-18531"></a>
<a id="trace-18546"></a>
<a id="trace-18612"></a>
<a id="trace-18631"></a>
<a id="trace-18638"></a>
<a id="trace-18647"></a>
<a id="trace-18651"></a>
<a id="trace-18668"></a>
<a id="trace-18730"></a>
<a id="trace-18734"></a>
<a id="trace-18747"></a>
<a id="trace-18756"></a>
<a id="trace-18763"></a>
<a id="trace-18770"></a>
<a id="trace-18777"></a>
<a id="trace-18787"></a>
<a id="trace-18855"></a>
<a id="trace-18868"></a>
<a id="trace-18873"></a>
<a id="trace-18893"></a>
<a id="trace-18901"></a>
<a id="trace-18909"></a>
<a id="trace-18977"></a>
<a id="trace-18981"></a>
<a id="trace-18990"></a>
<a id="trace-18996"></a>
<a id="trace-19004"></a>
<a id="trace-19017"></a>
<a id="trace-19023"></a>
<a id="trace-19032"></a>
<a id="trace-19040"></a>
<a id="trace-19103"></a>
<a id="trace-19115"></a>
<a id="trace-19119"></a>
<a id="trace-19132"></a>
<a id="trace-19140"></a>
<a id="trace-19156"></a>
<a id="trace-19164"></a>
<a id="trace-19227"></a>
<a id="trace-19231"></a>
<a id="trace-19239"></a>
<a id="trace-19246"></a>
<a id="trace-19252"></a>
<a id="trace-19257"></a>
<a id="trace-19265"></a>
<a id="trace-19278"></a>
<a id="trace-19350"></a>
<a id="trace-19353"></a>
<a id="trace-19362"></a>
<a id="trace-19390"></a>
<a id="trace-19394"></a>
<a id="trace-19403"></a>
<a id="trace-19411"></a>
- 6.70s–359.80s (×548), actor 37, squad 4 (trace 715): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 592. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 775}.
<a id="trace-922"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 922): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 824. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37876168580929115, 'next_transition': 1238}.
<a id="trace-1238"></a>
<a id="trace-1263"></a>
<a id="trace-1290"></a>
<a id="trace-1315"></a>
<a id="trace-1337"></a>
<a id="trace-1363"></a>
<a id="trace-1391"></a>
<a id="trace-1414"></a>
<a id="trace-1494"></a>
<a id="trace-1513"></a>
<a id="trace-1537"></a>
<a id="trace-1561"></a>
<a id="trace-1576"></a>
<a id="trace-1597"></a>
<a id="trace-1620"></a>
<a id="trace-1639"></a>
<a id="trace-1661"></a>
<a id="trace-1673"></a>
<a id="trace-1758"></a>
<a id="trace-1785"></a>
<a id="trace-1798"></a>
<a id="trace-1808"></a>
<a id="trace-1830"></a>
<a id="trace-1839"></a>
<a id="trace-1848"></a>
<a id="trace-1862"></a>
- 11.20s–23.75s (×26), actor 5, squad 0 (trace 1238): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5531481520195257, 'next_transition': 1263}.
<a id="trace-1872"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1872): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-1873"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1873): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-2198"></a>
<a id="trace-2217"></a>
<a id="trace-2306"></a>
<a id="trace-2325"></a>
<a id="trace-2347"></a>
<a id="trace-2374"></a>
<a id="trace-2394"></a>
<a id="trace-2406"></a>
<a id="trace-2424"></a>
<a id="trace-2439"></a>
<a id="trace-2455"></a>
<a id="trace-2470"></a>
<a id="trace-2563"></a>
<a id="trace-2581"></a>
<a id="trace-2595"></a>
<a id="trace-2605"></a>
<a id="trace-2633"></a>
<a id="trace-2648"></a>
<a id="trace-2662"></a>
<a id="trace-2674"></a>
- 24.25s–33.75s (×20), actor 5, squad 0 (trace 2198): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1689. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2217}.
<a id="trace-2677"></a>
- 33.75s–33.75s (×1), actor 0, squad 0 (trace 2677): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2475. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2845}.
<a id="trace-2845"></a>
<a id="trace-2852"></a>
<a id="trace-2938"></a>
<a id="trace-2948"></a>
<a id="trace-2961"></a>
<a id="trace-2981"></a>
- 34.25s–36.75s (×6), actor 5, squad 0 (trace 2845): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2480. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2852}.
<a id="trace-2984"></a>
- 36.75s–36.75s (×1), actor 0, squad 0 (trace 2984): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2862. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6561875105755431, 'next_transition': 3449}.
<a id="trace-2985"></a>
- 36.75s–36.75s (×1), actor 0, squad 0 (trace 2985): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2862. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6561875105755431, 'next_transition': 3449}.
<a id="trace-2986"></a>
- 36.75s–36.75s (×1), actor 0, squad 0 (trace 2986): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2862. Next observer evidence: {'until': 37, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6561875105755431, 'next_transition': 3449}.
<a id="trace-3449"></a>
- 37.00s–37.00s (×1), actor 0, squad 0 (trace 3449): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2862. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28312082683645107, 'next_transition': 3919}.
<a id="trace-3919"></a>
<a id="trace-3940"></a>
<a id="trace-3986"></a>
<a id="trace-4012"></a>
<a id="trace-4023"></a>
- 37.25s–39.25s (×5), actor 5, squad 0 (trace 3919): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2867. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.38695019663730884, 'next_transition': 3940}.
<a id="trace-429"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (events line 429): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4046"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4046): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553900 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4046. Next observer evidence: None.
<a id="trace-4047"></a>
- 39.60s–39.60s (×1), actor 5, squad 0 (trace 4047): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.553900 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 39.60s, trace 4047. Next observer evidence: None.
<a id="trace-4059"></a>
<a id="trace-4175"></a>
- 39.75s–40.25s (×2), actor 5, squad 0 (trace 4059): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 39.60s, trace 4047. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6208426954740828, 'next_transition': 4175}.
<a id="trace-4188"></a>
- 40.50s–40.50s (×1), actor 0, squad 0 (trace 4188): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4076. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2212481376204693, 'next_transition': 4200}.
<a id="trace-4200"></a>
<a id="trace-4215"></a>
<a id="trace-4229"></a>
<a id="trace-4247"></a>
<a id="trace-4265"></a>
<a id="trace-4285"></a>
<a id="trace-4298"></a>
<a id="trace-4315"></a>
<a id="trace-4332"></a>
<a id="trace-4404"></a>
<a id="trace-4410"></a>
<a id="trace-4424"></a>
<a id="trace-4445"></a>
<a id="trace-4468"></a>
<a id="trace-4476"></a>
- 40.75s–47.75s (×15), actor 5, squad 0 (trace 4200): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4081. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6834381261870223, 'next_transition': 4215}.
<a id="trace-4486"></a>
- 48.10s–48.10s (×1), actor 1, squad 0 (trace 4486): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 4335. Next observer evidence: {'until': 48.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.06990004100609, 'next_transition': 6658}.
<a id="trace-6268"></a>
- 48.10s–48.10s (×1), actor 1, squad 0 (trace 6268): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 4335. Next observer evidence: {'until': 48.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.06990004100609, 'next_transition': 6658}.
<a id="trace-6269"></a>
- 48.10s–48.10s (×1), actor 1, squad 0 (trace 6269): MoveTactically. Knowledge: actor memory at 45.00s, trace 4335. Next observer evidence: {'until': 48.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.06990004100609, 'next_transition': 6658}.
<a id="trace-6270"></a>
- 48.10s–48.10s (×1), actor 1, squad 0 (trace 6270): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 4335. Next observer evidence: {'until': 48.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.06990004100609, 'next_transition': 6658}.
<a id="trace-6658"></a>
<a id="trace-6689"></a>
<a id="trace-6730"></a>
<a id="trace-6761"></a>
- 48.25s–49.75s (×4), actor 5, squad 0 (trace 6658): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4339. Next observer evidence: {'until': 48.6, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0001594697847397484, 'next_transition': 6689}.
<a id="trace-6779"></a>
- 50.05s–50.05s (×1), actor 5, squad 0 (trace 6779): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 50.05s, trace 6779. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26998647302502693, 'next_transition': 6835}.
<a id="trace-6835"></a>
<a id="trace-6849"></a>
<a id="trace-6881"></a>
<a id="trace-6891"></a>
<a id="trace-6904"></a>
- 50.25s–52.25s (×5), actor 5, squad 0 (trace 6835): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.05s, trace 6779. Next observer evidence: {'until': 50.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5399989073600621, 'next_transition': 6849}.
<a id="trace-6912"></a>
- 52.40s–52.40s (×1), actor 1, squad 0 (trace 6912): NeedSupport. Knowledge: actor memory at 50.00s, trace 6763. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2700059461193541, 'next_transition': 6924}.
<a id="trace-6924"></a>
<a id="trace-6932"></a>
<a id="trace-6940"></a>
<a id="trace-6956"></a>
<a id="trace-6973"></a>
<a id="trace-7048"></a>
<a id="trace-7058"></a>
<a id="trace-7076"></a>
<a id="trace-7091"></a>
<a id="trace-7105"></a>
- 52.75s–57.25s (×10), actor 5, squad 0 (trace 6924): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.05s, trace 6779. Next observer evidence: {'until': 53.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3049935394572627, 'next_transition': 6932}.
<a id="trace-7111"></a>
- 57.55s–57.55s (×1), actor 1, squad 0 (trace 7111): superiority established (8 s hysteresis). Knowledge: actor memory at 55.00s, trace 6979. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3600079693304507, 'next_transition': 7274}.
<a id="trace-7274"></a>
<a id="trace-7290"></a>
<a id="trace-7305"></a>
<a id="trace-7324"></a>
<a id="trace-7331"></a>
<a id="trace-7410"></a>
<a id="trace-7424"></a>
<a id="trace-7457"></a>
<a id="trace-7464"></a>
<a id="trace-7478"></a>
<a id="trace-7496"></a>
<a id="trace-7513"></a>
<a id="trace-7521"></a>
<a id="trace-7542"></a>
<a id="trace-7551"></a>
<a id="trace-7630"></a>
<a id="trace-7643"></a>
<a id="trace-7652"></a>
<a id="trace-7667"></a>
<a id="trace-7675"></a>
<a id="trace-7687"></a>
<a id="trace-7702"></a>
<a id="trace-7712"></a>
<a id="trace-7725"></a>
<a id="trace-7733"></a>
<a id="trace-7812"></a>
<a id="trace-7827"></a>
<a id="trace-7836"></a>
<a id="trace-7843"></a>
<a id="trace-7860"></a>
<a id="trace-7869"></a>
<a id="trace-7888"></a>
<a id="trace-7893"></a>
<a id="trace-7903"></a>
<a id="trace-7917"></a>
<a id="trace-7993"></a>
<a id="trace-8010"></a>
<a id="trace-8027"></a>
<a id="trace-8037"></a>
<a id="trace-8050"></a>
<a id="trace-8060"></a>
<a id="trace-8064"></a>
<a id="trace-8069"></a>
<a id="trace-8076"></a>
- 57.75s–79.25s (×44), actor 5, squad 0 (trace 7274): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6983. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9899921726840634, 'next_transition': 7290}.
<a id="trace-8078"></a>
- 79.25s–79.25s (×1), actor 2, squad 0 (trace 8078): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 75.00s, trace 7925. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6571005013661912, 'next_transition': 8089}.
<a id="trace-8080"></a>
- 79.25s–79.25s (×1), actor 2, squad 0 (trace 8080): NeedSupport. Knowledge: actor memory at 75.00s, trace 7925. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6571005013661912, 'next_transition': 8089}.
<a id="trace-8089"></a>
<a id="trace-8164"></a>
- 79.75s–80.25s (×2), actor 5, squad 0 (trace 8089): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 7928. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.1718106529895824, 'next_transition': 8164}.
<a id="trace-8167"></a>
- 80.25s–80.25s (×1), actor 2, squad 0 (trace 8167): Reorganise: completed/failed drill. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7812110796530393, 'next_transition': 8665}.
<a id="trace-8172"></a>
- 80.25s–80.25s (×1), actor 2, squad 0 (trace 8172): MoveTactically. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7812110796530393, 'next_transition': 8665}.
<a id="trace-8173"></a>
- 80.25s–80.25s (×1), actor 2, squad 0 (trace 8173): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 80.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7812110796530393, 'next_transition': 8665}.
<a id="trace-8665"></a>
- 80.75s–80.75s (×1), actor 5, squad 0 (trace 8665): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 8097. Next observer evidence: {'until': 81, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6780829516071107, 'next_transition': 8679}.
<a id="trace-8679"></a>
- 81.00s–81.00s (×1), actor 2, squad 0 (trace 8679): ReactToContact: cover and return fire. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 81.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36502382812921885, 'next_transition': 9164}.
<a id="trace-8680"></a>
- 81.00s–81.00s (×1), actor 2, squad 0 (trace 8680): superiority lost (8 s hysteresis). Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 81.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36502382812921885, 'next_transition': 9164}.
<a id="trace-9164"></a>
<a id="trace-9183"></a>
<a id="trace-9211"></a>
<a id="trace-9225"></a>
<a id="trace-9245"></a>
<a id="trace-9264"></a>
- 81.25s–83.75s (×6), actor 5, squad 0 (trace 9164): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 8097. Next observer evidence: {'until': 81.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7098511390312748, 'next_transition': 9183}.
<a id="trace-9271"></a>
- 84.05s–84.05s (×1), actor 5, squad 0 (trace 9271): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 84.05s, trace 9271. Next observer evidence: {'until': 84.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17756051699939146, 'next_transition': 9284}.
<a id="trace-9284"></a>
<a id="trace-9295"></a>
- 84.25s–84.75s (×2), actor 5, squad 0 (trace 9284): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 84.05s, trace 9271. Next observer evidence: {'until': 84.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.16444477628393406, 'next_transition': 9295}.
<a id="trace-9306"></a>
- 84.90s–84.90s (×1), actor 2, squad 0 (trace 9306): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5660096867799606, 'next_transition': 9773}.
<a id="trace-9307"></a>
- 84.90s–84.90s (×1), actor 2, squad 0 (trace 9307): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 8094. Next observer evidence: {'until': 85.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5660096867799606, 'next_transition': 9773}.
<a id="trace-9773"></a>
<a id="trace-9789"></a>
<a id="trace-9807"></a>
- 85.25s–86.25s (×3), actor 5, squad 0 (trace 9773): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9709. Next observer evidence: {'until': 85.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.555571077433563, 'next_transition': 9789}.
<a id="trace-9810"></a>
- 86.25s–86.25s (×1), actor 2, squad 0 (trace 9810): Fixing. Knowledge: actor memory at 85.00s, trace 9706. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7274123122192669, 'next_transition': 9824}.
<a id="trace-9824"></a>
- 86.75s–86.75s (×1), actor 5, squad 0 (trace 9824): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9709. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8731568556103038, 'next_transition': 9835}.
<a id="trace-9835"></a>
- 87.20s–87.20s (×1), actor 2, squad 0 (trace 9835): support established: element delivered fire on threat area. Knowledge: actor memory at 85.00s, trace 9706. Next observer evidence: None.
<a id="trace-9841"></a>
<a id="trace-9852"></a>
<a id="trace-9869"></a>
<a id="trace-9880"></a>
<a id="trace-9894"></a>
<a id="trace-9904"></a>
<a id="trace-9976"></a>
<a id="trace-9984"></a>
<a id="trace-9993"></a>
<a id="trace-9998"></a>
<a id="trace-10014"></a>
<a id="trace-10028"></a>
<a id="trace-10054"></a>
<a id="trace-10073"></a>
<a id="trace-10097"></a>
<a id="trace-10133"></a>
<a id="trace-10265"></a>
<a id="trace-10315"></a>
<a id="trace-10351"></a>
<a id="trace-10399"></a>
<a id="trace-10436"></a>
<a id="trace-10450"></a>
<a id="trace-10474"></a>
<a id="trace-10524"></a>
<a id="trace-10546"></a>
<a id="trace-10616"></a>
- 87.25s–100.25s (×26), actor 5, squad 0 (trace 9841): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9709. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7314063296644796, 'next_transition': 9852}.
<a id="trace-1201"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (events line 1201): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17916271119570973, 'next_transition': 10629}.
<a id="trace-10620"></a>
- 100.55s–100.55s (×1), actor 5, squad 0 (trace 10620): renew committed intent (75 s lifetime). Knowledge: actor memory at 100.55s, trace 10620. Next observer evidence: {'until': 100.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17916271119570973, 'next_transition': 10629}.
<a id="trace-10629"></a>
<a id="trace-10637"></a>
<a id="trace-10642"></a>
<a id="trace-10674"></a>
<a id="trace-10697"></a>
<a id="trace-10724"></a>
<a id="trace-10731"></a>
- 100.75s–103.75s (×7), actor 5, squad 0 (trace 10629): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 10620. Next observer evidence: {'until': 101.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.7257575744768892, 'next_transition': 10637}.
<a id="trace-10746"></a>
- 103.90s–103.90s (×1), actor 3, squad 0 (trace 10746): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 10549. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27808678418527755, 'next_transition': 10907}.
<a id="trace-10788"></a>
- 103.90s–103.90s (×1), actor 3, squad 0 (trace 10788): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 10549. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.27808678418527755, 'next_transition': 10907}.
<a id="trace-10907"></a>
<a id="trace-10926"></a>
<a id="trace-10999"></a>
<a id="trace-11004"></a>
<a id="trace-11017"></a>
<a id="trace-11029"></a>
<a id="trace-11039"></a>
<a id="trace-11049"></a>
<a id="trace-11065"></a>
<a id="trace-11076"></a>
<a id="trace-11090"></a>
<a id="trace-11103"></a>
<a id="trace-11175"></a>
<a id="trace-11184"></a>
<a id="trace-11192"></a>
<a id="trace-11198"></a>
<a id="trace-11211"></a>
<a id="trace-11219"></a>
- 104.25s–112.75s (×18), actor 5, squad 0 (trace 10907): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.55s, trace 10620. Next observer evidence: {'until': 104.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1485257890969678, 'next_transition': 10926}.
<a id="trace-11232"></a>
- 112.95s–112.95s (×1), actor 3, squad 0 (trace 11232): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 110.00s, trace 11108. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6374493405760614, 'next_transition': 11238}.
<a id="trace-11238"></a>
<a id="trace-11248"></a>
<a id="trace-11261"></a>
<a id="trace-11272"></a>
<a id="trace-11342"></a>
<a id="trace-11348"></a>
<a id="trace-11365"></a>
<a id="trace-11374"></a>
<a id="trace-11387"></a>
<a id="trace-11398"></a>
<a id="trace-11414"></a>
<a id="trace-11424"></a>
<a id="trace-11433"></a>
- 113.25s–119.25s (×13), actor 5, squad 0 (trace 11238): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11110. Next observer evidence: {'until': 113.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6163438326593722, 'next_transition': 11248}.
<a id="trace-11538"></a>
- 122.20s–122.20s (×1), actor 3, squad 0 (trace 11538): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 120.00s, trace 11448. Next observer evidence: {'until': 122.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1340}.
<a id="trace-11596"></a>
- 122.20s–122.20s (×1), actor 3, squad 0 (trace 11596): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 120.00s, trace 11448. Next observer evidence: {'until': 122.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1340}.
<a id="trace-1340"></a>
- 122.40s–122.40s (×1), actor 6, squad 0 (events line 1340): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11670}.
<a id="trace-11654"></a>
- 122.40s–122.40s (×1), actor 6, squad 0 (trace 11654): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 122.40s, trace 11654. Next observer evidence: {'until': 123.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11670}.
<a id="trace-11655"></a>
- 122.40s–122.40s (×1), actor 6, squad 0 (trace 11655): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.40s, trace 11655. Next observer evidence: {'until': 123.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11670}.
<a id="trace-11670"></a>
<a id="trace-11693"></a>
<a id="trace-11773"></a>
<a id="trace-11788"></a>
<a id="trace-11797"></a>
<a id="trace-11812"></a>
<a id="trace-11831"></a>
<a id="trace-11904"></a>
<a id="trace-11916"></a>
- 123.25s–131.30s (×9), actor 6, squad 0 (trace 11670): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 122.40s, trace 11655. Next observer evidence: {'until': 124.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7087407834497741, 'next_transition': 11693}.
<a id="trace-11929"></a>
- 132.15s–132.15s (×1), actor 3, squad 0 (trace 11929): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 130.00s, trace 11842. Next observer evidence: {'until': 132.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2294175883036563, 'next_transition': 11936}.
<a id="trace-11936"></a>
- 132.30s–132.30s (×1), actor 6, squad 0 (trace 11936): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 130.00s, trace 11844. Next observer evidence: {'until': 132.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500466861619797, 'next_transition': 11942}.
<a id="trace-11942"></a>
- 132.70s–132.70s (×1), actor 3, squad 0 (trace 11942): MoveTactically. Knowledge: actor memory at 130.00s, trace 11842. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17622415413330714, 'next_transition': 12027}.
<a id="trace-11943"></a>
- 132.70s–132.70s (×1), actor 3, squad 0 (trace 11943): received platoon directive. Knowledge: actor memory at 130.00s, trace 11842. Next observer evidence: {'until': 133.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17622415413330714, 'next_transition': 12027}.
<a id="trace-12027"></a>
- 133.30s–133.30s (×1), actor 6, squad 0 (trace 12027): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 130.00s, trace 11844. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2756268514677038, 'next_transition': 12042}.
<a id="trace-12042"></a>
- 133.70s–133.70s (×1), actor 3, squad 0 (trace 12042): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 11842. Next observer evidence: {'until': 134.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.472491749266588, 'next_transition': 12116}.
<a id="trace-12116"></a>
<a id="trace-12204"></a>
<a id="trace-12224"></a>
<a id="trace-12237"></a>
<a id="trace-12256"></a>
<a id="trace-12272"></a>
<a id="trace-12349"></a>
<a id="trace-12368"></a>
<a id="trace-12383"></a>
<a id="trace-12397"></a>
- 134.30s–143.30s (×10), actor 6, squad 0 (trace 12116): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 130.00s, trace 11844. Next observer evidence: {'until': 135.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7870326394915269, 'next_transition': 12204}.
<a id="trace-12404"></a>
- 143.60s–143.60s (×1), actor 3, squad 0 (trace 12404): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 12286. Next observer evidence: {'until': 144.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12443}.
<a id="trace-12443"></a>
<a id="trace-12527"></a>
<a id="trace-12547"></a>
<a id="trace-12560"></a>
<a id="trace-12574"></a>
<a id="trace-12594"></a>
<a id="trace-12675"></a>
<a id="trace-12696"></a>
<a id="trace-12712"></a>
<a id="trace-12729"></a>
- 144.30s–153.30s (×10), actor 6, squad 0 (trace 12443): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 140.00s, trace 12288. Next observer evidence: {'until': 145.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.39374102926289023, 'next_transition': 12527}.
<a id="trace-12734"></a>
- 153.40s–153.40s (×1), actor 3, squad 0 (trace 12734): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 12611. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7040143982037125, 'next_transition': 12856}.
<a id="trace-12856"></a>
<a id="trace-12934"></a>
<a id="trace-12959"></a>
<a id="trace-12980"></a>
<a id="trace-13000"></a>
<a id="trace-13095"></a>
<a id="trace-13116"></a>
<a id="trace-13135"></a>
<a id="trace-13152"></a>
<a id="trace-13173"></a>
<a id="trace-13254"></a>
<a id="trace-13273"></a>
- 154.30s–166.30s (×12), actor 6, squad 0 (trace 12856): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 150.00s, trace 12613. Next observer evidence: {'until': 155.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0851392475429242, 'next_transition': 12934}.
<a id="trace-13279"></a>
- 166.55s–166.55s (×1), actor 3, squad 0 (trace 13279): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 165.00s, trace 13192. Next observer evidence: {'until': 167.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18429261788321866, 'next_transition': 13540}.
<a id="trace-13540"></a>
- 167.30s–167.30s (×1), actor 6, squad 0 (trace 13540): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 165.00s, trace 13194. Next observer evidence: {'until': 167.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11339850001763678, 'next_transition': 1557}.
<a id="trace-1557"></a>
- 167.40s–167.40s (×1), actor 6, squad 0 (events line 1557): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13543"></a>
- 167.40s–167.40s (×1), actor 6, squad 0 (trace 13543): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316202 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.40s, trace 13543. Next observer evidence: {'until': 168.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8042476306050443, 'next_transition': 13563}.
<a id="trace-13544"></a>
- 167.40s–167.40s (×1), actor 6, squad 0 (trace 13544): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316202 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 167.40s, trace 13544. Next observer evidence: {'until': 168.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8042476306050443, 'next_transition': 13563}.
<a id="trace-13563"></a>
<a id="trace-13590"></a>
- 168.30s–169.30s (×2), actor 6, squad 0 (trace 13563): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 167.40s, trace 13544. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1748200083424922, 'next_transition': 13590}.
<a id="trace-13598"></a>
- 169.60s–169.60s (×1), actor 3, squad 0 (trace 13598): Withdraw to received rally. Knowledge: actor memory at 165.00s, trace 13192. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7226883655078085, 'next_transition': 13973}.
<a id="trace-13599"></a>
- 169.60s–169.60s (×1), actor 3, squad 0 (trace 13599): rearward bound: one stationary suppressing element. Knowledge: actor memory at 165.00s, trace 13192. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7226883655078085, 'next_transition': 13973}.
<a id="trace-13973"></a>
<a id="trace-14000"></a>
<a id="trace-14019"></a>
<a id="trace-14040"></a>
<a id="trace-14056"></a>
<a id="trace-14132"></a>
<a id="trace-14148"></a>
<a id="trace-14165"></a>
<a id="trace-14206"></a>
<a id="trace-14238"></a>
<a id="trace-14381"></a>
<a id="trace-14466"></a>
- 170.30s–181.30s (×12), actor 6, squad 0 (trace 13973): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 170.00s, trace 13906. Next observer evidence: {'until': 171.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0596131581424058, 'next_transition': 14000}.
<a id="trace-14478"></a>
- 181.40s–181.40s (×1), actor 3, squad 0 (trace 14478): support established: element delivered fire on threat area. Knowledge: actor memory at 180.00s, trace 14303. Next observer evidence: {'until': 182, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4652057735505953, 'next_transition': 14526}.
<a id="trace-14526"></a>
- 182.15s–182.15s (×1), actor 3, squad 0 (trace 14526): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 180.00s, trace 14303. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14093775067974887, 'next_transition': 14642}.
<a id="trace-14527"></a>
- 182.15s–182.15s (×1), actor 3, squad 0 (trace 14527): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 180.00s, trace 14303. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14093775067974887, 'next_transition': 14642}.
<a id="trace-14642"></a>
<a id="trace-14679"></a>
<a id="trace-14700"></a>
- 182.30s–184.30s (×3), actor 6, squad 0 (trace 14642): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 180.00s, trace 14305. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056699999999999307, 'next_transition': 14679}.
<a id="trace-14790"></a>
- 187.35s–187.35s (×1), actor 4, squad 0 (trace 14790): NeedSupport. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 188.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14808}.
<a id="trace-14808"></a>
- 188.30s–188.30s (×1), actor 6, squad 0 (trace 14808): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 185.00s, trace 14715. Next observer evidence: None.
<a id="trace-14813"></a>
- 188.35s–188.35s (×1), actor 4, squad 0 (trace 14813): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 188.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14823}.
<a id="trace-14823"></a>
- 188.60s–188.60s (×1), actor 4, squad 0 (trace 14823): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14838}.
<a id="trace-14838"></a>
- 189.30s–189.30s (×1), actor 6, squad 0 (trace 14838): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 185.00s, trace 14715. Next observer evidence: {'until': 189.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14846}.
<a id="trace-14846"></a>
- 189.60s–189.60s (×1), actor 4, squad 0 (trace 14846): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 190.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15043}.
<a id="trace-14849"></a>
- 189.60s–189.60s (×1), actor 4, squad 0 (trace 14849): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 190.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15043}.
<a id="trace-14850"></a>
- 189.60s–189.60s (×1), actor 4, squad 0 (trace 14850): Reorganise complete: known contact. Knowledge: actor memory at 185.00s, trace 14714. Next observer evidence: {'until': 190.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15043}.
<a id="trace-15043"></a>
<a id="trace-15059"></a>
<a id="trace-15078"></a>
- 190.30s–192.30s (×3), actor 6, squad 0 (trace 15043): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.00s, trace 14983. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16541176033026045, 'next_transition': 15059}.
<a id="trace-15096"></a>
- 193.25s–193.25s (×1), actor 4, squad 0 (trace 15096): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 190.00s, trace 14982. Next observer evidence: None.
<a id="trace-15097"></a>
- 193.25s–193.25s (×1), actor 4, squad 0 (trace 15097): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 14982. Next observer evidence: None.
<a id="trace-15223"></a>
<a id="trace-15241"></a>
<a id="trace-15315"></a>
<a id="trace-15328"></a>
<a id="trace-15343"></a>
<a id="trace-15357"></a>
<a id="trace-15365"></a>
<a id="trace-15433"></a>
<a id="trace-15443"></a>
<a id="trace-15453"></a>
<a id="trace-15462"></a>
<a id="trace-15473"></a>
<a id="trace-15539"></a>
<a id="trace-15549"></a>
<a id="trace-15562"></a>
<a id="trace-15569"></a>
<a id="trace-15580"></a>
<a id="trace-15647"></a>
<a id="trace-15655"></a>
<a id="trace-15667"></a>
<a id="trace-15681"></a>
<a id="trace-15692"></a>
<a id="trace-15759"></a>
<a id="trace-15772"></a>
- 193.30s–216.30s (×24), actor 6, squad 0 (trace 15223): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 190.00s, trace 14983. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15241}.
<a id="trace-15784"></a>
- 217.00s–217.00s (×1), actor 4, squad 0 (trace 15784): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 215.00s, trace 15701. Next observer evidence: None.
<a id="trace-15785"></a>
- 217.05s–217.05s (×1), actor 4, squad 0 (trace 15785): Reorganise: completed/failed drill. Knowledge: actor memory at 215.00s, trace 15701. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502762577272503, 'next_transition': 15795}.
<a id="trace-15787"></a>
- 217.05s–217.05s (×1), actor 4, squad 0 (trace 15787): ReactToContact: cover and return fire. Knowledge: actor memory at 215.00s, trace 15701. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502762577272503, 'next_transition': 15795}.
<a id="trace-15788"></a>
- 217.05s–217.05s (×1), actor 4, squad 0 (trace 15788): Reorganise complete: known contact. Knowledge: actor memory at 215.00s, trace 15701. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31502762577272503, 'next_transition': 15795}.
<a id="trace-15795"></a>
<a id="trace-15811"></a>
<a id="trace-15824"></a>
<a id="trace-15894"></a>
- 217.30s–220.30s (×4), actor 6, squad 0 (trace 15795): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 215.00s, trace 15702. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749645742047662, 'next_transition': 15811}.
<a id="trace-15898"></a>
- 220.40s–220.40s (×1), actor 4, squad 0 (trace 15898): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 220.00s, trace 15836. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600101953952592, 'next_transition': 15914}.
<a id="trace-15899"></a>
- 220.40s–220.40s (×1), actor 4, squad 0 (trace 15899): rearward bound: one stationary suppressing element. Knowledge: actor memory at 220.00s, trace 15836. Next observer evidence: {'until': 221.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600101953952592, 'next_transition': 15914}.
<a id="trace-15914"></a>
<a id="trace-15928"></a>
<a id="trace-15940"></a>
<a id="trace-15950"></a>
<a id="trace-16020"></a>
<a id="trace-16037"></a>
<a id="trace-16046"></a>
<a id="trace-16058"></a>
- 221.30s–228.30s (×8), actor 6, squad 0 (trace 15914): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 220.00s, trace 15837. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750107658362211, 'next_transition': 15928}.
<a id="trace-1864"></a>
- 229.30s–229.30s (×1), actor 6, squad 0 (events line 1864): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16142}.
<a id="trace-16071"></a>
- 229.30s–229.30s (×1), actor 6, squad 0 (trace 16071): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 225.00s, trace 15965. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16142}.
<a id="trace-16075"></a>
- 229.30s–229.30s (×1), actor 6, squad 0 (trace 16075): renew committed intent (75 s lifetime). Knowledge: actor memory at 229.30s, trace 16075. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16142}.
<a id="trace-16142"></a>
<a id="trace-16169"></a>
<a id="trace-16184"></a>
<a id="trace-16195"></a>
<a id="trace-16265"></a>
<a id="trace-16279"></a>
<a id="trace-16292"></a>
<a id="trace-16307"></a>
<a id="trace-16320"></a>
<a id="trace-16390"></a>
- 230.30s–240.30s (×10), actor 6, squad 0 (trace 16142): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 230.00s, trace 16086. Next observer evidence: {'until': 232.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16169}.
<a id="trace-16395"></a>
- 240.45s–240.45s (×1), actor 4, squad 0 (trace 16395): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 240.00s, trace 16333. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16411}.
<a id="trace-16411"></a>
<a id="trace-16426"></a>
<a id="trace-16440"></a>
<a id="trace-16453"></a>
<a id="trace-16523"></a>
<a id="trace-16539"></a>
<a id="trace-16551"></a>
<a id="trace-16565"></a>
<a id="trace-16578"></a>
<a id="trace-16649"></a>
<a id="trace-16663"></a>
<a id="trace-16674"></a>
<a id="trace-16690"></a>
<a id="trace-16701"></a>
<a id="trace-16770"></a>
<a id="trace-16787"></a>
<a id="trace-16798"></a>
<a id="trace-16811"></a>
<a id="trace-16826"></a>
<a id="trace-16894"></a>
<a id="trace-16908"></a>
<a id="trace-16920"></a>
<a id="trace-16934"></a>
<a id="trace-16947"></a>
<a id="trace-17017"></a>
<a id="trace-17031"></a>
<a id="trace-17041"></a>
<a id="trace-17055"></a>
<a id="trace-17067"></a>
<a id="trace-17138"></a>
<a id="trace-17153"></a>
<a id="trace-17164"></a>
<a id="trace-17178"></a>
<a id="trace-17190"></a>
<a id="trace-17259"></a>
<a id="trace-17275"></a>
<a id="trace-17286"></a>
<a id="trace-17300"></a>
<a id="trace-17314"></a>
<a id="trace-17383"></a>
<a id="trace-17396"></a>
<a id="trace-17408"></a>
<a id="trace-17423"></a>
<a id="trace-17435"></a>
<a id="trace-17505"></a>
<a id="trace-17529"></a>
<a id="trace-17543"></a>
<a id="trace-17627"></a>
- 241.30s–290.30s (×48), actor 6, squad 0 (trace 16411): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 240.00s, trace 16334. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16426}.
<a id="trace-2129"></a>
- 291.00s–291.00s (×1), actor 6, squad 0 (events line 2129): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17643}.
<a id="trace-17638"></a>
- 291.00s–291.00s (×1), actor 6, squad 0 (trace 17638): renew committed intent (75 s lifetime). Knowledge: actor memory at 291.00s, trace 17638. Next observer evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17643}.
<a id="trace-17643"></a>
<a id="trace-17658"></a>
- 291.30s–292.30s (×2), actor 6, squad 0 (trace 17643): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 291.00s, trace 17638. Next observer evidence: {'until': 292.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17658}.
<a id="trace-2143"></a>
- 293.20s–293.20s (×1), actor 6, squad 0 (events line 2143): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17670"></a>
- 293.20s–293.20s (×1), actor 6, squad 0 (trace 17670): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.597264 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 293.20s, trace 17670. Next observer evidence: None.
<a id="trace-17671"></a>
- 293.20s–293.20s (×1), actor 6, squad 0 (trace 17671): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.597264 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 293.20s, trace 17671. Next observer evidence: None.
<a id="trace-17674"></a>
<a id="trace-17687"></a>
- 293.30s–294.30s (×2), actor 6, squad 0 (trace 17674): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 293.20s, trace 17671. Next observer evidence: {'until': 294.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17687}.
<a id="trace-17699"></a>
- 294.90s–294.90s (×1), actor 4, squad 0 (trace 17699): MoveTactically. Knowledge: actor memory at 290.00s, trace 17570. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17800}.
<a id="trace-17700"></a>
- 294.90s–294.90s (×1), actor 4, squad 0 (trace 17700): traveling. Knowledge: actor memory at 290.00s, trace 17570. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17800}.
<a id="trace-17701"></a>
- 294.90s–294.90s (×1), actor 4, squad 0 (trace 17701): received platoon directive. Knowledge: actor memory at 290.00s, trace 17570. Next observer evidence: {'until': 295.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17800}.
<a id="trace-17800"></a>
- 295.30s–295.30s (×1), actor 6, squad 0 (trace 17800): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 295.00s, trace 17741. Next observer evidence: {'until': 296, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812555058072747, 'next_transition': 2161}.
<a id="trace-2161"></a>
- 296.00s–296.00s (×1), actor 6, squad 0 (events line 2161): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5987709908426257, 'next_transition': 17838}.
<a id="trace-17812"></a>
- 296.00s–296.00s (×1), actor 6, squad 0 (trace 17812): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.00s, trace 17812. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5987709908426257, 'next_transition': 17838}.
<a id="trace-17813"></a>
- 296.00s–296.00s (×1), actor 6, squad 0 (trace 17813): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 296.00s, trace 17813. Next observer evidence: {'until': 297.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.5987709908426257, 'next_transition': 17838}.
<a id="trace-17838"></a>
- 297.30s–297.30s (×1), actor 6, squad 0 (trace 17838): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 296.00s, trace 17813. Next observer evidence: {'until': 297.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812477355101794, 'next_transition': 17848}.
<a id="trace-17848"></a>
- 297.70s–297.70s (×1), actor 4, squad 0 (trace 17848): traveling overwatch. Knowledge: actor memory at 295.00s, trace 17740. Next observer evidence: None.
<a id="trace-17849"></a>
- 297.70s–297.70s (×1), actor 4, squad 0 (trace 17849): received platoon directive. Knowledge: actor memory at 295.00s, trace 17740. Next observer evidence: None.
<a id="trace-17873"></a>
- 297.75s–297.75s (×1), actor 4, squad 0 (trace 17873): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 295.00s, trace 17740. Next observer evidence: {'until': 298.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724861082613974, 'next_transition': 17889}.
<a id="trace-17889"></a>
<a id="trace-17910"></a>
<a id="trace-17980"></a>
<a id="trace-17997"></a>
<a id="trace-18010"></a>
<a id="trace-18026"></a>
<a id="trace-18041"></a>
<a id="trace-18110"></a>
<a id="trace-18123"></a>
<a id="trace-18136"></a>
<a id="trace-18150"></a>
<a id="trace-18164"></a>
<a id="trace-18233"></a>
<a id="trace-18245"></a>
<a id="trace-18260"></a>
<a id="trace-18273"></a>
<a id="trace-18287"></a>
<a id="trace-18356"></a>
<a id="trace-18371"></a>
<a id="trace-18384"></a>
<a id="trace-18399"></a>
<a id="trace-18414"></a>
<a id="trace-18481"></a>
<a id="trace-18494"></a>
<a id="trace-18509"></a>
<a id="trace-18522"></a>
<a id="trace-18536"></a>
<a id="trace-18607"></a>
<a id="trace-18618"></a>
<a id="trace-18628"></a>
<a id="trace-18644"></a>
<a id="trace-18659"></a>
<a id="trace-18727"></a>
<a id="trace-18741"></a>
<a id="trace-18753"></a>
<a id="trace-18767"></a>
<a id="trace-18784"></a>
<a id="trace-18852"></a>
<a id="trace-18865"></a>
<a id="trace-18878"></a>
<a id="trace-18890"></a>
<a id="trace-18906"></a>
<a id="trace-18974"></a>
<a id="trace-18987"></a>
<a id="trace-19001"></a>
<a id="trace-19014"></a>
<a id="trace-19029"></a>
<a id="trace-19100"></a>
<a id="trace-19112"></a>
<a id="trace-19124"></a>
<a id="trace-19137"></a>
<a id="trace-19153"></a>
<a id="trace-19224"></a>
<a id="trace-19262"></a>
<a id="trace-19275"></a>
<a id="trace-19347"></a>
<a id="trace-19359"></a>
<a id="trace-19370"></a>
- 298.30s–357.30s (×58), actor 6, squad 0 (trace 17889): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 296.00s, trace 17813. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3937847635447578, 'next_transition': 17910}.
<a id="trace-2442"></a>
- 357.60s–357.60s (×1), actor 6, squad 0 (events line 2442): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19375"></a>
- 357.60s–357.60s (×1), actor 6, squad 0 (trace 19375): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.60s, trace 19375. Next observer evidence: {'until': 358.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19387}.
<a id="trace-19387"></a>
<a id="trace-19400"></a>
- 358.30s–359.30s (×2), actor 6, squad 0 (trace 19387): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 357.60s, trace 19375. Next observer evidence: {'until': 359.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19400}.

## Net delivery

196 matched order/radio deliveries; 253 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.327s; maximum 1.850s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 536: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 15.00s leader 0, trace 1421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 1686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 1687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 1694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 1695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 2864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 2865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2870: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2871: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 2872: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 2873: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2874: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2875: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2876: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2877: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4046: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.60s leader 5, trace 4047: estimate 9.33; 8 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4076: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4081: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4082: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4084: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4085: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4086: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4087: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4088: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4089: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4090: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4091: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4335: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4339: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4340: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4341: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4342: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4343: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4344: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4345: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4346: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4347: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4348: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4349: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6763: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6767: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6768: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6769: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6770: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6771: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6772: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6773: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6774: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6775: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6776: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6777: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.05s leader 5, trace 6779: estimate 9.81; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6979: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 6981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6983: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6984: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6985: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6986: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6987: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6988: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6989: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6990: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6991: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6992: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6993: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7336: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 7338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7340: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7341: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7342: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7343: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7344: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7345: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7346: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7347: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7348: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7349: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7350: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7563: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7564: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 7565: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7566: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7567: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7568: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7569: estimate 8.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7570: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7571: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7572: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7573: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7574: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7575: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7576: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7577: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7737: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 7738: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 7739: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7740: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7741: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7742: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7743: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7744: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7745: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7746: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7747: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7748: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7749: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7750: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7751: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7924: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 7925: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 7926: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7927: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7928: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7929: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7930: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7931: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7932: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7933: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7934: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7935: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7936: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7937: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7938: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 8094: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 8095: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8096: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8097: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8098: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 8099: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8100: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 8101: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 8102: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 8103: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 8104: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 8105: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 8106: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 84.05s leader 5, trace 9271: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9706: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9707: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9708: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9709: estimate 9.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9710: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9711: estimate 8.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9712: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9713: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9714: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9715: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9716: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9717: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9718: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 9907: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 9908: estimate 9.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 9909: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 9910: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 9911: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 9912: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 9913: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 9914: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 9915: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 9916: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 9917: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 9918: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 9919: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 10149: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 10150: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10151: estimate 9.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10152: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10153: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10154: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10155: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10156: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10157: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10158: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10159: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10160: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 10549: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10550: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10551: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10552: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10553: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10554: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10555: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10556: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10557: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10558: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10559: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.55s leader 5, trace 10620: estimate 9.72; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 10928: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 10929: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 10930: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 10931: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 10932: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 10933: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 10934: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 10935: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 10936: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 10937: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 10938: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 11108: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11109: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11110: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11111: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11112: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11113: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11114: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11115: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11116: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11117: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11118: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 11276: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11277: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11278: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11279: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11280: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 11281: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11282: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11283: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11284: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11285: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11286: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 11448: estimate 9.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 11449: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 11450: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 11451: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 11452: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 11453: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 11454: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 11455: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 11456: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 11457: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.40s leader 6, trace 11654: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.40s leader 6, trace 11655: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 11714: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 11715: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 11716: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 11717: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 11718: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 11719: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 11720: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 11721: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 11722: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 11723: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 11842: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 11843: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 11844: estimate 9.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 11845: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 11846: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 11847: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 11848: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 11849: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 11850: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 11851: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 12139: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 12140: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12141: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12142: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 12143: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12144: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12145: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12146: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12147: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12148: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 12286: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 12287: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 12288: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 12289: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 12290: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 12291: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 12292: estimate 8.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 12293: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 12294: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 12295: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 12467: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 12468: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 12469: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 12470: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 12471: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 12472: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 12473: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 12474: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 12475: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 12476: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 12611: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 12612: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 12613: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 12614: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 12615: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 12616: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 12617: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 12618: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 12619: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 12620: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 12873: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 12874: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 12875: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 12876: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 12877: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 12878: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 12879: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 12880: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 12881: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 12882: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 13031: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 13032: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 13033: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 13034: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 13035: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 13036: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 13037: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 13038: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 13039: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 13040: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 13192: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 13193: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 13194: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 13195: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 13196: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 13197: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 13198: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 13199: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 13200: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 13201: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.40s leader 6, trace 13543: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 167.40s leader 6, trace 13544: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 13904: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 13905: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 13906: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 13907: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 13908: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 13909: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 13910: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 13911: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 13912: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 13913: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 14072: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 14073: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 14074: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 14075: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 14076: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 14077: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 14078: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 14079: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 14080: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 14081: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 14303: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 14304: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 14305: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 14306: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 14307: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 14308: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 14309: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 14310: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 14311: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 14312: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 14714: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 14715: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 14716: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 14717: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 14718: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 14719: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 14720: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 14721: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 14722: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 14982: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 14983: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 14984: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 14985: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 14986: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 14987: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 14988: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 14989: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 15254: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 15255: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 15256: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 15257: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 15258: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 15259: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 15260: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 15261: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 15375: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 15376: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 15377: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 15378: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 15379: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 15380: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 15381: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 15382: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 15481: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 15482: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 15483: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 15484: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 15485: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 15486: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 15487: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 15488: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 15589: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 15590: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 15591: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 15592: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 15593: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 15594: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 15595: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 15596: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 15701: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 15702: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 15703: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 15704: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 15705: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 15706: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 15707: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 15708: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 15836: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 15837: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 15838: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 15839: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 15840: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 15841: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 15842: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 15964: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 15965: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 15966: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 15967: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 15968: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 15969: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 15970: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 229.30s leader 6, trace 16075: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 16085: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 16086: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 16087: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 16088: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 16089: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 16090: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 16091: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 16208: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 16209: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 16210: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 16211: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 16212: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 16213: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 16214: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 16333: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 16334: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 16335: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 16336: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 16337: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 16338: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 16339: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 16466: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 16467: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 16468: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 16469: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 16470: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 16471: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 16472: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 16592: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 16593: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 16594: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 16595: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 16596: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 16597: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 16598: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 16713: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 16714: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 16715: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 16716: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 16717: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 16718: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 16719: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 16837: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 16838: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 16839: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 16840: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 16841: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 16842: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 16843: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 16959: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 16960: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 16961: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 16962: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 16963: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 16964: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 16965: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 17081: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 17082: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 17083: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 17084: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 17085: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 17086: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 17087: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 17202: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 17203: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 17204: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 17205: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 17206: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 17207: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 17208: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 17326: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 17327: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 17328: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 17329: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 17330: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 17331: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 17332: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 17447: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 17448: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 17449: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 17450: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 17451: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 17452: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 17453: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 17570: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 17571: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 17572: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 17573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 17574: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 17575: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 17576: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 291.00s leader 6, trace 17638: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 293.20s leader 6, trace 17670: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 293.20s leader 6, trace 17671: estimate 1.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 17740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 17741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 17742: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 17743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 17744: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 17745: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 17746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.00s leader 6, trace 17812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 296.00s leader 6, trace 17813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 17921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 17922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 17923: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 17924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 17925: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 17926: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 17927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 18053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 18054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 18055: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 18056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 18057: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 18058: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 18059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 18176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 18177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 18178: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 18179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 18180: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 18181: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 18182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 18298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 18299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 18300: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 18301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 18302: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 18303: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 18304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 18424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 18425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 18426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 18427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 18428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 18429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 18430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 18548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 18549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 18550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 18551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 18552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 18553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 18554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 18669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 18670: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 18671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 18672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 18673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 18674: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 18675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 18795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 18796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 18797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 18798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 18799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 18800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 18801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 18917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 18918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 18919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 18920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 18921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 18922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 18923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 19041: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 19042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 19043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 19044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 19045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 19046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 19047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 19166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 19167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 19168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 19169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 19170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 19171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 19172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 19288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 19289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 19290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 19291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 19292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 19293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 19294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.60s leader 6, trace 19375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 19412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 19413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 19414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 19415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 19416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 19417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 19418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Flint killed in action
- 1: Kest killed in action
- 1: Soren killed in action
- 1: Iven incapacitated
- 1: Ash incapacitated
- 1: Bram incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 167.40s, evidence 1557: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 167.40s, evidence 13543: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316202 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 168.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8042476306050443, 'next_transition': 13563}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 167.40s, evidence 13544: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.316202 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 168.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8042476306050443, 'next_transition': 13563}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 229.30s, evidence 1864: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16142}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 291.00s, evidence 2129: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 291.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17643}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
