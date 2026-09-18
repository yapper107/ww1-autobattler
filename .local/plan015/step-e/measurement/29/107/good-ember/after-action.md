# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/29/107/good-ember/battle-107-1789674315934484385`

## Battle summary

**Azure** · 208.7 s · 579 shots.

### Turning points

- 29.9s, squad 4: contact (events line 316). First recorded contact.
- 53.8s, squad 0: help call ([trace 8104](#trace-8104)). No completion observed before termination.
- 98.0s, squad 0: withdrawal ([trace 15399](#trace-15399)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 256 shots, 5/8 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 323 shots, 8/8 lost.

### Decisions and attribution

At 98.0s, squad 0 chose broke contact ([trace 15399](#trace-15399)), followed by 9 shots and 0 own casualties; estimate 6.5 against 0 distinct squad-reported contacts; At 122.8s, squad 0 chose renewed the existing objective ([trace 16335](#trace-16335)), followed by 1 shots and 0 own casualties; estimate 9.7 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1290](#trace-1290)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7332496443642479, 'next_transition': 1314}.
- 53.7s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.306557 retreat threshold=0.220000 initiative=requires intent ([trace 8087](#trace-8087)). Following evidence: None.

### Communication

141 matched deliveries (mean 0.38s, max 5.40s); 93 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 29.95s, squad 4, contact, evidence events line 316: First recorded contact; .
- 53.80s, squad 0, help call, evidence 8104: NeedSupport; No completion observed before termination.
- 97.95s, squad 0, withdrawal, evidence 15399: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.452166134628644, 'next_transition': 664}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.452166134628644, 'next_transition': 664}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.452166134628644, 'next_transition': 664}.
<a id="trace-451"></a>
<a id="trace-471"></a>
<a id="trace-492"></a>
<a id="trace-514"></a>
<a id="trace-528"></a>
<a id="trace-547"></a>
<a id="trace-569"></a>
<a id="trace-666"></a>
<a id="trace-689"></a>
<a id="trace-713"></a>
<a id="trace-731"></a>
<a id="trace-751"></a>
<a id="trace-775"></a>
<a id="trace-794"></a>
<a id="trace-810"></a>
<a id="trace-820"></a>
<a id="trace-904"></a>
<a id="trace-916"></a>
<a id="trace-1235"></a>
<a id="trace-1260"></a>
<a id="trace-1288"></a>
<a id="trace-1316"></a>
<a id="trace-1339"></a>
<a id="trace-1366"></a>
<a id="trace-1394"></a>
<a id="trace-1416"></a>
<a id="trace-1496"></a>
<a id="trace-1515"></a>
<a id="trace-1539"></a>
<a id="trace-1563"></a>
<a id="trace-1578"></a>
<a id="trace-1599"></a>
<a id="trace-1621"></a>
<a id="trace-1640"></a>
<a id="trace-1662"></a>
<a id="trace-1675"></a>
<a id="trace-1760"></a>
<a id="trace-1787"></a>
<a id="trace-1799"></a>
<a id="trace-1810"></a>
<a id="trace-1832"></a>
<a id="trace-1841"></a>
<a id="trace-1850"></a>
<a id="trace-1864"></a>
<a id="trace-2200"></a>
<a id="trace-2218"></a>
<a id="trace-2307"></a>
<a id="trace-2326"></a>
<a id="trace-2348"></a>
<a id="trace-2376"></a>
<a id="trace-2398"></a>
<a id="trace-2410"></a>
<a id="trace-2427"></a>
<a id="trace-2442"></a>
<a id="trace-2456"></a>
<a id="trace-2470"></a>
<a id="trace-2559"></a>
<a id="trace-2573"></a>
<a id="trace-2587"></a>
<a id="trace-2593"></a>
<a id="trace-2612"></a>
<a id="trace-2624"></a>
<a id="trace-2636"></a>
<a id="trace-2645"></a>
<a id="trace-2816"></a>
<a id="trace-2827"></a>
<a id="trace-2909"></a>
<a id="trace-2918"></a>
<a id="trace-3325"></a>
<a id="trace-3344"></a>
<a id="trace-3772"></a>
<a id="trace-3807"></a>
<a id="trace-3830"></a>
<a id="trace-4271"></a>
<a id="trace-4294"></a>
<a id="trace-4330"></a>
<a id="trace-4446"></a>
<a id="trace-4475"></a>
<a id="trace-4496"></a>
<a id="trace-4519"></a>
<a id="trace-4551"></a>
<a id="trace-4562"></a>
<a id="trace-4581"></a>
<a id="trace-4585"></a>
<a id="trace-4599"></a>
<a id="trace-4613"></a>
<a id="trace-4692"></a>
<a id="trace-4699"></a>
<a id="trace-7696"></a>
<a id="trace-7707"></a>
<a id="trace-7729"></a>
<a id="trace-7754"></a>
<a id="trace-7773"></a>
<a id="trace-7789"></a>
<a id="trace-7810"></a>
<a id="trace-7827"></a>
<a id="trace-7919"></a>
<a id="trace-7934"></a>
<a id="trace-7948"></a>
<a id="trace-7972"></a>
<a id="trace-8002"></a>
<a id="trace-8023"></a>
<a id="trace-8054"></a>
<a id="trace-8099"></a>
<a id="trace-8128"></a>
<a id="trace-8166"></a>
<a id="trace-8265"></a>
<a id="trace-8282"></a>
<a id="trace-8315"></a>
<a id="trace-8363"></a>
<a id="trace-8397"></a>
<a id="trace-8441"></a>
<a id="trace-8490"></a>
<a id="trace-8542"></a>
<a id="trace-9196"></a>
<a id="trace-9229"></a>
<a id="trace-9333"></a>
<a id="trace-9378"></a>
<a id="trace-9423"></a>
<a id="trace-9435"></a>
<a id="trace-9463"></a>
<a id="trace-9490"></a>
<a id="trace-9523"></a>
<a id="trace-9550"></a>
<a id="trace-9579"></a>
<a id="trace-9598"></a>
<a id="trace-9687"></a>
<a id="trace-9706"></a>
<a id="trace-9718"></a>
<a id="trace-9739"></a>
<a id="trace-9756"></a>
<a id="trace-9784"></a>
<a id="trace-9804"></a>
<a id="trace-9821"></a>
<a id="trace-9830"></a>
<a id="trace-9837"></a>
<a id="trace-13417"></a>
<a id="trace-13434"></a>
<a id="trace-13458"></a>
<a id="trace-13468"></a>
<a id="trace-13484"></a>
<a id="trace-13494"></a>
<a id="trace-13513"></a>
<a id="trace-13535"></a>
<a id="trace-13551"></a>
<a id="trace-13572"></a>
<a id="trace-13675"></a>
<a id="trace-13696"></a>
<a id="trace-13718"></a>
<a id="trace-13740"></a>
<a id="trace-13777"></a>
<a id="trace-14121"></a>
<a id="trace-14136"></a>
<a id="trace-14159"></a>
<a id="trace-14187"></a>
<a id="trace-14194"></a>
<a id="trace-14280"></a>
<a id="trace-14303"></a>
<a id="trace-14321"></a>
<a id="trace-14343"></a>
<a id="trace-14358"></a>
<a id="trace-14373"></a>
<a id="trace-14391"></a>
<a id="trace-14401"></a>
<a id="trace-14414"></a>
<a id="trace-14423"></a>
<a id="trace-14504"></a>
<a id="trace-14511"></a>
<a id="trace-14520"></a>
<a id="trace-14531"></a>
<a id="trace-14541"></a>
<a id="trace-14549"></a>
<a id="trace-14568"></a>
<a id="trace-14576"></a>
<a id="trace-14984"></a>
<a id="trace-14992"></a>
<a id="trace-15074"></a>
<a id="trace-15098"></a>
<a id="trace-15106"></a>
<a id="trace-15116"></a>
<a id="trace-15136"></a>
<a id="trace-15143"></a>
<a id="trace-15160"></a>
<a id="trace-15171"></a>
<a id="trace-15175"></a>
<a id="trace-15180"></a>
<a id="trace-15245"></a>
<a id="trace-15254"></a>
<a id="trace-15263"></a>
<a id="trace-15370"></a>
<a id="trace-15380"></a>
<a id="trace-15387"></a>
<a id="trace-15645"></a>
<a id="trace-15658"></a>
<a id="trace-15675"></a>
<a id="trace-15679"></a>
<a id="trace-15755"></a>
<a id="trace-15767"></a>
<a id="trace-15775"></a>
<a id="trace-15786"></a>
<a id="trace-15795"></a>
<a id="trace-15802"></a>
<a id="trace-15814"></a>
<a id="trace-15822"></a>
<a id="trace-15829"></a>
<a id="trace-15835"></a>
<a id="trace-15903"></a>
<a id="trace-15908"></a>
<a id="trace-15915"></a>
<a id="trace-15924"></a>
<a id="trace-15932"></a>
<a id="trace-15941"></a>
<a id="trace-15949"></a>
<a id="trace-15954"></a>
<a id="trace-15966"></a>
<a id="trace-15970"></a>
<a id="trace-16037"></a>
<a id="trace-16042"></a>
<a id="trace-16050"></a>
<a id="trace-16057"></a>
<a id="trace-16065"></a>
<a id="trace-16073"></a>
<a id="trace-16080"></a>
<a id="trace-16085"></a>
<a id="trace-16094"></a>
<a id="trace-16098"></a>
<a id="trace-16164"></a>
<a id="trace-16171"></a>
<a id="trace-16179"></a>
<a id="trace-16185"></a>
<a id="trace-16193"></a>
<a id="trace-16200"></a>
<a id="trace-16207"></a>
<a id="trace-16212"></a>
<a id="trace-16220"></a>
<a id="trace-16224"></a>
<a id="trace-16293"></a>
<a id="trace-16301"></a>
<a id="trace-16308"></a>
<a id="trace-16318"></a>
<a id="trace-16327"></a>
<a id="trace-16334"></a>
<a id="trace-16343"></a>
<a id="trace-16349"></a>
<a id="trace-16363"></a>
<a id="trace-16366"></a>
<a id="trace-16434"></a>
<a id="trace-16440"></a>
<a id="trace-16449"></a>
<a id="trace-16453"></a>
<a id="trace-16462"></a>
<a id="trace-16468"></a>
<a id="trace-16475"></a>
<a id="trace-16482"></a>
<a id="trace-16491"></a>
<a id="trace-16496"></a>
<a id="trace-16561"></a>
<a id="trace-16565"></a>
<a id="trace-16571"></a>
<a id="trace-16578"></a>
<a id="trace-16593"></a>
<a id="trace-16604"></a>
<a id="trace-16613"></a>
<a id="trace-16619"></a>
<a id="trace-16627"></a>
<a id="trace-16631"></a>
<a id="trace-16696"></a>
<a id="trace-16703"></a>
<a id="trace-16709"></a>
- 1.60s–136.30s (×269), actor 37, squad 4 (trace 451): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46068843845816887, 'next_transition': 471}.
<a id="trace-664"></a>
<a id="trace-729"></a>
<a id="trace-749"></a>
<a id="trace-773"></a>
<a id="trace-792"></a>
<a id="trace-818"></a>
<a id="trace-902"></a>
<a id="trace-914"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 664): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 581. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.642149446166689, 'next_transition': 729}.
<a id="trace-922"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 922): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 824. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3787591084459744, 'next_transition': 1233}.
<a id="trace-1233"></a>
<a id="trace-1258"></a>
<a id="trace-1286"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 1233): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 829. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5538400222104307, 'next_transition': 1258}.
<a id="trace-154"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 154): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7332496443642479, 'next_transition': 1314}.
<a id="trace-1290"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1290): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1290. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7332496443642479, 'next_transition': 1314}.
<a id="trace-1291"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1291): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1291. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7332496443642479, 'next_transition': 1314}.
<a id="trace-1314"></a>
<a id="trace-1337"></a>
<a id="trace-1364"></a>
<a id="trace-1494"></a>
<a id="trace-1537"></a>
<a id="trace-1597"></a>
<a id="trace-1638"></a>
<a id="trace-1660"></a>
<a id="trace-1673"></a>
<a id="trace-1758"></a>
<a id="trace-1785"></a>
<a id="trace-1808"></a>
<a id="trace-1830"></a>
<a id="trace-1839"></a>
<a id="trace-1848"></a>
<a id="trace-1862"></a>
- 12.70s–23.75s (×16), actor 5, squad 0 (trace 1314): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1291. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8449932111497116, 'next_transition': 1337}.
<a id="trace-1872"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1872): traveling overwatch. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-1873"></a>
- 24.05s–24.05s (×1), actor 0, squad 0 (trace 1873): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 1684. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2198}.
<a id="trace-2198"></a>
<a id="trace-2305"></a>
<a id="trace-2324"></a>
<a id="trace-2346"></a>
<a id="trace-2374"></a>
<a id="trace-2396"></a>
<a id="trace-2408"></a>
<a id="trace-2425"></a>
<a id="trace-2440"></a>
<a id="trace-2557"></a>
<a id="trace-2622"></a>
<a id="trace-2643"></a>
- 24.25s–33.75s (×12), actor 5, squad 0 (trace 2198): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1689. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6656275851801444, 'next_transition': 2305}.
<a id="trace-2648"></a>
- 33.85s–33.85s (×1), actor 0, squad 0 (trace 2648): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2473. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0993786982532321, 'next_transition': 2907}.
<a id="trace-2907"></a>
<a id="trace-2916"></a>
- 35.25s–35.75s (×2), actor 5, squad 0 (trace 2907): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2833. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2850002430850507, 'next_transition': 2916}.
<a id="trace-2929"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2929): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2828. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3323}.
<a id="trace-2930"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2930): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2828. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3323}.
<a id="trace-2931"></a>
- 36.10s–36.10s (×1), actor 0, squad 0 (trace 2931): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2828. Next observer evidence: {'until': 36.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14250579127544943, 'next_transition': 3323}.
<a id="trace-3323"></a>
<a id="trace-3342"></a>
- 36.25s–36.75s (×2), actor 5, squad 0 (trace 3323): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2833. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2958921284570156, 'next_transition': 3342}.
<a id="trace-3356"></a>
- 37.10s–37.10s (×1), actor 0, squad 0 (trace 3356): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2828. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18647668922850763, 'next_transition': 3770}.
<a id="trace-3770"></a>
<a id="trace-3805"></a>
- 37.25s–37.75s (×2), actor 5, squad 0 (trace 3770): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2833. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2186398302171461, 'next_transition': 3805}.
<a id="trace-3847"></a>
- 38.60s–38.60s (×1), actor 0, squad 0 (trace 3847): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 2828. Next observer evidence: None.
<a id="trace-4269"></a>
<a id="trace-4292"></a>
<a id="trace-4328"></a>
<a id="trace-4444"></a>
<a id="trace-4473"></a>
<a id="trace-4494"></a>
- 38.75s–41.25s (×6), actor 5, squad 0 (trace 4269): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2833. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4275019829747029, 'next_transition': 4292}.
<a id="trace-4543"></a>
- 42.20s–42.20s (×1), actor 0, squad 0 (trace 4543): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 4355. Next observer evidence: None.
<a id="trace-4549"></a>
<a id="trace-4560"></a>
<a id="trace-4579"></a>
<a id="trace-4611"></a>
<a id="trace-4690"></a>
<a id="trace-4697"></a>
- 42.25s–45.75s (×6), actor 5, squad 0 (trace 4549): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 4360. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12750658787514646, 'next_transition': 4560}.
<a id="trace-4701"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 4701): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 4618. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7694}.
<a id="trace-7374"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 7374): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 45.00s, trace 4618. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7694}.
<a id="trace-7375"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 7375): MoveTactically. Knowledge: actor memory at 45.00s, trace 4618. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7694}.
<a id="trace-7376"></a>
- 46.10s–46.10s (×1), actor 0, squad 0 (trace 7376): contact cover complete: assessment resumes closure. Knowledge: actor memory at 45.00s, trace 4618. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7694}.
<a id="trace-7694"></a>
<a id="trace-7705"></a>
<a id="trace-7727"></a>
<a id="trace-7787"></a>
<a id="trace-7808"></a>
<a id="trace-7825"></a>
<a id="trace-7917"></a>
<a id="trace-7932"></a>
<a id="trace-7946"></a>
<a id="trace-7970"></a>
<a id="trace-8000"></a>
<a id="trace-8021"></a>
<a id="trace-8052"></a>
- 46.25s–53.25s (×13), actor 5, squad 0 (trace 7694): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 4623. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7705}.
<a id="trace-607"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (events line 607): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8087"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 8087): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.306557 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 8087. Next observer evidence: None.
<a id="trace-8088"></a>
- 53.65s–53.65s (×1), actor 5, squad 0 (trace 8088): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.306557 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 53.65s, trace 8088. Next observer evidence: None.
<a id="trace-8104"></a>
- 53.80s–53.80s (×1), actor 0, squad 0 (trace 8104): NeedSupport. Knowledge: actor memory at 50.00s, trace 7840. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3156872586812447, 'next_transition': 8126}.
<a id="trace-8126"></a>
<a id="trace-8164"></a>
<a id="trace-8263"></a>
<a id="trace-8280"></a>
<a id="trace-8313"></a>
<a id="trace-8395"></a>
<a id="trace-8439"></a>
<a id="trace-8488"></a>
<a id="trace-8540"></a>
- 54.25s–58.75s (×9), actor 5, squad 0 (trace 8126): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.65s, trace 8088. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9097196422027692, 'next_transition': 8164}.
<a id="trace-8569"></a>
- 59.15s–59.15s (×1), actor 0, squad 0 (trace 8569): ReactToContact: cover and return fire. Knowledge: actor memory at 55.00s, trace 8181. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2603761037148553, 'next_transition': 9227}.
<a id="trace-8570"></a>
- 59.15s–59.15s (×1), actor 0, squad 0 (trace 8570): received platoon directive. Knowledge: actor memory at 55.00s, trace 8181. Next observer evidence: {'until': 59.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2603761037148553, 'next_transition': 9227}.
<a id="trace-9227"></a>
<a id="trace-9331"></a>
<a id="trace-9421"></a>
<a id="trace-9433"></a>
<a id="trace-9461"></a>
<a id="trace-9488"></a>
- 59.75s–62.75s (×6), actor 5, squad 0 (trace 9227): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 8186. Next observer evidence: {'until': 60.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16148806073952787, 'next_transition': 9331}.
<a id="trace-9491"></a>
- 62.75s–62.75s (×1), actor 0, squad 0 (trace 9491): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 60.00s, trace 9244. Next observer evidence: {'until': 63.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.47955806766015846, 'next_transition': 9521}.
<a id="trace-9521"></a>
<a id="trace-9548"></a>
<a id="trace-9577"></a>
<a id="trace-9596"></a>
<a id="trace-9685"></a>
<a id="trace-9704"></a>
<a id="trace-9716"></a>
<a id="trace-9737"></a>
<a id="trace-9754"></a>
<a id="trace-9782"></a>
<a id="trace-9802"></a>
<a id="trace-9819"></a>
<a id="trace-9828"></a>
<a id="trace-9835"></a>
- 63.25s–69.75s (×14), actor 5, squad 0 (trace 9521): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9249. Next observer evidence: {'until': 63.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.38015920672892994, 'next_transition': 9548}.
<a id="trace-9841"></a>
- 69.90s–69.90s (×1), actor 0, squad 0 (trace 9841): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 65.00s, trace 9613. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13415}.
<a id="trace-13117"></a>
- 69.90s–69.90s (×1), actor 0, squad 0 (trace 13117): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 65.00s, trace 9613. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13415}.
<a id="trace-13118"></a>
- 69.90s–69.90s (×1), actor 0, squad 0 (trace 13118): MoveTactically. Knowledge: actor memory at 65.00s, trace 9613. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13415}.
<a id="trace-13119"></a>
- 69.90s–69.90s (×1), actor 0, squad 0 (trace 13119): contact cover complete: assessment resumes closure. Knowledge: actor memory at 65.00s, trace 9613. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13415}.
<a id="trace-13415"></a>
<a id="trace-13432"></a>
<a id="trace-13456"></a>
<a id="trace-13466"></a>
<a id="trace-13482"></a>
<a id="trace-13511"></a>
<a id="trace-13570"></a>
<a id="trace-13673"></a>
<a id="trace-13716"></a>
<a id="trace-13738"></a>
<a id="trace-13775"></a>
- 70.25s–77.25s (×11), actor 5, squad 0 (trace 13415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 13345. Next observer evidence: {'until': 70.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13432}.
<a id="trace-13778"></a>
- 77.25s–77.25s (×1), actor 0, squad 0 (trace 13778): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 75.00s, trace 13586. Next observer evidence: {'until': 77.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2570176240730019, 'next_transition': 14119}.
<a id="trace-14119"></a>
<a id="trace-14134"></a>
<a id="trace-14157"></a>
<a id="trace-14185"></a>
<a id="trace-14192"></a>
<a id="trace-14278"></a>
<a id="trace-14301"></a>
<a id="trace-14341"></a>
<a id="trace-14356"></a>
<a id="trace-14371"></a>
<a id="trace-14412"></a>
<a id="trace-14421"></a>
<a id="trace-14502"></a>
<a id="trace-14509"></a>
<a id="trace-14518"></a>
<a id="trace-14539"></a>
<a id="trace-14547"></a>
- 77.75s–87.75s (×17), actor 5, squad 0 (trace 14119): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 13591. Next observer evidence: {'until': 78.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.6373712568788343, 'next_transition': 14134}.
<a id="trace-14560"></a>
- 88.20s–88.20s (×1), actor 1, squad 0 (trace 14560): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 85.00s, trace 14431. Next observer evidence: None.
<a id="trace-14566"></a>
<a id="trace-14574"></a>
- 88.25s–88.75s (×2), actor 5, squad 0 (trace 14566): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 14434. Next observer evidence: {'until': 88.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.07560000734861806, 'next_transition': 14574}.
<a id="trace-14584"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 14584): Reorganise: completed/failed drill. Knowledge: actor memory at 85.00s, trace 14431. Next observer evidence: None.
<a id="trace-14589"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 14589): MoveTactically. Knowledge: actor memory at 85.00s, trace 14431. Next observer evidence: None.
<a id="trace-14590"></a>
- 89.20s–89.20s (×1), actor 1, squad 0 (trace 14590): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 85.00s, trace 14431. Next observer evidence: None.
<a id="trace-14982"></a>
<a id="trace-14990"></a>
<a id="trace-15072"></a>
<a id="trace-15096"></a>
<a id="trace-15104"></a>
<a id="trace-15114"></a>
- 89.25s–91.75s (×6), actor 5, squad 0 (trace 14982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 14434. Next observer evidence: {'until': 89.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.24637593780296782, 'next_transition': 14990}.
<a id="trace-15264"></a>
- 96.55s–96.55s (×1), actor 3, squad 0 (trace 15264): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 15181. Next observer evidence: {'until': 97.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.3797521690321592, 'next_transition': 15399}.
<a id="trace-15366"></a>
- 96.55s–96.55s (×1), actor 3, squad 0 (trace 15366): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 95.00s, trace 15181. Next observer evidence: {'until': 97.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 1.3797521690321592, 'next_transition': 15399}.
<a id="trace-15399"></a>
- 97.95s–97.95s (×1), actor 3, squad 0 (trace 15399): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 95.00s, trace 15181. Next observer evidence: {'until': 102.6, 'shots': 9, 'casualties': 0, 'mean_displacement': 2.5405591233070597, 'next_transition': 15800}.
<a id="trace-15400"></a>
- 97.95s–97.95s (×1), actor 3, squad 0 (trace 15400): rearward bound: one stationary suppressing element. Knowledge: actor memory at 95.00s, trace 15181. Next observer evidence: {'until': 102.6, 'shots': 9, 'casualties': 0, 'mean_displacement': 2.5405591233070597, 'next_transition': 15800}.
<a id="trace-15800"></a>
<a id="trace-15812"></a>
<a id="trace-15820"></a>
<a id="trace-15827"></a>
<a id="trace-15833"></a>
<a id="trace-15901"></a>
<a id="trace-15906"></a>
<a id="trace-15913"></a>
<a id="trace-15922"></a>
<a id="trace-15930"></a>
<a id="trace-15939"></a>
<a id="trace-15947"></a>
<a id="trace-15952"></a>
<a id="trace-15964"></a>
<a id="trace-15968"></a>
<a id="trace-16035"></a>
<a id="trace-16040"></a>
<a id="trace-16048"></a>
<a id="trace-16055"></a>
<a id="trace-16063"></a>
<a id="trace-16071"></a>
<a id="trace-16078"></a>
<a id="trace-16083"></a>
<a id="trace-16092"></a>
<a id="trace-16096"></a>
<a id="trace-16162"></a>
<a id="trace-16169"></a>
<a id="trace-16177"></a>
<a id="trace-16191"></a>
<a id="trace-16205"></a>
<a id="trace-16210"></a>
<a id="trace-16218"></a>
<a id="trace-16222"></a>
<a id="trace-16291"></a>
<a id="trace-16299"></a>
<a id="trace-16306"></a>
<a id="trace-16316"></a>
<a id="trace-16325"></a>
<a id="trace-16332"></a>
- 102.75s–122.75s (×39), actor 5, squad 0 (trace 15800): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 15684. Next observer evidence: {'until': 103.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15812}.
<a id="trace-1291"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (events line 1291): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2467914132136691, 'next_transition': 16347}.
<a id="trace-16335"></a>
- 122.80s–122.80s (×1), actor 5, squad 0 (trace 16335): renew committed intent (75 s lifetime). Knowledge: actor memory at 122.80s, trace 16335. Next observer evidence: {'until': 123.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2467914132136691, 'next_transition': 16347}.
<a id="trace-16347"></a>
<a id="trace-16361"></a>
<a id="trace-16432"></a>
<a id="trace-16438"></a>
<a id="trace-16446"></a>
<a id="trace-16459"></a>
<a id="trace-16472"></a>
<a id="trace-16489"></a>
<a id="trace-16559"></a>
<a id="trace-16569"></a>
<a id="trace-16610"></a>
<a id="trace-16797"></a>
<a id="trace-16805"></a>
<a id="trace-16814"></a>
<a id="trace-16885"></a>
<a id="trace-16892"></a>
<a id="trace-16902"></a>
<a id="trace-16910"></a>
<a id="trace-16918"></a>
<a id="trace-16981"></a>
<a id="trace-16990"></a>
<a id="trace-17000"></a>
<a id="trace-17007"></a>
<a id="trace-17080"></a>
<a id="trace-17093"></a>
<a id="trace-17101"></a>
<a id="trace-17110"></a>
<a id="trace-17178"></a>
<a id="trace-17184"></a>
<a id="trace-17192"></a>
<a id="trace-17200"></a>
<a id="trace-17263"></a>
<a id="trace-17269"></a>
<a id="trace-17275"></a>
<a id="trace-17283"></a>
<a id="trace-17352"></a>
<a id="trace-17381"></a>
<a id="trace-17442"></a>
<a id="trace-17462"></a>
<a id="trace-17469"></a>
<a id="trace-17528"></a>
<a id="trace-17533"></a>
<a id="trace-17538"></a>
<a id="trace-17553"></a>
<a id="trace-17613"></a>
<a id="trace-17617"></a>
<a id="trace-17623"></a>
<a id="trace-17630"></a>
<a id="trace-17687"></a>
<a id="trace-17692"></a>
- 123.75s–191.30s (×50), actor 5, squad 0 (trace 16347): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 122.80s, trace 16335. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17996966326578545, 'next_transition': 16361}.
<a id="trace-16792"></a>
<a id="trace-16799"></a>
<a id="trace-16807"></a>
<a id="trace-16816"></a>
<a id="trace-16824"></a>
<a id="trace-16887"></a>
<a id="trace-16894"></a>
<a id="trace-16904"></a>
<a id="trace-16912"></a>
<a id="trace-16920"></a>
<a id="trace-16983"></a>
<a id="trace-16992"></a>
<a id="trace-17002"></a>
<a id="trace-17009"></a>
<a id="trace-17018"></a>
<a id="trace-17082"></a>
<a id="trace-17088"></a>
<a id="trace-17095"></a>
<a id="trace-17180"></a>
<a id="trace-17186"></a>
<a id="trace-17194"></a>
<a id="trace-17202"></a>
<a id="trace-17265"></a>
<a id="trace-17271"></a>
<a id="trace-17277"></a>
<a id="trace-17285"></a>
<a id="trace-17293"></a>
<a id="trace-17354"></a>
<a id="trace-17360"></a>
<a id="trace-17367"></a>
<a id="trace-17373"></a>
<a id="trace-17383"></a>
<a id="trace-17444"></a>
<a id="trace-17449"></a>
<a id="trace-17455"></a>
- 140.30s–177.30s (×35), actor 38, squad 4 (trace 16792): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=38. Knowledge: actor memory at 140.00s, trace 16739. Next observer evidence: {'until': 141.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16799}.
<a id="trace-1442"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (events line 1442): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17695"></a>
- 191.85s–191.85s (×1), actor 5, squad 0 (trace 17695): renew committed intent (75 s lifetime). Knowledge: actor memory at 191.85s, trace 17695. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17698}.
<a id="trace-17698"></a>
<a id="trace-17767"></a>
<a id="trace-17771"></a>
<a id="trace-17775"></a>
- 192.30s–197.30s (×4), actor 5, squad 0 (trace 17698): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 191.85s, trace 17695. Next observer evidence: {'until': 195.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17767}.
<a id="trace-17781"></a>
- 198.35s–198.35s (×1), actor 4, squad 0 (trace 17781): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 195.00s, trace 17712. Next observer evidence: {'until': 199.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17788}.
<a id="trace-17788"></a>
<a id="trace-17845"></a>
<a id="trace-17857"></a>
<a id="trace-17865"></a>
<a id="trace-17926"></a>
<a id="trace-17931"></a>
<a id="trace-17938"></a>
- 199.30s–208.30s (×7), actor 5, squad 0 (trace 17788): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 17713. Next observer evidence: {'until': 200.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17845}.

## Net delivery

141 matched order/radio deliveries; 93 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.384s; maximum 5.400s. Message-level evidence is in the companion JSON.

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
- 12.25s leader 5, trace 1290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 25.00s leader 0, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 2475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 2476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 2483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 2484: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 2830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 2831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2836: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2837: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 2838: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 2839: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2840: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2841: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2842: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2843: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 4355: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 4356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 4357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 4358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 4359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 4360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 4361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 4362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 4363: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 4364: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 4365: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 4366: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 4367: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 4368: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 4369: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 4370: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 4618: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 4619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 4620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 4621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 4622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 4623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 4624: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 4625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 4626: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 4627: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 4628: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 4629: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 4630: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 4631: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 4632: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 4633: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 7840: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7845: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7846: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7847: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7848: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7849: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7850: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7851: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7852: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7853: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7854: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7855: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 8087: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.65s leader 5, trace 8088: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 8181: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 8182: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 8183: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 8184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 8185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 8186: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 8187: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 8188: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 8189: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 8190: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 8191: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 8192: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 8193: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 8194: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 8195: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 8196: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9244: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9245: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9246: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9249: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9250: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9251: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9252: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9253: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9254: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9255: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9256: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9257: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9258: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9259: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 9613: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 9614: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 9615: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 9616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 9617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 9618: estimate 9.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 9619: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 9620: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 9621: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 9622: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 9623: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 9624: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 9625: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 9626: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 9627: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 9628: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 13340: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 13341: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 13342: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 13343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 13344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 13345: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 13346: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 13347: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 13348: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 13349: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 13350: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 13351: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 13352: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 13353: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 13354: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 13586: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13587: estimate 9.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 13588: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13590: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13591: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13592: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13593: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13594: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13595: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13596: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13597: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13598: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13599: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13600: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 14201: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 14202: estimate 9.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 14203: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 14204: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 14205: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 14206: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 14207: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 14208: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 14209: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 14210: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 14211: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 14212: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 14213: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 14214: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 14215: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 14430: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 14431: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 14432: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 14433: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 14434: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 14435: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 14436: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 14437: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 14438: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 14439: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 14440: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 14441: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 14442: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 14443: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14999: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 15000: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 15001: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 15002: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 15003: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 15004: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 15005: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 15006: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 15007: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 15008: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 15009: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 15010: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 15011: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 15181: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 15182: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 15183: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 15184: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 15185: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 15186: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 15187: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 15188: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 15189: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 15190: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 15191: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 15192: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 15682: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 15683: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 15684: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 15685: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 15686: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 15687: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 15688: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 15689: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 15690: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 15691: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 15692: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15836: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15837: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15838: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15839: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15840: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15841: estimate 8.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15842: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15843: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15844: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15845: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15971: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15972: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15973: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15974: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15975: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15976: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15977: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15978: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15979: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15980: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16099: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16100: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16101: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16102: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16103: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16104: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16105: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16106: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16107: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16108: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16225: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16226: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16227: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16228: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16229: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16230: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16231: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16232: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16233: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16234: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 122.80s leader 5, trace 16335: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16368: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16369: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16370: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16371: estimate 8.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16372: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16373: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16374: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16375: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16376: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16377: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 16497: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16498: estimate 4.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16499: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16500: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16501: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16502: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16503: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16504: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 16633: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16634: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16635: estimate 9.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 16636: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16637: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16638: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16639: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16640: estimate 8.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 16734: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 16735: estimate 9.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 16736: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 16737: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 16738: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 16739: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 16826: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 16827: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 16828: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 16829: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 16830: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 16831: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 16922: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 16923: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 16924: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 16925: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 16926: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 16927: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17022: estimate 8.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17023: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17024: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17025: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17026: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17027: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17112: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17113: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17114: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17115: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17116: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 17205: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 17206: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 17207: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 17208: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 17209: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 17295: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 17296: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 17297: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 17298: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 17299: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 17386: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 17387: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 17388: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 17389: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 17390: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 17472: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 17473: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 17474: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 17475: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 17554: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 17555: estimate 7.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 17556: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 17557: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 17632: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 17633: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 17634: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 17635: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 191.85s leader 5, trace 17695: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 17712: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 17713: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 17714: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 17715: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17790: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17791: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 17792: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17793: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17867: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17868: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 17869: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17870: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Orin killed in action
- 1: Soren incapacitated
- 1: Vale incapacitated
- 1: Rook killed in action
- 1: Pike incapacitated
- 1: Flint killed in action
- 1: Moss killed in action
- 1: Voss killed in action
- 1: Ash incapacitated
- 1: Lark incapacitated
- 1: Kest incapacitated
- 1: Bram killed in action
- 1: Holt incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
