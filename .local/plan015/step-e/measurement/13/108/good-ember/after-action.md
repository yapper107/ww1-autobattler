# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/13/108/good-ember/battle-108-1789673921168795057`

## Battle summary

**Ember** · 360 s · 691 shots.

### Turning points

- 24.7s, squad 1: contact (events line 263). First recorded contact.
- 28.6s, squad 1: withdrawal ([trace 3981](#trace-3981)). 70.1s, squad 1: contact broken or rally reached: Occupy and report strength.
- 40.2s, squad 0: withdrawal ([trace 6480](#trace-6480)). 85.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 49.7s, squad 1: help call ([trace 7539](#trace-7539)). No completion observed before termination.
- 55.5s, squad 0: help call ([trace 8028](#trace-8028)). 86.8s, squad 1: answered a neighbour with support by fire.
- 86.8s, squad 1: help answer ([trace 10105](#trace-10105)). 106.7s, squad 1: took cover and returned fire.
- 105.7s, squad 1: help call ([trace 12580](#trace-12580)). No completion observed before termination.
- 110.5s, squad 1: withdrawal ([trace 12926](#trace-12926)). 163.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 217.1s, squad 0: help call ([trace 18309](#trace-18309)). No completion observed before termination.
- 256.6s, squad 0: withdrawal ([trace 24727](#trace-24727)). 266.2s, squad 0: took cover and returned fire.
- 2 further episodes: see the complete [turning-point register](#turning-point-register).

### Squads

- **0** — FightHere; chose broke contact, prepared a base of fire and 2 further drill types; withdrew; 16 shots, 4/8 lost.
- **1** — FightHere; chose broke contact, answered a neighbour with support by fire and 2 further drill types; withdrew; 10 shots, 3/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 531 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 134 shots, 0/4 lost.

### Decisions and attribution

At 86.8s, squad 1 chose answered a neighbour with support by fire ([trace 10105](#trace-10105)), followed by 0 shots and 1 own casualties; estimate 11.0 against 0 distinct squad-reported contacts; At 28.6s, squad 1 chose broke contact ([trace 3981](#trace-3981)), followed by 3 shots and 0 own casualties; estimate 9.6 against 0 distinct squad-reported contacts; At 40.4s, squad 0 chose FightHere: nearest known group ([trace 6857](#trace-6857)), followed by 1 shots and 0 own casualties; estimate 14.3 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1766](#trace-1766)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 3859](#trace-3859)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1414004324845992, 'next_transition': 3910}.

### Communication

289 matched deliveries (mean 0.57s, max 5.25s); 510 explicit drops; 6 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 24.70s, squad 1, contact, evidence events line 263: First recorded contact; .
- 28.60s, squad 1, withdrawal, evidence 3981: BreakContact: believed ratio at least two without superiority; 70.1s, squad 1: contact broken or rally reached: Occupy and report strength.
- 40.25s, squad 0, withdrawal, evidence 6480: BreakContact: believed ratio at least two without superiority; 85.5s, squad 0: contact broken or rally reached: Occupy and report strength.
- 49.65s, squad 1, help call, evidence 7539: NeedSupport; No completion observed before termination.
- 55.45s, squad 0, help call, evidence 8028: NeedSupport; 86.8s, squad 1: answered a neighbour with support by fire.
- 86.85s, squad 1, help answer, evidence 10105: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 106.7s, squad 1: took cover and returned fire.
- 105.70s, squad 1, help call, evidence 12580: NeedSupport; No completion observed before termination.
- 110.45s, squad 1, withdrawal, evidence 12926: BreakContact: believed ratio at least two without superiority; 163.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 217.05s, squad 0, help call, evidence 18309: NeedSupport; No completion observed before termination.
- 256.55s, squad 0, withdrawal, evidence 24727: BreakContact: believed ratio at least two without superiority; 266.2s, squad 0: took cover and returned fire.
- 261.90s, squad 0, help call, evidence 25370: NeedSupport; No completion observed before termination.
- 270.20s, squad 0, withdrawal, evidence 25909: BreakContact: believed ratio at least two without superiority; 306.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.817381012128049, 'next_transition': 1101}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.817381012128049, 'next_transition': 1101}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.817381012128049, 'next_transition': 1101}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.37371884807908, 'next_transition': 173}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.37371884807908, 'next_transition': 173}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 29.37371884807908, 'next_transition': 173}.
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
<a id="trace-955"></a>
<a id="trace-957"></a>
<a id="trace-984"></a>
<a id="trace-986"></a>
<a id="trace-1013"></a>
<a id="trace-1015"></a>
<a id="trace-1052"></a>
<a id="trace-1054"></a>
<a id="trace-1074"></a>
<a id="trace-1076"></a>
<a id="trace-1103"></a>
<a id="trace-1105"></a>
<a id="trace-1134"></a>
<a id="trace-1136"></a>
<a id="trace-1166"></a>
<a id="trace-1168"></a>
<a id="trace-1187"></a>
<a id="trace-1189"></a>
<a id="trace-1206"></a>
<a id="trace-1208"></a>
<a id="trace-1298"></a>
<a id="trace-1300"></a>
<a id="trace-1320"></a>
<a id="trace-1322"></a>
<a id="trace-1655"></a>
<a id="trace-1657"></a>
<a id="trace-1689"></a>
<a id="trace-1691"></a>
<a id="trace-1725"></a>
<a id="trace-1727"></a>
<a id="trace-1760"></a>
<a id="trace-1762"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1829"></a>
<a id="trace-1831"></a>
<a id="trace-2059"></a>
<a id="trace-2061"></a>
<a id="trace-2093"></a>
<a id="trace-2095"></a>
<a id="trace-2185"></a>
<a id="trace-2187"></a>
<a id="trace-2213"></a>
<a id="trace-2215"></a>
<a id="trace-2250"></a>
<a id="trace-2252"></a>
<a id="trace-2292"></a>
<a id="trace-2294"></a>
<a id="trace-2318"></a>
<a id="trace-2320"></a>
<a id="trace-2348"></a>
<a id="trace-2350"></a>
<a id="trace-2379"></a>
<a id="trace-2381"></a>
<a id="trace-2407"></a>
<a id="trace-2409"></a>
<a id="trace-2436"></a>
<a id="trace-2438"></a>
<a id="trace-2462"></a>
<a id="trace-2464"></a>
<a id="trace-2561"></a>
<a id="trace-2563"></a>
<a id="trace-2599"></a>
<a id="trace-2601"></a>
<a id="trace-2623"></a>
<a id="trace-2625"></a>
<a id="trace-2649"></a>
<a id="trace-2651"></a>
<a id="trace-2676"></a>
<a id="trace-2678"></a>
<a id="trace-2693"></a>
<a id="trace-2695"></a>
<a id="trace-2715"></a>
<a id="trace-2717"></a>
<a id="trace-2735"></a>
<a id="trace-2737"></a>
<a id="trace-3116"></a>
<a id="trace-3118"></a>
<a id="trace-3154"></a>
<a id="trace-3156"></a>
<a id="trace-3777"></a>
<a id="trace-3779"></a>
<a id="trace-3807"></a>
<a id="trace-3809"></a>
<a id="trace-3839"></a>
<a id="trace-3841"></a>
<a id="trace-3886"></a>
<a id="trace-3888"></a>
<a id="trace-3914"></a>
<a id="trace-3916"></a>
<a id="trace-3942"></a>
<a id="trace-3944"></a>
<a id="trace-3966"></a>
<a id="trace-3968"></a>
<a id="trace-4476"></a>
<a id="trace-4478"></a>
<a id="trace-4495"></a>
<a id="trace-4497"></a>
<a id="trace-4527"></a>
<a id="trace-4529"></a>
<a id="trace-4637"></a>
<a id="trace-4639"></a>
<a id="trace-4667"></a>
<a id="trace-4669"></a>
<a id="trace-4708"></a>
<a id="trace-4710"></a>
<a id="trace-4736"></a>
<a id="trace-4738"></a>
<a id="trace-4779"></a>
<a id="trace-4781"></a>
<a id="trace-4802"></a>
<a id="trace-4804"></a>
<a id="trace-4828"></a>
<a id="trace-4830"></a>
<a id="trace-4848"></a>
<a id="trace-4850"></a>
<a id="trace-4879"></a>
<a id="trace-4881"></a>
<a id="trace-4895"></a>
<a id="trace-4897"></a>
<a id="trace-4986"></a>
<a id="trace-4988"></a>
<a id="trace-5169"></a>
<a id="trace-5171"></a>
<a id="trace-5198"></a>
<a id="trace-5200"></a>
<a id="trace-5732"></a>
<a id="trace-5734"></a>
<a id="trace-6250"></a>
<a id="trace-6252"></a>
<a id="trace-6273"></a>
<a id="trace-6275"></a>
<a id="trace-6308"></a>
<a id="trace-6310"></a>
<a id="trace-6325"></a>
<a id="trace-6327"></a>
<a id="trace-6359"></a>
<a id="trace-6361"></a>
<a id="trace-6383"></a>
<a id="trace-6385"></a>
<a id="trace-6475"></a>
<a id="trace-6477"></a>
<a id="trace-6885"></a>
<a id="trace-6887"></a>
<a id="trace-6918"></a>
<a id="trace-6920"></a>
<a id="trace-6948"></a>
<a id="trace-6950"></a>
<a id="trace-6975"></a>
<a id="trace-6977"></a>
<a id="trace-6998"></a>
<a id="trace-7000"></a>
<a id="trace-7024"></a>
<a id="trace-7026"></a>
<a id="trace-7037"></a>
<a id="trace-7039"></a>
<a id="trace-7219"></a>
<a id="trace-7221"></a>
<a id="trace-7248"></a>
<a id="trace-7250"></a>
<a id="trace-7335"></a>
<a id="trace-7337"></a>
<a id="trace-7362"></a>
<a id="trace-7364"></a>
<a id="trace-7395"></a>
<a id="trace-7397"></a>
<a id="trace-7419"></a>
<a id="trace-7421"></a>
<a id="trace-7442"></a>
<a id="trace-7444"></a>
<a id="trace-7461"></a>
<a id="trace-7463"></a>
<a id="trace-7484"></a>
<a id="trace-7486"></a>
<a id="trace-7506"></a>
<a id="trace-7508"></a>
<a id="trace-7527"></a>
<a id="trace-7529"></a>
<a id="trace-7553"></a>
<a id="trace-7555"></a>
<a id="trace-7651"></a>
<a id="trace-7653"></a>
<a id="trace-7673"></a>
<a id="trace-7675"></a>
<a id="trace-7696"></a>
<a id="trace-7698"></a>
<a id="trace-7708"></a>
<a id="trace-7710"></a>
<a id="trace-7733"></a>
<a id="trace-7735"></a>
<a id="trace-7754"></a>
<a id="trace-7756"></a>
<a id="trace-7770"></a>
<a id="trace-7772"></a>
<a id="trace-7782"></a>
<a id="trace-7784"></a>
<a id="trace-7807"></a>
<a id="trace-7809"></a>
<a id="trace-7823"></a>
<a id="trace-7825"></a>
<a id="trace-8016"></a>
<a id="trace-8018"></a>
<a id="trace-8043"></a>
<a id="trace-8045"></a>
<a id="trace-8076"></a>
<a id="trace-8078"></a>
<a id="trace-8112"></a>
<a id="trace-8114"></a>
<a id="trace-8140"></a>
<a id="trace-8142"></a>
<a id="trace-8165"></a>
<a id="trace-8167"></a>
<a id="trace-8194"></a>
<a id="trace-8196"></a>
<a id="trace-8211"></a>
<a id="trace-8213"></a>
<a id="trace-8316"></a>
<a id="trace-8318"></a>
<a id="trace-8335"></a>
<a id="trace-8337"></a>
<a id="trace-8424"></a>
<a id="trace-8426"></a>
<a id="trace-8458"></a>
<a id="trace-8460"></a>
<a id="trace-8482"></a>
<a id="trace-8484"></a>
<a id="trace-8502"></a>
<a id="trace-8504"></a>
<a id="trace-8525"></a>
<a id="trace-8527"></a>
<a id="trace-8541"></a>
<a id="trace-8543"></a>
<a id="trace-8558"></a>
<a id="trace-8560"></a>
<a id="trace-8575"></a>
<a id="trace-8577"></a>
<a id="trace-8597"></a>
<a id="trace-8599"></a>
<a id="trace-8616"></a>
<a id="trace-8618"></a>
<a id="trace-8699"></a>
<a id="trace-8701"></a>
<a id="trace-8736"></a>
<a id="trace-8738"></a>
<a id="trace-8751"></a>
<a id="trace-8753"></a>
<a id="trace-8769"></a>
<a id="trace-8771"></a>
<a id="trace-8782"></a>
<a id="trace-8784"></a>
<a id="trace-8802"></a>
<a id="trace-8804"></a>
<a id="trace-8820"></a>
<a id="trace-8822"></a>
<a id="trace-8844"></a>
<a id="trace-8846"></a>
<a id="trace-8863"></a>
<a id="trace-8865"></a>
<a id="trace-8952"></a>
<a id="trace-8954"></a>
<a id="trace-8974"></a>
<a id="trace-8976"></a>
<a id="trace-8996"></a>
<a id="trace-8998"></a>
<a id="trace-9022"></a>
<a id="trace-9024"></a>
<a id="trace-9046"></a>
<a id="trace-9048"></a>
<a id="trace-9061"></a>
<a id="trace-9063"></a>
<a id="trace-9087"></a>
<a id="trace-9089"></a>
<a id="trace-9379"></a>
<a id="trace-9381"></a>
<a id="trace-9395"></a>
<a id="trace-9397"></a>
<a id="trace-9416"></a>
<a id="trace-9418"></a>
<a id="trace-9505"></a>
<a id="trace-9507"></a>
<a id="trace-9520"></a>
<a id="trace-9522"></a>
<a id="trace-9546"></a>
<a id="trace-9548"></a>
<a id="trace-9572"></a>
<a id="trace-9574"></a>
<a id="trace-9598"></a>
<a id="trace-9600"></a>
<a id="trace-9613"></a>
<a id="trace-9615"></a>
<a id="trace-9643"></a>
<a id="trace-9645"></a>
<a id="trace-9656"></a>
<a id="trace-9658"></a>
<a id="trace-9670"></a>
<a id="trace-9672"></a>
<a id="trace-9683"></a>
<a id="trace-9685"></a>
<a id="trace-9770"></a>
<a id="trace-9772"></a>
<a id="trace-9788"></a>
<a id="trace-9790"></a>
<a id="trace-9808"></a>
<a id="trace-9810"></a>
<a id="trace-9819"></a>
<a id="trace-9821"></a>
<a id="trace-9845"></a>
<a id="trace-9847"></a>
<a id="trace-9857"></a>
<a id="trace-9859"></a>
<a id="trace-9881"></a>
<a id="trace-9883"></a>
<a id="trace-9896"></a>
<a id="trace-9898"></a>
<a id="trace-9924"></a>
<a id="trace-9926"></a>
<a id="trace-9945"></a>
<a id="trace-9947"></a>
<a id="trace-10029"></a>
<a id="trace-10031"></a>
<a id="trace-10051"></a>
<a id="trace-10053"></a>
<a id="trace-10075"></a>
<a id="trace-10077"></a>
<a id="trace-10101"></a>
<a id="trace-10103"></a>
<a id="trace-11790"></a>
<a id="trace-11792"></a>
<a id="trace-11803"></a>
<a id="trace-11805"></a>
<a id="trace-11830"></a>
<a id="trace-11832"></a>
<a id="trace-11846"></a>
<a id="trace-11848"></a>
<a id="trace-11859"></a>
<a id="trace-11861"></a>
<a id="trace-11876"></a>
<a id="trace-11878"></a>
<a id="trace-11954"></a>
<a id="trace-11956"></a>
<a id="trace-11967"></a>
<a id="trace-11969"></a>
<a id="trace-11983"></a>
<a id="trace-11985"></a>
<a id="trace-11997"></a>
<a id="trace-11999"></a>
<a id="trace-12021"></a>
<a id="trace-12023"></a>
<a id="trace-12030"></a>
<a id="trace-12032"></a>
<a id="trace-12047"></a>
<a id="trace-12049"></a>
<a id="trace-12062"></a>
<a id="trace-12064"></a>
<a id="trace-12072"></a>
<a id="trace-12074"></a>
<a id="trace-12081"></a>
<a id="trace-12083"></a>
<a id="trace-12154"></a>
<a id="trace-12156"></a>
<a id="trace-12164"></a>
<a id="trace-12166"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12215"></a>
<a id="trace-12217"></a>
<a id="trace-12225"></a>
<a id="trace-12227"></a>
<a id="trace-12242"></a>
<a id="trace-12244"></a>
<a id="trace-12256"></a>
<a id="trace-12258"></a>
<a id="trace-12272"></a>
<a id="trace-12274"></a>
<a id="trace-12283"></a>
<a id="trace-12285"></a>
<a id="trace-12360"></a>
<a id="trace-12362"></a>
<a id="trace-12372"></a>
<a id="trace-12374"></a>
<a id="trace-12391"></a>
<a id="trace-12393"></a>
<a id="trace-12407"></a>
<a id="trace-12409"></a>
<a id="trace-12425"></a>
<a id="trace-12427"></a>
<a id="trace-12437"></a>
<a id="trace-12439"></a>
<a id="trace-12450"></a>
<a id="trace-12452"></a>
<a id="trace-12458"></a>
<a id="trace-12460"></a>
<a id="trace-12475"></a>
<a id="trace-12477"></a>
<a id="trace-12489"></a>
<a id="trace-12491"></a>
<a id="trace-12567"></a>
<a id="trace-12569"></a>
<a id="trace-12587"></a>
<a id="trace-12589"></a>
<a id="trace-12607"></a>
<a id="trace-12609"></a>
<a id="trace-12732"></a>
<a id="trace-12734"></a>
<a id="trace-12755"></a>
<a id="trace-12757"></a>
<a id="trace-12767"></a>
<a id="trace-12769"></a>
<a id="trace-12791"></a>
<a id="trace-12793"></a>
<a id="trace-12805"></a>
<a id="trace-12807"></a>
<a id="trace-12824"></a>
<a id="trace-12826"></a>
<a id="trace-12841"></a>
<a id="trace-12843"></a>
<a id="trace-12918"></a>
<a id="trace-12920"></a>
<a id="trace-13048"></a>
<a id="trace-13050"></a>
<a id="trace-13073"></a>
<a id="trace-13075"></a>
<a id="trace-13091"></a>
<a id="trace-13093"></a>
<a id="trace-13116"></a>
<a id="trace-13118"></a>
<a id="trace-13131"></a>
<a id="trace-13133"></a>
<a id="trace-13152"></a>
<a id="trace-13154"></a>
<a id="trace-13164"></a>
<a id="trace-13166"></a>
<a id="trace-13181"></a>
<a id="trace-13183"></a>
<a id="trace-13193"></a>
<a id="trace-13195"></a>
<a id="trace-13272"></a>
<a id="trace-13274"></a>
<a id="trace-13282"></a>
<a id="trace-13284"></a>
<a id="trace-13299"></a>
<a id="trace-13301"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13331"></a>
<a id="trace-13333"></a>
<a id="trace-13341"></a>
<a id="trace-13343"></a>
<a id="trace-13358"></a>
<a id="trace-13360"></a>
<a id="trace-13369"></a>
<a id="trace-13371"></a>
<a id="trace-13382"></a>
<a id="trace-13384"></a>
<a id="trace-13395"></a>
<a id="trace-13397"></a>
<a id="trace-13475"></a>
<a id="trace-13477"></a>
<a id="trace-13486"></a>
<a id="trace-13488"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13519"></a>
<a id="trace-13521"></a>
<a id="trace-13537"></a>
<a id="trace-13539"></a>
<a id="trace-13545"></a>
<a id="trace-13547"></a>
<a id="trace-13561"></a>
<a id="trace-13563"></a>
<a id="trace-13573"></a>
<a id="trace-13575"></a>
<a id="trace-13591"></a>
<a id="trace-13593"></a>
<a id="trace-13605"></a>
<a id="trace-13607"></a>
<a id="trace-13685"></a>
<a id="trace-13687"></a>
<a id="trace-13694"></a>
<a id="trace-13696"></a>
<a id="trace-13710"></a>
<a id="trace-13712"></a>
<a id="trace-13723"></a>
<a id="trace-13725"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13749"></a>
<a id="trace-13751"></a>
<a id="trace-13762"></a>
<a id="trace-13764"></a>
<a id="trace-13773"></a>
<a id="trace-13775"></a>
<a id="trace-13788"></a>
<a id="trace-13790"></a>
<a id="trace-13799"></a>
<a id="trace-13801"></a>
<a id="trace-13877"></a>
<a id="trace-13879"></a>
<a id="trace-13888"></a>
<a id="trace-13890"></a>
<a id="trace-13905"></a>
<a id="trace-13907"></a>
<a id="trace-13921"></a>
<a id="trace-13923"></a>
<a id="trace-13940"></a>
<a id="trace-13942"></a>
<a id="trace-13949"></a>
<a id="trace-13951"></a>
<a id="trace-13966"></a>
<a id="trace-13968"></a>
<a id="trace-13978"></a>
<a id="trace-13980"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14003"></a>
<a id="trace-14005"></a>
<a id="trace-14078"></a>
<a id="trace-14080"></a>
<a id="trace-14092"></a>
<a id="trace-14094"></a>
<a id="trace-14112"></a>
<a id="trace-14114"></a>
<a id="trace-14129"></a>
<a id="trace-14131"></a>
<a id="trace-14146"></a>
<a id="trace-14148"></a>
<a id="trace-14155"></a>
<a id="trace-14157"></a>
<a id="trace-14168"></a>
<a id="trace-14170"></a>
<a id="trace-14177"></a>
<a id="trace-14179"></a>
<a id="trace-14191"></a>
<a id="trace-14193"></a>
<a id="trace-14202"></a>
<a id="trace-14204"></a>
<a id="trace-14279"></a>
<a id="trace-14281"></a>
<a id="trace-14292"></a>
<a id="trace-14294"></a>
<a id="trace-14309"></a>
<a id="trace-14311"></a>
<a id="trace-14324"></a>
<a id="trace-14326"></a>
<a id="trace-14344"></a>
<a id="trace-14346"></a>
<a id="trace-14352"></a>
<a id="trace-14354"></a>
<a id="trace-14368"></a>
<a id="trace-14370"></a>
<a id="trace-14380"></a>
<a id="trace-14382"></a>
<a id="trace-14393"></a>
<a id="trace-14395"></a>
<a id="trace-14405"></a>
<a id="trace-14407"></a>
<a id="trace-14484"></a>
<a id="trace-14486"></a>
<a id="trace-14495"></a>
<a id="trace-14497"></a>
<a id="trace-14514"></a>
<a id="trace-14516"></a>
<a id="trace-14530"></a>
<a id="trace-14532"></a>
<a id="trace-14550"></a>
<a id="trace-14552"></a>
<a id="trace-14566"></a>
<a id="trace-14568"></a>
<a id="trace-14583"></a>
<a id="trace-14585"></a>
<a id="trace-14598"></a>
<a id="trace-14600"></a>
<a id="trace-14613"></a>
<a id="trace-14615"></a>
<a id="trace-14624"></a>
<a id="trace-14626"></a>
<a id="trace-14697"></a>
<a id="trace-14699"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14726"></a>
<a id="trace-14728"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14755"></a>
<a id="trace-14757"></a>
<a id="trace-14768"></a>
<a id="trace-14770"></a>
<a id="trace-14784"></a>
<a id="trace-14786"></a>
<a id="trace-14795"></a>
<a id="trace-14797"></a>
<a id="trace-14810"></a>
<a id="trace-14812"></a>
<a id="trace-14822"></a>
<a id="trace-14824"></a>
<a id="trace-14896"></a>
<a id="trace-14898"></a>
<a id="trace-14908"></a>
<a id="trace-14910"></a>
<a id="trace-14926"></a>
<a id="trace-14928"></a>
<a id="trace-14941"></a>
<a id="trace-14943"></a>
<a id="trace-14961"></a>
<a id="trace-14963"></a>
<a id="trace-14972"></a>
<a id="trace-14974"></a>
<a id="trace-14988"></a>
<a id="trace-14990"></a>
<a id="trace-14999"></a>
<a id="trace-15001"></a>
<a id="trace-15014"></a>
<a id="trace-15016"></a>
<a id="trace-15026"></a>
<a id="trace-15028"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15112"></a>
<a id="trace-15114"></a>
<a id="trace-15131"></a>
<a id="trace-15133"></a>
<a id="trace-15143"></a>
<a id="trace-15145"></a>
<a id="trace-15161"></a>
<a id="trace-15163"></a>
<a id="trace-15174"></a>
<a id="trace-15176"></a>
<a id="trace-15190"></a>
<a id="trace-15192"></a>
<a id="trace-15204"></a>
<a id="trace-15206"></a>
<a id="trace-15217"></a>
<a id="trace-15219"></a>
<a id="trace-15228"></a>
<a id="trace-15230"></a>
<a id="trace-15300"></a>
<a id="trace-15302"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
<a id="trace-15350"></a>
<a id="trace-15352"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15375"></a>
<a id="trace-15377"></a>
<a id="trace-15385"></a>
<a id="trace-15387"></a>
<a id="trace-15418"></a>
<a id="trace-15420"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15505"></a>
<a id="trace-15507"></a>
<a id="trace-15513"></a>
<a id="trace-15515"></a>
<a id="trace-15526"></a>
<a id="trace-15528"></a>
<a id="trace-15538"></a>
<a id="trace-15540"></a>
<a id="trace-15554"></a>
<a id="trace-15556"></a>
<a id="trace-15563"></a>
<a id="trace-15565"></a>
<a id="trace-15575"></a>
<a id="trace-15577"></a>
<a id="trace-15582"></a>
<a id="trace-15584"></a>
<a id="trace-15600"></a>
<a id="trace-15602"></a>
<a id="trace-15611"></a>
<a id="trace-15613"></a>
<a id="trace-15690"></a>
<a id="trace-15692"></a>
<a id="trace-15699"></a>
<a id="trace-15701"></a>
<a id="trace-15729"></a>
<a id="trace-15731"></a>
<a id="trace-15745"></a>
<a id="trace-15747"></a>
<a id="trace-15759"></a>
<a id="trace-15761"></a>
<a id="trace-15768"></a>
<a id="trace-15770"></a>
<a id="trace-15780"></a>
<a id="trace-15782"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15805"></a>
<a id="trace-15807"></a>
<a id="trace-15815"></a>
<a id="trace-15817"></a>
<a id="trace-15887"></a>
<a id="trace-15889"></a>
<a id="trace-15895"></a>
<a id="trace-15897"></a>
<a id="trace-15916"></a>
<a id="trace-15918"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-15952"></a>
<a id="trace-15954"></a>
<a id="trace-15975"></a>
<a id="trace-15977"></a>
<a id="trace-15992"></a>
<a id="trace-15994"></a>
<a id="trace-16061"></a>
<a id="trace-16063"></a>
<a id="trace-16082"></a>
<a id="trace-16084"></a>
<a id="trace-16227"></a>
<a id="trace-16229"></a>
<a id="trace-16314"></a>
<a id="trace-16316"></a>
<a id="trace-16334"></a>
<a id="trace-16336"></a>
<a id="trace-16356"></a>
<a id="trace-16358"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16410"></a>
<a id="trace-16412"></a>
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16455"></a>
<a id="trace-16457"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16738"></a>
<a id="trace-16740"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16781"></a>
<a id="trace-16783"></a>
<a id="trace-16791"></a>
<a id="trace-16793"></a>
<a id="trace-16815"></a>
<a id="trace-16817"></a>
<a id="trace-16837"></a>
<a id="trace-16839"></a>
<a id="trace-16858"></a>
<a id="trace-16860"></a>
<a id="trace-16870"></a>
<a id="trace-16872"></a>
<a id="trace-16897"></a>
<a id="trace-16899"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16997"></a>
<a id="trace-16999"></a>
<a id="trace-17023"></a>
<a id="trace-17025"></a>
<a id="trace-17052"></a>
<a id="trace-17054"></a>
<a id="trace-17071"></a>
<a id="trace-17073"></a>
<a id="trace-17091"></a>
<a id="trace-17093"></a>
<a id="trace-17101"></a>
<a id="trace-17103"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17142"></a>
<a id="trace-17144"></a>
<a id="trace-17161"></a>
<a id="trace-17163"></a>
<a id="trace-17177"></a>
<a id="trace-17179"></a>
<a id="trace-17255"></a>
<a id="trace-17257"></a>
<a id="trace-17281"></a>
<a id="trace-17283"></a>
<a id="trace-17304"></a>
<a id="trace-17306"></a>
<a id="trace-17321"></a>
<a id="trace-17323"></a>
<a id="trace-17354"></a>
<a id="trace-17356"></a>
<a id="trace-17366"></a>
<a id="trace-17368"></a>
<a id="trace-17390"></a>
<a id="trace-17392"></a>
<a id="trace-17410"></a>
<a id="trace-17412"></a>
<a id="trace-17427"></a>
<a id="trace-17429"></a>
<a id="trace-17446"></a>
<a id="trace-17448"></a>
<a id="trace-17521"></a>
<a id="trace-17523"></a>
<a id="trace-17532"></a>
<a id="trace-17534"></a>
<a id="trace-17554"></a>
<a id="trace-17556"></a>
<a id="trace-17563"></a>
<a id="trace-17565"></a>
<a id="trace-17587"></a>
<a id="trace-17589"></a>
<a id="trace-17604"></a>
<a id="trace-17606"></a>
<a id="trace-17634"></a>
<a id="trace-17636"></a>
<a id="trace-17765"></a>
<a id="trace-17767"></a>
<a id="trace-17791"></a>
<a id="trace-17793"></a>
<a id="trace-17813"></a>
<a id="trace-17815"></a>
<a id="trace-17901"></a>
<a id="trace-17903"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17930"></a>
<a id="trace-17932"></a>
<a id="trace-17943"></a>
<a id="trace-17945"></a>
<a id="trace-17962"></a>
<a id="trace-17964"></a>
<a id="trace-17979"></a>
<a id="trace-17981"></a>
<a id="trace-17995"></a>
<a id="trace-17997"></a>
<a id="trace-18009"></a>
<a id="trace-18011"></a>
<a id="trace-18032"></a>
<a id="trace-18034"></a>
<a id="trace-18049"></a>
<a id="trace-18051"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18260"></a>
<a id="trace-18262"></a>
<a id="trace-18280"></a>
<a id="trace-18282"></a>
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18329"></a>
<a id="trace-18331"></a>
<a id="trace-18340"></a>
<a id="trace-18342"></a>
<a id="trace-18498"></a>
<a id="trace-18500"></a>
<a id="trace-18519"></a>
<a id="trace-18521"></a>
<a id="trace-18545"></a>
<a id="trace-18547"></a>
<a id="trace-18559"></a>
<a id="trace-18561"></a>
<a id="trace-18643"></a>
<a id="trace-18645"></a>
<a id="trace-18675"></a>
<a id="trace-18677"></a>
<a id="trace-18689"></a>
<a id="trace-18691"></a>
<a id="trace-18709"></a>
<a id="trace-18711"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18767"></a>
<a id="trace-18769"></a>
<a id="trace-18779"></a>
<a id="trace-18781"></a>
<a id="trace-18801"></a>
<a id="trace-18803"></a>
<a id="trace-18821"></a>
<a id="trace-18823"></a>
<a id="trace-18896"></a>
<a id="trace-18898"></a>
<a id="trace-18915"></a>
<a id="trace-18917"></a>
<a id="trace-18935"></a>
<a id="trace-18937"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-18968"></a>
<a id="trace-18970"></a>
<a id="trace-18981"></a>
<a id="trace-18983"></a>
<a id="trace-19004"></a>
<a id="trace-19006"></a>
<a id="trace-19028"></a>
<a id="trace-19030"></a>
<a id="trace-19044"></a>
<a id="trace-19046"></a>
<a id="trace-19057"></a>
<a id="trace-19059"></a>
<a id="trace-19281"></a>
<a id="trace-19283"></a>
<a id="trace-19300"></a>
<a id="trace-19302"></a>
<a id="trace-19324"></a>
<a id="trace-19326"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19356"></a>
<a id="trace-19358"></a>
<a id="trace-19382"></a>
<a id="trace-19384"></a>
<a id="trace-19395"></a>
<a id="trace-19397"></a>
<a id="trace-19415"></a>
<a id="trace-19417"></a>
<a id="trace-19440"></a>
<a id="trace-19442"></a>
<a id="trace-19465"></a>
<a id="trace-19467"></a>
<a id="trace-19546"></a>
<a id="trace-19548"></a>
<a id="trace-19558"></a>
<a id="trace-19560"></a>
<a id="trace-19578"></a>
<a id="trace-19580"></a>
<a id="trace-19601"></a>
<a id="trace-19603"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
<a id="trace-19629"></a>
<a id="trace-19631"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19663"></a>
<a id="trace-19665"></a>
<a id="trace-19680"></a>
<a id="trace-19682"></a>
<a id="trace-19961"></a>
<a id="trace-19963"></a>
<a id="trace-20040"></a>
<a id="trace-20042"></a>
<a id="trace-20067"></a>
<a id="trace-20069"></a>
<a id="trace-20092"></a>
<a id="trace-20094"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20138"></a>
<a id="trace-20140"></a>
<a id="trace-20158"></a>
<a id="trace-20160"></a>
<a id="trace-20181"></a>
<a id="trace-20183"></a>
<a id="trace-20194"></a>
<a id="trace-20196"></a>
<a id="trace-20217"></a>
<a id="trace-20219"></a>
<a id="trace-20238"></a>
<a id="trace-20240"></a>
<a id="trace-20317"></a>
<a id="trace-20319"></a>
<a id="trace-20334"></a>
<a id="trace-20336"></a>
<a id="trace-20649"></a>
<a id="trace-20651"></a>
<a id="trace-20662"></a>
<a id="trace-20664"></a>
<a id="trace-20691"></a>
<a id="trace-20693"></a>
<a id="trace-20717"></a>
<a id="trace-20719"></a>
<a id="trace-20743"></a>
<a id="trace-20745"></a>
<a id="trace-20769"></a>
<a id="trace-20771"></a>
<a id="trace-20845"></a>
<a id="trace-20847"></a>
<a id="trace-20869"></a>
<a id="trace-20871"></a>
<a id="trace-24043"></a>
<a id="trace-24045"></a>
<a id="trace-24060"></a>
<a id="trace-24062"></a>
<a id="trace-24087"></a>
<a id="trace-24089"></a>
<a id="trace-24105"></a>
<a id="trace-24107"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24163"></a>
<a id="trace-24165"></a>
<a id="trace-24516"></a>
<a id="trace-24518"></a>
<a id="trace-24542"></a>
<a id="trace-24544"></a>
<a id="trace-24566"></a>
<a id="trace-24568"></a>
<a id="trace-24589"></a>
<a id="trace-24591"></a>
<a id="trace-24671"></a>
<a id="trace-24673"></a>
<a id="trace-24693"></a>
<a id="trace-24695"></a>
<a id="trace-24719"></a>
<a id="trace-24721"></a>
<a id="trace-25098"></a>
<a id="trace-25100"></a>
<a id="trace-25128"></a>
<a id="trace-25130"></a>
<a id="trace-25152"></a>
<a id="trace-25154"></a>
<a id="trace-25176"></a>
<a id="trace-25178"></a>
<a id="trace-25200"></a>
<a id="trace-25202"></a>
<a id="trace-25215"></a>
<a id="trace-25217"></a>
<a id="trace-25231"></a>
<a id="trace-25233"></a>
<a id="trace-25308"></a>
<a id="trace-25310"></a>
<a id="trace-25326"></a>
<a id="trace-25328"></a>
<a id="trace-25346"></a>
<a id="trace-25348"></a>
<a id="trace-25365"></a>
<a id="trace-25367"></a>
<a id="trace-25405"></a>
<a id="trace-25407"></a>
<a id="trace-25429"></a>
<a id="trace-25431"></a>
<a id="trace-25446"></a>
<a id="trace-25448"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25506"></a>
<a id="trace-25508"></a>
<a id="trace-25523"></a>
<a id="trace-25525"></a>
<a id="trace-25600"></a>
<a id="trace-25602"></a>
<a id="trace-25613"></a>
<a id="trace-25615"></a>
<a id="trace-25694"></a>
<a id="trace-25696"></a>
<a id="trace-25729"></a>
<a id="trace-25731"></a>
<a id="trace-25781"></a>
<a id="trace-25783"></a>
<a id="trace-25803"></a>
<a id="trace-25805"></a>
<a id="trace-25824"></a>
<a id="trace-25826"></a>
<a id="trace-25846"></a>
<a id="trace-25848"></a>
<a id="trace-25871"></a>
<a id="trace-25873"></a>
<a id="trace-25884"></a>
<a id="trace-25886"></a>
<a id="trace-26101"></a>
<a id="trace-26103"></a>
<a id="trace-26118"></a>
<a id="trace-26120"></a>
<a id="trace-26140"></a>
<a id="trace-26142"></a>
<a id="trace-26157"></a>
<a id="trace-26159"></a>
<a id="trace-26185"></a>
<a id="trace-26187"></a>
<a id="trace-26203"></a>
<a id="trace-26205"></a>
<a id="trace-26229"></a>
<a id="trace-26231"></a>
<a id="trace-26249"></a>
<a id="trace-26251"></a>
<a id="trace-26275"></a>
<a id="trace-26277"></a>
<a id="trace-26292"></a>
<a id="trace-26294"></a>
<a id="trace-26370"></a>
<a id="trace-26372"></a>
<a id="trace-26383"></a>
<a id="trace-26385"></a>
<a id="trace-26408"></a>
<a id="trace-26410"></a>
<a id="trace-26425"></a>
<a id="trace-26427"></a>
<a id="trace-26454"></a>
<a id="trace-26456"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26492"></a>
<a id="trace-26494"></a>
<a id="trace-26511"></a>
<a id="trace-26513"></a>
<a id="trace-26532"></a>
<a id="trace-26534"></a>
<a id="trace-26544"></a>
<a id="trace-26546"></a>
<a id="trace-26620"></a>
<a id="trace-26622"></a>
<a id="trace-26632"></a>
<a id="trace-26634"></a>
<a id="trace-26656"></a>
<a id="trace-26658"></a>
<a id="trace-26670"></a>
<a id="trace-26672"></a>
<a id="trace-26746"></a>
<a id="trace-26748"></a>
<a id="trace-26758"></a>
<a id="trace-26760"></a>
<a id="trace-26785"></a>
<a id="trace-26787"></a>
<a id="trace-26801"></a>
<a id="trace-26803"></a>
<a id="trace-26818"></a>
<a id="trace-26820"></a>
<a id="trace-26838"></a>
<a id="trace-26840"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
<a id="trace-26928"></a>
<a id="trace-26930"></a>
<a id="trace-26945"></a>
<a id="trace-26947"></a>
<a id="trace-26959"></a>
<a id="trace-26961"></a>
<a id="trace-26988"></a>
<a id="trace-26990"></a>
<a id="trace-27012"></a>
<a id="trace-27014"></a>
<a id="trace-27028"></a>
<a id="trace-27030"></a>
<a id="trace-27054"></a>
<a id="trace-27056"></a>
<a id="trace-27069"></a>
<a id="trace-27071"></a>
<a id="trace-27146"></a>
<a id="trace-27148"></a>
<a id="trace-27157"></a>
<a id="trace-27159"></a>
<a id="trace-27178"></a>
<a id="trace-27180"></a>
<a id="trace-27192"></a>
<a id="trace-27194"></a>
<a id="trace-27214"></a>
<a id="trace-27216"></a>
<a id="trace-27231"></a>
<a id="trace-27233"></a>
<a id="trace-27254"></a>
<a id="trace-27256"></a>
<a id="trace-27265"></a>
<a id="trace-27267"></a>
<a id="trace-27334"></a>
<a id="trace-27336"></a>
<a id="trace-27349"></a>
<a id="trace-27351"></a>
<a id="trace-27421"></a>
<a id="trace-27423"></a>
<a id="trace-27435"></a>
<a id="trace-27437"></a>
<a id="trace-27454"></a>
<a id="trace-27456"></a>
<a id="trace-27470"></a>
<a id="trace-27472"></a>
<a id="trace-27493"></a>
<a id="trace-27495"></a>
<a id="trace-27503"></a>
<a id="trace-27505"></a>
<a id="trace-27521"></a>
<a id="trace-27523"></a>
<a id="trace-27534"></a>
<a id="trace-27536"></a>
<a id="trace-27555"></a>
<a id="trace-27557"></a>
<a id="trace-27569"></a>
<a id="trace-27571"></a>
<a id="trace-27639"></a>
<a id="trace-27641"></a>
<a id="trace-27650"></a>
<a id="trace-27652"></a>
<a id="trace-27663"></a>
<a id="trace-27665"></a>
<a id="trace-27671"></a>
<a id="trace-27673"></a>
<a id="trace-27686"></a>
<a id="trace-27688"></a>
<a id="trace-27698"></a>
<a id="trace-27700"></a>
<a id="trace-27711"></a>
<a id="trace-27713"></a>
<a id="trace-27718"></a>
<a id="trace-27720"></a>
<a id="trace-27732"></a>
<a id="trace-27734"></a>
<a id="trace-27746"></a>
<a id="trace-27748"></a>
<a id="trace-27816"></a>
<a id="trace-27818"></a>
<a id="trace-27834"></a>
<a id="trace-27836"></a>
<a id="trace-27860"></a>
<a id="trace-27862"></a>
<a id="trace-27872"></a>
<a id="trace-27874"></a>
<a id="trace-27891"></a>
<a id="trace-27893"></a>
<a id="trace-27905"></a>
<a id="trace-27907"></a>
<a id="trace-27916"></a>
<a id="trace-27918"></a>
<a id="trace-27925"></a>
<a id="trace-27927"></a>
<a id="trace-27941"></a>
<a id="trace-27943"></a>
<a id="trace-27951"></a>
<a id="trace-27953"></a>
<a id="trace-28020"></a>
<a id="trace-28022"></a>
<a id="trace-28029"></a>
<a id="trace-28031"></a>
<a id="trace-28048"></a>
<a id="trace-28050"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28106"></a>
<a id="trace-28108"></a>
<a id="trace-28121"></a>
<a id="trace-28123"></a>
<a id="trace-28127"></a>
<a id="trace-28129"></a>
<a id="trace-28143"></a>
<a id="trace-28145"></a>
<a id="trace-28153"></a>
<a id="trace-28155"></a>
<a id="trace-28222"></a>
<a id="trace-28224"></a>
<a id="trace-28231"></a>
<a id="trace-28233"></a>
<a id="trace-28243"></a>
<a id="trace-28245"></a>
<a id="trace-28252"></a>
<a id="trace-28254"></a>
<a id="trace-28267"></a>
<a id="trace-28269"></a>
<a id="trace-28285"></a>
<a id="trace-28287"></a>
<a id="trace-28297"></a>
<a id="trace-28299"></a>
<a id="trace-28311"></a>
<a id="trace-28313"></a>
<a id="trace-28340"></a>
<a id="trace-28342"></a>
<a id="trace-28350"></a>
<a id="trace-28352"></a>
<a id="trace-28419"></a>
<a id="trace-28421"></a>
<a id="trace-28431"></a>
<a id="trace-28433"></a>
<a id="trace-28443"></a>
<a id="trace-28445"></a>
<a id="trace-28452"></a>
<a id="trace-28454"></a>
<a id="trace-28466"></a>
<a id="trace-28468"></a>
<a id="trace-28479"></a>
<a id="trace-28481"></a>
<a id="trace-28492"></a>
<a id="trace-28494"></a>
<a id="trace-28501"></a>
<a id="trace-28503"></a>
<a id="trace-28522"></a>
<a id="trace-28524"></a>
<a id="trace-28532"></a>
<a id="trace-28534"></a>
<a id="trace-28609"></a>
<a id="trace-28611"></a>
<a id="trace-28619"></a>
<a id="trace-28621"></a>
<a id="trace-28643"></a>
<a id="trace-28645"></a>
<a id="trace-28652"></a>
<a id="trace-28654"></a>
<a id="trace-28670"></a>
<a id="trace-28672"></a>
<a id="trace-28683"></a>
<a id="trace-28685"></a>
<a id="trace-28696"></a>
<a id="trace-28698"></a>
<a id="trace-28703"></a>
<a id="trace-28705"></a>
<a id="trace-28717"></a>
<a id="trace-28719"></a>
<a id="trace-28725"></a>
<a id="trace-28727"></a>
<a id="trace-28795"></a>
<a id="trace-28797"></a>
<a id="trace-28806"></a>
<a id="trace-28808"></a>
<a id="trace-28827"></a>
<a id="trace-28829"></a>
<a id="trace-28834"></a>
<a id="trace-28836"></a>
<a id="trace-28856"></a>
<a id="trace-28858"></a>
<a id="trace-28883"></a>
<a id="trace-28885"></a>
<a id="trace-28894"></a>
<a id="trace-28896"></a>
<a id="trace-28906"></a>
<a id="trace-28908"></a>
<a id="trace-28921"></a>
<a id="trace-28923"></a>
<a id="trace-28933"></a>
<a id="trace-28935"></a>
<a id="trace-29002"></a>
<a id="trace-29004"></a>
<a id="trace-29011"></a>
<a id="trace-29013"></a>
<a id="trace-29024"></a>
<a id="trace-29026"></a>
<a id="trace-29033"></a>
<a id="trace-29035"></a>
<a id="trace-29095"></a>
<a id="trace-29097"></a>
<a id="trace-29115"></a>
<a id="trace-29117"></a>
<a id="trace-29131"></a>
<a id="trace-29133"></a>
<a id="trace-29150"></a>
<a id="trace-29152"></a>
<a id="trace-29177"></a>
<a id="trace-29179"></a>
<a id="trace-29192"></a>
<a id="trace-29194"></a>
<a id="trace-29268"></a>
<a id="trace-29270"></a>
<a id="trace-29281"></a>
<a id="trace-29283"></a>
<a id="trace-29301"></a>
<a id="trace-29303"></a>
<a id="trace-29316"></a>
<a id="trace-29318"></a>
<a id="trace-29332"></a>
<a id="trace-29334"></a>
<a id="trace-29343"></a>
<a id="trace-29345"></a>
<a id="trace-29358"></a>
<a id="trace-29360"></a>
<a id="trace-29368"></a>
<a id="trace-29370"></a>
<a id="trace-29394"></a>
<a id="trace-29396"></a>
<a id="trace-29406"></a>
<a id="trace-29408"></a>
<a id="trace-29487"></a>
<a id="trace-29489"></a>
<a id="trace-29509"></a>
<a id="trace-29511"></a>
<a id="trace-29527"></a>
<a id="trace-29529"></a>
<a id="trace-29538"></a>
<a id="trace-29540"></a>
<a id="trace-29561"></a>
<a id="trace-29563"></a>
<a id="trace-29574"></a>
<a id="trace-29576"></a>
<a id="trace-29653"></a>
<a id="trace-29655"></a>
<a id="trace-29665"></a>
<a id="trace-29667"></a>
<a id="trace-29689"></a>
<a id="trace-29691"></a>
<a id="trace-29700"></a>
<a id="trace-29702"></a>
<a id="trace-29778"></a>
<a id="trace-29780"></a>
<a id="trace-29799"></a>
<a id="trace-29801"></a>
<a id="trace-29814"></a>
<a id="trace-29816"></a>
<a id="trace-29831"></a>
<a id="trace-29833"></a>
<a id="trace-29864"></a>
<a id="trace-29866"></a>
<a id="trace-29876"></a>
<a id="trace-29878"></a>
<a id="trace-29894"></a>
<a id="trace-29896"></a>
<a id="trace-29902"></a>
<a id="trace-29904"></a>
<a id="trace-29920"></a>
<a id="trace-29922"></a>
<a id="trace-29939"></a>
<a id="trace-29941"></a>
<a id="trace-30007"></a>
<a id="trace-30009"></a>
<a id="trace-30016"></a>
<a id="trace-30018"></a>
<a id="trace-30035"></a>
<a id="trace-30037"></a>
<a id="trace-30045"></a>
<a id="trace-30047"></a>
<a id="trace-30071"></a>
<a id="trace-30073"></a>
<a id="trace-30083"></a>
<a id="trace-30085"></a>
<a id="trace-30110"></a>
<a id="trace-30112"></a>
<a id="trace-30119"></a>
<a id="trace-30121"></a>
<a id="trace-30153"></a>
<a id="trace-30155"></a>
<a id="trace-30165"></a>
<a id="trace-30167"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42199754025604697, 'next_transition': 728}.
<a id="trace-1101"></a>
<a id="trace-1132"></a>
<a id="trace-1162"></a>
<a id="trace-1164"></a>
<a id="trace-1183"></a>
<a id="trace-1185"></a>
<a id="trace-1202"></a>
<a id="trace-1204"></a>
<a id="trace-1294"></a>
<a id="trace-1296"></a>
<a id="trace-1316"></a>
<a id="trace-1318"></a>
- 7.70s–10.70s (×12), actor 5, squad 0 (trace 1101): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 887. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44250584312197716, 'next_transition': 1132}.
<a id="trace-1329"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 1329): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1215. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37873927694671694, 'next_transition': 1651}.
<a id="trace-1651"></a>
<a id="trace-1653"></a>
<a id="trace-1794"></a>
<a id="trace-1796"></a>
<a id="trace-2055"></a>
<a id="trace-2057"></a>
<a id="trace-2089"></a>
<a id="trace-2091"></a>
<a id="trace-2181"></a>
<a id="trace-2183"></a>
<a id="trace-2209"></a>
<a id="trace-2211"></a>
<a id="trace-2246"></a>
<a id="trace-2248"></a>
<a id="trace-2288"></a>
<a id="trace-2290"></a>
<a id="trace-2314"></a>
<a id="trace-2316"></a>
<a id="trace-2344"></a>
<a id="trace-2346"></a>
<a id="trace-2403"></a>
<a id="trace-2405"></a>
<a id="trace-2432"></a>
<a id="trace-2434"></a>
<a id="trace-2458"></a>
<a id="trace-2460"></a>
<a id="trace-2557"></a>
<a id="trace-2559"></a>
<a id="trace-2595"></a>
<a id="trace-2597"></a>
<a id="trace-2645"></a>
<a id="trace-2647"></a>
<a id="trace-2711"></a>
<a id="trace-2713"></a>
- 11.20s–23.25s (×34), actor 5, squad 0 (trace 1651): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 1220. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.382128744361154, 'next_transition': 1794}.
<a id="trace-173"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 173): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-1766"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1766): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1766. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-1767"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1767): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1767. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1835}.
<a id="trace-1835"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1835): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1223. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 28.436529005284378, 'next_transition': 3236}.
<a id="trace-2740"></a>
- 24.00s–24.00s (×1), actor 0, squad 0 (trace 2740): traveling overwatch. Knowledge: actor memory at 20.00s, trace 2475. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3112}.
<a id="trace-2741"></a>
- 24.00s–24.00s (×1), actor 0, squad 0 (trace 2741): matching received arrivals: traveling stage complete. Knowledge: actor memory at 20.00s, trace 2475. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.021079803722995324, 'next_transition': 3112}.
<a id="trace-3112"></a>
<a id="trace-3114"></a>
<a id="trace-3150"></a>
<a id="trace-3152"></a>
<a id="trace-3773"></a>
<a id="trace-3775"></a>
<a id="trace-3803"></a>
<a id="trace-3805"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 3112): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 2480. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3150}.
<a id="trace-3236"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3236): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 3168. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.057708584849415, 'next_transition': 3981}.
<a id="trace-3237"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3237): bounding overwatch. Knowledge: actor memory at 25.00s, trace 3168. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.057708584849415, 'next_transition': 3981}.
<a id="trace-3238"></a>
- 25.20s–25.20s (×1), actor 8, squad 1 (trace 3238): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 3168. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.057708584849415, 'next_transition': 3981}.
<a id="trace-329"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 329): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3859"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3859): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3859. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1414004324845992, 'next_transition': 3910}.
<a id="trace-3860"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 3860): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 3860. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1414004324845992, 'next_transition': 3910}.
<a id="trace-3910"></a>
<a id="trace-3912"></a>
<a id="trace-3962"></a>
<a id="trace-3964"></a>
<a id="trace-4523"></a>
<a id="trace-4525"></a>
<a id="trace-4633"></a>
<a id="trace-4635"></a>
<a id="trace-4663"></a>
<a id="trace-4665"></a>
<a id="trace-4732"></a>
<a id="trace-4734"></a>
<a id="trace-4775"></a>
<a id="trace-4777"></a>
<a id="trace-4824"></a>
<a id="trace-4826"></a>
<a id="trace-4844"></a>
<a id="trace-4846"></a>
<a id="trace-4875"></a>
<a id="trace-4877"></a>
<a id="trace-4891"></a>
<a id="trace-4893"></a>
<a id="trace-4982"></a>
<a id="trace-4984"></a>
- 27.25s–35.25s (×24), actor 5, squad 0 (trace 3910): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 3860. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1563094845930522, 'next_transition': 3962}.
<a id="trace-3981"></a>
- 28.60s–28.60s (×1), actor 8, squad 1 (trace 3981): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 25.00s, trace 3168. Next observer evidence: {'until': 40.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 10.072475110303397, 'next_transition': 622}.
<a id="trace-3982"></a>
- 28.60s–28.60s (×1), actor 8, squad 1 (trace 3982): rearward bound: one stationary suppressing element. Knowledge: actor memory at 25.00s, trace 3168. Next observer evidence: {'until': 40.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 10.072475110303397, 'next_transition': 622}.
<a id="trace-5001"></a>
- 35.55s–35.55s (×1), actor 0, squad 0 (trace 5001): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 4909. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5165}.
<a id="trace-5165"></a>
<a id="trace-5167"></a>
- 35.75s–35.75s (×2), actor 5, squad 0 (trace 5165): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4914. Next observer evidence: {'until': 36.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06399687351982515, 'next_transition': 5209}.
<a id="trace-5209"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5209): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 4909. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033002818534937334, 'next_transition': 5728}.
<a id="trace-5210"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5210): bounding overwatch. Knowledge: actor memory at 35.00s, trace 4909. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033002818534937334, 'next_transition': 5728}.
<a id="trace-5211"></a>
- 36.40s–36.40s (×1), actor 0, squad 0 (trace 5211): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4909. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.033002818534937334, 'next_transition': 5728}.
<a id="trace-5728"></a>
<a id="trace-5730"></a>
- 36.75s–36.75s (×2), actor 5, squad 0 (trace 5728): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4914. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4135112595229701, 'next_transition': 6246}.
<a id="trace-5737"></a>
- 36.75s–36.75s (×1), actor 0, squad 0 (trace 5737): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 4909. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.4135112595229701, 'next_transition': 6246}.
<a id="trace-6246"></a>
<a id="trace-6248"></a>
<a id="trace-6304"></a>
<a id="trace-6306"></a>
<a id="trace-6321"></a>
<a id="trace-6323"></a>
<a id="trace-6379"></a>
<a id="trace-6381"></a>
<a id="trace-6471"></a>
<a id="trace-6473"></a>
- 37.25s–40.25s (×10), actor 5, squad 0 (trace 6246): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 4914. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7082878603272269, 'next_transition': 6304}.
<a id="trace-6480"></a>
- 40.25s–40.25s (×1), actor 1, squad 0 (trace 6480): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 6390. Next observer evidence: None.
<a id="trace-6481"></a>
- 40.25s–40.25s (×1), actor 1, squad 0 (trace 6481): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 6390. Next observer evidence: None.
<a id="trace-621"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (events line 621): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-622"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (events line 622): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6856"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6856): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577645 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6856. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1457163978068218, 'next_transition': 6881}.
<a id="trace-6857"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 6857): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577645 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6857. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1457163978068218, 'next_transition': 6881}.
<a id="trace-6858"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (trace 6858): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577645 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6858. Next observer evidence: {'until': 43.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.556078040146782, 'next_transition': 7045}.
<a id="trace-6859"></a>
- 40.35s–40.35s (×1), actor 5, squad 1 (trace 6859): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.577645 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 6859. Next observer evidence: {'until': 43.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.556078040146782, 'next_transition': 7045}.
<a id="trace-6881"></a>
<a id="trace-6883"></a>
<a id="trace-6914"></a>
<a id="trace-6916"></a>
<a id="trace-6944"></a>
<a id="trace-6946"></a>
<a id="trace-6971"></a>
<a id="trace-6973"></a>
<a id="trace-6994"></a>
<a id="trace-6996"></a>
<a id="trace-7022"></a>
<a id="trace-7035"></a>
<a id="trace-7360"></a>
<a id="trace-7393"></a>
<a id="trace-7417"></a>
<a id="trace-7440"></a>
<a id="trace-7457"></a>
<a id="trace-7459"></a>
<a id="trace-7502"></a>
<a id="trace-7504"></a>
<a id="trace-7523"></a>
<a id="trace-7525"></a>
<a id="trace-7549"></a>
<a id="trace-7551"></a>
- 40.75s–49.75s (×24), actor 5, squad 0 (trace 6881): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 6859. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7030999643444432, 'next_transition': 6914}.
<a id="trace-7045"></a>
- 43.90s–43.90s (×1), actor 8, squad 1 (trace 7045): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 6397. Next observer evidence: {'until': 49.6, 'shots': 3, 'casualties': 1, 'mean_displacement': 6.132654352947268, 'next_transition': 7539}.
<a id="trace-7046"></a>
- 43.90s–43.90s (×1), actor 8, squad 1 (trace 7046): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 6397. Next observer evidence: {'until': 49.6, 'shots': 3, 'casualties': 1, 'mean_displacement': 6.132654352947268, 'next_transition': 7539}.
<a id="trace-7539"></a>
- 49.65s–49.65s (×1), actor 9, squad 1 (trace 7539): NeedSupport. Knowledge: actor memory at 45.00s, trace 7263. Next observer evidence: {'until': 59, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.094563893034726, 'next_transition': 8223}.
<a id="trace-7633"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 7633): support established: element delivered fire on threat area. Knowledge: actor memory at 50.00s, trace 7563. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3111899676347877, 'next_transition': 7647}.
<a id="trace-7634"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 7634): Fixing. Knowledge: actor memory at 50.00s, trace 7563. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3111899676347877, 'next_transition': 7647}.
<a id="trace-7647"></a>
<a id="trace-7649"></a>
<a id="trace-7669"></a>
<a id="trace-7671"></a>
<a id="trace-7692"></a>
<a id="trace-7694"></a>
<a id="trace-7729"></a>
<a id="trace-7731"></a>
<a id="trace-7750"></a>
<a id="trace-7752"></a>
<a id="trace-7768"></a>
<a id="trace-7780"></a>
<a id="trace-7805"></a>
<a id="trace-7821"></a>
- 50.25s–54.75s (×14), actor 5, squad 0 (trace 7647): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 7567. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4003077380609237, 'next_transition': 7669}.
<a id="trace-7899"></a>
- 55.15s–55.15s (×1), actor 1, squad 0 (trace 7899): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 7832. Next observer evidence: {'until': 55.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2923087979350233, 'next_transition': 8028}.
<a id="trace-7900"></a>
- 55.15s–55.15s (×1), actor 1, squad 0 (trace 7900): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 7832. Next observer evidence: {'until': 55.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2923087979350233, 'next_transition': 8028}.
<a id="trace-8028"></a>
- 55.45s–55.45s (×1), actor 1, squad 0 (trace 8028): NeedSupport. Knowledge: actor memory at 55.00s, trace 7832. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14411639180975813, 'next_transition': 8039}.
<a id="trace-8039"></a>
<a id="trace-8041"></a>
<a id="trace-8072"></a>
<a id="trace-8074"></a>
<a id="trace-8108"></a>
<a id="trace-8110"></a>
<a id="trace-8136"></a>
<a id="trace-8138"></a>
- 55.75s–57.25s (×8), actor 5, squad 0 (trace 8039): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7836. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20757676733345115, 'next_transition': 8072}.
<a id="trace-8148"></a>
- 57.35s–57.35s (×1), actor 1, squad 0 (trace 8148): support lost: eight seconds without element delivery evidence. Knowledge: actor memory at 55.00s, trace 7832. Next observer evidence: {'until': 57.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.583790188987732, 'next_transition': 8161}.
<a id="trace-8161"></a>
<a id="trace-8163"></a>
<a id="trace-8190"></a>
<a id="trace-8192"></a>
<a id="trace-8207"></a>
<a id="trace-8209"></a>
<a id="trace-8312"></a>
<a id="trace-8314"></a>
<a id="trace-8331"></a>
<a id="trace-8333"></a>
<a id="trace-8420"></a>
<a id="trace-8422"></a>
<a id="trace-8454"></a>
<a id="trace-8456"></a>
<a id="trace-8478"></a>
<a id="trace-8480"></a>
<a id="trace-8498"></a>
<a id="trace-8500"></a>
<a id="trace-8521"></a>
<a id="trace-8523"></a>
<a id="trace-8537"></a>
<a id="trace-8539"></a>
<a id="trace-8554"></a>
<a id="trace-8556"></a>
<a id="trace-8571"></a>
<a id="trace-8573"></a>
<a id="trace-8593"></a>
<a id="trace-8595"></a>
<a id="trace-8612"></a>
<a id="trace-8614"></a>
<a id="trace-8695"></a>
<a id="trace-8697"></a>
<a id="trace-8714"></a>
<a id="trace-8716"></a>
<a id="trace-8765"></a>
<a id="trace-8767"></a>
<a id="trace-8778"></a>
<a id="trace-8780"></a>
<a id="trace-8840"></a>
<a id="trace-8842"></a>
<a id="trace-8859"></a>
<a id="trace-8861"></a>
<a id="trace-8948"></a>
<a id="trace-8950"></a>
<a id="trace-8970"></a>
<a id="trace-8972"></a>
<a id="trace-8992"></a>
<a id="trace-8994"></a>
<a id="trace-9042"></a>
<a id="trace-9044"></a>
<a id="trace-9083"></a>
<a id="trace-9085"></a>
- 57.75s–73.25s (×52), actor 5, squad 0 (trace 8161): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 7836. Next observer evidence: {'until': 58.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5234346971118912, 'next_transition': 8190}.
<a id="trace-8223"></a>
- 59.05s–59.05s (×1), actor 9, squad 1 (trace 8223): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 7839. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.793831548583016, 'next_transition': 8893}.
<a id="trace-8250"></a>
- 59.05s–59.05s (×1), actor 9, squad 1 (trace 8250): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 7839. Next observer evidence: {'until': 70, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.793831548583016, 'next_transition': 8893}.
<a id="trace-8893"></a>
- 70.10s–70.10s (×1), actor 9, squad 1 (trace 8893): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 70.00s, trace 8876. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 987}.
<a id="trace-9095"></a>
- 73.70s–73.70s (×1), actor 1, squad 0 (trace 9095): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 8869. Next observer evidence: None.
<a id="trace-9217"></a>
- 73.70s–73.70s (×1), actor 1, squad 0 (trace 9217): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 8869. Next observer evidence: None.
<a id="trace-9375"></a>
<a id="trace-9377"></a>
<a id="trace-9391"></a>
<a id="trace-9393"></a>
<a id="trace-9412"></a>
<a id="trace-9414"></a>
<a id="trace-9501"></a>
<a id="trace-9503"></a>
<a id="trace-9516"></a>
<a id="trace-9518"></a>
<a id="trace-9542"></a>
<a id="trace-9544"></a>
<a id="trace-9568"></a>
<a id="trace-9570"></a>
<a id="trace-9594"></a>
<a id="trace-9596"></a>
<a id="trace-9609"></a>
<a id="trace-9611"></a>
<a id="trace-9652"></a>
<a id="trace-9654"></a>
<a id="trace-9766"></a>
<a id="trace-9768"></a>
<a id="trace-9804"></a>
<a id="trace-9806"></a>
<a id="trace-9841"></a>
<a id="trace-9843"></a>
<a id="trace-9853"></a>
<a id="trace-9855"></a>
<a id="trace-9877"></a>
<a id="trace-9879"></a>
<a id="trace-9892"></a>
<a id="trace-9894"></a>
<a id="trace-9920"></a>
<a id="trace-9922"></a>
<a id="trace-9941"></a>
<a id="trace-9943"></a>
<a id="trace-10025"></a>
<a id="trace-10027"></a>
- 73.75s–85.25s (×38), actor 5, squad 0 (trace 9375): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 8873. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19439956141820863, 'next_transition': 9391}.
<a id="trace-987"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 987): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9823"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 9823): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292667 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9823. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10105}.
<a id="trace-9824"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 9824): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.292667 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 9824. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10105}.
<a id="trace-10037"></a>
- 85.45s–85.45s (×1), actor 1, squad 0 (trace 10037): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 85.00s, trace 9954. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0799956842846505, 'next_transition': 10097}.
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-11799"></a>
<a id="trace-11801"></a>
<a id="trace-11826"></a>
<a id="trace-11828"></a>
<a id="trace-11855"></a>
<a id="trace-11857"></a>
<a id="trace-11872"></a>
<a id="trace-11874"></a>
<a id="trace-11950"></a>
<a id="trace-11952"></a>
<a id="trace-11963"></a>
<a id="trace-11965"></a>
<a id="trace-11979"></a>
<a id="trace-11981"></a>
<a id="trace-11993"></a>
<a id="trace-11995"></a>
<a id="trace-12017"></a>
<a id="trace-12019"></a>
<a id="trace-12026"></a>
<a id="trace-12028"></a>
<a id="trace-12043"></a>
<a id="trace-12045"></a>
<a id="trace-12058"></a>
<a id="trace-12060"></a>
<a id="trace-12077"></a>
<a id="trace-12079"></a>
<a id="trace-12160"></a>
<a id="trace-12162"></a>
<a id="trace-12175"></a>
<a id="trace-12177"></a>
<a id="trace-12191"></a>
<a id="trace-12193"></a>
<a id="trace-12211"></a>
<a id="trace-12213"></a>
<a id="trace-12221"></a>
<a id="trace-12223"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12252"></a>
<a id="trace-12254"></a>
<a id="trace-12268"></a>
<a id="trace-12270"></a>
<a id="trace-12387"></a>
<a id="trace-12389"></a>
<a id="trace-12403"></a>
<a id="trace-12405"></a>
<a id="trace-12421"></a>
<a id="trace-12423"></a>
<a id="trace-12433"></a>
<a id="trace-12435"></a>
<a id="trace-12454"></a>
<a id="trace-12456"></a>
<a id="trace-12471"></a>
<a id="trace-12473"></a>
<a id="trace-12603"></a>
<a id="trace-12605"></a>
<a id="trace-12751"></a>
<a id="trace-12753"></a>
<a id="trace-12763"></a>
<a id="trace-12765"></a>
<a id="trace-12787"></a>
<a id="trace-12789"></a>
<a id="trace-12820"></a>
<a id="trace-12822"></a>
- 86.75s–109.25s (×66), actor 5, squad 0 (trace 10097): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 9958. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149935641843359, 'next_transition': 11799}.
<a id="trace-10105"></a>
- 86.85s–86.85s (×1), actor 9, squad 1 (trace 10105): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 9961. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 20.10945927179079, 'next_transition': 12579}.
<a id="trace-10106"></a>
- 86.85s–86.85s (×1), actor 9, squad 1 (trace 10106): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 85.00s, trace 9961. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 20.10945927179079, 'next_transition': 12579}.
<a id="trace-12579"></a>
- 105.70s–105.70s (×1), actor 9, squad 1 (trace 12579): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 105.00s, trace 12503. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2090960742349015, 'next_transition': 12617}.
<a id="trace-12580"></a>
- 105.70s–105.70s (×1), actor 9, squad 1 (trace 12580): NeedSupport. Knowledge: actor memory at 105.00s, trace 12503. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2090960742349015, 'next_transition': 12617}.
<a id="trace-12617"></a>
- 106.70s–106.70s (×1), actor 9, squad 1 (trace 12617): Reorganise: completed/failed drill. Knowledge: actor memory at 105.00s, trace 12503. Next observer evidence: {'until': 110.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1372715286822475, 'next_transition': 12926}.
<a id="trace-12620"></a>
- 106.70s–106.70s (×1), actor 9, squad 1 (trace 12620): ReactToContact: cover and return fire. Knowledge: actor memory at 105.00s, trace 12503. Next observer evidence: {'until': 110.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1372715286822475, 'next_transition': 12926}.
<a id="trace-12621"></a>
- 106.70s–106.70s (×1), actor 9, squad 1 (trace 12621): Reorganise complete: known contact. Knowledge: actor memory at 105.00s, trace 12503. Next observer evidence: {'until': 110.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.1372715286822475, 'next_transition': 12926}.
<a id="trace-1208"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 1208): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12837}.
<a id="trace-12833"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 12833): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.45s, trace 12833. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12837}.
<a id="trace-12837"></a>
<a id="trace-12839"></a>
<a id="trace-13044"></a>
<a id="trace-13046"></a>
<a id="trace-13069"></a>
<a id="trace-13071"></a>
<a id="trace-13087"></a>
<a id="trace-13089"></a>
<a id="trace-13127"></a>
<a id="trace-13129"></a>
<a id="trace-13148"></a>
<a id="trace-13150"></a>
<a id="trace-13160"></a>
<a id="trace-13162"></a>
<a id="trace-13177"></a>
<a id="trace-13179"></a>
<a id="trace-13268"></a>
<a id="trace-13270"></a>
<a id="trace-13278"></a>
<a id="trace-13280"></a>
<a id="trace-13295"></a>
<a id="trace-13297"></a>
<a id="trace-13327"></a>
<a id="trace-13329"></a>
<a id="trace-13337"></a>
<a id="trace-13339"></a>
<a id="trace-13354"></a>
<a id="trace-13356"></a>
<a id="trace-13391"></a>
<a id="trace-13393"></a>
<a id="trace-13471"></a>
<a id="trace-13473"></a>
<a id="trace-13482"></a>
<a id="trace-13484"></a>
<a id="trace-13500"></a>
<a id="trace-13502"></a>
<a id="trace-13515"></a>
<a id="trace-13517"></a>
<a id="trace-13533"></a>
<a id="trace-13535"></a>
<a id="trace-13557"></a>
<a id="trace-13559"></a>
<a id="trace-13569"></a>
<a id="trace-13571"></a>
<a id="trace-13587"></a>
<a id="trace-13589"></a>
<a id="trace-13601"></a>
<a id="trace-13603"></a>
<a id="trace-13690"></a>
<a id="trace-13692"></a>
<a id="trace-13706"></a>
<a id="trace-13708"></a>
<a id="trace-13719"></a>
<a id="trace-13721"></a>
<a id="trace-13736"></a>
<a id="trace-13738"></a>
<a id="trace-13745"></a>
<a id="trace-13747"></a>
<a id="trace-13769"></a>
<a id="trace-13771"></a>
<a id="trace-13784"></a>
<a id="trace-13786"></a>
<a id="trace-13795"></a>
<a id="trace-13797"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13901"></a>
<a id="trace-13903"></a>
<a id="trace-13917"></a>
<a id="trace-13919"></a>
<a id="trace-13936"></a>
<a id="trace-13938"></a>
<a id="trace-13962"></a>
<a id="trace-13964"></a>
<a id="trace-13974"></a>
<a id="trace-13976"></a>
<a id="trace-13999"></a>
<a id="trace-14001"></a>
<a id="trace-14088"></a>
<a id="trace-14090"></a>
<a id="trace-14108"></a>
<a id="trace-14110"></a>
<a id="trace-14125"></a>
<a id="trace-14127"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14164"></a>
<a id="trace-14166"></a>
<a id="trace-14173"></a>
<a id="trace-14175"></a>
<a id="trace-14187"></a>
<a id="trace-14189"></a>
<a id="trace-14198"></a>
<a id="trace-14200"></a>
<a id="trace-14275"></a>
<a id="trace-14277"></a>
<a id="trace-14288"></a>
<a id="trace-14290"></a>
<a id="trace-14305"></a>
<a id="trace-14307"></a>
<a id="trace-14320"></a>
<a id="trace-14322"></a>
<a id="trace-14340"></a>
<a id="trace-14342"></a>
<a id="trace-14364"></a>
<a id="trace-14366"></a>
<a id="trace-14376"></a>
<a id="trace-14378"></a>
<a id="trace-14401"></a>
<a id="trace-14403"></a>
<a id="trace-14480"></a>
<a id="trace-14482"></a>
<a id="trace-14510"></a>
<a id="trace-14512"></a>
<a id="trace-14526"></a>
<a id="trace-14528"></a>
<a id="trace-14546"></a>
<a id="trace-14548"></a>
<a id="trace-14579"></a>
<a id="trace-14581"></a>
<a id="trace-14594"></a>
<a id="trace-14596"></a>
<a id="trace-14620"></a>
<a id="trace-14622"></a>
<a id="trace-14693"></a>
<a id="trace-14695"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14722"></a>
<a id="trace-14724"></a>
<a id="trace-14764"></a>
<a id="trace-14766"></a>
<a id="trace-14780"></a>
<a id="trace-14782"></a>
<a id="trace-14791"></a>
<a id="trace-14793"></a>
<a id="trace-14806"></a>
<a id="trace-14808"></a>
<a id="trace-14818"></a>
<a id="trace-14820"></a>
<a id="trace-14892"></a>
<a id="trace-14894"></a>
<a id="trace-14904"></a>
<a id="trace-14906"></a>
<a id="trace-14922"></a>
<a id="trace-14924"></a>
<a id="trace-14937"></a>
<a id="trace-14939"></a>
<a id="trace-14957"></a>
<a id="trace-14959"></a>
<a id="trace-14984"></a>
<a id="trace-14986"></a>
<a id="trace-14995"></a>
<a id="trace-14997"></a>
<a id="trace-15010"></a>
<a id="trace-15012"></a>
<a id="trace-15022"></a>
<a id="trace-15024"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15108"></a>
<a id="trace-15110"></a>
<a id="trace-15127"></a>
<a id="trace-15129"></a>
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15170"></a>
<a id="trace-15172"></a>
<a id="trace-15186"></a>
<a id="trace-15188"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15296"></a>
<a id="trace-15298"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
<a id="trace-15346"></a>
<a id="trace-15348"></a>
<a id="trace-15357"></a>
<a id="trace-15359"></a>
<a id="trace-15371"></a>
<a id="trace-15373"></a>
<a id="trace-15381"></a>
<a id="trace-15383"></a>
<a id="trace-15425"></a>
<a id="trace-15427"></a>
<a id="trace-15501"></a>
<a id="trace-15503"></a>
<a id="trace-15509"></a>
<a id="trace-15511"></a>
<a id="trace-15534"></a>
<a id="trace-15536"></a>
<a id="trace-15550"></a>
<a id="trace-15552"></a>
<a id="trace-15559"></a>
<a id="trace-15561"></a>
<a id="trace-15571"></a>
<a id="trace-15573"></a>
<a id="trace-15596"></a>
<a id="trace-15598"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15695"></a>
<a id="trace-15697"></a>
<a id="trace-15725"></a>
<a id="trace-15727"></a>
<a id="trace-15741"></a>
<a id="trace-15743"></a>
<a id="trace-15764"></a>
<a id="trace-15766"></a>
<a id="trace-15776"></a>
<a id="trace-15778"></a>
- 109.75s–178.30s (×214), actor 5, squad 0 (trace 12837): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 12833. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13044}.
<a id="trace-12926"></a>
- 110.45s–110.45s (×1), actor 9, squad 1 (trace 12926): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 110.00s, trace 12854. Next observer evidence: {'until': 140.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.3123592415755816, 'next_transition': 1410}.
<a id="trace-12927"></a>
- 110.45s–110.45s (×1), actor 9, squad 1 (trace 12927): rearward bound: one stationary suppressing element. Knowledge: actor memory at 110.00s, trace 12854. Next observer evidence: {'until': 140.4, 'shots': 3, 'casualties': 0, 'mean_displacement': 2.3123592415755816, 'next_transition': 1410}.
<a id="trace-1410"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 1410): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14712"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 14712): renew committed intent (75 s lifetime). Knowledge: actor memory at 150.90s, trace 14712. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14946}.
<a id="trace-14946"></a>
- 156.80s–156.80s (×1), actor 9, squad 1 (trace 14946): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 14834. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15193}.
<a id="trace-15193"></a>
- 163.35s–163.35s (×1), actor 9, squad 1 (trace 15193): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 160.00s, trace 15038. Next observer evidence: {'until': 178.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1474}.
<a id="trace-1473"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 1473): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15801}.
<a id="trace-1474"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (events line 1474): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 183.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15995}.
<a id="trace-15783"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 15783): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 15783. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15801}.
<a id="trace-15784"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (trace 15784): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.049928 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 15784. Next observer evidence: {'until': 183.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15995}.
<a id="trace-15785"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (trace 15785): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.049928 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 15785. Next observer evidence: {'until': 183.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15995}.
<a id="trace-15801"></a>
<a id="trace-15803"></a>
<a id="trace-15811"></a>
<a id="trace-15813"></a>
<a id="trace-15883"></a>
<a id="trace-15885"></a>
<a id="trace-15891"></a>
<a id="trace-15893"></a>
<a id="trace-15912"></a>
<a id="trace-15914"></a>
<a id="trace-15926"></a>
<a id="trace-15928"></a>
<a id="trace-15948"></a>
<a id="trace-15950"></a>
<a id="trace-15971"></a>
<a id="trace-15973"></a>
<a id="trace-15988"></a>
<a id="trace-15990"></a>
<a id="trace-16057"></a>
<a id="trace-16059"></a>
<a id="trace-16078"></a>
<a id="trace-16080"></a>
- 179.30s–184.30s (×22), actor 5, squad 0 (trace 15801): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 15785. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15811}.
<a id="trace-15995"></a>
- 183.50s–183.50s (×1), actor 9, squad 1 (trace 15995): MoveTactically. Knowledge: actor memory at 180.00s, trace 15825. Next observer evidence: None.
<a id="trace-15996"></a>
- 183.50s–183.50s (×1), actor 9, squad 1 (trace 15996): traveling overwatch. Knowledge: actor memory at 180.00s, trace 15825. Next observer evidence: None.
<a id="trace-15997"></a>
- 183.50s–183.50s (×1), actor 9, squad 1 (trace 15997): received platoon directive. Knowledge: actor memory at 180.00s, trace 15825. Next observer evidence: None.
<a id="trace-16001"></a>
- 183.55s–183.55s (×1), actor 9, squad 1 (trace 16001): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 15825. Next observer evidence: {'until': 197.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 40.00003652171333, 'next_transition': 17105}.
<a id="trace-16086"></a>
- 184.55s–184.55s (×1), actor 1, squad 0 (trace 16086): MoveTactically. Knowledge: actor memory at 180.00s, trace 15818. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16223}.
<a id="trace-16087"></a>
- 184.55s–184.55s (×1), actor 1, squad 0 (trace 16087): traveling overwatch. Knowledge: actor memory at 180.00s, trace 15818. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16223}.
<a id="trace-16088"></a>
- 184.55s–184.55s (×1), actor 1, squad 0 (trace 16088): received platoon directive. Knowledge: actor memory at 180.00s, trace 15818. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16223}.
<a id="trace-16223"></a>
<a id="trace-16225"></a>
<a id="trace-16310"></a>
<a id="trace-16312"></a>
<a id="trace-16330"></a>
<a id="trace-16332"></a>
<a id="trace-16352"></a>
<a id="trace-16354"></a>
<a id="trace-16364"></a>
<a id="trace-16366"></a>
<a id="trace-16391"></a>
<a id="trace-16393"></a>
<a id="trace-16429"></a>
<a id="trace-16431"></a>
<a id="trace-16451"></a>
<a id="trace-16453"></a>
<a id="trace-16479"></a>
<a id="trace-16481"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
- 184.80s–189.80s (×20), actor 5, squad 0 (trace 16223): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 15822. Next observer evidence: {'until': 185.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16310}.
<a id="trace-16504"></a>
- 189.80s–189.80s (×1), actor 1, squad 0 (trace 16504): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 185.00s, trace 16234. Next observer evidence: {'until': 190.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16734}.
<a id="trace-16734"></a>
<a id="trace-16736"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16777"></a>
<a id="trace-16779"></a>
<a id="trace-16787"></a>
<a id="trace-16789"></a>
<a id="trace-16811"></a>
<a id="trace-16813"></a>
<a id="trace-16833"></a>
<a id="trace-16835"></a>
<a id="trace-16854"></a>
<a id="trace-16856"></a>
<a id="trace-16866"></a>
<a id="trace-16868"></a>
<a id="trace-16893"></a>
<a id="trace-16895"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16993"></a>
<a id="trace-16995"></a>
<a id="trace-17019"></a>
<a id="trace-17021"></a>
<a id="trace-17048"></a>
<a id="trace-17050"></a>
<a id="trace-17067"></a>
<a id="trace-17069"></a>
<a id="trace-17126"></a>
<a id="trace-17128"></a>
<a id="trace-17138"></a>
<a id="trace-17140"></a>
<a id="trace-17157"></a>
<a id="trace-17159"></a>
<a id="trace-17173"></a>
<a id="trace-17175"></a>
<a id="trace-17277"></a>
<a id="trace-17279"></a>
<a id="trace-17300"></a>
<a id="trace-17302"></a>
<a id="trace-17317"></a>
<a id="trace-17319"></a>
<a id="trace-17350"></a>
<a id="trace-17352"></a>
<a id="trace-17362"></a>
<a id="trace-17364"></a>
<a id="trace-17386"></a>
<a id="trace-17388"></a>
<a id="trace-17406"></a>
<a id="trace-17408"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
<a id="trace-17517"></a>
<a id="trace-17519"></a>
<a id="trace-17528"></a>
<a id="trace-17530"></a>
<a id="trace-17550"></a>
<a id="trace-17552"></a>
<a id="trace-17559"></a>
<a id="trace-17561"></a>
<a id="trace-17583"></a>
<a id="trace-17585"></a>
- 190.30s–207.30s (×62), actor 5, squad 0 (trace 16734): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 16667. Next observer evidence: {'until': 190.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13500913807487022, 'next_transition': 16752}.
<a id="trace-17105"></a>
- 197.90s–197.90s (×1), actor 9, squad 1 (trace 17105): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 195.00s, trace 16926. Next observer evidence: None.
<a id="trace-17109"></a>
- 197.95s–197.95s (×1), actor 9, squad 1 (trace 17109): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 195.00s, trace 16926. Next observer evidence: {'until': 227.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1982}.
<a id="trace-17591"></a>
- 207.45s–207.45s (×1), actor 1, squad 0 (trace 17591): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 205.00s, trace 17451. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17600}.
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17630"></a>
<a id="trace-17632"></a>
- 207.80s–208.30s (×4), actor 5, squad 0 (trace 17600): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 17455. Next observer evidence: {'until': 208.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17630}.
<a id="trace-17641"></a>
- 208.45s–208.45s (×1), actor 1, squad 0 (trace 17641): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 205.00s, trace 17451. Next observer evidence: {'until': 209.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2550076357240137, 'next_transition': 17787}.
<a id="trace-17787"></a>
<a id="trace-17789"></a>
<a id="trace-17897"></a>
<a id="trace-17899"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
<a id="trace-17926"></a>
<a id="trace-17928"></a>
<a id="trace-17939"></a>
<a id="trace-17941"></a>
<a id="trace-17958"></a>
<a id="trace-17960"></a>
<a id="trace-17975"></a>
<a id="trace-17977"></a>
<a id="trace-18005"></a>
<a id="trace-18007"></a>
<a id="trace-18028"></a>
<a id="trace-18030"></a>
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18127"></a>
<a id="trace-18129"></a>
- 209.30s–215.30s (×22), actor 5, squad 0 (trace 17787): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.00s, trace 17455. Next observer evidence: {'until': 210.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31778952216523243, 'next_transition': 17897}.
<a id="trace-18142"></a>
- 215.45s–215.45s (×1), actor 1, squad 0 (trace 18142): current contact unknown for 10 s. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 216.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.6569823626914518, 'next_transition': 18297}.
<a id="trace-18297"></a>
<a id="trace-18299"></a>
- 216.80s–216.80s (×2), actor 5, squad 0 (trace 18297): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 18063. Next observer evidence: {'until': 217, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29500310617490033, 'next_transition': 18307}.
<a id="trace-18307"></a>
- 217.05s–217.05s (×1), actor 1, squad 0 (trace 18307): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29496809713535216, 'next_transition': 18325}.
<a id="trace-18309"></a>
- 217.05s–217.05s (×1), actor 1, squad 0 (trace 18309): NeedSupport. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29496809713535216, 'next_transition': 18325}.
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
- 217.30s–217.80s (×4), actor 5, squad 0 (trace 18325): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 18063. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8850066096643429, 'next_transition': 18336}.
<a id="trace-18346"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 18346): Reorganise: completed/failed drill. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29499971624973514, 'next_transition': 18494}.
<a id="trace-18351"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 18351): MoveTactically. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29499971624973514, 'next_transition': 18494}.
<a id="trace-18352"></a>
- 218.05s–218.05s (×1), actor 1, squad 0 (trace 18352): Reorganise complete. Knowledge: actor memory at 215.00s, trace 18059. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29499971624973514, 'next_transition': 18494}.
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18541"></a>
<a id="trace-18543"></a>
<a id="trace-18555"></a>
<a id="trace-18557"></a>
<a id="trace-18639"></a>
<a id="trace-18641"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18705"></a>
<a id="trace-18707"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18775"></a>
<a id="trace-18777"></a>
<a id="trace-18797"></a>
<a id="trace-18799"></a>
<a id="trace-18817"></a>
<a id="trace-18819"></a>
<a id="trace-18892"></a>
<a id="trace-18894"></a>
<a id="trace-18911"></a>
<a id="trace-18913"></a>
<a id="trace-18931"></a>
<a id="trace-18933"></a>
<a id="trace-18964"></a>
<a id="trace-18966"></a>
<a id="trace-18977"></a>
<a id="trace-18979"></a>
<a id="trace-19000"></a>
<a id="trace-19002"></a>
<a id="trace-19024"></a>
<a id="trace-19026"></a>
<a id="trace-19053"></a>
<a id="trace-19055"></a>
- 218.30s–229.80s (×38), actor 5, squad 0 (trace 18494): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 18063. Next observer evidence: {'until': 219.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4640529941187106, 'next_transition': 18541}.
<a id="trace-19083"></a>
- 230.05s–230.05s (×1), actor 1, squad 0 (trace 19083): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 230.00s, trace 19063. Next observer evidence: {'until': 230.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19296}.
<a id="trace-19296"></a>
<a id="trace-19298"></a>
<a id="trace-19320"></a>
<a id="trace-19322"></a>
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19352"></a>
<a id="trace-19354"></a>
<a id="trace-19378"></a>
<a id="trace-19380"></a>
<a id="trace-19411"></a>
<a id="trace-19413"></a>
<a id="trace-19436"></a>
<a id="trace-19438"></a>
<a id="trace-19461"></a>
<a id="trace-19463"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19574"></a>
<a id="trace-19576"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19612"></a>
<a id="trace-19614"></a>
<a id="trace-19625"></a>
<a id="trace-19627"></a>
<a id="trace-19646"></a>
<a id="trace-19648"></a>
<a id="trace-19659"></a>
<a id="trace-19661"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
- 230.80s–239.30s (×32), actor 5, squad 0 (trace 19296): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 19066. Next observer evidence: {'until': 231.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04749012039105586, 'next_transition': 19320}.
<a id="trace-19692"></a>
- 239.65s–239.65s (×1), actor 1, squad 0 (trace 19692): ReactToContact: cover and return fire. Knowledge: actor memory at 235.00s, trace 19470. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26043199475454853, 'next_transition': 19957}.
<a id="trace-19693"></a>
- 239.65s–239.65s (×1), actor 1, squad 0 (trace 19693): bounding overwatch. Knowledge: actor memory at 235.00s, trace 19470. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26043199475454853, 'next_transition': 19957}.
<a id="trace-19694"></a>
- 239.65s–239.65s (×1), actor 1, squad 0 (trace 19694): new contact inside 100 m. Knowledge: actor memory at 235.00s, trace 19470. Next observer evidence: {'until': 239.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26043199475454853, 'next_transition': 19957}.
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-20036"></a>
<a id="trace-20038"></a>
<a id="trace-20063"></a>
<a id="trace-20065"></a>
<a id="trace-20106"></a>
<a id="trace-20108"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
- 239.80s–242.30s (×10), actor 5, squad 0 (trace 19957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 19473. Next observer evidence: {'until': 240.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5243081501125668, 'next_transition': 20036}.
<a id="trace-20187"></a>
- 243.55s–243.55s (×1), actor 1, squad 0 (trace 20187): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 240.00s, trace 19964. Next observer evidence: {'until': 243.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200044170314044, 'next_transition': 20190}.
<a id="trace-20190"></a>
<a id="trace-20192"></a>
<a id="trace-20213"></a>
<a id="trace-20215"></a>
<a id="trace-20234"></a>
<a id="trace-20236"></a>
<a id="trace-20313"></a>
<a id="trace-20315"></a>
<a id="trace-20330"></a>
<a id="trace-20332"></a>
- 243.80s–245.80s (×10), actor 5, squad 0 (trace 20190): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 240.00s, trace 19967. Next observer evidence: {'until': 244.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.413167230380939, 'next_transition': 20213}.
<a id="trace-20345"></a>
- 246.20s–246.20s (×1), actor 1, squad 0 (trace 20345): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 245.00s, trace 20247. Next observer evidence: None.
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20687"></a>
<a id="trace-20689"></a>
- 246.30s–247.30s (×4), actor 5, squad 0 (trace 20645): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 245.00s, trace 20250. Next observer evidence: {'until': 247.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48768935227765625, 'next_transition': 20687}.
<a id="trace-1981"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (events line 1981): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1982"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (events line 1982): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-20707"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 20707): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 20707. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20739}.
<a id="trace-20708"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 20708): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 20708. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20739}.
<a id="trace-20709"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (trace 20709): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 20709. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20781}.
<a id="trace-20710"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (trace 20710): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 247.60s, trace 20710. Next observer evidence: {'until': 249.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20781}.
<a id="trace-20739"></a>
<a id="trace-20741"></a>
<a id="trace-20765"></a>
<a id="trace-20767"></a>
<a id="trace-20841"></a>
<a id="trace-20843"></a>
<a id="trace-20865"></a>
<a id="trace-20867"></a>
- 248.30s–249.80s (×8), actor 5, squad 0 (trace 20739): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.60s, trace 20710. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1050039990772836, 'next_transition': 20765}.
<a id="trace-20781"></a>
- 249.25s–249.25s (×1), actor 9, squad 1 (trace 20781): traveling. Knowledge: actor memory at 245.00s, trace 20253. Next observer evidence: {'until': 252.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977492968579813, 'next_transition': 24146}.
<a id="trace-20782"></a>
- 249.25s–249.25s (×1), actor 9, squad 1 (trace 20782): current contact unknown for 10 s. Knowledge: actor memory at 245.00s, trace 20253. Next observer evidence: {'until': 252.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.977492968579813, 'next_transition': 24146}.
<a id="trace-20938"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 20938): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: None.
<a id="trace-20940"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 20940): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: None.
<a id="trace-23903"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 23903): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: None.
<a id="trace-23904"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 23904): MoveTactically. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: None.
<a id="trace-23905"></a>
- 250.20s–250.20s (×1), actor 1, squad 0 (trace 23905): contact cover complete: assessment resumes closure. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: None.
<a id="trace-24039"></a>
<a id="trace-24041"></a>
<a id="trace-24056"></a>
<a id="trace-24058"></a>
<a id="trace-24083"></a>
<a id="trace-24085"></a>
<a id="trace-24101"></a>
<a id="trace-24103"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24159"></a>
<a id="trace-24161"></a>
- 250.30s–252.80s (×12), actor 5, squad 0 (trace 24039): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 20878. Next observer evidence: {'until': 250.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24056}.
<a id="trace-24146"></a>
- 252.55s–252.55s (×1), actor 9, squad 1 (trace 24146): traveling overwatch. Knowledge: actor memory at 250.00s, trace 20881. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.022557889302518, 'next_transition': 25354}.
<a id="trace-24147"></a>
- 252.55s–252.55s (×1), actor 9, squad 1 (trace 24147): received platoon directive. Knowledge: actor memory at 250.00s, trace 20881. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.022557889302518, 'next_transition': 25354}.
<a id="trace-24173"></a>
- 252.95s–252.95s (×1), actor 1, squad 0 (trace 24173): ReactToContact: cover and return fire. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874917267711377, 'next_transition': 24512}.
<a id="trace-24174"></a>
- 252.95s–252.95s (×1), actor 1, squad 0 (trace 24174): received platoon directive. Knowledge: actor memory at 250.00s, trace 20875. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7874917267711377, 'next_transition': 24512}.
<a id="trace-24512"></a>
<a id="trace-24514"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24562"></a>
<a id="trace-24564"></a>
<a id="trace-24585"></a>
<a id="trace-24587"></a>
<a id="trace-24667"></a>
<a id="trace-24669"></a>
<a id="trace-24689"></a>
<a id="trace-24691"></a>
- 253.30s–255.80s (×12), actor 5, squad 0 (trace 24512): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 20878. Next observer evidence: {'until': 253.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249103712023083, 'next_transition': 24538}.
<a id="trace-24727"></a>
- 256.55s–256.55s (×1), actor 1, squad 0 (trace 24727): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 255.00s, trace 24598. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12169348427190434, 'next_transition': 25094}.
<a id="trace-24728"></a>
- 256.55s–256.55s (×1), actor 1, squad 0 (trace 24728): rearward bound: one stationary suppressing element. Knowledge: actor memory at 255.00s, trace 24598. Next observer evidence: {'until': 256.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12169348427190434, 'next_transition': 25094}.
<a id="trace-25094"></a>
<a id="trace-25096"></a>
<a id="trace-25124"></a>
<a id="trace-25126"></a>
<a id="trace-25148"></a>
<a id="trace-25150"></a>
<a id="trace-25172"></a>
<a id="trace-25174"></a>
<a id="trace-25196"></a>
<a id="trace-25198"></a>
<a id="trace-25227"></a>
<a id="trace-25229"></a>
<a id="trace-25322"></a>
<a id="trace-25324"></a>
<a id="trace-25342"></a>
<a id="trace-25344"></a>
- 256.80s–261.30s (×16), actor 5, squad 0 (trace 25094): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 24601. Next observer evidence: {'until': 257.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29534859663115054, 'next_transition': 25124}.
<a id="trace-25352"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (trace 25352): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.733932 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25352. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37798868714189426, 'next_transition': 2164}.
<a id="trace-25353"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (trace 25353): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.733932 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25353. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.37798868714189426, 'next_transition': 2164}.
<a id="trace-25354"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (trace 25354): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.733932 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25354. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2165}.
<a id="trace-25355"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (trace 25355): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.733932 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25355. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2165}.
<a id="trace-2164"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (events line 2164): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 261.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559964479823759, 'next_transition': 25370}.
<a id="trace-2165"></a>
- 261.40s–261.40s (×1), actor 5, squad 1 (events line 2165): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25700}.
<a id="trace-25370"></a>
- 261.90s–261.90s (×1), actor 1, squad 0 (trace 25370): NeedSupport. Knowledge: actor memory at 260.00s, trace 25239. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.042379451028967, 'next_transition': 25425}.
<a id="trace-25425"></a>
<a id="trace-25427"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25475"></a>
<a id="trace-25477"></a>
<a id="trace-25502"></a>
<a id="trace-25504"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
- 262.80s–264.80s (×10), actor 5, squad 0 (trace 25425): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.40s, trace 25355. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8972456937895787, 'next_transition': 25442}.
<a id="trace-25607"></a>
- 265.45s–265.45s (×1), actor 1, squad 0 (trace 25607): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 265.00s, trace 25533. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8899720141304932, 'next_transition': 25624}.
<a id="trace-25624"></a>
- 266.25s–266.25s (×1), actor 1, squad 0 (trace 25624): Reorganise: completed/failed drill. Knowledge: actor memory at 265.00s, trace 25533. Next observer evidence: None.
<a id="trace-25627"></a>
- 266.25s–266.25s (×1), actor 1, squad 0 (trace 25627): ReactToContact: cover and return fire. Knowledge: actor memory at 265.00s, trace 25533. Next observer evidence: None.
<a id="trace-25628"></a>
- 266.25s–266.25s (×1), actor 1, squad 0 (trace 25628): Reorganise complete: known contact. Knowledge: actor memory at 265.00s, trace 25533. Next observer evidence: None.
<a id="trace-25690"></a>
<a id="trace-25692"></a>
<a id="trace-25725"></a>
<a id="trace-25727"></a>
- 266.30s–266.80s (×4), actor 5, squad 0 (trace 25690): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 25535. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3968842293412265, 'next_transition': 25725}.
<a id="trace-25700"></a>
- 266.35s–266.35s (×1), actor 9, squad 1 (trace 25700): ReactToContact: cover and return fire. Knowledge: actor memory at 265.00s, trace 25537. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.472431881333175, 'next_transition': 25735}.
<a id="trace-25701"></a>
- 266.35s–266.35s (×1), actor 9, squad 1 (trace 25701): bounding overwatch. Knowledge: actor memory at 265.00s, trace 25537. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.472431881333175, 'next_transition': 25735}.
<a id="trace-25702"></a>
<a id="trace-25735"></a>
- 266.35s–266.85s (×2), actor 9, squad 1 (trace 25702): new contact inside 100 m. Knowledge: actor memory at 265.00s, trace 25537. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.472431881333175, 'next_transition': 25735}.
<a id="trace-25771"></a>
- 267.25s–267.25s (×1), actor 1, squad 0 (trace 25771): received platoon directive; retain contact cover stage. Knowledge: actor memory at 265.00s, trace 25533. Next observer evidence: {'until': 267.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4756365281182888, 'next_transition': 25799}.
<a id="trace-25799"></a>
<a id="trace-25801"></a>
<a id="trace-25842"></a>
<a id="trace-25844"></a>
<a id="trace-25867"></a>
<a id="trace-25869"></a>
<a id="trace-25880"></a>
<a id="trace-25882"></a>
- 267.80s–269.80s (×8), actor 5, squad 0 (trace 25799): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 25535. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.362148324741661, 'next_transition': 25842}.
<a id="trace-25907"></a>
- 270.15s–270.15s (×1), actor 9, squad 1 (trace 25907): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 270.00s, trace 25894. Next observer evidence: {'until': 274.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.141941281282001, 'next_transition': 26286}.
<a id="trace-25909"></a>
- 270.20s–270.20s (×1), actor 1, squad 0 (trace 25909): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 270.00s, trace 25890. Next observer evidence: {'until': 270.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237073463190778, 'next_transition': 26114}.
<a id="trace-25910"></a>
- 270.20s–270.20s (×1), actor 1, squad 0 (trace 25910): rearward bound: one stationary suppressing element. Knowledge: actor memory at 270.00s, trace 25890. Next observer evidence: {'until': 270.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0237073463190778, 'next_transition': 26114}.
<a id="trace-26114"></a>
<a id="trace-26116"></a>
<a id="trace-26153"></a>
<a id="trace-26155"></a>
<a id="trace-26181"></a>
<a id="trace-26183"></a>
<a id="trace-26199"></a>
<a id="trace-26201"></a>
<a id="trace-26225"></a>
<a id="trace-26227"></a>
<a id="trace-26245"></a>
<a id="trace-26247"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
<a id="trace-26288"></a>
<a id="trace-26290"></a>
<a id="trace-26366"></a>
<a id="trace-26368"></a>
<a id="trace-26404"></a>
<a id="trace-26406"></a>
<a id="trace-26421"></a>
<a id="trace-26423"></a>
<a id="trace-26450"></a>
<a id="trace-26452"></a>
<a id="trace-26463"></a>
<a id="trace-26465"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26507"></a>
<a id="trace-26509"></a>
<a id="trace-26528"></a>
<a id="trace-26530"></a>
<a id="trace-26540"></a>
<a id="trace-26542"></a>
<a id="trace-26616"></a>
<a id="trace-26618"></a>
<a id="trace-26652"></a>
<a id="trace-26654"></a>
- 270.80s–281.30s (×38), actor 5, squad 0 (trace 26114): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 25892. Next observer evidence: {'until': 271.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4962503229972965, 'next_transition': 26153}.
<a id="trace-26286"></a>
- 274.70s–274.70s (×1), actor 9, squad 1 (trace 26286): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 270.00s, trace 25894. Next observer evidence: {'until': 289, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2634}.
<a id="trace-26680"></a>
- 282.25s–282.25s (×1), actor 1, squad 0 (trace 26680): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 26549. Next observer evidence: None.
<a id="trace-26681"></a>
- 282.25s–282.25s (×1), actor 1, squad 0 (trace 26681): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 26549. Next observer evidence: None.
<a id="trace-26742"></a>
<a id="trace-26744"></a>
<a id="trace-26754"></a>
<a id="trace-26756"></a>
<a id="trace-26781"></a>
<a id="trace-26783"></a>
<a id="trace-26797"></a>
<a id="trace-26799"></a>
<a id="trace-26814"></a>
<a id="trace-26816"></a>
<a id="trace-26834"></a>
<a id="trace-26836"></a>
<a id="trace-26911"></a>
<a id="trace-26913"></a>
<a id="trace-26924"></a>
<a id="trace-26926"></a>
<a id="trace-26941"></a>
<a id="trace-26943"></a>
<a id="trace-26955"></a>
<a id="trace-26957"></a>
<a id="trace-26973"></a>
<a id="trace-26975"></a>
<a id="trace-26984"></a>
<a id="trace-26986"></a>
<a id="trace-27008"></a>
<a id="trace-27010"></a>
<a id="trace-27024"></a>
<a id="trace-27026"></a>
<a id="trace-27050"></a>
<a id="trace-27052"></a>
<a id="trace-27065"></a>
<a id="trace-27067"></a>
<a id="trace-27142"></a>
<a id="trace-27144"></a>
<a id="trace-27174"></a>
<a id="trace-27176"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27210"></a>
<a id="trace-27212"></a>
<a id="trace-27227"></a>
<a id="trace-27229"></a>
- 282.30s–292.80s (×42), actor 5, squad 0 (trace 26742): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 26551. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175233001263012, 'next_transition': 26754}.
<a id="trace-2634"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (events line 2634): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27273}.
<a id="trace-27040"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 27040): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.505650 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 27040. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27273}.
<a id="trace-27041"></a>
- 289.00s–289.00s (×1), actor 5, squad 1 (trace 27041): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.505650 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 289.00s, trace 27041. Next observer evidence: {'until': 293.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27273}.
<a id="trace-27273"></a>
- 293.95s–293.95s (×1), actor 9, squad 1 (trace 27273): MoveTactically. Knowledge: actor memory at 290.00s, trace 27079. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3041}.
<a id="trace-27274"></a>
- 293.95s–293.95s (×1), actor 9, squad 1 (trace 27274): received platoon directive. Knowledge: actor memory at 290.00s, trace 27079. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3041}.
<a id="trace-27281"></a>
- 294.25s–294.25s (×1), actor 1, squad 0 (trace 27281): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 290.00s, trace 27075. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.551280811293121, 'next_transition': 27345}.
<a id="trace-27323"></a>
- 294.25s–294.25s (×1), actor 1, squad 0 (trace 27323): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 290.00s, trace 27075. Next observer evidence: {'until': 294.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.551280811293121, 'next_transition': 27345}.
<a id="trace-27345"></a>
<a id="trace-27347"></a>
<a id="trace-27431"></a>
<a id="trace-27433"></a>
<a id="trace-27450"></a>
<a id="trace-27452"></a>
<a id="trace-27466"></a>
<a id="trace-27468"></a>
<a id="trace-27489"></a>
<a id="trace-27491"></a>
<a id="trace-27517"></a>
<a id="trace-27519"></a>
<a id="trace-27530"></a>
<a id="trace-27532"></a>
<a id="trace-27551"></a>
<a id="trace-27553"></a>
<a id="trace-27635"></a>
<a id="trace-27637"></a>
<a id="trace-27646"></a>
<a id="trace-27648"></a>
<a id="trace-27659"></a>
<a id="trace-27661"></a>
<a id="trace-27682"></a>
<a id="trace-27684"></a>
<a id="trace-27694"></a>
<a id="trace-27696"></a>
<a id="trace-27707"></a>
<a id="trace-27709"></a>
<a id="trace-27742"></a>
<a id="trace-27744"></a>
<a id="trace-27812"></a>
<a id="trace-27814"></a>
<a id="trace-27830"></a>
<a id="trace-27832"></a>
- 294.80s–305.80s (×34), actor 5, squad 0 (trace 27345): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 290.00s, trace 27077. Next observer evidence: {'until': 295.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27431}.
<a id="trace-27864"></a>
- 306.50s–306.50s (×1), actor 1, squad 0 (trace 27864): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 305.00s, trace 27749. Next observer evidence: {'until': 307.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27887}.
<a id="trace-27887"></a>
<a id="trace-27889"></a>
<a id="trace-27947"></a>
<a id="trace-27949"></a>
<a id="trace-28016"></a>
<a id="trace-28018"></a>
<a id="trace-28025"></a>
<a id="trace-28027"></a>
<a id="trace-28044"></a>
<a id="trace-28046"></a>
<a id="trace-28054"></a>
<a id="trace-28056"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28117"></a>
<a id="trace-28119"></a>
<a id="trace-28139"></a>
<a id="trace-28141"></a>
<a id="trace-28149"></a>
<a id="trace-28151"></a>
<a id="trace-28227"></a>
<a id="trace-28229"></a>
<a id="trace-28239"></a>
<a id="trace-28241"></a>
<a id="trace-28248"></a>
<a id="trace-28250"></a>
<a id="trace-28263"></a>
<a id="trace-28265"></a>
<a id="trace-28336"></a>
<a id="trace-28338"></a>
<a id="trace-28346"></a>
<a id="trace-28348"></a>
<a id="trace-28427"></a>
<a id="trace-28429"></a>
<a id="trace-28439"></a>
<a id="trace-28441"></a>
<a id="trace-28448"></a>
<a id="trace-28450"></a>
<a id="trace-28462"></a>
<a id="trace-28464"></a>
<a id="trace-28475"></a>
<a id="trace-28477"></a>
<a id="trace-28488"></a>
<a id="trace-28490"></a>
<a id="trace-28497"></a>
<a id="trace-28499"></a>
<a id="trace-28518"></a>
<a id="trace-28520"></a>
<a id="trace-28528"></a>
<a id="trace-28530"></a>
<a id="trace-28605"></a>
<a id="trace-28607"></a>
<a id="trace-28615"></a>
<a id="trace-28617"></a>
<a id="trace-28648"></a>
<a id="trace-28650"></a>
<a id="trace-28666"></a>
<a id="trace-28668"></a>
<a id="trace-28679"></a>
<a id="trace-28681"></a>
<a id="trace-28692"></a>
<a id="trace-28694"></a>
<a id="trace-28713"></a>
<a id="trace-28715"></a>
<a id="trace-28791"></a>
<a id="trace-28793"></a>
- 307.30s–330.30s (×66), actor 5, squad 0 (trace 27887): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 27751. Next observer evidence: {'until': 309.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27947}.
<a id="trace-28798"></a>
- 330.40s–330.40s (×1), actor 5, squad 0 (trace 28798): renew committed intent (75 s lifetime). Knowledge: actor memory at 330.40s, trace 28798. Next observer evidence: {'until': 330.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2887}.
<a id="trace-2887"></a>
- 330.40s–330.40s (×1), actor 5, squad 0 (events line 2887): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 330.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28802}.
<a id="trace-28802"></a>
<a id="trace-28804"></a>
<a id="trace-28823"></a>
<a id="trace-28825"></a>
<a id="trace-28852"></a>
<a id="trace-28854"></a>
<a id="trace-28879"></a>
<a id="trace-28881"></a>
<a id="trace-28902"></a>
<a id="trace-28904"></a>
<a id="trace-28917"></a>
<a id="trace-28919"></a>
<a id="trace-28929"></a>
<a id="trace-28931"></a>
<a id="trace-28998"></a>
<a id="trace-29000"></a>
<a id="trace-29007"></a>
<a id="trace-29009"></a>
<a id="trace-29020"></a>
<a id="trace-29022"></a>
<a id="trace-29029"></a>
<a id="trace-29031"></a>
- 330.80s–336.80s (×22), actor 5, squad 0 (trace 28802): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.40s, trace 28798. Next observer evidence: {'until': 331.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28823}.
<a id="trace-29036"></a>
- 337.20s–337.20s (×1), actor 1, squad 0 (trace 29036): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 335.00s, trace 28936. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29111}.
<a id="trace-29037"></a>
- 337.20s–337.20s (×1), actor 1, squad 0 (trace 29037): MoveTactically. Knowledge: actor memory at 335.00s, trace 28936. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29111}.
<a id="trace-29038"></a>
- 337.20s–337.20s (×1), actor 1, squad 0 (trace 29038): traveling overwatch. Knowledge: actor memory at 335.00s, trace 28936. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29111}.
<a id="trace-29039"></a>
- 337.20s–337.20s (×1), actor 1, squad 0 (trace 29039): . Knowledge: actor memory at 335.00s, trace 28936. Next observer evidence: {'until': 337.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 29111}.
<a id="trace-29111"></a>
<a id="trace-29113"></a>
<a id="trace-29146"></a>
<a id="trace-29148"></a>
<a id="trace-29188"></a>
<a id="trace-29190"></a>
<a id="trace-29264"></a>
<a id="trace-29266"></a>
<a id="trace-29277"></a>
<a id="trace-29279"></a>
<a id="trace-29297"></a>
<a id="trace-29299"></a>
<a id="trace-29312"></a>
<a id="trace-29314"></a>
<a id="trace-29339"></a>
<a id="trace-29341"></a>
<a id="trace-29364"></a>
<a id="trace-29366"></a>
<a id="trace-29390"></a>
<a id="trace-29392"></a>
<a id="trace-29483"></a>
<a id="trace-29485"></a>
<a id="trace-29523"></a>
<a id="trace-29525"></a>
<a id="trace-29534"></a>
<a id="trace-29536"></a>
<a id="trace-29557"></a>
<a id="trace-29559"></a>
<a id="trace-29570"></a>
<a id="trace-29572"></a>
- 337.80s–347.80s (×30), actor 5, squad 0 (trace 29111): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 28938. Next observer evidence: {'until': 338.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149875493571129, 'next_transition': 29146}.
<a id="trace-29590"></a>
- 348.25s–348.25s (×1), actor 1, squad 0 (trace 29590): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 345.00s, trace 29414. Next observer evidence: None.
<a id="trace-29649"></a>
<a id="trace-29651"></a>
<a id="trace-29661"></a>
<a id="trace-29663"></a>
<a id="trace-29685"></a>
<a id="trace-29687"></a>
<a id="trace-29696"></a>
<a id="trace-29698"></a>
<a id="trace-29774"></a>
<a id="trace-29776"></a>
<a id="trace-29795"></a>
<a id="trace-29797"></a>
<a id="trace-29810"></a>
<a id="trace-29812"></a>
<a id="trace-29827"></a>
<a id="trace-29829"></a>
<a id="trace-29860"></a>
<a id="trace-29862"></a>
<a id="trace-29890"></a>
<a id="trace-29892"></a>
<a id="trace-29935"></a>
<a id="trace-29937"></a>
<a id="trace-30031"></a>
<a id="trace-30033"></a>
<a id="trace-30067"></a>
<a id="trace-30069"></a>
<a id="trace-30079"></a>
<a id="trace-30081"></a>
<a id="trace-30106"></a>
<a id="trace-30108"></a>
<a id="trace-30115"></a>
<a id="trace-30117"></a>
<a id="trace-30149"></a>
<a id="trace-30151"></a>
<a id="trace-30161"></a>
<a id="trace-30163"></a>
- 348.30s–359.80s (×36), actor 5, squad 0 (trace 29649): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 29416. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07876496064240904, 'next_transition': 29661}.
<a id="trace-3041"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (events line 3041): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-30087"></a>
- 358.00s–358.00s (×1), actor 5, squad 1 (trace 30087): renew committed intent (75 s lifetime). Knowledge: actor memory at 358.00s, trace 30087. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

289 matched order/radio deliveries; 510 explicitly recorded losses; 6 unmatched orders (not classified as lost).
Matched delay: mean 0.574s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1215: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1216: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1219: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1226: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1230: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1238: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 3160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 3161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 3162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 3163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 3164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 3165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 3166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 3167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 3168: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 3170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 3171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 3173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 3174: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 3175: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 3176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 3177: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 3178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 3179: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 3180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 3181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 3182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 3183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 3860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4539: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4541: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4545: estimate 14.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 4547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 4548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4549: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4550: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4551: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4552: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4553: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4554: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4555: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4556: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4557: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4558: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 4559: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 4560: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 4909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 4910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 4911: estimate 9.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 4912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 4913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 4914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 4915: estimate 13.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 4916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 4917: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 4918: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 4919: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 4920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 4921: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 4922: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 4923: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 4924: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 4925: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 4926: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 4927: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 4928: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 4929: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 4930: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 4931: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 4932: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6390: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 6391: estimate 15.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6394: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6395: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6397: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6398: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6399: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6401: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6402: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6403: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6404: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6405: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6406: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6407: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6408: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6409: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6410: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6411: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6412: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6856: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6857: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6858: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 6859: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 7255: estimate 14.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 7256: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 7257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 7258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 7259: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 7260: estimate 14.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 7261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 7262: estimate 15.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 7263: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 7264: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 7265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 7266: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 7267: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 7268: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 7269: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 7270: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 7271: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 7272: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 7273: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 7274: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 7275: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 7276: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 7277: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 7563: estimate 15.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 7564: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 7565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 7566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 7567: estimate 14.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 7568: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 7569: estimate 13.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 7570: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 7571: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 7572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 7573: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 7574: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 7575: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 7576: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 7577: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 7578: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 7579: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 7580: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 7581: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 7582: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 7583: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 7584: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 7832: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 7833: estimate 14.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 7834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 7835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 7836: estimate 15.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 7837: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 7838: estimate 13.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 7839: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 7840: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 7841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 7842: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 7843: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 7844: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 7845: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 7846: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 7847: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 7848: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 7849: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 7850: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 7851: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 7852: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 7853: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 8344: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 8345: estimate 14.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 8346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 8347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 8348: estimate 14.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 8349: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 8350: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 8351: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 8352: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 11, trace 8353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 8354: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 8355: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 8356: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 8357: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 8358: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 8359: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 8360: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 8361: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 8362: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 8363: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 8364: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 8365: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 8626: estimate 14.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 8627: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 8628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 8629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 8630: estimate 15.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 8631: estimate 14.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 8632: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 8633: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 8634: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 11, trace 8635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 8636: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 8637: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 8638: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 8639: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 8640: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 8641: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 8642: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 8643: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 8644: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 8645: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 8646: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 8647: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 8869: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 8870: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 8871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 8872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 8873: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 8874: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 8875: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 8876: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 8877: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 11, trace 8878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 8879: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 8880: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 8881: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 8882: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 8883: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 8884: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 8885: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 8886: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 8887: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 8888: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 8889: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 8890: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 9431: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 9432: estimate 14.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 9433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 9434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 9435: estimate 14.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 9436: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 9437: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 9438: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 9439: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 11, trace 9440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 9441: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 9442: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 9443: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 9444: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 9445: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 9446: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 9447: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 9448: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 9449: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 9450: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 9451: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 9452: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 9692: estimate 13.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 9693: estimate 13.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 9694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 9695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 9696: estimate 14.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 9697: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 9698: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 9699: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 9700: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 11, trace 9701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 9702: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 9703: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 9704: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 9705: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 9706: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 9707: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 9708: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 9709: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 9710: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 9711: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 9712: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 9713: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9823: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 9824: estimate 13.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 9954: estimate 13.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 9955: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 9956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 9957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 9958: estimate 13.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 9959: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 9960: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 9961: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 9962: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 11, trace 9963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 9964: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 9965: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 9966: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 9967: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 9968: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 9969: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 9970: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 9971: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 9972: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 9973: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 9974: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 9975: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 11879: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 11880: estimate 13.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 11881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 11882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 11883: estimate 13.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 11884: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 11885: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 11886: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 11887: estimate 10.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 11, trace 11888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 11889: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 11890: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 11891: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 11892: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 11893: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 11894: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 11895: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 11896: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 11897: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 11898: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 11899: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 11900: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12084: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 12085: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 12086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12088: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12089: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12090: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12091: estimate 10.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 12092: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 11, trace 12093: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12094: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12095: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12096: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12097: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12098: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12099: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12100: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12101: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12102: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12103: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 12104: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 12105: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12287: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 12288: estimate 13.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 12289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12291: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12292: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12293: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12294: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 12295: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 11, trace 12296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12297: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12298: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12299: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12300: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12301: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12302: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12303: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12304: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12305: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12306: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 12307: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 12308: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 12496: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 12497: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 12498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12500: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12501: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 12502: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 12503: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 11, trace 12504: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12505: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12506: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12507: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12508: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12509: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12510: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12511: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12512: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 12513: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 12514: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 12515: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 12516: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 12833: estimate 12.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 12847: estimate 12.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 12848: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 12849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 12850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 12851: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 12852: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 12853: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 12854: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 11, trace 12855: estimate 14.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 12856: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 12857: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 12858: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 12859: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 12860: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 12861: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 12862: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 12863: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 12864: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 12865: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 12866: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 12867: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 13201: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 13202: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 13203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13205: estimate 12.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13206: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 13207: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13208: estimate 14.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 11, trace 13209: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13210: estimate 6.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13211: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13212: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13213: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13214: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13215: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13216: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13217: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13218: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 13219: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 13220: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 13221: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 13404: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 13405: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 13406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13408: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13409: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 13410: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 13411: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 11, trace 13412: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13413: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13414: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 13415: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13416: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13417: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13418: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13419: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13420: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 13421: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 13422: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 13423: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 13424: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 13613: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 13614: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 13615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13617: estimate 14.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13618: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 13619: estimate 10.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13620: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 11, trace 13621: estimate 14.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13622: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13623: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13624: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13625: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13626: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13627: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13628: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13629: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13630: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 13631: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 13632: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 13633: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 13804: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 13805: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 13806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13808: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13809: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 13810: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13811: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 11, trace 13812: estimate 14.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13813: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13814: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13815: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13816: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13817: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13818: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13819: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13820: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13821: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 13822: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 13823: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 13824: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 14008: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 14009: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 14010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14012: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14013: estimate 14.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 14014: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14015: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 11, trace 14016: estimate 14.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14017: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14018: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14019: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14020: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14021: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14022: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14023: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14024: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14025: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 14026: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 14027: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 14028: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 14206: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 14207: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 14208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14210: estimate 14.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14211: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 14212: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14213: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 11, trace 14214: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14215: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14216: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14217: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14218: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14219: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14220: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14221: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14222: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14223: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 14224: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 14225: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 14226: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 14411: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 14412: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 14413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 14414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14415: estimate 14.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 14416: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 14417: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 14418: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 11, trace 14419: estimate 14.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14420: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14421: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 14422: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14423: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14424: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14425: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14426: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14427: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 14428: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 14429: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 14430: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 14431: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 14628: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 14629: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 14630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 14632: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 14633: estimate 14.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 14634: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 14635: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14636: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14637: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 14638: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14639: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 14640: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14641: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14642: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14643: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 14644: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 14645: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 14646: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 14647: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14712: estimate 14.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 14827: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 14828: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 14829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 14830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 14831: estimate 13.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 14832: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 14833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 14834: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 14835: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 14836: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 14837: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 14838: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 14839: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 14840: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 14841: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 14842: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 14843: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 14844: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 14845: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 14846: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 15031: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 15032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 15033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15035: estimate 13.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15036: estimate 13.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 15037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15038: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15039: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15040: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15041: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15042: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15043: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15044: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15045: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15046: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15047: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15048: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 15049: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 15050: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 15231: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 15232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 15233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 15234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 15235: estimate 13.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 15236: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 15237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 15238: estimate 13.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 15239: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 15240: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 15241: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 15242: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 15243: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 15244: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 15245: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 15246: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 15247: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 15248: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 15249: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 15250: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 15436: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 15437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 15438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 15439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 15440: estimate 13.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 15441: estimate 13.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 15442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 15443: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 15444: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 15445: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 15446: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 15447: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 15448: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 15449: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 15450: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 15451: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 15452: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 15453: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 15454: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 15455: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 15616: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 15617: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 15618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 15619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 15620: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 15621: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 15622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 15623: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 15624: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 15625: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 15626: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 15627: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 15628: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 15629: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 15630: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 15631: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 15632: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 15633: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 15634: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 15635: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 15783: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 15784: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 15785: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 15818: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 15819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 15820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 15821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 15822: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 15823: estimate 12.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 15824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 15825: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 15826: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 15827: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 15828: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 15829: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 15830: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 15831: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 15832: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 15833: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 15834: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 15835: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 15836: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 15837: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 16234: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 16235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 16236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 16237: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16238: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16239: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 16240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 16241: estimate 12.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 16242: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 16243: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 16244: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16245: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 16246: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16247: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 16248: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 16249: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 16250: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 16251: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 16252: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 16253: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 16663: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 16664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 16665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 16666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 16667: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 16668: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 16669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 16670: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 16671: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 16672: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 16673: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 16674: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 16675: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 16676: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 16677: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 16678: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 16679: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 16680: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 16681: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 16682: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 16919: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 16920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 16921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 16922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 16923: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 16924: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 16925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16926: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 16927: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 16928: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 16929: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 16930: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 16931: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16932: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16933: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 16934: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 16935: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 16936: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 16937: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 16938: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 17181: estimate 1.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 17182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 17183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 17184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 17185: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 17186: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 17187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 17188: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 17189: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 17190: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 17191: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 17192: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 17193: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17194: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17195: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 17196: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 17197: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 17198: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 17199: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 17200: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 17451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 17452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 17453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17455: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17456: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 17457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 17458: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17459: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17460: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 17461: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17462: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17463: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17464: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17465: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17466: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 17467: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 17468: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 17469: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 17470: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 17816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 17817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 17818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 17819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17820: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17821: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 17822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17823: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17824: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17825: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 17826: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17827: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17828: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17829: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17830: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17831: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 17832: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 17833: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 17834: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 17835: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 18059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 2, trace 18060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 18061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 18062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 18063: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 18064: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 18065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 18066: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 18067: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 18068: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 18069: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 18070: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 18071: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 18072: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 18073: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 18074: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 18075: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 18076: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 18077: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 18078: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 18566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 18567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 18568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 18569: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 18570: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 18571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 18572: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 18573: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 18574: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 18575: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 18576: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 18577: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 18578: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 18579: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 18580: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 18581: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 18582: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 18583: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 18584: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 18826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 18827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 18828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 18829: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 18830: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 18831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 18832: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 18833: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 18834: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 18835: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 18836: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 18837: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 18838: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 18839: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 18840: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 18841: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 18842: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 18843: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 18844: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 19063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 19064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 19065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 19066: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 19067: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 19068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 19069: estimate 9.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 19070: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 19071: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 19072: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 19073: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 19074: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 19075: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 19076: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 19077: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 19078: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 19079: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 19080: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 19081: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 19470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 19471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 19473: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 19474: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 19475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 19476: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 19477: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 19478: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 19479: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 19480: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 19481: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 19482: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 19483: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 19484: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 19485: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 19486: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 19487: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 19488: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 19964: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 19965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 19966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 19969: estimate 15.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 19971: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 19972: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 19973: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 19974: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 19975: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 19976: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 19977: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 19978: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 19979: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 19980: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 19981: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 19982: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 20247: estimate 15.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 20248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 20249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 20250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 20251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 20252: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 20253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 20254: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 20255: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 20256: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 20257: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 20258: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 20259: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 20260: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 20261: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 20262: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 20263: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 20264: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 20265: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 20707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 20708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 20709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 20710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 20875: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 20876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 20877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 20878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 20879: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 20880: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 20881: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 20882: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 20883: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 20884: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 20885: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 20886: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 20887: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 20888: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 20889: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 20890: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 20891: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 20892: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 20893: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24598: estimate 14.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 24599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 24600: estimate 13.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24601: estimate 15.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24602: estimate 14.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24603: estimate 14.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 24604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24605: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24606: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24607: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24608: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24609: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24610: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24611: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24612: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24613: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 24614: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 24615: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 24616: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 25239: estimate 14.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 25240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 25241: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25242: estimate 15.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25243: estimate 14.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 25244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25245: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25246: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25247: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25248: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 25249: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25250: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25251: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25252: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25253: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25254: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 25255: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 25256: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25352: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25353: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25354: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25355: estimate 15.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 25533: estimate 14.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 25534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25535: estimate 15.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25536: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 25537: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 25538: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25539: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25540: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25541: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 25542: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25543: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25544: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25545: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25546: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25547: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 25548: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 25549: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25890: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 25891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25892: estimate 14.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25893: estimate 14.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 25894: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25895: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25896: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25897: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25898: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 25899: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25900: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25901: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25902: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25903: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25904: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 25905: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 25906: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 26300: estimate 14.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 26301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 26302: estimate 14.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 26303: estimate 14.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 26304: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 26305: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 26306: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 26307: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 26308: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 26309: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 26310: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 26311: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 26312: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 26313: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 26314: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 26315: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 26316: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 26549: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 26550: estimate 13.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 26551: estimate 13.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 26552: estimate 14.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 26553: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 26554: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 26555: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 26556: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 26557: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 26558: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 26559: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 26560: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 26561: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 26562: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 26563: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 26564: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 26565: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 26848: estimate 14.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 26849: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 26850: estimate 13.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 26851: estimate 14.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 26852: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 26853: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26854: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26855: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26856: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 26857: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26858: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26859: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26860: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26861: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26862: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 26863: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 26864: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 27040: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 289.00s leader 5, trace 27041: estimate 13.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 27075: estimate 14.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 27076: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 27077: estimate 13.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 27078: estimate 14.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 27079: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 27080: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 27081: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 27082: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 27083: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 27084: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 27085: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 27086: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 27087: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 27088: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 27089: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 27090: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 27091: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 27352: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 27353: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 27354: estimate 14.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 27355: estimate 14.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 27356: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 27357: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 27358: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 27359: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 27360: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 27361: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 27362: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 27363: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 27364: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 27365: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 27366: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 27367: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 27368: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 27572: estimate 13.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 27573: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 27574: estimate 14.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 27575: estimate 14.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 27576: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 27577: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 27578: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 27579: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 27580: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 27581: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 27582: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 27583: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 27584: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 27585: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 27586: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 27587: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 27588: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 27749: estimate 13.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 27750: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 27751: estimate 14.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 27752: estimate 14.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 27753: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 27754: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 27755: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 27756: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 27757: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 27758: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 27759: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 27760: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 27761: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 27762: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 27763: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 27764: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 27765: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 27954: estimate 13.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 27955: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 27956: estimate 13.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 27957: estimate 13.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 27958: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 27959: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 27960: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 27961: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 27962: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 27963: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 27964: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 27965: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 27966: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 27967: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 27968: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 27969: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 27970: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 28156: estimate 13.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 28157: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 28158: estimate 13.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 28159: estimate 13.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 28160: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 28161: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 28162: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 28163: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 28164: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 28165: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 28166: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 28167: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 28168: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 28169: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 28170: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 28171: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 28172: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 28353: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 28354: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 28355: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 28356: estimate 13.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 28357: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 28358: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 28359: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 28360: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 28361: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 28362: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 28363: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 28364: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 28365: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 28366: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 28367: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 28368: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 28369: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 28535: estimate 12.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 28536: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 28537: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 28538: estimate 13.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 28539: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 28540: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 28541: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 28542: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 28543: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 28544: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 28545: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 28546: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 28547: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 28548: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 28549: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 28550: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 28551: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 28728: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 28729: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 28730: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 28731: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 28732: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 28733: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 28734: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 28735: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 28736: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 28737: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 28738: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 28739: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 28740: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 28741: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 28742: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 28743: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 28744: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.40s leader 5, trace 28798: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 28936: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 28937: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 28938: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 28939: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 28940: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 28941: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 28942: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 28943: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 28944: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 28945: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 28946: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 28947: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 28948: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 28949: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 28950: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 28951: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 28952: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 29198: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 29199: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 29200: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 29201: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 29202: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 29203: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 29204: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 29205: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 29206: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 29207: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 29208: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 29209: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 29210: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 29211: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 29212: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 29213: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 29214: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 29414: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 29415: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 29416: estimate 12.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 29417: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 29418: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 29419: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 29420: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 29421: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 29422: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 29423: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 29424: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 29425: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 29426: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 29427: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 29428: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 29429: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 29430: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 29707: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 29708: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 29709: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 29710: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 29711: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 29712: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 29713: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 29714: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 29715: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 29716: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 29717: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 29718: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 29719: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 29720: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 29721: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 29722: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 29723: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 29942: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 29943: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 29944: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 29945: estimate 10.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 29946: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 29947: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 29948: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 29949: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 29950: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 29951: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 29952: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 29953: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 29954: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 29955: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 29956: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 29957: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 29958: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 358.00s leader 5, trace 30087: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 30168: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 30169: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 30170: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 30171: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 30172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 30173: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 30174: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 30175: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 30176: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 30177: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 30178: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 30179: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 30180: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 30181: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 30182: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 30183: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 30184: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Bren killed in action
- 1: Dane incapacitated
- 1: Ellis incapacitated
- 1: Soren incapacitated
- 1: Reed killed in action
- 1: Tern killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
