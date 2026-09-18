# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/15/109/good-azure/battle-109-1789673979967821176`

## Battle summary

**Ember** · 360 s · 440 shots.

### Turning points

- 23.0s, squad 4: contact (events line 292). First recorded contact.
- 45.2s, squad 0: help call ([trace 15438](#trace-15438)). 46.9s, squad 1: answered a neighbour with support by fire.
- 46.9s, squad 1: help answer ([trace 15682](#trace-15682)). 61.4s, squad 1: took cover and returned fire.
- 48.9s, squad 1: help call ([trace 18516](#trace-18516)). 52.2s, squad 0: answered a neighbour with support by fire.
- 52.2s, squad 0: help answer ([trace 18774](#trace-18774)). 53.2s, squad 0: took cover and returned fire.
- 66.6s, squad 1: withdrawal ([trace 26934](#trace-26934)). 115.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 70.7s, squad 0: withdrawal ([trace 27298](#trace-27298)). No completion observed before termination.
- 123.5s, squad 1: withdrawal ([trace 29525](#trace-29525)). 169.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 264.0s, squad 1: withdrawal ([trace 35462](#trace-35462)). 287.6s, squad 1: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 4 further drill types; no completed objective recorded; 58 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 4 further drill types; withdrew; 38 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 182 shots, 3/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 162 shots, 1/4 lost.

### Decisions and attribution

At 55.9s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 21205](#trace-21205)), followed by 3 shots and 1 own casualties; estimate 14.1 against 9 distinct squad-reported contacts; At 53.4s, squad 1 chose HelpSquad: received need unanswered for one report round trip ([trace 20925](#trace-20925)), followed by 2 shots and 1 own casualties; estimate 14.1 against 9 distinct squad-reported contacts; At 26.4s, squad 1 chose took cover and returned fire ([trace 3586](#trace-3586)), followed by 6 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 831](#trace-831)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9294795499154214, 'next_transition': 850}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 833](#trace-833)). Following evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1004}.

### Communication

203 matched deliveries (mean 0.41s, max 2.40s); 489 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 23.00s, squad 4, contact, evidence events line 292: First recorded contact; .
- 45.25s, squad 0, help call, evidence 15438: NeedSupport; 46.9s, squad 1: answered a neighbour with support by fire.
- 46.85s, squad 1, help answer, evidence 15682: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 61.4s, squad 1: took cover and returned fire.
- 48.90s, squad 1, help call, evidence 18516: NeedSupport; 52.2s, squad 0: answered a neighbour with support by fire.
- 52.15s, squad 0, help answer, evidence 18774: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 53.2s, squad 0: took cover and returned fire.
- 66.60s, squad 1, withdrawal, evidence 26934: BreakContact: believed ratio at least two without superiority; 115.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 70.65s, squad 0, withdrawal, evidence 27298: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 123.50s, squad 1, withdrawal, evidence 29525: Withdraw to received rally; 169.2s, squad 1: contact broken or rally reached: Occupy and report strength.
- 264.00s, squad 1, withdrawal, evidence 35462: BreakContact: believed ratio at least two without superiority; 287.6s, squad 1: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870346104890876, 'next_transition': 702}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870346104890876, 'next_transition': 702}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.870346104890876, 'next_transition': 702}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.54449005858466, 'next_transition': 105}.
<a id="trace-702"></a>
<a id="trace-704"></a>
<a id="trace-731"></a>
<a id="trace-733"></a>
<a id="trace-772"></a>
<a id="trace-774"></a>
<a id="trace-795"></a>
<a id="trace-797"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600170955451082, 'next_transition': 731}.
<a id="trace-104"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 104): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9294795499154214, 'next_transition': 850}.
<a id="trace-105"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 105): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1004}.
<a id="trace-831"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 831): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 831. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9294795499154214, 'next_transition': 850}.
<a id="trace-832"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 832): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 832. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9294795499154214, 'next_transition': 850}.
<a id="trace-833"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 833): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 833. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1004}.
<a id="trace-834"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 834): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 5.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.054271614935352, 'next_transition': 1004}.
<a id="trace-850"></a>
<a id="trace-852"></a>
<a id="trace-883"></a>
<a id="trace-885"></a>
<a id="trace-964"></a>
<a id="trace-966"></a>
<a id="trace-993"></a>
<a id="trace-995"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 850): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 834. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9335237009910146, 'next_transition': 883}.
<a id="trace-997"></a>
<a id="trace-1550"></a>
<a id="trace-1602"></a>
<a id="trace-1604"></a>
<a id="trace-1645"></a>
<a id="trace-1647"></a>
<a id="trace-1730"></a>
<a id="trace-1732"></a>
<a id="trace-1800"></a>
<a id="trace-1802"></a>
<a id="trace-1825"></a>
<a id="trace-1827"></a>
<a id="trace-1856"></a>
<a id="trace-1858"></a>
<a id="trace-1948"></a>
<a id="trace-1950"></a>
<a id="trace-1979"></a>
<a id="trace-1981"></a>
<a id="trace-2002"></a>
<a id="trace-2004"></a>
<a id="trace-2040"></a>
<a id="trace-2042"></a>
<a id="trace-2105"></a>
<a id="trace-2107"></a>
<a id="trace-2128"></a>
<a id="trace-2130"></a>
<a id="trace-2158"></a>
<a id="trace-2160"></a>
<a id="trace-2214"></a>
<a id="trace-2216"></a>
<a id="trace-2301"></a>
<a id="trace-2303"></a>
<a id="trace-2332"></a>
<a id="trace-2334"></a>
<a id="trace-2600"></a>
<a id="trace-2602"></a>
<a id="trace-2639"></a>
<a id="trace-2641"></a>
<a id="trace-2666"></a>
<a id="trace-2668"></a>
<a id="trace-3001"></a>
<a id="trace-3003"></a>
<a id="trace-3030"></a>
<a id="trace-3032"></a>
<a id="trace-3082"></a>
<a id="trace-3084"></a>
<a id="trace-3179"></a>
<a id="trace-3181"></a>
<a id="trace-3206"></a>
<a id="trace-3208"></a>
<a id="trace-3235"></a>
<a id="trace-3237"></a>
<a id="trace-3263"></a>
<a id="trace-3265"></a>
<a id="trace-3306"></a>
<a id="trace-3308"></a>
<a id="trace-3327"></a>
<a id="trace-3329"></a>
<a id="trace-3362"></a>
<a id="trace-3364"></a>
<a id="trace-3387"></a>
<a id="trace-3389"></a>
<a id="trace-3446"></a>
<a id="trace-3448"></a>
<a id="trace-3533"></a>
<a id="trace-3535"></a>
<a id="trace-3549"></a>
<a id="trace-3551"></a>
<a id="trace-3582"></a>
<a id="trace-3584"></a>
<a id="trace-4200"></a>
<a id="trace-4202"></a>
<a id="trace-4563"></a>
<a id="trace-4565"></a>
<a id="trace-4604"></a>
<a id="trace-4606"></a>
<a id="trace-4664"></a>
<a id="trace-4666"></a>
<a id="trace-4735"></a>
<a id="trace-4737"></a>
<a id="trace-4782"></a>
<a id="trace-4784"></a>
<a id="trace-8111"></a>
<a id="trace-8113"></a>
<a id="trace-8139"></a>
<a id="trace-8141"></a>
<a id="trace-8178"></a>
<a id="trace-8180"></a>
<a id="trace-8212"></a>
<a id="trace-8214"></a>
<a id="trace-8291"></a>
<a id="trace-8293"></a>
<a id="trace-8333"></a>
<a id="trace-8335"></a>
<a id="trace-8392"></a>
<a id="trace-8394"></a>
<a id="trace-8420"></a>
<a id="trace-8422"></a>
<a id="trace-8729"></a>
<a id="trace-8731"></a>
<a id="trace-8757"></a>
<a id="trace-8759"></a>
<a id="trace-8865"></a>
<a id="trace-8867"></a>
<a id="trace-8885"></a>
<a id="trace-8887"></a>
<a id="trace-8962"></a>
<a id="trace-8964"></a>
<a id="trace-8997"></a>
<a id="trace-8999"></a>
<a id="trace-9017"></a>
<a id="trace-9019"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9058"></a>
<a id="trace-9060"></a>
<a id="trace-11780"></a>
<a id="trace-11782"></a>
<a id="trace-11811"></a>
<a id="trace-11813"></a>
<a id="trace-11919"></a>
<a id="trace-11921"></a>
<a id="trace-11944"></a>
<a id="trace-11946"></a>
<a id="trace-14963"></a>
<a id="trace-14965"></a>
<a id="trace-15002"></a>
<a id="trace-15004"></a>
<a id="trace-15058"></a>
<a id="trace-15060"></a>
<a id="trace-15106"></a>
<a id="trace-15108"></a>
<a id="trace-15152"></a>
<a id="trace-15154"></a>
<a id="trace-15222"></a>
<a id="trace-15224"></a>
<a id="trace-15295"></a>
<a id="trace-15297"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15506"></a>
<a id="trace-15508"></a>
<a id="trace-15581"></a>
<a id="trace-15583"></a>
<a id="trace-15667"></a>
<a id="trace-15669"></a>
<a id="trace-18326"></a>
<a id="trace-18328"></a>
<a id="trace-18396"></a>
<a id="trace-18398"></a>
<a id="trace-18461"></a>
<a id="trace-18463"></a>
<a id="trace-18672"></a>
<a id="trace-18674"></a>
<a id="trace-18701"></a>
<a id="trace-18703"></a>
<a id="trace-18738"></a>
<a id="trace-18740"></a>
<a id="trace-18758"></a>
<a id="trace-18760"></a>
<a id="trace-20517"></a>
<a id="trace-20519"></a>
<a id="trace-20916"></a>
<a id="trace-20918"></a>
<a id="trace-20960"></a>
<a id="trace-20962"></a>
<a id="trace-21061"></a>
<a id="trace-21063"></a>
<a id="trace-21154"></a>
<a id="trace-21156"></a>
<a id="trace-21193"></a>
<a id="trace-21195"></a>
<a id="trace-21242"></a>
<a id="trace-21244"></a>
<a id="trace-21319"></a>
<a id="trace-21321"></a>
<a id="trace-21338"></a>
<a id="trace-21340"></a>
<a id="trace-21368"></a>
<a id="trace-21370"></a>
<a id="trace-21407"></a>
<a id="trace-21409"></a>
<a id="trace-21439"></a>
<a id="trace-21441"></a>
<a id="trace-21460"></a>
<a id="trace-21462"></a>
<a id="trace-21551"></a>
<a id="trace-21553"></a>
<a id="trace-21608"></a>
<a id="trace-21610"></a>
<a id="trace-21835"></a>
<a id="trace-21837"></a>
<a id="trace-24844"></a>
<a id="trace-24846"></a>
<a id="trace-24880"></a>
<a id="trace-24882"></a>
<a id="trace-24934"></a>
<a id="trace-24936"></a>
<a id="trace-24968"></a>
<a id="trace-24970"></a>
<a id="trace-26841"></a>
<a id="trace-26843"></a>
<a id="trace-26897"></a>
<a id="trace-26899"></a>
<a id="trace-26927"></a>
<a id="trace-26929"></a>
<a id="trace-27099"></a>
<a id="trace-27101"></a>
<a id="trace-27134"></a>
<a id="trace-27136"></a>
<a id="trace-27171"></a>
<a id="trace-27173"></a>
<a id="trace-27195"></a>
<a id="trace-27197"></a>
<a id="trace-27216"></a>
<a id="trace-27218"></a>
<a id="trace-27390"></a>
<a id="trace-27392"></a>
<a id="trace-27404"></a>
<a id="trace-27406"></a>
<a id="trace-27426"></a>
<a id="trace-27428"></a>
<a id="trace-27444"></a>
<a id="trace-27446"></a>
<a id="trace-27473"></a>
<a id="trace-27475"></a>
<a id="trace-27482"></a>
<a id="trace-27484"></a>
<a id="trace-27508"></a>
<a id="trace-27510"></a>
<a id="trace-27523"></a>
<a id="trace-27525"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27610"></a>
<a id="trace-27612"></a>
<a id="trace-27637"></a>
<a id="trace-27639"></a>
<a id="trace-27675"></a>
<a id="trace-27677"></a>
<a id="trace-27753"></a>
<a id="trace-27755"></a>
<a id="trace-27784"></a>
<a id="trace-27786"></a>
<a id="trace-27801"></a>
<a id="trace-27803"></a>
<a id="trace-27874"></a>
<a id="trace-27876"></a>
<a id="trace-27893"></a>
<a id="trace-27895"></a>
<a id="trace-27937"></a>
<a id="trace-27939"></a>
<a id="trace-27957"></a>
<a id="trace-27959"></a>
<a id="trace-27971"></a>
<a id="trace-27973"></a>
<a id="trace-27986"></a>
<a id="trace-27988"></a>
<a id="trace-27996"></a>
<a id="trace-27998"></a>
<a id="trace-28096"></a>
<a id="trace-28098"></a>
<a id="trace-28124"></a>
<a id="trace-28126"></a>
<a id="trace-28156"></a>
<a id="trace-28158"></a>
<a id="trace-28171"></a>
<a id="trace-28173"></a>
<a id="trace-28185"></a>
<a id="trace-28187"></a>
<a id="trace-28200"></a>
<a id="trace-28202"></a>
<a id="trace-28222"></a>
<a id="trace-28224"></a>
<a id="trace-28238"></a>
<a id="trace-28240"></a>
<a id="trace-28308"></a>
<a id="trace-28310"></a>
<a id="trace-28338"></a>
<a id="trace-28340"></a>
<a id="trace-28403"></a>
<a id="trace-28405"></a>
<a id="trace-28423"></a>
<a id="trace-28425"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28454"></a>
<a id="trace-28456"></a>
<a id="trace-28544"></a>
<a id="trace-28546"></a>
<a id="trace-28560"></a>
<a id="trace-28562"></a>
<a id="trace-28572"></a>
<a id="trace-28574"></a>
<a id="trace-28584"></a>
<a id="trace-28586"></a>
<a id="trace-28597"></a>
<a id="trace-28599"></a>
<a id="trace-28626"></a>
<a id="trace-28628"></a>
<a id="trace-28696"></a>
<a id="trace-28698"></a>
<a id="trace-28701"></a>
<a id="trace-28703"></a>
<a id="trace-28713"></a>
<a id="trace-28715"></a>
<a id="trace-28822"></a>
<a id="trace-28824"></a>
<a id="trace-28829"></a>
<a id="trace-28831"></a>
<a id="trace-28842"></a>
<a id="trace-28844"></a>
<a id="trace-28857"></a>
<a id="trace-28859"></a>
<a id="trace-28866"></a>
<a id="trace-28868"></a>
<a id="trace-28881"></a>
<a id="trace-28883"></a>
<a id="trace-28890"></a>
<a id="trace-28892"></a>
<a id="trace-28953"></a>
<a id="trace-28955"></a>
<a id="trace-28966"></a>
<a id="trace-28968"></a>
<a id="trace-28977"></a>
<a id="trace-28979"></a>
<a id="trace-28991"></a>
<a id="trace-28993"></a>
<a id="trace-29003"></a>
<a id="trace-29005"></a>
<a id="trace-29012"></a>
<a id="trace-29014"></a>
<a id="trace-29026"></a>
<a id="trace-29028"></a>
<a id="trace-29035"></a>
<a id="trace-29037"></a>
<a id="trace-29094"></a>
<a id="trace-29096"></a>
<a id="trace-29100"></a>
<a id="trace-29102"></a>
<a id="trace-29115"></a>
<a id="trace-29117"></a>
<a id="trace-29125"></a>
<a id="trace-29127"></a>
<a id="trace-29135"></a>
<a id="trace-29137"></a>
<a id="trace-29199"></a>
<a id="trace-29201"></a>
<a id="trace-29211"></a>
<a id="trace-29213"></a>
<a id="trace-29221"></a>
<a id="trace-29223"></a>
<a id="trace-29239"></a>
<a id="trace-29241"></a>
<a id="trace-29308"></a>
<a id="trace-29310"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29333"></a>
<a id="trace-29335"></a>
<a id="trace-29343"></a>
<a id="trace-29345"></a>
<a id="trace-29354"></a>
<a id="trace-29356"></a>
<a id="trace-29389"></a>
<a id="trace-29391"></a>
<a id="trace-29403"></a>
<a id="trace-29405"></a>
<a id="trace-29414"></a>
<a id="trace-29416"></a>
<a id="trace-29474"></a>
<a id="trace-29476"></a>
<a id="trace-29497"></a>
<a id="trace-29499"></a>
<a id="trace-29518"></a>
<a id="trace-29520"></a>
<a id="trace-29592"></a>
<a id="trace-29594"></a>
<a id="trace-29611"></a>
<a id="trace-29613"></a>
<a id="trace-29711"></a>
<a id="trace-29713"></a>
<a id="trace-29723"></a>
<a id="trace-29725"></a>
<a id="trace-29729"></a>
<a id="trace-29731"></a>
<a id="trace-29742"></a>
<a id="trace-29744"></a>
<a id="trace-29749"></a>
<a id="trace-29751"></a>
<a id="trace-29770"></a>
<a id="trace-29772"></a>
<a id="trace-29833"></a>
<a id="trace-29835"></a>
<a id="trace-29839"></a>
<a id="trace-29841"></a>
<a id="trace-29852"></a>
<a id="trace-29854"></a>
<a id="trace-29860"></a>
<a id="trace-29862"></a>
<a id="trace-29873"></a>
<a id="trace-29875"></a>
<a id="trace-29879"></a>
<a id="trace-29881"></a>
<a id="trace-29893"></a>
<a id="trace-29895"></a>
<a id="trace-29899"></a>
<a id="trace-29901"></a>
<a id="trace-29914"></a>
<a id="trace-29916"></a>
<a id="trace-29979"></a>
<a id="trace-29981"></a>
<a id="trace-30042"></a>
<a id="trace-30044"></a>
<a id="trace-30050"></a>
<a id="trace-30052"></a>
<a id="trace-30067"></a>
<a id="trace-30069"></a>
<a id="trace-30075"></a>
<a id="trace-30077"></a>
<a id="trace-30089"></a>
<a id="trace-30091"></a>
<a id="trace-30106"></a>
<a id="trace-30108"></a>
<a id="trace-30112"></a>
<a id="trace-30114"></a>
<a id="trace-30126"></a>
<a id="trace-30128"></a>
<a id="trace-30135"></a>
<a id="trace-30137"></a>
<a id="trace-30198"></a>
<a id="trace-30200"></a>
<a id="trace-30205"></a>
<a id="trace-30207"></a>
<a id="trace-30223"></a>
<a id="trace-30225"></a>
<a id="trace-30235"></a>
<a id="trace-30237"></a>
<a id="trace-30240"></a>
<a id="trace-30242"></a>
<a id="trace-30251"></a>
<a id="trace-30253"></a>
<a id="trace-30257"></a>
<a id="trace-30259"></a>
<a id="trace-30272"></a>
<a id="trace-30274"></a>
<a id="trace-30283"></a>
<a id="trace-30285"></a>
<a id="trace-30362"></a>
<a id="trace-30364"></a>
<a id="trace-30370"></a>
<a id="trace-30372"></a>
<a id="trace-30383"></a>
<a id="trace-30385"></a>
<a id="trace-30388"></a>
<a id="trace-30390"></a>
<a id="trace-30400"></a>
<a id="trace-30402"></a>
<a id="trace-30406"></a>
<a id="trace-30408"></a>
<a id="trace-30421"></a>
<a id="trace-30423"></a>
<a id="trace-30433"></a>
<a id="trace-30435"></a>
<a id="trace-30494"></a>
<a id="trace-30496"></a>
<a id="trace-30559"></a>
<a id="trace-30561"></a>
<a id="trace-30583"></a>
<a id="trace-30585"></a>
<a id="trace-30604"></a>
<a id="trace-30606"></a>
<a id="trace-30624"></a>
<a id="trace-30626"></a>
<a id="trace-30636"></a>
<a id="trace-30638"></a>
<a id="trace-30706"></a>
<a id="trace-30708"></a>
<a id="trace-30727"></a>
<a id="trace-30729"></a>
<a id="trace-30793"></a>
<a id="trace-30795"></a>
<a id="trace-30807"></a>
<a id="trace-30809"></a>
<a id="trace-30812"></a>
<a id="trace-30814"></a>
<a id="trace-30827"></a>
<a id="trace-30829"></a>
<a id="trace-30833"></a>
<a id="trace-30835"></a>
<a id="trace-30911"></a>
<a id="trace-30913"></a>
<a id="trace-30917"></a>
<a id="trace-30919"></a>
<a id="trace-30936"></a>
<a id="trace-30938"></a>
<a id="trace-30966"></a>
<a id="trace-30968"></a>
<a id="trace-30972"></a>
<a id="trace-30974"></a>
<a id="trace-30987"></a>
<a id="trace-30989"></a>
<a id="trace-30999"></a>
<a id="trace-31001"></a>
<a id="trace-31059"></a>
<a id="trace-31061"></a>
<a id="trace-31077"></a>
<a id="trace-31079"></a>
<a id="trace-31094"></a>
<a id="trace-31096"></a>
<a id="trace-31099"></a>
<a id="trace-31101"></a>
<a id="trace-31110"></a>
<a id="trace-31112"></a>
<a id="trace-31130"></a>
<a id="trace-31132"></a>
<a id="trace-31145"></a>
<a id="trace-31147"></a>
<a id="trace-31206"></a>
<a id="trace-31208"></a>
<a id="trace-31233"></a>
<a id="trace-31235"></a>
<a id="trace-31244"></a>
<a id="trace-31246"></a>
<a id="trace-31258"></a>
<a id="trace-31260"></a>
<a id="trace-31268"></a>
<a id="trace-31270"></a>
<a id="trace-31276"></a>
<a id="trace-31278"></a>
<a id="trace-31287"></a>
<a id="trace-31289"></a>
<a id="trace-31298"></a>
<a id="trace-31300"></a>
<a id="trace-31356"></a>
<a id="trace-31358"></a>
<a id="trace-31363"></a>
<a id="trace-31365"></a>
<a id="trace-31374"></a>
<a id="trace-31376"></a>
<a id="trace-31381"></a>
<a id="trace-31383"></a>
<a id="trace-31391"></a>
<a id="trace-31393"></a>
<a id="trace-31409"></a>
<a id="trace-31411"></a>
<a id="trace-31416"></a>
<a id="trace-31418"></a>
<a id="trace-31434"></a>
<a id="trace-31436"></a>
<a id="trace-31500"></a>
<a id="trace-31502"></a>
<a id="trace-31507"></a>
<a id="trace-31509"></a>
<a id="trace-31517"></a>
<a id="trace-31519"></a>
<a id="trace-31523"></a>
<a id="trace-31525"></a>
<a id="trace-31532"></a>
<a id="trace-31534"></a>
<a id="trace-31538"></a>
<a id="trace-31540"></a>
<a id="trace-31547"></a>
<a id="trace-31549"></a>
<a id="trace-31555"></a>
<a id="trace-31557"></a>
<a id="trace-31569"></a>
<a id="trace-31571"></a>
<a id="trace-31579"></a>
<a id="trace-31581"></a>
<a id="trace-31663"></a>
<a id="trace-31665"></a>
<a id="trace-31670"></a>
<a id="trace-31672"></a>
<a id="trace-31682"></a>
<a id="trace-31684"></a>
<a id="trace-31691"></a>
<a id="trace-31693"></a>
<a id="trace-31707"></a>
<a id="trace-31709"></a>
<a id="trace-31715"></a>
<a id="trace-31717"></a>
<a id="trace-31777"></a>
<a id="trace-31779"></a>
<a id="trace-31797"></a>
<a id="trace-31799"></a>
<a id="trace-31826"></a>
<a id="trace-31828"></a>
<a id="trace-31905"></a>
<a id="trace-31907"></a>
<a id="trace-31929"></a>
<a id="trace-31931"></a>
<a id="trace-32050"></a>
<a id="trace-32052"></a>
<a id="trace-32125"></a>
<a id="trace-32127"></a>
<a id="trace-32165"></a>
<a id="trace-32167"></a>
<a id="trace-32291"></a>
<a id="trace-32293"></a>
<a id="trace-32307"></a>
<a id="trace-32309"></a>
<a id="trace-32324"></a>
<a id="trace-32326"></a>
<a id="trace-32341"></a>
<a id="trace-32343"></a>
<a id="trace-32402"></a>
<a id="trace-32404"></a>
<a id="trace-32416"></a>
<a id="trace-32418"></a>
<a id="trace-32434"></a>
<a id="trace-32436"></a>
<a id="trace-32443"></a>
<a id="trace-32445"></a>
<a id="trace-32472"></a>
<a id="trace-32474"></a>
<a id="trace-32568"></a>
<a id="trace-32570"></a>
<a id="trace-32582"></a>
<a id="trace-32584"></a>
<a id="trace-32592"></a>
<a id="trace-32594"></a>
<a id="trace-32610"></a>
<a id="trace-32612"></a>
<a id="trace-32619"></a>
<a id="trace-32621"></a>
<a id="trace-32627"></a>
<a id="trace-32629"></a>
<a id="trace-32640"></a>
<a id="trace-32642"></a>
<a id="trace-32756"></a>
<a id="trace-32758"></a>
<a id="trace-32818"></a>
<a id="trace-32820"></a>
<a id="trace-32844"></a>
<a id="trace-32846"></a>
<a id="trace-32852"></a>
<a id="trace-32854"></a>
<a id="trace-32869"></a>
<a id="trace-32871"></a>
<a id="trace-32879"></a>
<a id="trace-32881"></a>
<a id="trace-32890"></a>
<a id="trace-32892"></a>
<a id="trace-32900"></a>
<a id="trace-32902"></a>
<a id="trace-32913"></a>
<a id="trace-32915"></a>
<a id="trace-32924"></a>
<a id="trace-32926"></a>
<a id="trace-32985"></a>
<a id="trace-32987"></a>
<a id="trace-32995"></a>
<a id="trace-32997"></a>
<a id="trace-33008"></a>
<a id="trace-33010"></a>
<a id="trace-33017"></a>
<a id="trace-33019"></a>
<a id="trace-33033"></a>
<a id="trace-33035"></a>
<a id="trace-33039"></a>
<a id="trace-33041"></a>
<a id="trace-33054"></a>
<a id="trace-33056"></a>
<a id="trace-33065"></a>
<a id="trace-33067"></a>
<a id="trace-33144"></a>
<a id="trace-33146"></a>
<a id="trace-33152"></a>
<a id="trace-33154"></a>
<a id="trace-33174"></a>
<a id="trace-33176"></a>
<a id="trace-33188"></a>
<a id="trace-33190"></a>
<a id="trace-33194"></a>
<a id="trace-33196"></a>
<a id="trace-33205"></a>
<a id="trace-33207"></a>
<a id="trace-33214"></a>
<a id="trace-33216"></a>
<a id="trace-33227"></a>
<a id="trace-33229"></a>
<a id="trace-33236"></a>
<a id="trace-33238"></a>
<a id="trace-33299"></a>
<a id="trace-33301"></a>
<a id="trace-33316"></a>
<a id="trace-33318"></a>
<a id="trace-33327"></a>
<a id="trace-33329"></a>
<a id="trace-33340"></a>
<a id="trace-33342"></a>
<a id="trace-33346"></a>
<a id="trace-33348"></a>
<a id="trace-33475"></a>
<a id="trace-33477"></a>
<a id="trace-33542"></a>
<a id="trace-33544"></a>
<a id="trace-33551"></a>
<a id="trace-33553"></a>
<a id="trace-33568"></a>
<a id="trace-33570"></a>
<a id="trace-33578"></a>
<a id="trace-33580"></a>
<a id="trace-33591"></a>
<a id="trace-33593"></a>
<a id="trace-33597"></a>
<a id="trace-33599"></a>
<a id="trace-33609"></a>
<a id="trace-33611"></a>
<a id="trace-33617"></a>
<a id="trace-33619"></a>
<a id="trace-33634"></a>
<a id="trace-33636"></a>
<a id="trace-33642"></a>
<a id="trace-33644"></a>
<a id="trace-33727"></a>
<a id="trace-33729"></a>
<a id="trace-33738"></a>
<a id="trace-33740"></a>
<a id="trace-33753"></a>
<a id="trace-33755"></a>
<a id="trace-33761"></a>
<a id="trace-33763"></a>
<a id="trace-33775"></a>
<a id="trace-33777"></a>
<a id="trace-33782"></a>
<a id="trace-33784"></a>
<a id="trace-33794"></a>
<a id="trace-33796"></a>
<a id="trace-33801"></a>
<a id="trace-33803"></a>
<a id="trace-33863"></a>
<a id="trace-33865"></a>
<a id="trace-33872"></a>
<a id="trace-33874"></a>
<a id="trace-34035"></a>
<a id="trace-34037"></a>
<a id="trace-34047"></a>
<a id="trace-34049"></a>
<a id="trace-34068"></a>
<a id="trace-34070"></a>
<a id="trace-34080"></a>
<a id="trace-34082"></a>
<a id="trace-34096"></a>
<a id="trace-34098"></a>
<a id="trace-34108"></a>
<a id="trace-34110"></a>
<a id="trace-34119"></a>
<a id="trace-34121"></a>
<a id="trace-34190"></a>
<a id="trace-34192"></a>
<a id="trace-34200"></a>
<a id="trace-34202"></a>
<a id="trace-34212"></a>
<a id="trace-34214"></a>
<a id="trace-34225"></a>
<a id="trace-34227"></a>
<a id="trace-34237"></a>
<a id="trace-34239"></a>
<a id="trace-34251"></a>
<a id="trace-34253"></a>
<a id="trace-34320"></a>
<a id="trace-34322"></a>
<a id="trace-34332"></a>
<a id="trace-34334"></a>
<a id="trace-34342"></a>
<a id="trace-34344"></a>
<a id="trace-34409"></a>
<a id="trace-34411"></a>
<a id="trace-34416"></a>
<a id="trace-34418"></a>
<a id="trace-34431"></a>
<a id="trace-34433"></a>
<a id="trace-34437"></a>
<a id="trace-34439"></a>
<a id="trace-34453"></a>
<a id="trace-34455"></a>
<a id="trace-34682"></a>
<a id="trace-34684"></a>
<a id="trace-34696"></a>
<a id="trace-34698"></a>
<a id="trace-34710"></a>
<a id="trace-34712"></a>
<a id="trace-34775"></a>
<a id="trace-34777"></a>
<a id="trace-34782"></a>
<a id="trace-34784"></a>
<a id="trace-34798"></a>
<a id="trace-34800"></a>
<a id="trace-34813"></a>
<a id="trace-34815"></a>
<a id="trace-34827"></a>
<a id="trace-34829"></a>
<a id="trace-34836"></a>
<a id="trace-34838"></a>
<a id="trace-34853"></a>
<a id="trace-34855"></a>
<a id="trace-34863"></a>
<a id="trace-34865"></a>
<a id="trace-35142"></a>
<a id="trace-35144"></a>
<a id="trace-35384"></a>
<a id="trace-35386"></a>
<a id="trace-35396"></a>
<a id="trace-35398"></a>
<a id="trace-35414"></a>
<a id="trace-35416"></a>
<a id="trace-35420"></a>
<a id="trace-35422"></a>
<a id="trace-35441"></a>
<a id="trace-35443"></a>
<a id="trace-35450"></a>
<a id="trace-35452"></a>
<a id="trace-35564"></a>
<a id="trace-35566"></a>
<a id="trace-35629"></a>
<a id="trace-35631"></a>
<a id="trace-35657"></a>
<a id="trace-35659"></a>
<a id="trace-35665"></a>
<a id="trace-35667"></a>
<a id="trace-35676"></a>
<a id="trace-35678"></a>
<a id="trace-35689"></a>
<a id="trace-35691"></a>
<a id="trace-35699"></a>
<a id="trace-35701"></a>
<a id="trace-35782"></a>
<a id="trace-35784"></a>
<a id="trace-35800"></a>
<a id="trace-35802"></a>
<a id="trace-35809"></a>
<a id="trace-35811"></a>
<a id="trace-35816"></a>
<a id="trace-35818"></a>
<a id="trace-35833"></a>
<a id="trace-35835"></a>
<a id="trace-35844"></a>
<a id="trace-35846"></a>
<a id="trace-35977"></a>
<a id="trace-35979"></a>
<a id="trace-35984"></a>
<a id="trace-35986"></a>
<a id="trace-35993"></a>
<a id="trace-35995"></a>
<a id="trace-36001"></a>
<a id="trace-36003"></a>
<a id="trace-36010"></a>
<a id="trace-36012"></a>
<a id="trace-36018"></a>
<a id="trace-36020"></a>
<a id="trace-36091"></a>
<a id="trace-36093"></a>
<a id="trace-36097"></a>
<a id="trace-36099"></a>
<a id="trace-36109"></a>
<a id="trace-36111"></a>
<a id="trace-36126"></a>
<a id="trace-36128"></a>
<a id="trace-36131"></a>
<a id="trace-36133"></a>
<a id="trace-36146"></a>
<a id="trace-36148"></a>
<a id="trace-36158"></a>
<a id="trace-36160"></a>
<a id="trace-36171"></a>
<a id="trace-36173"></a>
<a id="trace-36233"></a>
<a id="trace-36235"></a>
<a id="trace-36245"></a>
<a id="trace-36247"></a>
<a id="trace-36252"></a>
<a id="trace-36254"></a>
<a id="trace-36264"></a>
<a id="trace-36266"></a>
<a id="trace-36288"></a>
<a id="trace-36290"></a>
<a id="trace-36297"></a>
<a id="trace-36299"></a>
<a id="trace-36310"></a>
<a id="trace-36312"></a>
<a id="trace-36374"></a>
<a id="trace-36376"></a>
<a id="trace-36380"></a>
<a id="trace-36382"></a>
<a id="trace-36394"></a>
<a id="trace-36396"></a>
<a id="trace-36403"></a>
<a id="trace-36405"></a>
<a id="trace-36419"></a>
<a id="trace-36421"></a>
<a id="trace-36429"></a>
<a id="trace-36431"></a>
<a id="trace-36439"></a>
<a id="trace-36441"></a>
<a id="trace-36453"></a>
<a id="trace-36455"></a>
<a id="trace-36461"></a>
<a id="trace-36463"></a>
<a id="trace-36520"></a>
<a id="trace-36522"></a>
<a id="trace-36526"></a>
<a id="trace-36528"></a>
<a id="trace-36536"></a>
<a id="trace-36538"></a>
<a id="trace-36544"></a>
<a id="trace-36546"></a>
<a id="trace-36553"></a>
<a id="trace-36555"></a>
<a id="trace-36562"></a>
<a id="trace-36564"></a>
<a id="trace-36573"></a>
<a id="trace-36575"></a>
<a id="trace-36581"></a>
<a id="trace-36583"></a>
<a id="trace-36595"></a>
<a id="trace-36597"></a>
<a id="trace-36603"></a>
<a id="trace-36605"></a>
<a id="trace-36663"></a>
<a id="trace-36665"></a>
<a id="trace-36673"></a>
<a id="trace-36675"></a>
<a id="trace-36684"></a>
<a id="trace-36686"></a>
<a id="trace-36691"></a>
<a id="trace-36693"></a>
<a id="trace-36702"></a>
<a id="trace-36704"></a>
<a id="trace-36707"></a>
<a id="trace-36709"></a>
<a id="trace-36723"></a>
<a id="trace-36725"></a>
<a id="trace-36743"></a>
<a id="trace-36745"></a>
<a id="trace-36810"></a>
<a id="trace-36812"></a>
<a id="trace-36820"></a>
<a id="trace-36822"></a>
<a id="trace-36843"></a>
<a id="trace-36845"></a>
<a id="trace-36848"></a>
<a id="trace-36850"></a>
<a id="trace-36859"></a>
<a id="trace-36861"></a>
<a id="trace-36876"></a>
<a id="trace-36878"></a>
<a id="trace-36884"></a>
<a id="trace-36886"></a>
<a id="trace-36957"></a>
<a id="trace-36959"></a>
<a id="trace-36974"></a>
<a id="trace-36976"></a>
<a id="trace-36980"></a>
<a id="trace-36982"></a>
<a id="trace-36993"></a>
<a id="trace-36995"></a>
<a id="trace-37002"></a>
<a id="trace-37004"></a>
<a id="trace-37023"></a>
<a id="trace-37025"></a>
<a id="trace-37082"></a>
<a id="trace-37084"></a>
<a id="trace-37088"></a>
<a id="trace-37090"></a>
<a id="trace-37099"></a>
<a id="trace-37101"></a>
<a id="trace-37114"></a>
<a id="trace-37116"></a>
<a id="trace-37122"></a>
<a id="trace-37124"></a>
<a id="trace-37132"></a>
<a id="trace-37134"></a>
<a id="trace-37139"></a>
<a id="trace-37141"></a>
<a id="trace-37157"></a>
<a id="trace-37159"></a>
<a id="trace-37218"></a>
<a id="trace-37220"></a>
<a id="trace-37230"></a>
<a id="trace-37232"></a>
<a id="trace-37242"></a>
<a id="trace-37244"></a>
<a id="trace-37262"></a>
<a id="trace-37264"></a>
<a id="trace-37272"></a>
<a id="trace-37274"></a>
<a id="trace-37279"></a>
<a id="trace-37281"></a>
<a id="trace-37298"></a>
<a id="trace-37300"></a>
<a id="trace-37355"></a>
<a id="trace-37357"></a>
<a id="trace-37380"></a>
<a id="trace-37382"></a>
<a id="trace-37393"></a>
<a id="trace-37395"></a>
<a id="trace-37411"></a>
<a id="trace-37413"></a>
<a id="trace-37419"></a>
<a id="trace-37421"></a>
<a id="trace-37429"></a>
<a id="trace-37431"></a>
<a id="trace-37437"></a>
<a id="trace-37439"></a>
<a id="trace-37501"></a>
<a id="trace-37503"></a>
<a id="trace-37512"></a>
<a id="trace-37514"></a>
<a id="trace-37519"></a>
<a id="trace-37521"></a>
<a id="trace-37530"></a>
<a id="trace-37532"></a>
<a id="trace-37535"></a>
<a id="trace-37537"></a>
<a id="trace-37548"></a>
<a id="trace-37550"></a>
<a id="trace-37569"></a>
<a id="trace-37571"></a>
<a id="trace-37577"></a>
<a id="trace-37579"></a>
<a id="trace-37655"></a>
<a id="trace-37657"></a>
<a id="trace-37662"></a>
<a id="trace-37664"></a>
<a id="trace-37674"></a>
<a id="trace-37676"></a>
<a id="trace-37680"></a>
<a id="trace-37682"></a>
<a id="trace-37690"></a>
<a id="trace-37692"></a>
<a id="trace-37699"></a>
<a id="trace-37701"></a>
<a id="trace-37709"></a>
<a id="trace-37711"></a>
<a id="trace-37778"></a>
<a id="trace-37780"></a>
<a id="trace-37785"></a>
<a id="trace-37787"></a>
<a id="trace-37796"></a>
<a id="trace-37798"></a>
<a id="trace-37820"></a>
<a id="trace-37822"></a>
<a id="trace-37830"></a>
<a id="trace-37832"></a>
<a id="trace-37838"></a>
<a id="trace-37840"></a>
<a id="trace-37851"></a>
<a id="trace-37853"></a>
<a id="trace-37858"></a>
<a id="trace-37860"></a>
<a id="trace-37917"></a>
<a id="trace-37919"></a>
<a id="trace-37923"></a>
<a id="trace-37925"></a>
<a id="trace-37935"></a>
<a id="trace-37937"></a>
<a id="trace-37943"></a>
<a id="trace-37945"></a>
<a id="trace-37961"></a>
<a id="trace-37963"></a>
<a id="trace-37979"></a>
<a id="trace-37981"></a>
<a id="trace-37997"></a>
<a id="trace-37999"></a>
<a id="trace-38056"></a>
<a id="trace-38058"></a>
<a id="trace-38065"></a>
<a id="trace-38067"></a>
<a id="trace-38075"></a>
<a id="trace-38077"></a>
<a id="trace-38082"></a>
<a id="trace-38084"></a>
<a id="trace-38093"></a>
<a id="trace-38095"></a>
<a id="trace-38098"></a>
<a id="trace-38100"></a>
<a id="trace-38111"></a>
<a id="trace-38113"></a>
<a id="trace-38122"></a>
<a id="trace-38124"></a>
<a id="trace-38133"></a>
<a id="trace-38135"></a>
<a id="trace-38142"></a>
<a id="trace-38144"></a>
<a id="trace-38200"></a>
<a id="trace-38202"></a>
<a id="trace-38207"></a>
<a id="trace-38209"></a>
<a id="trace-38218"></a>
<a id="trace-38220"></a>
<a id="trace-38238"></a>
<a id="trace-38240"></a>
<a id="trace-38244"></a>
<a id="trace-38246"></a>
<a id="trace-38253"></a>
<a id="trace-38255"></a>
<a id="trace-38262"></a>
<a id="trace-38264"></a>
<a id="trace-38272"></a>
<a id="trace-38274"></a>
- 5.70s–359.30s (×1102), actor 37, squad 4 (trace 997): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 908. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23625018063815853, 'next_transition': 1550}.
<a id="trace-1004"></a>
- 5.85s–5.85s (×1), actor 8, squad 1 (trace 1004): received platoon directive. Knowledge: actor memory at 5.00s, trace 899. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 25.87351964895443, 'next_transition': 2673}.
<a id="trace-1219"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 1219): received platoon directive. Knowledge: actor memory at 5.00s, trace 891. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300019131585677, 'next_transition': 1546}.
<a id="trace-1546"></a>
<a id="trace-1548"></a>
<a id="trace-1598"></a>
<a id="trace-1600"></a>
<a id="trace-1641"></a>
<a id="trace-1643"></a>
<a id="trace-1690"></a>
<a id="trace-1692"></a>
<a id="trace-1726"></a>
<a id="trace-1728"></a>
<a id="trace-1796"></a>
<a id="trace-1798"></a>
<a id="trace-1821"></a>
<a id="trace-1823"></a>
<a id="trace-1852"></a>
<a id="trace-1854"></a>
<a id="trace-1944"></a>
<a id="trace-1946"></a>
<a id="trace-1975"></a>
<a id="trace-1977"></a>
<a id="trace-1998"></a>
<a id="trace-2000"></a>
<a id="trace-2036"></a>
<a id="trace-2038"></a>
<a id="trace-2065"></a>
<a id="trace-2067"></a>
<a id="trace-2101"></a>
<a id="trace-2103"></a>
<a id="trace-2124"></a>
<a id="trace-2126"></a>
<a id="trace-2154"></a>
<a id="trace-2156"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2210"></a>
<a id="trace-2212"></a>
<a id="trace-2297"></a>
<a id="trace-2299"></a>
<a id="trace-2328"></a>
<a id="trace-2330"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1546): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 896. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600121259661519, 'next_transition': 1598}.
<a id="trace-2336"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2336): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2219. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43313073000796276, 'next_transition': 2596}.
<a id="trace-2337"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2337): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2219. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43313073000796276, 'next_transition': 2596}.
<a id="trace-2596"></a>
<a id="trace-2598"></a>
<a id="trace-2635"></a>
<a id="trace-2637"></a>
<a id="trace-2662"></a>
<a id="trace-2664"></a>
<a id="trace-2955"></a>
<a id="trace-2957"></a>
<a id="trace-2997"></a>
<a id="trace-2999"></a>
<a id="trace-3026"></a>
<a id="trace-3028"></a>
<a id="trace-3052"></a>
<a id="trace-3054"></a>
<a id="trace-3078"></a>
<a id="trace-3080"></a>
<a id="trace-3175"></a>
<a id="trace-3177"></a>
<a id="trace-3202"></a>
<a id="trace-3204"></a>
<a id="trace-3231"></a>
<a id="trace-3233"></a>
<a id="trace-3259"></a>
<a id="trace-3261"></a>
<a id="trace-3302"></a>
<a id="trace-3304"></a>
<a id="trace-3323"></a>
<a id="trace-3325"></a>
<a id="trace-3358"></a>
<a id="trace-3360"></a>
<a id="trace-3383"></a>
<a id="trace-3385"></a>
<a id="trace-3416"></a>
<a id="trace-3418"></a>
<a id="trace-3442"></a>
<a id="trace-3444"></a>
<a id="trace-3529"></a>
<a id="trace-3531"></a>
<a id="trace-3545"></a>
<a id="trace-3547"></a>
<a id="trace-3578"></a>
<a id="trace-3580"></a>
- 16.25s–26.25s (×42), actor 5, squad 0 (trace 2596): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2224. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843745644443488, 'next_transition': 2635}.
<a id="trace-2673"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2673): traveling overwatch. Knowledge: actor memory at 15.00s, trace 2227. Next observer evidence: {'until': 26.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 12.003690450967571, 'next_transition': 3586}.
<a id="trace-2674"></a>
- 17.40s–17.40s (×1), actor 8, squad 1 (trace 2674): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 2227. Next observer evidence: {'until': 26.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 12.003690450967571, 'next_transition': 3586}.
<a id="trace-3586"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 3586): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 29.8, 'shots': 6, 'casualties': 0, 'mean_displacement': 1.2223531757140902, 'next_transition': 588}.
<a id="trace-3587"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 3587): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 29.8, 'shots': 6, 'casualties': 0, 'mean_displacement': 1.2223531757140902, 'next_transition': 588}.
<a id="trace-3588"></a>
- 26.35s–26.35s (×1), actor 8, squad 1 (trace 3588): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 29.8, 'shots': 6, 'casualties': 0, 'mean_displacement': 1.2223531757140902, 'next_transition': 588}.
<a id="trace-3866"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 3866): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3455. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043882112564517656, 'next_transition': 4196}.
<a id="trace-3867"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 3867): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3455. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043882112564517656, 'next_transition': 4196}.
<a id="trace-3868"></a>
- 26.50s–26.50s (×1), actor 0, squad 0 (trace 3868): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3455. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.043882112564517656, 'next_transition': 4196}.
<a id="trace-4196"></a>
<a id="trace-4198"></a>
- 26.75s–26.75s (×2), actor 5, squad 0 (trace 4196): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3460. Next observer evidence: {'until': 26.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04497403738894814, 'next_transition': 4212}.
<a id="trace-4212"></a>
- 26.80s–26.80s (×1), actor 0, squad 0 (trace 4212): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3455. Next observer evidence: {'until': 27.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.08954759684973403, 'next_transition': 4559}.
<a id="trace-4559"></a>
<a id="trace-4561"></a>
<a id="trace-4600"></a>
<a id="trace-4602"></a>
<a id="trace-4660"></a>
<a id="trace-4662"></a>
<a id="trace-4696"></a>
<a id="trace-4698"></a>
<a id="trace-4731"></a>
<a id="trace-4733"></a>
<a id="trace-4778"></a>
<a id="trace-4780"></a>
- 27.25s–29.75s (×12), actor 5, squad 0 (trace 4559): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 3460. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08909098989937199, 'next_transition': 4600}.
<a id="trace-587"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (events line 587): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-588"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (events line 588): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4789"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4789): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738888 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4789. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04796437688535113, 'next_transition': 7710}.
<a id="trace-4790"></a>
- 29.80s–29.80s (×1), actor 5, squad 0 (trace 4790): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738888 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4790. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04796437688535113, 'next_transition': 7710}.
<a id="trace-4791"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4791): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738888 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4791. Next observer evidence: None.
<a id="trace-4792"></a>
- 29.80s–29.80s (×1), actor 5, squad 1 (trace 4792): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.738888 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 29.80s, trace 4792. Next observer evidence: None.
<a id="trace-4799"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 4799): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1624449729301256, 'next_transition': 8220}.
<a id="trace-4801"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 4801): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1624449729301256, 'next_transition': 8220}.
<a id="trace-7630"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 7630): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1624449729301256, 'next_transition': 8220}.
<a id="trace-7631"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 7631): MoveTactically. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1624449729301256, 'next_transition': 8220}.
<a id="trace-7632"></a>
- 29.90s–29.90s (×1), actor 8, squad 1 (trace 7632): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 3463. Next observer evidence: {'until': 32, 'shots': 2, 'casualties': 0, 'mean_displacement': 2.1624449729301256, 'next_transition': 8220}.
<a id="trace-7710"></a>
- 30.00s–30.00s (×1), actor 0, squad 0 (trace 7710): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 7686. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.02438035021410681, 'next_transition': 8106}.
<a id="trace-8106"></a>
<a id="trace-8108"></a>
<a id="trace-8134"></a>
<a id="trace-8136"></a>
<a id="trace-8173"></a>
<a id="trace-8175"></a>
<a id="trace-8207"></a>
<a id="trace-8209"></a>
<a id="trace-8285"></a>
<a id="trace-8287"></a>
<a id="trace-8327"></a>
<a id="trace-8329"></a>
<a id="trace-8386"></a>
<a id="trace-8388"></a>
- 30.25s–33.25s (×14), actor 5, squad 0 (trace 8106): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7691. Next observer evidence: {'until': 30.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8134}.
<a id="trace-8220"></a>
- 32.05s–32.05s (×1), actor 8, squad 1 (trace 8220): received platoon directive. Knowledge: actor memory at 30.00s, trace 7694. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4466006576984958, 'next_transition': 8423}.
<a id="trace-8405"></a>
- 33.55s–33.55s (×1), actor 0, squad 0 (trace 8405): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 7686. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06709873649378578, 'next_transition': 8414}.
<a id="trace-8414"></a>
<a id="trace-8416"></a>
<a id="trace-8723"></a>
<a id="trace-8725"></a>
<a id="trace-8751"></a>
<a id="trace-8753"></a>
<a id="trace-8859"></a>
<a id="trace-8861"></a>
<a id="trace-8879"></a>
<a id="trace-8881"></a>
<a id="trace-8931"></a>
<a id="trace-8933"></a>
<a id="trace-8957"></a>
<a id="trace-8959"></a>
<a id="trace-8992"></a>
<a id="trace-8994"></a>
<a id="trace-9012"></a>
<a id="trace-9014"></a>
<a id="trace-9039"></a>
<a id="trace-9041"></a>
<a id="trace-9053"></a>
<a id="trace-9055"></a>
- 33.75s–38.75s (×22), actor 5, squad 0 (trace 8414): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 7691. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20767920797846498, 'next_transition': 8723}.
<a id="trace-8423"></a>
- 33.80s–33.80s (×1), actor 8, squad 1 (trace 8423): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 7694. Next observer evidence: {'until': 37.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.1577963573380026, 'next_transition': 8983}.
<a id="trace-8424"></a>
- 33.80s–33.80s (×1), actor 8, squad 1 (trace 8424): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 7694. Next observer evidence: {'until': 37.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.1577963573380026, 'next_transition': 8983}.
<a id="trace-8983"></a>
- 37.20s–37.20s (×1), actor 8, squad 1 (trace 8983): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 35.00s, trace 8776. Next observer evidence: {'until': 40.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 3.277384168561474, 'next_transition': 11953}.
<a id="trace-9061"></a>
- 38.80s–38.80s (×1), actor 1, squad 0 (trace 9061): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 8769. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11773}.
<a id="trace-11442"></a>
- 38.80s–38.80s (×1), actor 1, squad 0 (trace 11442): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 8769. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11773}.
<a id="trace-11443"></a>
- 38.80s–38.80s (×1), actor 1, squad 0 (trace 11443): MoveTactically. Knowledge: actor memory at 35.00s, trace 8769. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11773}.
<a id="trace-11444"></a>
- 38.80s–38.80s (×1), actor 1, squad 0 (trace 11444): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 8769. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11773}.
<a id="trace-11773"></a>
<a id="trace-11775"></a>
<a id="trace-11804"></a>
<a id="trace-11806"></a>
<a id="trace-11915"></a>
<a id="trace-11917"></a>
<a id="trace-11940"></a>
<a id="trace-11942"></a>
<a id="trace-14958"></a>
<a id="trace-14960"></a>
<a id="trace-14997"></a>
<a id="trace-14999"></a>
<a id="trace-15024"></a>
<a id="trace-15026"></a>
<a id="trace-15052"></a>
<a id="trace-15054"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15146"></a>
<a id="trace-15148"></a>
<a id="trace-15216"></a>
<a id="trace-15218"></a>
<a id="trace-15289"></a>
<a id="trace-15291"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
- 39.25s–45.25s (×26), actor 5, squad 0 (trace 11773): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8773. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.045001035180837035, 'next_transition': 11804}.
<a id="trace-11953"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 11953): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 11840. Next observer evidence: {'until': 46.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 5.219635041479247, 'next_transition': 15682}.
<a id="trace-14828"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 14828): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 11840. Next observer evidence: {'until': 46.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 5.219635041479247, 'next_transition': 15682}.
<a id="trace-14829"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 14829): MoveTactically. Knowledge: actor memory at 40.00s, trace 11840. Next observer evidence: {'until': 46.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 5.219635041479247, 'next_transition': 15682}.
<a id="trace-14830"></a>
- 40.90s–40.90s (×1), actor 8, squad 1 (trace 14830): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 11840. Next observer evidence: {'until': 46.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 5.219635041479247, 'next_transition': 15682}.
<a id="trace-15438"></a>
- 45.25s–45.25s (×1), actor 1, squad 0 (trace 15438): NeedSupport. Knowledge: actor memory at 45.00s, trace 15328. Next observer evidence: {'until': 45.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.900011628385342, 'next_transition': 15500}.
<a id="trace-15500"></a>
<a id="trace-15502"></a>
<a id="trace-15575"></a>
<a id="trace-15577"></a>
<a id="trace-15661"></a>
<a id="trace-15663"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18390"></a>
<a id="trace-18392"></a>
<a id="trace-18455"></a>
<a id="trace-18457"></a>
<a id="trace-18499"></a>
<a id="trace-18501"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18574"></a>
<a id="trace-18576"></a>
<a id="trace-18666"></a>
<a id="trace-18668"></a>
<a id="trace-18695"></a>
<a id="trace-18697"></a>
<a id="trace-18732"></a>
<a id="trace-18734"></a>
<a id="trace-18752"></a>
<a id="trace-18754"></a>
- 45.75s–51.75s (×26), actor 5, squad 0 (trace 15500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 15332. Next observer evidence: {'until': 46.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.3499951374685477, 'next_transition': 15575}.
<a id="trace-15682"></a>
- 46.85s–46.85s (×1), actor 8, squad 1 (trace 15682): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 15335. Next observer evidence: {'until': 48.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.491203142651927, 'next_transition': 18516}.
<a id="trace-15683"></a>
- 46.85s–46.85s (×1), actor 8, squad 1 (trace 15683): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 15335. Next observer evidence: {'until': 48.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 3.491203142651927, 'next_transition': 18516}.
<a id="trace-18516"></a>
- 48.90s–48.90s (×1), actor 8, squad 1 (trace 18516): NeedSupport. Knowledge: actor memory at 45.00s, trace 15335. Next observer evidence: {'until': 49.6, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.0611465402503801, 'next_transition': 1041}.
<a id="trace-1041"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (events line 1041): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18563"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 18563): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.634391 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 18563. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5098554922624149, 'next_transition': 1075}.
<a id="trace-18564"></a>
- 49.60s–49.60s (×1), actor 5, squad 1 (trace 18564): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.634391 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 49.60s, trace 18564. Next observer evidence: {'until': 50.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5098554922624149, 'next_transition': 1075}.
<a id="trace-1075"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (events line 1075): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18711"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 18711): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.636364 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 18711. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48547799747388143, 'next_transition': 1091}.
<a id="trace-18712"></a>
- 50.85s–50.85s (×1), actor 5, squad 1 (trace 18712): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.636364 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 50.85s, trace 18712. Next observer evidence: {'until': 52, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.48547799747388143, 'next_transition': 1091}.
<a id="trace-1091"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (events line 1091): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18762"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 18762): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.639176 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 18762. Next observer evidence: {'until': 53.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0072194805907350125, 'next_transition': 1121}.
<a id="trace-18763"></a>
- 52.10s–52.10s (×1), actor 5, squad 1 (trace 18763): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.639176 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 52.10s, trace 18763. Next observer evidence: {'until': 53.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0072194805907350125, 'next_transition': 1121}.
<a id="trace-18774"></a>
- 52.15s–52.15s (×1), actor 1, squad 0 (trace 18774): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20511}.
<a id="trace-18775"></a>
- 52.15s–52.15s (×1), actor 1, squad 0 (trace 18775): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: {'until': 52.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20511}.
<a id="trace-20511"></a>
<a id="trace-20513"></a>
<a id="trace-20536"></a>
<a id="trace-20538"></a>
- 52.25s–52.75s (×4), actor 5, squad 0 (trace 20511): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 18763. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20536}.
<a id="trace-20546"></a>
- 52.95s–52.95s (×1), actor 1, squad 0 (trace 20546): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42009285601563934, 'next_transition': 20553}.
<a id="trace-20553"></a>
- 53.20s–53.20s (×1), actor 1, squad 0 (trace 20553): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: None.
<a id="trace-20558"></a>
- 53.20s–53.20s (×1), actor 1, squad 0 (trace 20558): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: None.
<a id="trace-20559"></a>
- 53.20s–53.20s (×1), actor 1, squad 0 (trace 20559): Reorganise complete: known contact. Knowledge: actor memory at 50.00s, trace 18593. Next observer evidence: None.
<a id="trace-20910"></a>
<a id="trace-20912"></a>
<a id="trace-20954"></a>
<a id="trace-20956"></a>
<a id="trace-20998"></a>
<a id="trace-21000"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21149"></a>
<a id="trace-21151"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21237"></a>
<a id="trace-21239"></a>
<a id="trace-21279"></a>
<a id="trace-21281"></a>
- 53.25s–56.75s (×16), actor 5, squad 0 (trace 20910): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 52.10s, trace 18763. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15787270241850884, 'next_transition': 20954}.
<a id="trace-1121"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (events line 1121): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20924"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 20924): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.638010 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 20924. Next observer evidence: {'until': 54.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.06617451618226482, 'next_transition': 1175}.
<a id="trace-20925"></a>
- 53.35s–53.35s (×1), actor 5, squad 1 (trace 20925): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.638010 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 20925. Next observer evidence: {'until': 54.6, 'shots': 2, 'casualties': 1, 'mean_displacement': 0.06617451618226482, 'next_transition': 1175}.
<a id="trace-1175"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (events line 1175): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21042"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (trace 21042): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.567922 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 54.60s, trace 21042. Next observer evidence: {'until': 55.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.505966666666667, 'next_transition': 1201}.
<a id="trace-21043"></a>
- 54.60s–54.60s (×1), actor 5, squad 1 (trace 21043): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.567922 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 54.60s, trace 21043. Next observer evidence: {'until': 55.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.505966666666667, 'next_transition': 1201}.
<a id="trace-1201"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (events line 1201): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21204"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (trace 21204): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.567788 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 21204. Next observer evidence: {'until': 60.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.5316666666666663, 'next_transition': 21560}.
<a id="trace-21205"></a>
- 55.85s–55.85s (×1), actor 5, squad 1 (trace 21205): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.567788 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 55.85s, trace 21205. Next observer evidence: {'until': 60.4, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.5316666666666663, 'next_transition': 21560}.
<a id="trace-21303"></a>
- 57.10s–57.10s (×1), actor 1, squad 0 (trace 21303): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 55.00s, trace 21074. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10500057133442449, 'next_transition': 21314}.
<a id="trace-21314"></a>
<a id="trace-21316"></a>
<a id="trace-21331"></a>
<a id="trace-21333"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21400"></a>
<a id="trace-21402"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21455"></a>
<a id="trace-21457"></a>
<a id="trace-21546"></a>
<a id="trace-21548"></a>
<a id="trace-21576"></a>
<a id="trace-21578"></a>
<a id="trace-21602"></a>
<a id="trace-21604"></a>
<a id="trace-21829"></a>
<a id="trace-21831"></a>
- 57.25s–61.75s (×20), actor 5, squad 0 (trace 21314): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.85s, trace 21205. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20361622214897857, 'next_transition': 21331}.
<a id="trace-21560"></a>
- 60.40s–60.40s (×1), actor 9, squad 1 (trace 21560): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 21474. Next observer evidence: {'until': 61.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21613}.
<a id="trace-21613"></a>
- 61.40s–61.40s (×1), actor 9, squad 1 (trace 21613): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 21474. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725036394039733, 'next_transition': 1314}.
<a id="trace-21616"></a>
- 61.40s–61.40s (×1), actor 9, squad 1 (trace 21616): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 21474. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725036394039733, 'next_transition': 1314}.
<a id="trace-21617"></a>
- 61.40s–61.40s (×1), actor 9, squad 1 (trace 21617): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 21474. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725036394039733, 'next_transition': 1314}.
<a id="trace-21842"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 21842): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03847200005198583, 'next_transition': 24819}.
<a id="trace-24709"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 24709): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03847200005198583, 'next_transition': 24819}.
<a id="trace-24710"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 24710): MoveTactically. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03847200005198583, 'next_transition': 24819}.
<a id="trace-24711"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 24711): contact cover complete: assessment resumes closure. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03847200005198583, 'next_transition': 24819}.
<a id="trace-24813"></a>
- 61.95s–61.95s (×1), actor 1, squad 0 (trace 24813): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 62, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03847200005198583, 'next_transition': 24819}.
<a id="trace-24819"></a>
- 62.05s–62.05s (×1), actor 5, squad 0 (trace 24819): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 62.05s, trace 24819. Next observer evidence: None.
<a id="trace-1313"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (events line 1313): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1314"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (events line 1314): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24822"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 24822): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.430479 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 24822. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.034694000057646855, 'next_transition': 24838}.
<a id="trace-24823"></a>
- 62.10s–62.10s (×1), actor 5, squad 0 (trace 24823): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.430479 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 24823. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.034694000057646855, 'next_transition': 24838}.
<a id="trace-24824"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 24824): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.430479 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 24824. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.354982060812623, 'next_transition': 26875}.
<a id="trace-24825"></a>
- 62.10s–62.10s (×1), actor 5, squad 1 (trace 24825): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.430479 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 62.10s, trace 24825. Next observer evidence: {'until': 65.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.354982060812623, 'next_transition': 26875}.
<a id="trace-24838"></a>
<a id="trace-24840"></a>
<a id="trace-24874"></a>
<a id="trace-24876"></a>
<a id="trace-24928"></a>
<a id="trace-24930"></a>
<a id="trace-24962"></a>
<a id="trace-24964"></a>
<a id="trace-24996"></a>
<a id="trace-24998"></a>
- 62.25s–64.25s (×10), actor 5, squad 0 (trace 24838): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 24825. Next observer evidence: {'until': 62.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.00030599999999996185, 'next_transition': 24874}.
<a id="trace-25004"></a>
- 64.50s–64.50s (×1), actor 1, squad 0 (trace 25004): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11873229854834569, 'next_transition': 26723}.
<a id="trace-25005"></a>
- 64.50s–64.50s (×1), actor 1, squad 0 (trace 25005): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 60.00s, trace 21468. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11873229854834569, 'next_transition': 26723}.
<a id="trace-26723"></a>
<a id="trace-26725"></a>
<a id="trace-26835"></a>
<a id="trace-26837"></a>
<a id="trace-26891"></a>
<a id="trace-26893"></a>
<a id="trace-26922"></a>
<a id="trace-26924"></a>
<a id="trace-27094"></a>
<a id="trace-27096"></a>
<a id="trace-27116"></a>
<a id="trace-27118"></a>
<a id="trace-27129"></a>
<a id="trace-27131"></a>
<a id="trace-27151"></a>
<a id="trace-27153"></a>
<a id="trace-27166"></a>
<a id="trace-27168"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27209"></a>
<a id="trace-27211"></a>
<a id="trace-27290"></a>
<a id="trace-27292"></a>
- 64.75s–70.25s (×24), actor 5, squad 0 (trace 26723): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 62.10s, trace 24825. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9277303688002707, 'next_transition': 26835}.
<a id="trace-26875"></a>
- 65.60s–65.60s (×1), actor 9, squad 1 (trace 26875): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 65.00s, trace 26757. Next observer evidence: {'until': 66.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5749941366954356, 'next_transition': 26934}.
<a id="trace-26934"></a>
- 66.60s–66.60s (×1), actor 9, squad 1 (trace 26934): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 26757. Next observer evidence: {'until': 77.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.812323385715764, 'next_transition': 27679}.
<a id="trace-26935"></a>
- 66.60s–66.60s (×1), actor 9, squad 1 (trace 26935): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 26757. Next observer evidence: {'until': 77.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.812323385715764, 'next_transition': 27679}.
<a id="trace-27297"></a>
- 70.60s–70.60s (×1), actor 3, squad 0 (trace 27297): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 70.00s, trace 27220. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999447083899516, 'next_transition': 27298}.
<a id="trace-27298"></a>
- 70.65s–70.65s (×1), actor 3, squad 0 (trace 27298): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 27220. Next observer evidence: None.
<a id="trace-27299"></a>
- 70.65s–70.65s (×1), actor 3, squad 0 (trace 27299): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 27220. Next observer evidence: None.
<a id="trace-27365"></a>
<a id="trace-27367"></a>
<a id="trace-27386"></a>
<a id="trace-27388"></a>
<a id="trace-27400"></a>
<a id="trace-27402"></a>
<a id="trace-27421"></a>
<a id="trace-27423"></a>
<a id="trace-27439"></a>
<a id="trace-27441"></a>
- 70.75s–72.75s (×10), actor 5, squad 0 (trace 27365): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 27221. Next observer evidence: {'until': 71.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.2600160189053609, 'next_transition': 27386}.
<a id="trace-1527"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (events line 1527): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27451"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 27451): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.291480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 27451. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874990119456067, 'next_transition': 27468}.
<a id="trace-27452"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 27452): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.291480 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 27452. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874990119456067, 'next_transition': 27468}.
<a id="trace-27468"></a>
<a id="trace-27470"></a>
<a id="trace-27477"></a>
<a id="trace-27479"></a>
<a id="trace-27502"></a>
<a id="trace-27504"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27589"></a>
<a id="trace-27591"></a>
<a id="trace-27604"></a>
<a id="trace-27606"></a>
<a id="trace-27631"></a>
<a id="trace-27633"></a>
<a id="trace-27645"></a>
<a id="trace-27647"></a>
<a id="trace-27660"></a>
<a id="trace-27662"></a>
<a id="trace-27669"></a>
<a id="trace-27671"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27763"></a>
<a id="trace-27765"></a>
<a id="trace-27778"></a>
<a id="trace-27780"></a>
<a id="trace-27795"></a>
<a id="trace-27797"></a>
<a id="trace-27868"></a>
<a id="trace-27870"></a>
<a id="trace-27887"></a>
<a id="trace-27889"></a>
<a id="trace-27915"></a>
<a id="trace-27917"></a>
<a id="trace-27931"></a>
<a id="trace-27933"></a>
<a id="trace-27951"></a>
<a id="trace-27953"></a>
<a id="trace-27967"></a>
<a id="trace-27969"></a>
<a id="trace-27982"></a>
<a id="trace-27984"></a>
<a id="trace-27992"></a>
<a id="trace-27994"></a>
<a id="trace-28011"></a>
<a id="trace-28013"></a>
<a id="trace-28022"></a>
<a id="trace-28024"></a>
<a id="trace-28092"></a>
<a id="trace-28094"></a>
<a id="trace-28101"></a>
<a id="trace-28103"></a>
<a id="trace-28120"></a>
<a id="trace-28122"></a>
<a id="trace-28139"></a>
<a id="trace-28141"></a>
<a id="trace-28151"></a>
<a id="trace-28153"></a>
<a id="trace-28166"></a>
<a id="trace-28168"></a>
<a id="trace-28180"></a>
<a id="trace-28182"></a>
<a id="trace-28194"></a>
<a id="trace-28196"></a>
<a id="trace-28216"></a>
<a id="trace-28218"></a>
<a id="trace-28232"></a>
<a id="trace-28234"></a>
<a id="trace-28302"></a>
<a id="trace-28304"></a>
<a id="trace-28315"></a>
<a id="trace-28317"></a>
<a id="trace-28332"></a>
<a id="trace-28334"></a>
<a id="trace-28350"></a>
<a id="trace-28352"></a>
<a id="trace-28367"></a>
<a id="trace-28369"></a>
<a id="trace-28379"></a>
<a id="trace-28381"></a>
<a id="trace-28397"></a>
<a id="trace-28399"></a>
<a id="trace-28418"></a>
<a id="trace-28420"></a>
<a id="trace-28436"></a>
<a id="trace-28438"></a>
<a id="trace-28449"></a>
<a id="trace-28451"></a>
<a id="trace-28515"></a>
<a id="trace-28517"></a>
<a id="trace-28539"></a>
<a id="trace-28541"></a>
<a id="trace-28555"></a>
<a id="trace-28557"></a>
<a id="trace-28567"></a>
<a id="trace-28569"></a>
<a id="trace-28579"></a>
<a id="trace-28581"></a>
<a id="trace-28593"></a>
<a id="trace-28595"></a>
<a id="trace-28609"></a>
<a id="trace-28611"></a>
<a id="trace-28622"></a>
<a id="trace-28624"></a>
- 73.25s–99.25s (×104), actor 5, squad 0 (trace 27468): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.95s, trace 27452. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.41999919708917965, 'next_transition': 27477}.
<a id="trace-27679"></a>
- 77.90s–77.90s (×1), actor 9, squad 1 (trace 27679): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 75.00s, trace 27531. Next observer evidence: {'until': 101.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 14.705502304586615, 'next_transition': 28717}.
<a id="trace-27680"></a>
- 77.90s–77.90s (×1), actor 9, squad 1 (trace 27680): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 75.00s, trace 27531. Next observer evidence: {'until': 101.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 14.705502304586615, 'next_transition': 28717}.
<a id="trace-28717"></a>
- 101.30s–101.30s (×1), actor 9, squad 1 (trace 28717): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 100.00s, trace 28641. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599919189125781, 'next_transition': 1687}.
<a id="trace-28759"></a>
- 101.30s–101.30s (×1), actor 9, squad 1 (trace 28759): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 100.00s, trace 28641. Next observer evidence: {'until': 102.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599919189125781, 'next_transition': 1687}.
<a id="trace-1686"></a>
- 102.40s–102.40s (×1), actor 6, squad 0 (events line 1686): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28853}.
<a id="trace-1687"></a>
- 102.40s–102.40s (×1), actor 6, squad 1 (events line 1687): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.984237563007548, 'next_transition': 29138}.
<a id="trace-28832"></a>
- 102.40s–102.40s (×1), actor 6, squad 0 (trace 28832): renew committed intent (75 s lifetime). Knowledge: actor memory at 102.40s, trace 28832. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28853}.
<a id="trace-28833"></a>
- 102.40s–102.40s (×1), actor 6, squad 1 (trace 28833): renew committed intent (75 s lifetime). Knowledge: actor memory at 102.40s, trace 28833. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.984237563007548, 'next_transition': 29138}.
<a id="trace-28853"></a>
<a id="trace-28877"></a>
<a id="trace-28945"></a>
<a id="trace-28962"></a>
<a id="trace-28982"></a>
<a id="trace-28999"></a>
<a id="trace-29022"></a>
<a id="trace-29090"></a>
<a id="trace-29111"></a>
<a id="trace-29131"></a>
<a id="trace-29207"></a>
<a id="trace-29235"></a>
<a id="trace-29304"></a>
<a id="trace-29329"></a>
<a id="trace-29350"></a>
<a id="trace-29376"></a>
<a id="trace-29399"></a>
<a id="trace-29470"></a>
<a id="trace-29487"></a>
<a id="trace-29503"></a>
<a id="trace-29514"></a>
<a id="trace-29607"></a>
<a id="trace-29684"></a>
<a id="trace-29719"></a>
<a id="trace-29738"></a>
<a id="trace-29760"></a>
<a id="trace-29829"></a>
<a id="trace-29848"></a>
<a id="trace-29869"></a>
<a id="trace-29889"></a>
<a id="trace-29910"></a>
<a id="trace-30038"></a>
<a id="trace-30063"></a>
<a id="trace-30085"></a>
<a id="trace-30122"></a>
<a id="trace-30194"></a>
<a id="trace-30214"></a>
<a id="trace-30231"></a>
<a id="trace-30247"></a>
<a id="trace-30268"></a>
<a id="trace-30342"></a>
<a id="trace-30358"></a>
<a id="trace-30379"></a>
<a id="trace-30396"></a>
<a id="trace-30417"></a>
<a id="trace-30490"></a>
<a id="trace-30573"></a>
<a id="trace-30597"></a>
<a id="trace-30615"></a>
<a id="trace-30632"></a>
<a id="trace-30702"></a>
<a id="trace-30723"></a>
- 103.25s–156.30s (×52), actor 6, squad 0 (trace 28853): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=6. Knowledge: actor memory at 102.40s, trace 28833. Next observer evidence: {'until': 104.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28877}.
<a id="trace-29138"></a>
- 112.25s–112.25s (×1), actor 9, squad 1 (trace 29138): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 110.00s, trace 29039. Next observer evidence: {'until': 115.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3247134724305276, 'next_transition': 29321}.
<a id="trace-29139"></a>
- 112.25s–112.25s (×1), actor 9, squad 1 (trace 29139): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 110.00s, trace 29039. Next observer evidence: {'until': 115.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.3247134724305276, 'next_transition': 29321}.
<a id="trace-29321"></a>
- 115.90s–115.90s (×1), actor 9, squad 1 (trace 29321): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 115.00s, trace 29253. Next observer evidence: {'until': 121.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.28350769941043824, 'next_transition': 1741}.
<a id="trace-1741"></a>
- 121.20s–121.20s (×1), actor 6, squad 1 (events line 1741): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}.
<a id="trace-29484"></a>
- 121.20s–121.20s (×1), actor 6, squad 1 (trace 29484): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.152947 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 121.20s, trace 29484. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}.
<a id="trace-29485"></a>
- 121.20s–121.20s (×1), actor 6, squad 1 (trace 29485): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.152947 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 121.20s, trace 29485. Next observer evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}.
<a id="trace-29525"></a>
- 123.50s–123.50s (×1), actor 9, squad 1 (trace 29525): Withdraw to received rally. Knowledge: actor memory at 120.00s, trace 29419. Next observer evidence: {'until': 134.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000027385875836, 'next_transition': 29919}.
<a id="trace-29526"></a>
- 123.50s–123.50s (×1), actor 9, squad 1 (trace 29526): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 29419. Next observer evidence: {'until': 134.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 15.000027385875836, 'next_transition': 29919}.
<a id="trace-29919"></a>
- 134.45s–134.45s (×1), actor 9, squad 1 (trace 29919): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 130.00s, trace 29777. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999998184429888, 'next_transition': 30499}.
<a id="trace-29920"></a>
- 134.45s–134.45s (×1), actor 9, squad 1 (trace 29920): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 130.00s, trace 29777. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.999998184429888, 'next_transition': 30499}.
<a id="trace-30499"></a>
- 150.50s–150.50s (×1), actor 9, squad 1 (trace 30499): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 150.00s, trace 30438. Next observer evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.340636781976069, 'next_transition': 30733}.
<a id="trace-30500"></a>
- 150.50s–150.50s (×1), actor 9, squad 1 (trace 30500): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 150.00s, trace 30438. Next observer evidence: {'until': 156.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.340636781976069, 'next_transition': 30733}.
<a id="trace-30733"></a>
- 156.50s–156.50s (×1), actor 9, squad 1 (trace 30733): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 155.00s, trace 30651. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4947696376619644, 'next_transition': 30907}.
<a id="trace-30734"></a>
- 156.50s–156.50s (×1), actor 9, squad 1 (trace 30734): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 155.00s, trace 30651. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.4947696376619644, 'next_transition': 30907}.
<a id="trace-30907"></a>
<a id="trace-30926"></a>
- 160.30s–161.30s (×2), actor 9, squad 1 (trace 30907): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 160.00s, trace 30854. Next observer evidence: {'until': 161.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339997420193704, 'next_transition': 30926}.
<a id="trace-1851"></a>
- 161.85s–161.85s (×1), actor 9, squad 1 (events line 1851): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-30940"></a>
- 161.85s–161.85s (×1), actor 9, squad 1 (trace 30940): renew committed intent (75 s lifetime). Knowledge: actor memory at 161.85s, trace 30940. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45359003860865105, 'next_transition': 30946}.
<a id="trace-30946"></a>
<a id="trace-30962"></a>
<a id="trace-30983"></a>
<a id="trace-31055"></a>
<a id="trace-31073"></a>
<a id="trace-31090"></a>
<a id="trace-31106"></a>
- 162.30s–168.30s (×7), actor 9, squad 1 (trace 30946): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 161.85s, trace 30940. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339997420193704, 'next_transition': 30962}.
<a id="trace-31120"></a>
- 169.15s–169.15s (×1), actor 9, squad 1 (trace 31120): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 165.00s, trace 31002. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22682010514943102, 'next_transition': 31126}.
<a id="trace-31126"></a>
<a id="trace-31202"></a>
<a id="trace-31229"></a>
<a id="trace-31249"></a>
<a id="trace-31264"></a>
<a id="trace-31283"></a>
<a id="trace-31352"></a>
<a id="trace-31370"></a>
<a id="trace-31387"></a>
<a id="trace-31405"></a>
<a id="trace-31430"></a>
<a id="trace-31496"></a>
<a id="trace-31513"></a>
<a id="trace-31528"></a>
<a id="trace-31543"></a>
<a id="trace-31565"></a>
<a id="trace-31635"></a>
<a id="trace-31659"></a>
<a id="trace-31675"></a>
<a id="trace-31687"></a>
<a id="trace-31703"></a>
- 169.30s–189.30s (×21), actor 9, squad 1 (trace 31126): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 165.00s, trace 31002. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339997420193704, 'next_transition': 31202}.
<a id="trace-1909"></a>
- 190.00s–190.00s (×1), actor 9, squad 1 (events line 1909): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31773}.
<a id="trace-31728"></a>
- 190.00s–190.00s (×1), actor 9, squad 1 (trace 31728): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573555 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 190.00s, trace 31728. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31773}.
<a id="trace-31729"></a>
- 190.00s–190.00s (×1), actor 9, squad 1 (trace 31729): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.573555 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31773}.
<a id="trace-31773"></a>
<a id="trace-31793"></a>
- 190.30s–191.30s (×2), actor 9, squad 1 (trace 31773): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31793}.
<a id="trace-31810"></a>
- 192.05s–192.05s (×1), actor 9, squad 1 (trace 31810): MoveTactically. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31822}.
<a id="trace-31811"></a>
- 192.05s–192.05s (×1), actor 9, squad 1 (trace 31811): traveling overwatch. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31822}.
<a id="trace-31812"></a>
- 192.05s–192.05s (×1), actor 9, squad 1 (trace 31812): received platoon directive. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31822}.
<a id="trace-31822"></a>
- 192.30s–192.30s (×1), actor 9, squad 1 (trace 31822): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 190.00s, trace 31729. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1929}.
<a id="trace-1929"></a>
- 192.80s–192.80s (×1), actor 9, squad 1 (events line 1929): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 193, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31847}.
<a id="trace-31841"></a>
- 192.80s–192.80s (×1), actor 9, squad 1 (trace 31841): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.866011 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.80s, trace 31841. Next observer evidence: {'until': 193, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31847}.
<a id="trace-31842"></a>
- 192.80s–192.80s (×1), actor 9, squad 1 (trace 31842): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.866011 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 192.80s, trace 31842. Next observer evidence: {'until': 193, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31847}.
<a id="trace-31847"></a>
- 193.05s–193.05s (×1), actor 9, squad 1 (trace 31847): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 192.80s, trace 31842. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31901}.
<a id="trace-31901"></a>
<a id="trace-31925"></a>
- 193.30s–194.30s (×2), actor 9, squad 1 (trace 31901): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 192.80s, trace 31842. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 31925}.
<a id="trace-31934"></a>
- 194.50s–194.50s (×1), actor 9, squad 1 (trace 31934): traveling. Knowledge: actor memory at 192.80s, trace 31842. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3672621761778396, 'next_transition': 32109}.
<a id="trace-31935"></a>
- 194.50s–194.50s (×1), actor 9, squad 1 (trace 31935): received platoon directive. Knowledge: actor memory at 192.80s, trace 31842. Next observer evidence: {'until': 195.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3672621761778396, 'next_transition': 32109}.
<a id="trace-32109"></a>
- 195.30s–195.30s (×1), actor 9, squad 1 (trace 32109): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 195.00s, trace 32057. Next observer evidence: {'until': 195.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.083549405189621, 'next_transition': 1946}.
<a id="trace-1946"></a>
- 195.60s–195.60s (×1), actor 9, squad 1 (events line 1946): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-32115"></a>
- 195.60s–195.60s (×1), actor 9, squad 1 (trace 32115): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 195.60s, trace 32115. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5085940504361495, 'next_transition': 32140}.
<a id="trace-32116"></a>
- 195.60s–195.60s (×1), actor 9, squad 1 (trace 32116): FightHere: next 60 m leg in own advance lane; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 195.60s, trace 32116. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5085940504361495, 'next_transition': 32140}.
<a id="trace-32140"></a>
<a id="trace-32161"></a>
- 196.30s–197.30s (×2), actor 9, squad 1 (trace 32140): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 195.60s, trace 32116. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7089552999679363, 'next_transition': 32161}.
<a id="trace-32180"></a>
- 198.15s–198.15s (×1), actor 9, squad 1 (trace 32180): received platoon directive. Knowledge: actor memory at 195.60s, trace 32116. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.541771136426785, 'next_transition': 32287}.
<a id="trace-32287"></a>
<a id="trace-32320"></a>
<a id="trace-32398"></a>
<a id="trace-32422"></a>
<a id="trace-32439"></a>
<a id="trace-32455"></a>
<a id="trace-32480"></a>
<a id="trace-32553"></a>
<a id="trace-32578"></a>
<a id="trace-32599"></a>
<a id="trace-32615"></a>
<a id="trace-32636"></a>
- 198.30s–209.30s (×12), actor 9, squad 1 (trace 32287): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 195.60s, trace 32116. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7088833433358053, 'next_transition': 32320}.
<a id="trace-32643"></a>
- 209.30s–209.30s (×1), actor 9, squad 1 (trace 32643): matching received arrivals: traveling stage complete. Knowledge: actor memory at 205.00s, trace 32498. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449817802476391, 'next_transition': 32814}.
<a id="trace-32814"></a>
<a id="trace-32840"></a>
<a id="trace-32865"></a>
<a id="trace-32886"></a>
<a id="trace-32909"></a>
<a id="trace-32981"></a>
<a id="trace-33004"></a>
<a id="trace-33029"></a>
<a id="trace-33050"></a>
<a id="trace-33074"></a>
<a id="trace-33140"></a>
<a id="trace-33162"></a>
- 210.30s–221.30s (×12), actor 9, squad 1 (trace 32814): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 210.00s, trace 32759. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0285681257113315, 'next_transition': 32840}.
<a id="trace-33179"></a>
- 221.95s–221.95s (×1), actor 9, squad 1 (trace 33179): matching received arrivals: deployment leg complete. Knowledge: actor memory at 220.00s, trace 33089. Next observer evidence: {'until': 222.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33184}.
<a id="trace-33184"></a>
<a id="trace-33201"></a>
<a id="trace-33223"></a>
<a id="trace-33295"></a>
<a id="trace-33312"></a>
- 222.30s–226.30s (×5), actor 9, squad 1 (trace 33184): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 220.00s, trace 33089. Next observer evidence: {'until': 223.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33201}.
<a id="trace-2046"></a>
- 226.55s–226.55s (×1), actor 9, squad 1 (events line 2046): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33336}.
<a id="trace-33322"></a>
- 226.55s–226.55s (×1), actor 9, squad 1 (trace 33322): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 226.55s, trace 33322. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33336}.
<a id="trace-33323"></a>
- 226.55s–226.55s (×1), actor 9, squad 1 (trace 33323): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33336}.
<a id="trace-33336"></a>
<a id="trace-33353"></a>
- 227.30s–228.30s (×2), actor 9, squad 1 (trace 33336): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 228.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 33353}.
<a id="trace-33360"></a>
- 228.50s–228.50s (×1), actor 9, squad 1 (trace 33360): Reorganise: completed/failed drill. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300029716001336, 'next_transition': 33465}.
<a id="trace-33363"></a>
- 228.50s–228.50s (×1), actor 9, squad 1 (trace 33363): MoveTactically. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300029716001336, 'next_transition': 33465}.
<a id="trace-33364"></a>
- 228.50s–228.50s (×1), actor 9, squad 1 (trace 33364): Reorganise complete. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 229.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300029716001336, 'next_transition': 33465}.
<a id="trace-33465"></a>
<a id="trace-33538"></a>
<a id="trace-33564"></a>
<a id="trace-33587"></a>
<a id="trace-33605"></a>
<a id="trace-33630"></a>
<a id="trace-33702"></a>
<a id="trace-33723"></a>
<a id="trace-33749"></a>
<a id="trace-33771"></a>
<a id="trace-33790"></a>
<a id="trace-33859"></a>
- 229.30s–240.30s (×12), actor 9, squad 1 (trace 33465): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 226.55s, trace 33323. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8017410819970716, 'next_transition': 33538}.
<a id="trace-33879"></a>
- 241.15s–241.15s (×1), actor 9, squad 1 (trace 33879): traveling overwatch. Knowledge: actor memory at 240.00s, trace 33804. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34031}.
<a id="trace-33880"></a>
- 241.15s–241.15s (×1), actor 9, squad 1 (trace 33880): matching received arrivals: traveling stage complete. Knowledge: actor memory at 240.00s, trace 33804. Next observer evidence: {'until': 241.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 34031}.
<a id="trace-34031"></a>
<a id="trace-34054"></a>
<a id="trace-34076"></a>
<a id="trace-34104"></a>
<a id="trace-34177"></a>
<a id="trace-34196"></a>
<a id="trace-34221"></a>
<a id="trace-34247"></a>
- 241.30s–248.30s (×8), actor 9, squad 1 (trace 34031): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 240.00s, trace 33804. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1812443998174138, 'next_transition': 34054}.
<a id="trace-34260"></a>
- 248.55s–248.55s (×1), actor 9, squad 1 (trace 34260): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 245.00s, trace 34126. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679985014324833, 'next_transition': 34328}.
<a id="trace-34328"></a>
<a id="trace-34405"></a>
<a id="trace-34427"></a>
<a id="trace-34445"></a>
<a id="trace-34459"></a>
- 249.30s–253.30s (×5), actor 9, squad 1 (trace 34328): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 245.00s, trace 34126. Next observer evidence: {'until': 250.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14407712691471872, 'next_transition': 34405}.
<a id="trace-34469"></a>
- 253.60s–253.60s (×1), actor 9, squad 1 (trace 34469): ReactToContact: cover and return fire. Knowledge: actor memory at 250.00s, trace 34347. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449991812165764, 'next_transition': 34692}.
<a id="trace-34470"></a>
- 253.60s–253.60s (×1), actor 9, squad 1 (trace 34470): bounding overwatch. Knowledge: actor memory at 250.00s, trace 34347. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449991812165764, 'next_transition': 34692}.
<a id="trace-34471"></a>
- 253.60s–253.60s (×1), actor 9, squad 1 (trace 34471): new contact inside 100 m. Knowledge: actor memory at 250.00s, trace 34347. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449991812165764, 'next_transition': 34692}.
<a id="trace-34692"></a>
- 254.30s–254.30s (×1), actor 9, squad 1 (trace 34692): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 250.00s, trace 34347. Next observer evidence: {'until': 254.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599923964849948, 'next_transition': 2157}.
<a id="trace-2157"></a>
- 254.65s–254.65s (×1), actor 9, squad 1 (events line 2157): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-34704"></a>
- 254.65s–254.65s (×1), actor 9, squad 1 (trace 34704): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.309547 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.65s, trace 34704. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899988217985744, 'next_transition': 34771}.
<a id="trace-34705"></a>
- 254.65s–254.65s (×1), actor 9, squad 1 (trace 34705): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.309547 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 254.65s, trace 34705. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899988217985744, 'next_transition': 34771}.
<a id="trace-34771"></a>
<a id="trace-34790"></a>
- 255.30s–256.30s (×2), actor 9, squad 1 (trace 34771): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 255.00s, trace 34716. Next observer evidence: {'until': 256.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.045070412043209, 'next_transition': 34790}.
<a id="trace-34802"></a>
- 256.90s–256.90s (×1), actor 9, squad 1 (trace 34802): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 255.00s, trace 34716. Next observer evidence: None.
<a id="trace-34804"></a>
- 256.95s–256.95s (×1), actor 9, squad 1 (trace 34804): received platoon directive; retain contact cover stage. Knowledge: actor memory at 255.00s, trace 34716. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2600034801305116, 'next_transition': 34809}.
<a id="trace-34809"></a>
<a id="trace-34823"></a>
<a id="trace-34849"></a>
- 257.30s–259.30s (×3), actor 9, squad 1 (trace 34809): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 255.00s, trace 34716. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1499925382927496, 'next_transition': 34823}.
<a id="trace-34879"></a>
- 260.05s–260.05s (×1), actor 9, squad 1 (trace 34879): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 260.00s, trace 34868. Next observer evidence: None.
<a id="trace-34880"></a>
- 260.10s–260.10s (×1), actor 9, squad 1 (trace 34880): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 260.10s, trace 34880. Next observer evidence: None.
<a id="trace-34881"></a>
<a id="trace-34986"></a>
- 260.10s–260.15s (×2), actor 9, squad 1 (trace 34881): new contact inside 100 m. Knowledge: actor memory at 260.10s, trace 34880. Next observer evidence: None.
<a id="trace-2177"></a>
- 260.25s–260.25s (×1), actor 9, squad 1 (events line 2177): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-35133"></a>
- 260.25s–260.25s (×1), actor 9, squad 1 (trace 35133): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245314 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 260.25s, trace 35133. Next observer evidence: None.
<a id="trace-35134"></a>
- 260.25s–260.25s (×1), actor 9, squad 1 (trace 35134): FightHere: nearest known group; squad chooses its drill; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245314 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: None.
<a id="trace-35137"></a>
- 260.30s–260.30s (×1), actor 9, squad 1 (trace 35137): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 260.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35147}.
<a id="trace-35147"></a>
<a id="trace-35258"></a>
- 260.45s–260.70s (×2), actor 9, squad 1 (trace 35147): new contact inside 100 m. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 260.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35258}.
<a id="trace-35380"></a>
<a id="trace-35410"></a>
- 261.30s–262.30s (×2), actor 9, squad 1 (trace 35380): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 262.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6473507461183627, 'next_transition': 35410}.
<a id="trace-35417"></a>
- 262.30s–262.30s (×1), actor 9, squad 1 (trace 35417): received platoon directive; retain contact cover stage. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4985973475220082, 'next_transition': 35437}.
<a id="trace-35437"></a>
- 263.30s–263.30s (×1), actor 9, squad 1 (trace 35437): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 264, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1257836634861616, 'next_transition': 35462}.
<a id="trace-35462"></a>
- 264.00s–264.00s (×1), actor 9, squad 1 (trace 35462): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0011941942890498285, 'next_transition': 35535}.
<a id="trace-35463"></a>
- 264.00s–264.00s (×1), actor 9, squad 1 (trace 35463): rearward bound: one stationary suppressing element. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 264.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0011941942890498285, 'next_transition': 35535}.
<a id="trace-35535"></a>
<a id="trace-35625"></a>
<a id="trace-35653"></a>
<a id="trace-35672"></a>
<a id="trace-35685"></a>
<a id="trace-35706"></a>
<a id="trace-35772"></a>
<a id="trace-35789"></a>
<a id="trace-35805"></a>
<a id="trace-35820"></a>
<a id="trace-35840"></a>
<a id="trace-35909"></a>
- 264.30s–275.30s (×12), actor 9, squad 1 (trace 35535): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 260.25s, trace 35134. Next observer evidence: {'until': 265.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8362125547169093, 'next_transition': 35625}.
<a id="trace-35921"></a>
- 275.90s–275.90s (×1), actor 9, squad 1 (trace 35921): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 275.00s, trace 35858. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35973}.
<a id="trace-35963"></a>
- 275.90s–275.90s (×1), actor 9, squad 1 (trace 35963): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 275.00s, trace 35858. Next observer evidence: {'until': 276.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35973}.
<a id="trace-35973"></a>
<a id="trace-35989"></a>
<a id="trace-36006"></a>
<a id="trace-36025"></a>
<a id="trace-36087"></a>
<a id="trace-36105"></a>
<a id="trace-36122"></a>
<a id="trace-36136"></a>
<a id="trace-36154"></a>
<a id="trace-36225"></a>
<a id="trace-36241"></a>
<a id="trace-36260"></a>
- 276.30s–287.30s (×12), actor 9, squad 1 (trace 35973): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 275.00s, trace 35858. Next observer evidence: {'until': 277.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 35989}.
<a id="trace-36271"></a>
- 287.60s–287.60s (×1), actor 9, squad 1 (trace 36271): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 285.00s, trace 36174. Next observer evidence: {'until': 288.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36284}.
<a id="trace-36284"></a>
<a id="trace-36306"></a>
<a id="trace-36370"></a>
<a id="trace-36390"></a>
<a id="trace-36409"></a>
<a id="trace-36425"></a>
<a id="trace-36449"></a>
<a id="trace-36516"></a>
<a id="trace-36532"></a>
<a id="trace-36549"></a>
<a id="trace-36569"></a>
<a id="trace-36591"></a>
<a id="trace-36659"></a>
<a id="trace-36680"></a>
<a id="trace-36698"></a>
<a id="trace-36714"></a>
<a id="trace-36732"></a>
- 288.30s–304.30s (×17), actor 9, squad 1 (trace 36284): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 285.00s, trace 36174. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36306}.
<a id="trace-2296"></a>
- 305.10s–305.10s (×1), actor 9, squad 1 (events line 2296): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-36755"></a>
- 305.10s–305.10s (×1), actor 9, squad 1 (trace 36755): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.139530 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 305.10s, trace 36755. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36799}.
<a id="trace-36756"></a>
- 305.10s–305.10s (×1), actor 9, squad 1 (trace 36756): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.139530 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 305.10s, trace 36756. Next observer evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36799}.
<a id="trace-36799"></a>
<a id="trace-36839"></a>
<a id="trace-36855"></a>
<a id="trace-36872"></a>
<a id="trace-36937"></a>
<a id="trace-36953"></a>
<a id="trace-36970"></a>
<a id="trace-36989"></a>
<a id="trace-37013"></a>
<a id="trace-37078"></a>
<a id="trace-37095"></a>
<a id="trace-37110"></a>
<a id="trace-37128"></a>
<a id="trace-37148"></a>
<a id="trace-37214"></a>
<a id="trace-37238"></a>
<a id="trace-37254"></a>
<a id="trace-37268"></a>
<a id="trace-37288"></a>
<a id="trace-37351"></a>
<a id="trace-37368"></a>
<a id="trace-37407"></a>
<a id="trace-37425"></a>
<a id="trace-37490"></a>
<a id="trace-37508"></a>
<a id="trace-37526"></a>
<a id="trace-37544"></a>
<a id="trace-37565"></a>
- 305.30s–334.30s (×28), actor 9, squad 1 (trace 36799): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 305.10s, trace 36756. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36839}.
<a id="trace-37633"></a>
- 335.25s–335.25s (×1), actor 9, squad 1 (trace 37633): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 37583. Next observer evidence: None.
<a id="trace-37634"></a>
- 335.25s–335.25s (×1), actor 9, squad 1 (trace 37634): MoveTactically. Knowledge: actor memory at 335.00s, trace 37583. Next observer evidence: None.
<a id="trace-37635"></a>
- 335.25s–335.25s (×1), actor 9, squad 1 (trace 37635): . Knowledge: actor memory at 335.00s, trace 37583. Next observer evidence: None.
<a id="trace-37637"></a>
<a id="trace-37651"></a>
<a id="trace-37670"></a>
<a id="trace-37686"></a>
<a id="trace-37705"></a>
<a id="trace-37774"></a>
<a id="trace-37792"></a>
<a id="trace-37810"></a>
<a id="trace-37826"></a>
<a id="trace-37847"></a>
<a id="trace-37913"></a>
<a id="trace-37931"></a>
<a id="trace-37952"></a>
<a id="trace-37969"></a>
<a id="trace-37987"></a>
<a id="trace-38052"></a>
<a id="trace-38071"></a>
<a id="trace-38089"></a>
<a id="trace-38107"></a>
<a id="trace-38129"></a>
<a id="trace-38196"></a>
<a id="trace-38214"></a>
<a id="trace-38234"></a>
<a id="trace-38268"></a>
- 335.30s–359.30s (×24), actor 9, squad 1 (trace 37637): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 335.00s, trace 37583. Next observer evidence: {'until': 336.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 37651}.

## Net delivery

203 matched order/radio deliveries; 489 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.415s; maximum 2.400s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1868: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1880: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1883: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 3107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 3108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 3119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 3120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3458: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3468: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3469: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3470: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3471: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3472: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3473: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3474: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3477: estimate 6.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3478: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4789: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4790: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4791: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 29.80s leader 5, trace 4792: estimate 13.53; 12 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 7686: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 7687: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 7688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 7689: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 7690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 7691: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 7692: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 7693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 7694: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 7695: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 7696: estimate 11.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 7697: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 7698: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 7699: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 7700: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 7701: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 7702: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 7703: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 7704: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 7705: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 7706: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 7707: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 7708: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 7709: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 8768: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8769: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8771: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8773: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8774: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8776: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8777: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 8778: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 8779: estimate 13.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8780: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8781: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8782: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8783: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8784: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8785: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8786: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8787: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8788: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8789: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 8790: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 8791: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 11833: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 11834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 11835: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 11836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 11837: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 11838: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 11839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 11840: estimate 14.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 11841: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 11842: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 11843: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 11844: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 11845: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 11846: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 11847: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 11848: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 11849: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 11850: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 11851: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 11852: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 11853: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 11854: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 11855: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 15328: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 15329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 15330: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 15331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 15332: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 15333: estimate 14.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 15334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 15335: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 15336: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 15337: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 15338: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 15339: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 15340: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 15341: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 15342: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 15343: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 15344: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 15345: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 15346: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 15347: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 15348: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 18563: estimate 14.19; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 49.60s leader 5, trace 18564: estimate 14.19; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 18593: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 18594: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 18595: estimate 13.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 18596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 18597: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 18598: estimate 14.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 18599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 18600: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 18601: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 18602: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 18603: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 18604: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 18605: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 18606: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 18607: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 18608: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 18609: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 18610: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 18611: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 18612: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 18613: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 18711: estimate 14.14; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.85s leader 5, trace 18712: estimate 14.14; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 18762: estimate 14.08; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 52.10s leader 5, trace 18763: estimate 14.08; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 20924: estimate 14.11; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 20925: estimate 14.11; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.60s leader 5, trace 21042: estimate 14.09; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.60s leader 5, trace 21043: estimate 14.09; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 21074: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 21075: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 21076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 21077: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 21078: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 21079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 21080: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 21081: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 21082: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 21083: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 21084: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 21085: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 21086: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 21087: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 21088: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 21089: estimate 8.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 21090: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 21091: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 21092: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 21204: estimate 14.09; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.85s leader 5, trace 21205: estimate 14.09; 9 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 21468: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 21469: estimate 12.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 21470: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 21471: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 21472: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 21473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 21474: estimate 14.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 21475: estimate 13.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 21476: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 21477: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 21478: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 21479: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 21480: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 21481: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 21482: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 21483: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 21484: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.05s leader 5, trace 24819: estimate 13.94; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 24822: estimate 13.94; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 24823: estimate 13.94; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 24824: estimate 13.94; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 62.10s leader 5, trace 24825: estimate 13.94; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 26752: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 26753: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 26754: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 26755: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 26756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 26757: estimate 14.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 26758: estimate 13.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 26759: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 26760: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 26761: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 26762: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 26763: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 26764: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 26765: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 26766: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 26767: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 27220: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 27221: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 27222: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 27223: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 27224: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 27225: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 27226: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 27227: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 27228: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 27229: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 27230: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 27231: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 27232: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 27233: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 27451: estimate 13.72; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 27452: estimate 13.72; 4 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 27528: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 27529: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 27530: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 27531: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 27532: estimate 13.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 27533: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 27534: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 27535: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 27536: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 27537: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 27538: estimate 10.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 27539: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 27540: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 27541: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 27805: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 27806: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 27807: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 27808: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 27809: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 27810: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 27811: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 27812: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 27813: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 27814: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 27815: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 27816: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 27817: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 27818: estimate 10.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 28029: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 28030: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 28031: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 28032: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 28033: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 28034: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 28035: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 28036: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 28037: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 28038: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 28039: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 28040: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 28041: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 28042: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 28243: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 28244: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 28245: estimate 13.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 28246: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 28247: estimate 13.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 28248: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 28249: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 28250: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 28251: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 28252: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 28253: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 28254: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 28255: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 28458: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 28459: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 28460: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 28461: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 28462: estimate 11.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 28463: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 28464: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 28465: estimate 11.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 28466: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 28467: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 28468: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 28469: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 28640: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 28641: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 28642: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 28643: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 28644: estimate 10.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 28645: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 28646: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 28647: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 28648: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 28649: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 28650: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.40s leader 6, trace 28832: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.40s leader 6, trace 28833: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 28893: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 28894: estimate 13.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 28895: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 28896: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 28897: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 28898: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 28899: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 28900: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 28901: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 28902: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 28903: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 29038: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 29039: estimate 12.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 29040: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 29041: estimate 11.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 29042: estimate 10.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 29043: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 29044: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 29045: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 29046: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 29047: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 29048: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 29252: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 29253: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 29254: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 29255: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 29256: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 29257: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 29258: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 29259: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 29260: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 29261: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 29262: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 29418: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 29419: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 29420: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 29421: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 29422: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 29423: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 29424: estimate 11.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 29425: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 29426: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 29427: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 29428: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.20s leader 6, trace 29484: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.20s leader 6, trace 29485: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 29627: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 29628: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 29629: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 29630: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 29631: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 29632: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 29633: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 29634: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 29635: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 29636: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 29637: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 29776: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 29777: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 29778: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 29779: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 29780: estimate 9.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 29781: estimate 9.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 29782: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 29783: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 29784: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 29785: estimate 10.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 29786: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 29984: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 29985: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 29986: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 29987: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 29988: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 29989: estimate 9.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 29990: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 29991: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 29992: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 29993: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 29994: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 30140: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 30141: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 30142: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 30143: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 30144: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 30145: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 30146: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 30147: estimate 9.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 30148: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 30149: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 30150: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 30287: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 30288: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 30289: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 30290: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 30291: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 30292: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 30293: estimate 9.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 30294: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 30295: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 30296: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 30297: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 30437: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 30438: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 11, trace 30439: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 30440: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 30441: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 30442: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 30443: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 30444: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 30445: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 30446: estimate 8.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 30447: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 30650: estimate 10.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 30651: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 11, trace 30652: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 30653: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 30654: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 30655: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 30656: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 30657: estimate 7.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 30658: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 30659: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 30660: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 30854: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 11, trace 30855: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 30856: estimate 8.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 30857: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 30858: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 30859: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 30860: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 30861: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 30862: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 30863: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 161.85s leader 9, trace 30940: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 31002: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 11, trace 31003: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 31004: estimate 5.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 31005: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 31006: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 31007: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 31008: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 31009: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 31010: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 31011: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 31149: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 11, trace 31150: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 31151: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 31152: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 31153: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 31154: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 31155: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 31156: estimate 5.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 31157: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 31158: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 31301: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 11, trace 31302: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 31303: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 31304: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 31305: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 31306: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 31307: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 31308: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 31309: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 31310: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 31445: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 11, trace 31446: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 31447: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 31448: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 31449: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 31450: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 31451: estimate 3.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 31452: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 31453: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 31454: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 31584: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 11, trace 31585: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 31586: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 31587: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 31588: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 31589: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 31590: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 31591: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 31592: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 31593: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 31718: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 11, trace 31719: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 31720: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 31721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 31722: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 31723: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 31724: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 31725: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 31726: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 31727: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 31728: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 31729: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.80s leader 9, trace 31841: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.80s leader 9, trace 31842: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 32057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 11, trace 32058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 32059: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 32060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 32061: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 32062: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 32063: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 32064: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 32065: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 32066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.60s leader 9, trace 32115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.60s leader 9, trace 32116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 32345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 11, trace 32346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 32347: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 32348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 32349: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 32350: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 32351: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 32352: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 32353: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 32354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 32498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 11, trace 32499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 32500: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 32501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 32502: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 32503: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 32504: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 32505: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 32506: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 32507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 32759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 11, trace 32760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 32761: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 32762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 32763: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 32764: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 32765: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 32766: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 32767: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 32768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 32930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 11, trace 32931: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 32932: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 32933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 32934: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 32935: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 32936: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 32937: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 32938: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 32939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 33089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 11, trace 33090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 33091: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 33092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 33093: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 33094: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 33095: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 33096: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 33097: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 33098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 33239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 11, trace 33240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 33241: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 33242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 33243: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 33244: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 33245: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 33246: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 33247: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 33248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 226.55s leader 9, trace 33322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 226.55s leader 9, trace 33323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 33482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 11, trace 33483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 33484: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 33485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 33486: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 33487: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 33488: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 33489: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 33490: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 33491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 33647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 11, trace 33648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 33649: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 33650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 33651: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 33652: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 33653: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 33654: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 33655: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 33656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 33804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 11, trace 33805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 33806: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 33807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 33808: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 33809: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 33810: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 33811: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 33812: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 33813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 34126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 11, trace 34127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 34128: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 34129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 34130: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 34131: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 34132: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 34133: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 34134: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 34135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 34347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 11, trace 34348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 34349: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 34350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 34351: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 34352: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 34353: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 34354: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 34355: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 34356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.65s leader 9, trace 34704: estimate 1.53; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.65s leader 9, trace 34705: estimate 1.53; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 34716: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 34717: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 34718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 34719: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 34720: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 34721: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 34722: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 34723: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 34724: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 34868: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 34869: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 34870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 34871: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 34872: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 34873: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 34874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 34875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 34876: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.10s leader 9, trace 34880: estimate 3.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.25s leader 9, trace 35133: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.25s leader 9, trace 35134: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 35567: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 35568: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 35569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 35570: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 35571: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 35572: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 35573: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 35574: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 35575: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 35721: estimate 7.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 35722: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 35723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 35724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 35725: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 35726: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 35727: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 35728: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 35729: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 35858: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 35859: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 35860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 35861: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 35862: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 35863: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 35864: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 35865: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 35866: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 36036: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 36037: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 36038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 36039: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 36040: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 36041: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 36042: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 36043: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 36044: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 36174: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 36175: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 36176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 36177: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 36178: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 36179: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 36180: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 36181: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 36182: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 36319: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 36320: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 36321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 36322: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 36323: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 36324: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 36325: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 36326: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 36327: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 36464: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 36465: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 36466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 36467: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 36468: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 36469: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 36470: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 36471: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 36472: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 36606: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 36607: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 36608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 36609: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 36610: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 36611: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 36612: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 36613: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 36614: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 36746: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 36747: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 36748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 36749: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 36750: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 36751: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 36752: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 36753: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 36754: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.10s leader 9, trace 36755: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.10s leader 9, trace 36756: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 36887: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 36888: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 36889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 36890: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 36891: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 36892: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 36893: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 36894: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 36895: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 37026: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 37027: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 37028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 37029: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 37030: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 37031: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 37032: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 37033: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 37034: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 37163: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 37164: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 37165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 37166: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 37167: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 37168: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 37169: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 37170: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 37171: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 37301: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 37302: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 37303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 37304: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 37305: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 37306: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 37307: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 37308: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 37309: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 37440: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 37441: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 37442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 37443: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 37444: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 37445: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 37446: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 37447: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 37448: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 37583: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 37584: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 37585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 37586: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 37587: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 37588: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 37589: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 37590: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 37591: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 37720: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 37721: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 37722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 37723: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 37724: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 37725: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 37726: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 37727: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 37728: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 37861: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 37862: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 37863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 37864: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 37865: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 37866: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 37867: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 37868: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 37869: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 38001: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 38002: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 38003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 38004: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 38005: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 38006: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 38007: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 38008: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 38009: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 38146: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 38147: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 38148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 38149: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 38150: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 38151: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 38152: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 38153: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 38154: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 38283: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 38284: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 38285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 38286: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 38287: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 38288: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 38289: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 38290: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 38291: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Flint incapacitated
- 1: Orin killed in action
- 1: Soren incapacitated
- 1: Bren killed in action
- 1: Renn incapacitated
- 1: Dane incapacitated
- 1: Tern killed in action
- 1: Rook incapacitated
- 1: Reed killed in action
- 1: Bram incapacitated
- 1: Ash incapacitated
- 1: Iven killed in action
- 1: Moss killed in action
- 1: Ellis killed in action

## Outcome attribution

- 121.20s, evidence 1741: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 121.20s, evidence 29484: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.152947 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 121.20s, evidence 29485: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.152947 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 123.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29525}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 161.85s, evidence 1851: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 305.10s, evidence 2296: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 305.10s, evidence 36755: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.139530 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36799}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 305.10s, evidence 36756: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.700000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.139530 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 305.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 36799}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
