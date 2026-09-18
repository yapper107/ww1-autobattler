# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/107/good-ember/battle-107-1789674175723314882`

## Battle summary

**Ember** · 360 s · 185 shots.

### Turning points

- 20.3s, squad 4: contact (events line 190). First recorded contact.
- 25.0s, squad 0: help call ([trace 1486](#trace-1486)). No completion observed before termination.
- 75.0s, squad 0: help call ([trace 4858](#trace-4858)). No completion observed before termination.
- 81.6s, squad 0: withdrawal ([trace 5191](#trace-5191)). No completion observed before termination.
- 84.5s, squad 0: help call ([trace 5346](#trace-5346)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 1 shots, 4/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 184 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 12.2s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 893](#trace-893)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 62.0s, squad 0 chose took cover and returned fire ([trace 3228](#trace-3228)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 892](#trace-892)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799863802369168, 'next_transition': 910}.
- 85.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.883139 retreat threshold=0.220000 initiative=requires intent ([trace 5438](#trace-5438)). Following evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5444}.

### Communication

85 matched deliveries (mean 0.45s, max 5.25s); 56 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 20.30s, squad 4, contact, evidence events line 190: First recorded contact; .
- 24.95s, squad 0, help call, evidence 1486: NeedSupport; No completion observed before termination.
- 75.00s, squad 0, help call, evidence 4858: NeedSupport; No completion observed before termination.
- 81.60s, squad 0, withdrawal, evidence 5191: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 84.45s, squad 0, help call, evidence 5346: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.946835621160574, 'next_transition': 513}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.946835621160574, 'next_transition': 513}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.946835621160574, 'next_transition': 513}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-515"></a>
<a id="trace-538"></a>
<a id="trace-557"></a>
<a id="trace-570"></a>
<a id="trace-587"></a>
<a id="trace-609"></a>
<a id="trace-630"></a>
<a id="trace-641"></a>
<a id="trace-650"></a>
<a id="trace-732"></a>
<a id="trace-741"></a>
<a id="trace-845"></a>
<a id="trace-868"></a>
<a id="trace-891"></a>
<a id="trace-912"></a>
<a id="trace-931"></a>
<a id="trace-949"></a>
<a id="trace-973"></a>
<a id="trace-988"></a>
<a id="trace-1066"></a>
<a id="trace-1076"></a>
<a id="trace-1095"></a>
<a id="trace-1109"></a>
<a id="trace-1119"></a>
<a id="trace-1131"></a>
<a id="trace-1147"></a>
<a id="trace-1156"></a>
<a id="trace-1170"></a>
<a id="trace-1179"></a>
<a id="trace-1259"></a>
<a id="trace-1381"></a>
<a id="trace-1402"></a>
<a id="trace-1418"></a>
<a id="trace-1433"></a>
<a id="trace-1444"></a>
<a id="trace-1453"></a>
<a id="trace-1461"></a>
<a id="trace-1472"></a>
<a id="trace-1483"></a>
<a id="trace-1561"></a>
<a id="trace-1568"></a>
<a id="trace-1713"></a>
<a id="trace-1726"></a>
<a id="trace-1749"></a>
<a id="trace-1763"></a>
<a id="trace-1778"></a>
<a id="trace-1798"></a>
<a id="trace-1809"></a>
<a id="trace-1815"></a>
<a id="trace-1892"></a>
<a id="trace-1898"></a>
<a id="trace-1906"></a>
<a id="trace-1915"></a>
<a id="trace-1927"></a>
<a id="trace-1942"></a>
<a id="trace-1950"></a>
<a id="trace-1958"></a>
<a id="trace-1972"></a>
<a id="trace-1979"></a>
<a id="trace-2053"></a>
<a id="trace-2066"></a>
<a id="trace-2081"></a>
<a id="trace-2099"></a>
<a id="trace-2110"></a>
<a id="trace-2117"></a>
<a id="trace-2132"></a>
<a id="trace-2138"></a>
<a id="trace-2152"></a>
<a id="trace-2159"></a>
<a id="trace-2236"></a>
<a id="trace-2252"></a>
<a id="trace-2262"></a>
<a id="trace-2478"></a>
<a id="trace-2494"></a>
<a id="trace-2516"></a>
<a id="trace-2525"></a>
<a id="trace-2533"></a>
<a id="trace-2552"></a>
<a id="trace-2565"></a>
<a id="trace-2641"></a>
<a id="trace-2651"></a>
<a id="trace-2664"></a>
<a id="trace-2673"></a>
<a id="trace-2684"></a>
<a id="trace-2741"></a>
<a id="trace-2752"></a>
<a id="trace-2767"></a>
<a id="trace-2776"></a>
<a id="trace-2781"></a>
<a id="trace-2859"></a>
<a id="trace-2868"></a>
<a id="trace-2877"></a>
<a id="trace-2883"></a>
<a id="trace-2895"></a>
<a id="trace-2907"></a>
<a id="trace-2915"></a>
<a id="trace-2920"></a>
<a id="trace-2937"></a>
<a id="trace-2943"></a>
<a id="trace-3015"></a>
<a id="trace-3024"></a>
<a id="trace-3039"></a>
<a id="trace-3053"></a>
<a id="trace-3062"></a>
<a id="trace-3073"></a>
<a id="trace-3087"></a>
<a id="trace-3094"></a>
<a id="trace-3105"></a>
<a id="trace-3111"></a>
<a id="trace-3188"></a>
<a id="trace-3200"></a>
<a id="trace-3212"></a>
<a id="trace-3220"></a>
<a id="trace-3570"></a>
<a id="trace-3919"></a>
<a id="trace-3939"></a>
<a id="trace-3962"></a>
<a id="trace-3976"></a>
<a id="trace-3988"></a>
<a id="trace-4067"></a>
<a id="trace-4409"></a>
<a id="trace-4421"></a>
<a id="trace-4441"></a>
<a id="trace-4453"></a>
<a id="trace-4458"></a>
<a id="trace-4467"></a>
<a id="trace-4474"></a>
<a id="trace-4484"></a>
<a id="trace-4697"></a>
<a id="trace-4771"></a>
<a id="trace-4782"></a>
<a id="trace-4799"></a>
<a id="trace-4805"></a>
<a id="trace-4821"></a>
<a id="trace-4826"></a>
<a id="trace-4834"></a>
<a id="trace-4839"></a>
<a id="trace-4843"></a>
<a id="trace-4846"></a>
<a id="trace-5028"></a>
<a id="trace-5032"></a>
<a id="trace-5044"></a>
<a id="trace-5056"></a>
<a id="trace-5067"></a>
<a id="trace-5072"></a>
<a id="trace-5077"></a>
<a id="trace-5087"></a>
<a id="trace-5092"></a>
<a id="trace-5094"></a>
<a id="trace-5168"></a>
<a id="trace-5178"></a>
<a id="trace-5188"></a>
<a id="trace-5300"></a>
<a id="trace-5310"></a>
<a id="trace-5320"></a>
<a id="trace-5330"></a>
<a id="trace-5334"></a>
<a id="trace-5345"></a>
<a id="trace-5360"></a>
<a id="trace-5432"></a>
<a id="trace-5437"></a>
<a id="trace-5446"></a>
<a id="trace-5454"></a>
<a id="trace-5463"></a>
<a id="trace-5468"></a>
<a id="trace-5479"></a>
<a id="trace-5484"></a>
<a id="trace-5491"></a>
<a id="trace-5495"></a>
<a id="trace-5562"></a>
<a id="trace-5567"></a>
<a id="trace-5573"></a>
<a id="trace-5580"></a>
<a id="trace-5588"></a>
<a id="trace-5592"></a>
<a id="trace-5600"></a>
<a id="trace-5604"></a>
<a id="trace-5608"></a>
<a id="trace-5612"></a>
<a id="trace-5677"></a>
<a id="trace-5681"></a>
<a id="trace-5684"></a>
<a id="trace-5688"></a>
<a id="trace-5693"></a>
<a id="trace-5695"></a>
<a id="trace-5701"></a>
<a id="trace-5704"></a>
<a id="trace-5707"></a>
<a id="trace-5709"></a>
<a id="trace-5774"></a>
<a id="trace-5778"></a>
<a id="trace-5781"></a>
<a id="trace-5787"></a>
<a id="trace-5792"></a>
<a id="trace-5794"></a>
<a id="trace-5801"></a>
<a id="trace-5804"></a>
<a id="trace-5809"></a>
<a id="trace-5813"></a>
<a id="trace-5879"></a>
<a id="trace-5885"></a>
<a id="trace-5890"></a>
<a id="trace-5895"></a>
<a id="trace-5902"></a>
<a id="trace-5905"></a>
<a id="trace-5914"></a>
<a id="trace-5917"></a>
<a id="trace-5922"></a>
<a id="trace-5927"></a>
<a id="trace-5999"></a>
<a id="trace-6005"></a>
<a id="trace-6009"></a>
<a id="trace-6014"></a>
<a id="trace-6021"></a>
<a id="trace-6024"></a>
<a id="trace-6031"></a>
<a id="trace-6035"></a>
<a id="trace-6043"></a>
<a id="trace-6047"></a>
<a id="trace-6116"></a>
<a id="trace-6121"></a>
<a id="trace-6127"></a>
<a id="trace-6138"></a>
<a id="trace-6144"></a>
<a id="trace-6148"></a>
<a id="trace-6154"></a>
<a id="trace-6157"></a>
<a id="trace-6162"></a>
<a id="trace-6166"></a>
<a id="trace-6234"></a>
<a id="trace-6239"></a>
<a id="trace-6246"></a>
<a id="trace-6254"></a>
<a id="trace-6261"></a>
<a id="trace-6267"></a>
<a id="trace-6276"></a>
<a id="trace-6281"></a>
<a id="trace-6286"></a>
<a id="trace-6289"></a>
<a id="trace-6356"></a>
<a id="trace-6361"></a>
<a id="trace-6367"></a>
<a id="trace-6372"></a>
<a id="trace-6379"></a>
<a id="trace-6382"></a>
<a id="trace-6390"></a>
<a id="trace-6397"></a>
<a id="trace-6403"></a>
<a id="trace-6411"></a>
<a id="trace-6479"></a>
<a id="trace-6484"></a>
<a id="trace-6490"></a>
<a id="trace-6494"></a>
<a id="trace-6502"></a>
<a id="trace-6505"></a>
<a id="trace-6511"></a>
<a id="trace-6514"></a>
<a id="trace-6520"></a>
<a id="trace-6526"></a>
<a id="trace-6591"></a>
<a id="trace-6601"></a>
<a id="trace-6610"></a>
<a id="trace-6614"></a>
<a id="trace-6622"></a>
<a id="trace-6627"></a>
<a id="trace-6635"></a>
<a id="trace-6638"></a>
<a id="trace-6643"></a>
<a id="trace-6647"></a>
<a id="trace-6713"></a>
<a id="trace-6719"></a>
<a id="trace-6725"></a>
<a id="trace-6730"></a>
<a id="trace-6739"></a>
<a id="trace-6742"></a>
<a id="trace-6753"></a>
<a id="trace-6757"></a>
<a id="trace-6764"></a>
<a id="trace-6770"></a>
<a id="trace-6837"></a>
<a id="trace-6842"></a>
<a id="trace-6847"></a>
<a id="trace-6852"></a>
<a id="trace-6858"></a>
<a id="trace-6862"></a>
<a id="trace-6869"></a>
<a id="trace-6873"></a>
<a id="trace-6879"></a>
<a id="trace-6886"></a>
<a id="trace-6956"></a>
<a id="trace-6962"></a>
<a id="trace-6967"></a>
<a id="trace-6972"></a>
<a id="trace-6982"></a>
<a id="trace-6986"></a>
<a id="trace-6991"></a>
<a id="trace-6995"></a>
<a id="trace-7000"></a>
<a id="trace-7005"></a>
<a id="trace-7071"></a>
<a id="trace-7078"></a>
<a id="trace-7086"></a>
<a id="trace-7091"></a>
<a id="trace-7101"></a>
<a id="trace-7104"></a>
<a id="trace-7111"></a>
<a id="trace-7116"></a>
<a id="trace-7122"></a>
<a id="trace-7128"></a>
<a id="trace-7194"></a>
<a id="trace-7199"></a>
<a id="trace-7205"></a>
<a id="trace-7209"></a>
<a id="trace-7218"></a>
<a id="trace-7223"></a>
<a id="trace-7230"></a>
<a id="trace-7233"></a>
<a id="trace-7239"></a>
<a id="trace-7247"></a>
<a id="trace-7313"></a>
<a id="trace-7319"></a>
<a id="trace-7327"></a>
<a id="trace-7332"></a>
<a id="trace-7339"></a>
<a id="trace-7343"></a>
<a id="trace-7350"></a>
<a id="trace-7354"></a>
<a id="trace-7361"></a>
<a id="trace-7365"></a>
<a id="trace-7432"></a>
<a id="trace-7438"></a>
<a id="trace-7443"></a>
<a id="trace-7451"></a>
<a id="trace-7459"></a>
<a id="trace-7462"></a>
<a id="trace-7469"></a>
<a id="trace-7474"></a>
<a id="trace-7482"></a>
<a id="trace-7486"></a>
<a id="trace-7553"></a>
<a id="trace-7558"></a>
<a id="trace-7565"></a>
<a id="trace-7570"></a>
<a id="trace-7577"></a>
<a id="trace-7581"></a>
<a id="trace-7587"></a>
<a id="trace-7591"></a>
<a id="trace-7600"></a>
<a id="trace-7604"></a>
<a id="trace-7671"></a>
<a id="trace-7679"></a>
<a id="trace-7686"></a>
<a id="trace-7690"></a>
<a id="trace-7698"></a>
<a id="trace-7704"></a>
<a id="trace-7709"></a>
<a id="trace-7713"></a>
<a id="trace-7719"></a>
<a id="trace-7723"></a>
<a id="trace-7789"></a>
<a id="trace-7795"></a>
<a id="trace-7804"></a>
<a id="trace-7809"></a>
<a id="trace-7817"></a>
<a id="trace-7821"></a>
<a id="trace-7829"></a>
<a id="trace-7835"></a>
<a id="trace-7841"></a>
<a id="trace-7846"></a>
<a id="trace-7912"></a>
<a id="trace-7917"></a>
<a id="trace-7922"></a>
<a id="trace-7927"></a>
<a id="trace-7935"></a>
<a id="trace-7938"></a>
<a id="trace-7947"></a>
<a id="trace-7952"></a>
<a id="trace-7958"></a>
<a id="trace-7964"></a>
<a id="trace-8032"></a>
<a id="trace-8041"></a>
<a id="trace-8046"></a>
<a id="trace-8050"></a>
<a id="trace-8057"></a>
<a id="trace-8060"></a>
<a id="trace-8067"></a>
<a id="trace-8071"></a>
<a id="trace-8076"></a>
<a id="trace-8080"></a>
<a id="trace-8147"></a>
<a id="trace-8157"></a>
<a id="trace-8162"></a>
<a id="trace-8169"></a>
<a id="trace-8180"></a>
<a id="trace-8183"></a>
<a id="trace-8190"></a>
<a id="trace-8193"></a>
<a id="trace-8199"></a>
<a id="trace-8203"></a>
<a id="trace-8269"></a>
<a id="trace-8274"></a>
<a id="trace-8280"></a>
<a id="trace-8285"></a>
<a id="trace-8292"></a>
<a id="trace-8299"></a>
<a id="trace-8308"></a>
<a id="trace-8311"></a>
<a id="trace-8319"></a>
<a id="trace-8325"></a>
<a id="trace-8393"></a>
<a id="trace-8398"></a>
<a id="trace-8403"></a>
<a id="trace-8407"></a>
<a id="trace-8414"></a>
<a id="trace-8418"></a>
<a id="trace-8424"></a>
<a id="trace-8428"></a>
<a id="trace-8435"></a>
<a id="trace-8439"></a>
<a id="trace-8509"></a>
<a id="trace-8517"></a>
<a id="trace-8524"></a>
<a id="trace-8530"></a>
<a id="trace-8538"></a>
<a id="trace-8541"></a>
<a id="trace-8547"></a>
<a id="trace-8551"></a>
<a id="trace-8555"></a>
<a id="trace-8560"></a>
<a id="trace-8626"></a>
<a id="trace-8633"></a>
<a id="trace-8638"></a>
<a id="trace-8644"></a>
<a id="trace-8657"></a>
<a id="trace-8661"></a>
<a id="trace-8667"></a>
<a id="trace-8671"></a>
<a id="trace-8679"></a>
<a id="trace-8684"></a>
<a id="trace-8749"></a>
<a id="trace-8755"></a>
<a id="trace-8760"></a>
<a id="trace-8764"></a>
<a id="trace-8772"></a>
<a id="trace-8776"></a>
<a id="trace-8784"></a>
<a id="trace-8790"></a>
<a id="trace-8798"></a>
<a id="trace-8802"></a>
<a id="trace-8869"></a>
<a id="trace-8876"></a>
<a id="trace-8882"></a>
<a id="trace-8888"></a>
<a id="trace-8895"></a>
<a id="trace-8898"></a>
<a id="trace-8904"></a>
<a id="trace-8908"></a>
<a id="trace-8914"></a>
<a id="trace-8919"></a>
<a id="trace-8988"></a>
<a id="trace-8993"></a>
<a id="trace-8999"></a>
<a id="trace-9007"></a>
<a id="trace-9014"></a>
<a id="trace-9018"></a>
<a id="trace-9027"></a>
<a id="trace-9031"></a>
<a id="trace-9036"></a>
<a id="trace-9040"></a>
<a id="trace-9108"></a>
<a id="trace-9113"></a>
<a id="trace-9119"></a>
<a id="trace-9123"></a>
<a id="trace-9133"></a>
<a id="trace-9137"></a>
<a id="trace-9143"></a>
<a id="trace-9150"></a>
<a id="trace-9156"></a>
<a id="trace-9160"></a>
<a id="trace-9227"></a>
<a id="trace-9234"></a>
<a id="trace-9241"></a>
<a id="trace-9245"></a>
<a id="trace-9253"></a>
<a id="trace-9256"></a>
<a id="trace-9263"></a>
<a id="trace-9269"></a>
<a id="trace-9274"></a>
<a id="trace-9279"></a>
<a id="trace-9345"></a>
<a id="trace-9351"></a>
<a id="trace-9360"></a>
<a id="trace-9364"></a>
<a id="trace-9372"></a>
<a id="trace-9378"></a>
<a id="trace-9385"></a>
<a id="trace-9389"></a>
<a id="trace-9394"></a>
<a id="trace-9400"></a>
<a id="trace-9467"></a>
<a id="trace-9473"></a>
<a id="trace-9479"></a>
<a id="trace-9483"></a>
<a id="trace-9490"></a>
<a id="trace-9494"></a>
<a id="trace-9504"></a>
<a id="trace-9508"></a>
<a id="trace-9514"></a>
<a id="trace-9518"></a>
<a id="trace-9587"></a>
<a id="trace-9594"></a>
<a id="trace-9599"></a>
<a id="trace-9606"></a>
<a id="trace-9613"></a>
<a id="trace-9616"></a>
<a id="trace-9622"></a>
<a id="trace-9626"></a>
<a id="trace-9632"></a>
<a id="trace-9636"></a>
<a id="trace-9705"></a>
<a id="trace-9712"></a>
<a id="trace-9717"></a>
<a id="trace-9724"></a>
<a id="trace-9732"></a>
<a id="trace-9738"></a>
<a id="trace-9746"></a>
<a id="trace-9749"></a>
<a id="trace-9754"></a>
<a id="trace-9758"></a>
<a id="trace-9825"></a>
<a id="trace-9831"></a>
<a id="trace-9836"></a>
<a id="trace-9840"></a>
<a id="trace-9848"></a>
<a id="trace-9855"></a>
<a id="trace-9862"></a>
<a id="trace-9867"></a>
<a id="trace-9875"></a>
<a id="trace-9879"></a>
<a id="trace-9948"></a>
<a id="trace-9953"></a>
<a id="trace-9959"></a>
<a id="trace-9963"></a>
<a id="trace-9970"></a>
<a id="trace-9973"></a>
<a id="trace-9980"></a>
<a id="trace-9984"></a>
<a id="trace-9988"></a>
<a id="trace-9996"></a>
<a id="trace-10065"></a>
<a id="trace-10070"></a>
<a id="trace-10077"></a>
<a id="trace-10085"></a>
<a id="trace-10094"></a>
<a id="trace-10097"></a>
<a id="trace-10103"></a>
<a id="trace-10106"></a>
<a id="trace-10111"></a>
<a id="trace-10116"></a>
<a id="trace-10182"></a>
<a id="trace-10188"></a>
<a id="trace-10194"></a>
<a id="trace-10199"></a>
<a id="trace-10209"></a>
<a id="trace-10214"></a>
<a id="trace-10224"></a>
<a id="trace-10229"></a>
<a id="trace-10235"></a>
<a id="trace-10239"></a>
<a id="trace-10305"></a>
<a id="trace-10311"></a>
<a id="trace-10315"></a>
<a id="trace-10320"></a>
<a id="trace-10327"></a>
<a id="trace-10331"></a>
<a id="trace-10338"></a>
<a id="trace-10342"></a>
<a id="trace-10352"></a>
<a id="trace-10359"></a>
<a id="trace-10425"></a>
<a id="trace-10431"></a>
<a id="trace-10439"></a>
<a id="trace-10444"></a>
<a id="trace-10450"></a>
<a id="trace-10454"></a>
<a id="trace-10460"></a>
<a id="trace-10463"></a>
<a id="trace-10468"></a>
<a id="trace-10474"></a>
<a id="trace-10541"></a>
<a id="trace-10548"></a>
<a id="trace-10559"></a>
<a id="trace-10564"></a>
<a id="trace-10573"></a>
<a id="trace-10578"></a>
<a id="trace-10585"></a>
<a id="trace-10590"></a>
<a id="trace-10595"></a>
<a id="trace-10599"></a>
<a id="trace-10665"></a>
<a id="trace-10669"></a>
<a id="trace-10676"></a>
<a id="trace-10680"></a>
<a id="trace-10690"></a>
<a id="trace-10693"></a>
<a id="trace-10702"></a>
<a id="trace-10709"></a>
<a id="trace-10714"></a>
<a id="trace-10719"></a>
<a id="trace-10788"></a>
<a id="trace-10793"></a>
<a id="trace-10798"></a>
<a id="trace-10802"></a>
<a id="trace-10811"></a>
<a id="trace-10814"></a>
<a id="trace-10821"></a>
<a id="trace-10824"></a>
<a id="trace-10831"></a>
<a id="trace-10838"></a>
<a id="trace-10904"></a>
<a id="trace-10912"></a>
<a id="trace-10918"></a>
<a id="trace-10922"></a>
<a id="trace-10931"></a>
<a id="trace-10936"></a>
<a id="trace-10946"></a>
<a id="trace-10949"></a>
<a id="trace-10954"></a>
<a id="trace-10959"></a>
<a id="trace-11025"></a>
<a id="trace-11031"></a>
<a id="trace-11038"></a>
<a id="trace-11043"></a>
<a id="trace-11050"></a>
<a id="trace-11054"></a>
<a id="trace-11065"></a>
<a id="trace-11068"></a>
<a id="trace-11080"></a>
<a id="trace-11147"></a>
<a id="trace-11151"></a>
<a id="trace-11157"></a>
<a id="trace-11162"></a>
<a id="trace-11169"></a>
<a id="trace-11175"></a>
<a id="trace-11183"></a>
<a id="trace-11186"></a>
<a id="trace-11191"></a>
<a id="trace-11196"></a>
<a id="trace-11266"></a>
<a id="trace-11271"></a>
<a id="trace-11277"></a>
<a id="trace-11281"></a>
<a id="trace-11290"></a>
<a id="trace-11296"></a>
<a id="trace-11302"></a>
<a id="trace-11307"></a>
<a id="trace-11316"></a>
<a id="trace-11320"></a>
<a id="trace-11386"></a>
<a id="trace-11396"></a>
<a id="trace-11400"></a>
<a id="trace-11410"></a>
<a id="trace-11415"></a>
<a id="trace-11421"></a>
<a id="trace-11426"></a>
<a id="trace-11434"></a>
<a id="trace-11440"></a>
<a id="trace-11507"></a>
<a id="trace-11511"></a>
<a id="trace-11518"></a>
<a id="trace-11522"></a>
<a id="trace-11530"></a>
<a id="trace-11534"></a>
<a id="trace-11540"></a>
<a id="trace-11543"></a>
<a id="trace-11550"></a>
<a id="trace-11558"></a>
<a id="trace-11624"></a>
<a id="trace-11637"></a>
<a id="trace-11641"></a>
<a id="trace-11650"></a>
<a id="trace-11655"></a>
<a id="trace-11662"></a>
<a id="trace-11665"></a>
<a id="trace-11671"></a>
<a id="trace-11675"></a>
<a id="trace-11744"></a>
<a id="trace-11749"></a>
<a id="trace-11753"></a>
<a id="trace-11761"></a>
<a id="trace-11770"></a>
<a id="trace-11774"></a>
<a id="trace-11781"></a>
<a id="trace-11787"></a>
<a id="trace-11796"></a>
<a id="trace-11800"></a>
<a id="trace-11867"></a>
<a id="trace-11871"></a>
<a id="trace-11876"></a>
<a id="trace-11881"></a>
<a id="trace-11891"></a>
<a id="trace-11898"></a>
<a id="trace-11901"></a>
<a id="trace-11910"></a>
<a id="trace-11915"></a>
- 1.60s–359.80s (×712), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4830056986028501, 'next_transition': 351}.
<a id="trace-513"></a>
<a id="trace-568"></a>
<a id="trace-585"></a>
<a id="trace-607"></a>
<a id="trace-628"></a>
<a id="trace-648"></a>
<a id="trace-730"></a>
<a id="trace-739"></a>
- 5.70s–10.70s (×8), actor 5, squad 0 (trace 513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7929155070903975, 'next_transition': 568}.
<a id="trace-745"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 745): traveling overwatch. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 843}.
<a id="trace-746"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 746): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 652. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4000150516238515, 'next_transition': 843}.
<a id="trace-843"></a>
<a id="trace-866"></a>
<a id="trace-889"></a>
- 11.20s–12.20s (×3), actor 5, squad 0 (trace 843): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 655. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.357607892181436, 'next_transition': 866}.
<a id="trace-131"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 131): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799863802369168, 'next_transition': 910}.
<a id="trace-892"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 892): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 892. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799863802369168, 'next_transition': 910}.
<a id="trace-893"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 893): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 893. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799863802369168, 'next_transition': 910}.
<a id="trace-910"></a>
<a id="trace-929"></a>
<a id="trace-947"></a>
<a id="trace-1064"></a>
<a id="trace-1093"></a>
<a id="trace-1129"></a>
<a id="trace-1154"></a>
<a id="trace-1168"></a>
<a id="trace-1177"></a>
<a id="trace-1257"></a>
- 12.70s–20.25s (×10), actor 5, squad 0 (trace 910): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 893. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2000079533548798, 'next_transition': 929}.
<a id="trace-1264"></a>
- 20.55s–20.55s (×1), actor 0, squad 0 (trace 1264): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1182. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1379}.
<a id="trace-1379"></a>
<a id="trace-1416"></a>
<a id="trace-1431"></a>
<a id="trace-1442"></a>
<a id="trace-1451"></a>
<a id="trace-1459"></a>
<a id="trace-1470"></a>
- 20.75s–24.25s (×7), actor 5, squad 0 (trace 1379): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1185. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9787441250980381, 'next_transition': 1416}.
<a id="trace-1484"></a>
- 24.95s–24.95s (×1), actor 1, squad 0 (trace 1484): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 20.00s, trace 1183. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079945745611098, 'next_transition': 1559}.
<a id="trace-1486"></a>
- 24.95s–24.95s (×1), actor 1, squad 0 (trace 1486): NeedSupport. Knowledge: actor memory at 20.00s, trace 1183. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079945745611098, 'next_transition': 1559}.
<a id="trace-1559"></a>
<a id="trace-1566"></a>
- 25.25s–25.75s (×2), actor 5, squad 0 (trace 1559): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1489. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079752536263778, 'next_transition': 1566}.
<a id="trace-1569"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1569): Reorganise: completed/failed drill. Knowledge: actor memory at 25.00s, trace 1487. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1623}.
<a id="trace-1573"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1573): MoveTactically. Knowledge: actor memory at 25.00s, trace 1487. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1623}.
<a id="trace-1574"></a>
- 25.95s–25.95s (×1), actor 1, squad 0 (trace 1574): Reorganise complete. Knowledge: actor memory at 25.00s, trace 1487. Next observer evidence: {'until': 26.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7080342897698267, 'next_transition': 1623}.
<a id="trace-1623"></a>
- 26.20s–26.20s (×1), actor 1, squad 0 (trace 1623): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1487. Next observer evidence: None.
<a id="trace-1711"></a>
<a id="trace-1724"></a>
<a id="trace-1747"></a>
<a id="trace-1761"></a>
<a id="trace-1776"></a>
<a id="trace-1796"></a>
<a id="trace-1940"></a>
<a id="trace-1956"></a>
<a id="trace-2051"></a>
<a id="trace-2064"></a>
<a id="trace-2079"></a>
<a id="trace-2097"></a>
<a id="trace-2108"></a>
<a id="trace-2115"></a>
<a id="trace-2136"></a>
<a id="trace-2150"></a>
<a id="trace-2157"></a>
<a id="trace-2234"></a>
<a id="trace-2250"></a>
<a id="trace-2260"></a>
- 26.25s–41.25s (×20), actor 5, squad 0 (trace 1711): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1489. Next observer evidence: {'until': 26.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7079953295162207, 'next_transition': 1724}.
<a id="trace-2268"></a>
- 41.55s–41.55s (×1), actor 1, squad 0 (trace 2268): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 2161. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4874305599175908, 'next_transition': 2492}.
<a id="trace-2492"></a>
<a id="trace-2514"></a>
<a id="trace-2523"></a>
<a id="trace-2563"></a>
<a id="trace-2639"></a>
<a id="trace-2649"></a>
<a id="trace-2662"></a>
<a id="trace-2671"></a>
<a id="trace-2682"></a>
- 42.25s–47.25s (×9), actor 5, squad 0 (trace 2492): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2163. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520005963246913, 'next_transition': 2514}.
<a id="trace-2686"></a>
- 47.60s–47.60s (×1), actor 1, squad 0 (trace 2686): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 2567. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1889938940812641, 'next_transition': 2765}.
<a id="trace-2765"></a>
<a id="trace-2774"></a>
<a id="trace-2779"></a>
<a id="trace-2857"></a>
<a id="trace-2866"></a>
<a id="trace-2875"></a>
<a id="trace-2881"></a>
<a id="trace-2893"></a>
<a id="trace-2905"></a>
<a id="trace-2913"></a>
<a id="trace-2935"></a>
<a id="trace-2941"></a>
<a id="trace-3013"></a>
<a id="trace-3022"></a>
<a id="trace-3037"></a>
<a id="trace-3060"></a>
<a id="trace-3071"></a>
<a id="trace-3085"></a>
<a id="trace-3092"></a>
<a id="trace-3109"></a>
<a id="trace-3186"></a>
<a id="trace-3210"></a>
<a id="trace-3218"></a>
- 48.75s–61.75s (×23), actor 5, squad 0 (trace 2765): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 2569. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0709968106188743, 'next_transition': 2774}.
<a id="trace-3228"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3228): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 3114. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3568}.
<a id="trace-3229"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3229): bounding overwatch. Knowledge: actor memory at 60.00s, trace 3114. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3568}.
<a id="trace-3230"></a>
- 62.05s–62.05s (×1), actor 1, squad 0 (trace 3230): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 3114. Next observer evidence: {'until': 62.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600015698402908, 'next_transition': 3568}.
<a id="trace-3568"></a>
- 62.25s–62.25s (×1), actor 5, squad 0 (trace 3568): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3116. Next observer evidence: None.
<a id="trace-3571"></a>
- 62.30s–62.30s (×1), actor 1, squad 0 (trace 3571): new contact inside 100 m. Knowledge: actor memory at 60.00s, trace 3114. Next observer evidence: {'until': 62.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16534134511367687, 'next_transition': 3917}.
<a id="trace-3917"></a>
<a id="trace-3937"></a>
<a id="trace-3960"></a>
<a id="trace-3974"></a>
<a id="trace-3986"></a>
<a id="trace-4065"></a>
- 62.75s–65.25s (×6), actor 5, squad 0 (trace 3917): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3116. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19220362085637177, 'next_transition': 3937}.
<a id="trace-4069"></a>
- 65.35s–65.35s (×1), actor 1, squad 0 (trace 4069): new contact inside 100 m. Knowledge: actor memory at 65.00s, trace 3995. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9825507143230714, 'next_transition': 4407}.
<a id="trace-4407"></a>
<a id="trace-4419"></a>
<a id="trace-4439"></a>
<a id="trace-4451"></a>
<a id="trace-4456"></a>
<a id="trace-4465"></a>
<a id="trace-4472"></a>
<a id="trace-4482"></a>
- 65.75s–69.25s (×8), actor 5, squad 0 (trace 4407): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3997. Next observer evidence: {'until': 66.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5578423573665502, 'next_transition': 4419}.
<a id="trace-4485"></a>
- 69.45s–69.45s (×1), actor 4, squad 0 (trace 4485): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 65.00s, trace 3996. Next observer evidence: {'until': 69.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499812739601896, 'next_transition': 4695}.
<a id="trace-4695"></a>
<a id="trace-4769"></a>
<a id="trace-4780"></a>
<a id="trace-4797"></a>
<a id="trace-4803"></a>
<a id="trace-4819"></a>
- 69.75s–72.25s (×6), actor 5, squad 0 (trace 4695): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3997. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450017036773937, 'next_transition': 4769}.
<a id="trace-4856"></a>
- 75.00s–75.00s (×1), actor 7, squad 0 (trace 4856): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: None.
<a id="trace-4858"></a>
- 75.00s–75.00s (×1), actor 7, squad 0 (trace 4858): NeedSupport. Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: None.
<a id="trace-4865"></a>
- 75.05s–75.05s (×1), actor 7, squad 0 (trace 4865): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: {'until': 78.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2397765969490027, 'next_transition': 5082}.
<a id="trace-4867"></a>
- 75.05s–75.05s (×1), actor 7, squad 0 (trace 4867): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: {'until': 78.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2397765969490027, 'next_transition': 5082}.
<a id="trace-4868"></a>
- 75.05s–75.05s (×1), actor 7, squad 0 (trace 4868): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: {'until': 78.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2397765969490027, 'next_transition': 5082}.
<a id="trace-5082"></a>
- 78.40s–78.40s (×1), actor 7, squad 0 (trace 5082): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 75.00s, trace 4849. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22593666666666667, 'next_transition': 5176}.
<a id="trace-5176"></a>
- 80.75s–80.75s (×1), actor 5, squad 0 (trace 5176): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5095. Next observer evidence: {'until': 81.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.018070000000000103, 'next_transition': 5191}.
<a id="trace-5191"></a>
- 81.60s–81.60s (×1), actor 7, squad 0 (trace 5191): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 80.00s, trace 5097. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03438333333333343, 'next_transition': 5298}.
<a id="trace-5192"></a>
- 81.60s–81.60s (×1), actor 7, squad 0 (trace 5192): rearward bound: one stationary suppressing element. Knowledge: actor memory at 80.00s, trace 5097. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03438333333333343, 'next_transition': 5298}.
<a id="trace-5298"></a>
<a id="trace-5308"></a>
<a id="trace-5318"></a>
<a id="trace-5343"></a>
- 81.75s–84.25s (×4), actor 5, squad 0 (trace 5298): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5095. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2092933333333331, 'next_transition': 5308}.
<a id="trace-5346"></a>
- 84.45s–84.45s (×1), actor 7, squad 0 (trace 5346): NeedSupport. Knowledge: actor memory at 80.00s, trace 5097. Next observer evidence: {'until': 84.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5358}.
<a id="trace-5358"></a>
<a id="trace-5430"></a>
<a id="trace-5435"></a>
- 84.75s–85.75s (×3), actor 5, squad 0 (trace 5358): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5095. Next observer evidence: {'until': 85.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5430}.
<a id="trace-600"></a>
- 85.80s–85.80s (×1), actor 5, squad 0 (events line 600): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5438"></a>
- 85.80s–85.80s (×1), actor 5, squad 0 (trace 5438): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.883139 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 85.80s, trace 5438. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5444}.
<a id="trace-5439"></a>
- 85.80s–85.80s (×1), actor 5, squad 0 (trace 5439): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.883139 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 85.80s, trace 5439. Next observer evidence: {'until': 86.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5444}.
<a id="trace-5444"></a>
<a id="trace-5461"></a>
<a id="trace-5466"></a>
<a id="trace-5477"></a>
<a id="trace-5482"></a>
<a id="trace-5489"></a>
<a id="trace-5493"></a>
<a id="trace-5560"></a>
<a id="trace-5565"></a>
<a id="trace-5571"></a>
<a id="trace-5578"></a>
<a id="trace-5586"></a>
<a id="trace-5590"></a>
<a id="trace-5598"></a>
<a id="trace-5610"></a>
- 86.25s–94.75s (×15), actor 5, squad 0 (trace 5444): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.80s, trace 5439. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5461}.

## Net delivery

85 matched order/radio deliveries; 56 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.446s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1492: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1493: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1495: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1496: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1497: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 1823: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 1824: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 1825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 1826: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 1827: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 1828: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 1985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 1986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 1987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 1988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 1989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 1990: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 1991: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 1992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 1993: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 1994: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 1995: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2166: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2167: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2169: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2170: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2171: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2572: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2573: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2574: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2575: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2576: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2577: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 2787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 2788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 2789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 2790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 2791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 2792: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 2793: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 2794: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 2795: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 2796: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 2797: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 2945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 2946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 2947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 2948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 2949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 2950: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 2951: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 2952: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 2953: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 2954: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 2955: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3119: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3120: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3121: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3122: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3123: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3124: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 3995: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3999: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4000: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4001: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4002: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4003: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4004: estimate 3.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4005: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4705: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4706: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4707: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4708: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4709: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4710: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4711: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 4849: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4850: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4851: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4852: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4853: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4854: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4855: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 5097: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5098: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5099: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5100: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5101: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5102: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5103: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5366: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 5367: estimate 7.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5368: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5369: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5370: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5371: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5372: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5373: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.80s leader 5, trace 5438: estimate 2.83; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.80s leader 5, trace 5439: estimate 2.83; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5497: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5498: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5499: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5500: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5501: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5502: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5503: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5504: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5614: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5615: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5616: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5617: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5618: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5619: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5620: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5621: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5711: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5712: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5713: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5714: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5715: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5716: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5717: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5718: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5815: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5816: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5817: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5818: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5819: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5820: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5821: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5822: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5934: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5935: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5936: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5937: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 5938: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5939: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5940: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5941: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6050: estimate 7.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6051: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6052: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6053: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6054: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6055: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6056: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6057: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6169: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6170: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6171: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6172: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6173: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6174: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6175: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6176: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6292: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6293: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6294: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6295: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6296: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6297: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6298: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6299: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6413: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6414: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6415: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6416: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6417: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6418: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6419: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6420: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6527: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6528: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6529: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6530: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6531: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6532: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6533: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6534: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6649: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6650: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6651: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6652: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6653: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6654: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6655: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6656: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6771: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6772: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6773: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6774: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 6775: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6776: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6777: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6778: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6888: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 6889: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 6890: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6891: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 6892: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6893: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6894: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 6895: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7007: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7008: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7009: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7010: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7011: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7012: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7013: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7014: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7130: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7131: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7132: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7133: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7134: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7135: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7136: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7137: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7249: estimate 6.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7250: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7251: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7252: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7253: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7254: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7255: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7256: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7368: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7369: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7370: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7371: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7372: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7373: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7374: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7375: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7487: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7488: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7489: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7490: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7491: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7492: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7493: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7494: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7606: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 7607: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7608: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7609: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 7610: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7611: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7612: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 7613: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 7726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7727: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7728: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 7729: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7730: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7731: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 7732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 7849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7850: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 7852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7853: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7854: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 7855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 7969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 7972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8090: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 8332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8335: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 8446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 8449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 8452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 8563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 8566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 8569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 8686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 8689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 8692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 8806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 8809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 8812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 8922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 8925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 8928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 9167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 9281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 9282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 9283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 9284: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 9285: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 9286: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 9287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 9288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 9401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 9402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 9403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 9404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 9405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 9406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 9407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 9408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 9523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 9526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9527: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 9529: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 9639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 9642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 9645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 9760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 9761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 9762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 9763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 9764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 9765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 9766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 9767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 9884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 9885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 9886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 9887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 9888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 9889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 9890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 9891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 10000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 10001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 10002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 10003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 10004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 10005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 10006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 10007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 10117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 10118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 10119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 10120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 10121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 10122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 10123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 10124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 10241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 10242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 10243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 10244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 10245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 10246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 10247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 10248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 10360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 10361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 10362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 10363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 10364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 10365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 10366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 10367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 10477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 10480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 10483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 10601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 10602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 10603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 10604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 10605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 10606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 10607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 10608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 10722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 10723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 10724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 10725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 10726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 10727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 10728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 10729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 10839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 10840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 10841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 10842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 10843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 10844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 10845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 10846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 10961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 10962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 10963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 10964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 10965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 10966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 10967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 10968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 11081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 11082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 11083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 11084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 11085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 11086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 11087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 11088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 11198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 11199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 11200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 11201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 11202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 11203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 11204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 11205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 11322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 11323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 11324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 11325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 11326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 11327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 11328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 11329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 11442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 11443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 11444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 11445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 11446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 11447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 11448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 11449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 11559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 11560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 11561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 11562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 11563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 11564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 11565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 11566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 11677: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 11678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 11679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 11680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 11681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 11682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 11683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 11684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 11801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 11802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 11803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 11804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 11805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 11806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 11807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 11808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 11917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 11918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 11919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 11920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 11921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 11922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 11923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 11924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Rook incapacitated
- 1: Tern incapacitated
- 1: Reed killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
