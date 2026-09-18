# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/11/108/good-azure/battle-108-1789673872563962401`

## Battle summary

**Ember** · 360 s · 187 shots.

### Turning points

- 22.4s, squad 4: contact (events line 225). First recorded contact.
- 30.9s, squad 0: help call ([trace 2181](#trace-2181)). No completion observed before termination.
- 54.2s, squad 0: withdrawal ([trace 3507](#trace-3507)). 63.9s, squad 0: took cover and returned fire.
- 63.5s, squad 0: help call ([trace 4193](#trace-4193)). No completion observed before termination.
- 68.0s, squad 0: withdrawal ([trace 4468](#trace-4468)). 98.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 73.4s, squad 0: help call ([trace 4815](#trace-4815)). No completion observed before termination.
- 105.2s, squad 0: withdrawal ([trace 5930](#trace-5930)). No completion observed before termination.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 4 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 183 shots, 0/6 lost.

### Decisions and attribution

At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 27.1s, squad 0 chose took cover and returned fire ([trace 1902](#trace-1902)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
- 34.7s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 2435](#trace-2435)). Following evidence: None.

### Communication

105 matched deliveries (mean 0.31s, max 1.50s); 248 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.40s, squad 4, contact, evidence events line 225: First recorded contact; .
- 30.90s, squad 0, help call, evidence 2181: NeedSupport; No completion observed before termination.
- 54.15s, squad 0, withdrawal, evidence 3507: BreakContact: believed ratio at least two without superiority; 63.9s, squad 0: took cover and returned fire.
- 63.45s, squad 0, help call, evidence 4193: NeedSupport; No completion observed before termination.
- 68.00s, squad 0, withdrawal, evidence 4468: BreakContact: believed ratio at least two without superiority; 98.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 73.40s, squad 0, help call, evidence 4815: NeedSupport; No completion observed before termination.
- 105.15s, squad 0, withdrawal, evidence 5930: Withdraw to received rally; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.028721804661209, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200233897180495, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000076002516731, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999850983113997, 'next_transition': 431}.
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
<a id="trace-1015"></a>
<a id="trace-1036"></a>
<a id="trace-1054"></a>
<a id="trace-1072"></a>
<a id="trace-1089"></a>
<a id="trace-1119"></a>
<a id="trace-1131"></a>
<a id="trace-1209"></a>
<a id="trace-1221"></a>
<a id="trace-1354"></a>
<a id="trace-1391"></a>
<a id="trace-1408"></a>
<a id="trace-1435"></a>
<a id="trace-1462"></a>
<a id="trace-1475"></a>
<a id="trace-1555"></a>
<a id="trace-1571"></a>
<a id="trace-1589"></a>
<a id="trace-1600"></a>
<a id="trace-1622"></a>
<a id="trace-1637"></a>
<a id="trace-1754"></a>
<a id="trace-1770"></a>
<a id="trace-1863"></a>
<a id="trace-1872"></a>
<a id="trace-1884"></a>
<a id="trace-1896"></a>
<a id="trace-2024"></a>
<a id="trace-2033"></a>
<a id="trace-2055"></a>
<a id="trace-2076"></a>
<a id="trace-2169"></a>
<a id="trace-2198"></a>
<a id="trace-2357"></a>
<a id="trace-2378"></a>
<a id="trace-2425"></a>
<a id="trace-2447"></a>
<a id="trace-2519"></a>
<a id="trace-2527"></a>
<a id="trace-2538"></a>
<a id="trace-2552"></a>
<a id="trace-2663"></a>
<a id="trace-2693"></a>
<a id="trace-2707"></a>
<a id="trace-2715"></a>
<a id="trace-2729"></a>
<a id="trace-2805"></a>
<a id="trace-2820"></a>
<a id="trace-2830"></a>
<a id="trace-2874"></a>
<a id="trace-2886"></a>
<a id="trace-2898"></a>
<a id="trace-2915"></a>
<a id="trace-2986"></a>
<a id="trace-2996"></a>
<a id="trace-3010"></a>
<a id="trace-3019"></a>
<a id="trace-3030"></a>
<a id="trace-3045"></a>
<a id="trace-3059"></a>
<a id="trace-3076"></a>
<a id="trace-3084"></a>
<a id="trace-3092"></a>
<a id="trace-3408"></a>
<a id="trace-3420"></a>
<a id="trace-3435"></a>
<a id="trace-3441"></a>
<a id="trace-3463"></a>
<a id="trace-3479"></a>
<a id="trace-3489"></a>
<a id="trace-3502"></a>
<a id="trace-3810"></a>
<a id="trace-3816"></a>
<a id="trace-3892"></a>
<a id="trace-3897"></a>
<a id="trace-3918"></a>
<a id="trace-3931"></a>
<a id="trace-3943"></a>
<a id="trace-3955"></a>
<a id="trace-3971"></a>
<a id="trace-3981"></a>
<a id="trace-3988"></a>
<a id="trace-4084"></a>
<a id="trace-4133"></a>
<a id="trace-4155"></a>
<a id="trace-4174"></a>
<a id="trace-4187"></a>
<a id="trace-4204"></a>
<a id="trace-4330"></a>
<a id="trace-4442"></a>
<a id="trace-4465"></a>
<a id="trace-4648"></a>
<a id="trace-4666"></a>
<a id="trace-4676"></a>
<a id="trace-4763"></a>
<a id="trace-4775"></a>
<a id="trace-4779"></a>
<a id="trace-4792"></a>
<a id="trace-4800"></a>
<a id="trace-4814"></a>
<a id="trace-4825"></a>
<a id="trace-4839"></a>
<a id="trace-4846"></a>
<a id="trace-4921"></a>
<a id="trace-4925"></a>
<a id="trace-4940"></a>
<a id="trace-4949"></a>
<a id="trace-4962"></a>
<a id="trace-4966"></a>
<a id="trace-4981"></a>
<a id="trace-4989"></a>
<a id="trace-5001"></a>
<a id="trace-5006"></a>
<a id="trace-5146"></a>
<a id="trace-5171"></a>
<a id="trace-5181"></a>
<a id="trace-5196"></a>
<a id="trace-5213"></a>
<a id="trace-5220"></a>
<a id="trace-5233"></a>
<a id="trace-5242"></a>
<a id="trace-5318"></a>
<a id="trace-5337"></a>
<a id="trace-5352"></a>
<a id="trace-5361"></a>
<a id="trace-5383"></a>
<a id="trace-5392"></a>
<a id="trace-5404"></a>
<a id="trace-5411"></a>
<a id="trace-5499"></a>
<a id="trace-5508"></a>
<a id="trace-5532"></a>
<a id="trace-5556"></a>
<a id="trace-5566"></a>
<a id="trace-5585"></a>
<a id="trace-5595"></a>
<a id="trace-5675"></a>
<a id="trace-5680"></a>
<a id="trace-5694"></a>
<a id="trace-5703"></a>
<a id="trace-5712"></a>
<a id="trace-5717"></a>
<a id="trace-5736"></a>
<a id="trace-5744"></a>
<a id="trace-5760"></a>
<a id="trace-5835"></a>
<a id="trace-5844"></a>
<a id="trace-5855"></a>
<a id="trace-5876"></a>
<a id="trace-5890"></a>
<a id="trace-5897"></a>
<a id="trace-5908"></a>
<a id="trace-5916"></a>
<a id="trace-5998"></a>
<a id="trace-6021"></a>
<a id="trace-6032"></a>
<a id="trace-6043"></a>
<a id="trace-6057"></a>
<a id="trace-6064"></a>
<a id="trace-6079"></a>
<a id="trace-6159"></a>
<a id="trace-6169"></a>
<a id="trace-6179"></a>
<a id="trace-6187"></a>
<a id="trace-6197"></a>
<a id="trace-6211"></a>
<a id="trace-6218"></a>
<a id="trace-6230"></a>
<a id="trace-6235"></a>
<a id="trace-6305"></a>
<a id="trace-6320"></a>
<a id="trace-6338"></a>
<a id="trace-6347"></a>
<a id="trace-6356"></a>
<a id="trace-6363"></a>
<a id="trace-6374"></a>
<a id="trace-6380"></a>
<a id="trace-6453"></a>
<a id="trace-6458"></a>
<a id="trace-6481"></a>
<a id="trace-6488"></a>
<a id="trace-6496"></a>
<a id="trace-6506"></a>
<a id="trace-6518"></a>
<a id="trace-6524"></a>
<a id="trace-6598"></a>
<a id="trace-6603"></a>
<a id="trace-6614"></a>
<a id="trace-6631"></a>
<a id="trace-6636"></a>
<a id="trace-6652"></a>
<a id="trace-6661"></a>
<a id="trace-6667"></a>
<a id="trace-6741"></a>
<a id="trace-6747"></a>
<a id="trace-6756"></a>
<a id="trace-6765"></a>
<a id="trace-6777"></a>
<a id="trace-6784"></a>
<a id="trace-6795"></a>
<a id="trace-6883"></a>
<a id="trace-6898"></a>
<a id="trace-6906"></a>
<a id="trace-6917"></a>
<a id="trace-6940"></a>
<a id="trace-6953"></a>
<a id="trace-7030"></a>
<a id="trace-7043"></a>
<a id="trace-7051"></a>
<a id="trace-7060"></a>
<a id="trace-7066"></a>
<a id="trace-7082"></a>
<a id="trace-7099"></a>
<a id="trace-7171"></a>
<a id="trace-7186"></a>
<a id="trace-7198"></a>
<a id="trace-7212"></a>
<a id="trace-7235"></a>
<a id="trace-7240"></a>
<a id="trace-7312"></a>
<a id="trace-7317"></a>
<a id="trace-7329"></a>
<a id="trace-7338"></a>
<a id="trace-7348"></a>
<a id="trace-7355"></a>
<a id="trace-7375"></a>
<a id="trace-7385"></a>
<a id="trace-7390"></a>
<a id="trace-7485"></a>
<a id="trace-7491"></a>
<a id="trace-7504"></a>
<a id="trace-7521"></a>
<a id="trace-7529"></a>
<a id="trace-7600"></a>
<a id="trace-7605"></a>
<a id="trace-7616"></a>
<a id="trace-7624"></a>
<a id="trace-7634"></a>
<a id="trace-7639"></a>
<a id="trace-7651"></a>
<a id="trace-7667"></a>
<a id="trace-7676"></a>
<a id="trace-7746"></a>
<a id="trace-7753"></a>
<a id="trace-7764"></a>
<a id="trace-7772"></a>
<a id="trace-7781"></a>
<a id="trace-7798"></a>
<a id="trace-7888"></a>
<a id="trace-7894"></a>
<a id="trace-7907"></a>
<a id="trace-7924"></a>
<a id="trace-7929"></a>
<a id="trace-7940"></a>
<a id="trace-7948"></a>
<a id="trace-7958"></a>
<a id="trace-7964"></a>
<a id="trace-8036"></a>
<a id="trace-8041"></a>
<a id="trace-8052"></a>
<a id="trace-8060"></a>
<a id="trace-8076"></a>
<a id="trace-8087"></a>
<a id="trace-8094"></a>
<a id="trace-8104"></a>
<a id="trace-8111"></a>
<a id="trace-8182"></a>
<a id="trace-8187"></a>
<a id="trace-8197"></a>
<a id="trace-8204"></a>
<a id="trace-8214"></a>
<a id="trace-8231"></a>
<a id="trace-8239"></a>
<a id="trace-8249"></a>
<a id="trace-8255"></a>
<a id="trace-8333"></a>
<a id="trace-8345"></a>
<a id="trace-8352"></a>
<a id="trace-8365"></a>
<a id="trace-8375"></a>
<a id="trace-8383"></a>
<a id="trace-8392"></a>
<a id="trace-8400"></a>
<a id="trace-8476"></a>
<a id="trace-8486"></a>
<a id="trace-8494"></a>
<a id="trace-8507"></a>
<a id="trace-8515"></a>
<a id="trace-8524"></a>
<a id="trace-8539"></a>
<a id="trace-8545"></a>
<a id="trace-8628"></a>
<a id="trace-8636"></a>
<a id="trace-8648"></a>
<a id="trace-8664"></a>
<a id="trace-8686"></a>
<a id="trace-8691"></a>
<a id="trace-8766"></a>
<a id="trace-8774"></a>
<a id="trace-8782"></a>
<a id="trace-8792"></a>
<a id="trace-8797"></a>
<a id="trace-8806"></a>
<a id="trace-8814"></a>
<a id="trace-8828"></a>
<a id="trace-8907"></a>
<a id="trace-8923"></a>
<a id="trace-8943"></a>
<a id="trace-8958"></a>
<a id="trace-8971"></a>
<a id="trace-9042"></a>
<a id="trace-9048"></a>
<a id="trace-9061"></a>
<a id="trace-9070"></a>
<a id="trace-9083"></a>
<a id="trace-9091"></a>
<a id="trace-9106"></a>
<a id="trace-9119"></a>
<a id="trace-9189"></a>
<a id="trace-9194"></a>
<a id="trace-9204"></a>
<a id="trace-9221"></a>
<a id="trace-9227"></a>
<a id="trace-9238"></a>
<a id="trace-9251"></a>
<a id="trace-9263"></a>
<a id="trace-9269"></a>
<a id="trace-9339"></a>
<a id="trace-9352"></a>
<a id="trace-9372"></a>
<a id="trace-9381"></a>
<a id="trace-9390"></a>
<a id="trace-9402"></a>
<a id="trace-9408"></a>
<a id="trace-9491"></a>
<a id="trace-9501"></a>
<a id="trace-9509"></a>
<a id="trace-9518"></a>
<a id="trace-9523"></a>
<a id="trace-9533"></a>
<a id="trace-9548"></a>
<a id="trace-9622"></a>
<a id="trace-9629"></a>
<a id="trace-9647"></a>
<a id="trace-9659"></a>
<a id="trace-9665"></a>
<a id="trace-9679"></a>
<a id="trace-9687"></a>
<a id="trace-9697"></a>
<a id="trace-9702"></a>
<a id="trace-9776"></a>
<a id="trace-9805"></a>
<a id="trace-9816"></a>
<a id="trace-9928"></a>
<a id="trace-9935"></a>
<a id="trace-9944"></a>
<a id="trace-9964"></a>
<a id="trace-9974"></a>
<a id="trace-9980"></a>
<a id="trace-10051"></a>
<a id="trace-10060"></a>
<a id="trace-10072"></a>
<a id="trace-10095"></a>
<a id="trace-10105"></a>
<a id="trace-10120"></a>
<a id="trace-10200"></a>
<a id="trace-10209"></a>
<a id="trace-10218"></a>
<a id="trace-10238"></a>
<a id="trace-10254"></a>
<a id="trace-10264"></a>
<a id="trace-10272"></a>
<a id="trace-10342"></a>
<a id="trace-10348"></a>
<a id="trace-10357"></a>
<a id="trace-10364"></a>
<a id="trace-10374"></a>
<a id="trace-10380"></a>
<a id="trace-10391"></a>
<a id="trace-10411"></a>
<a id="trace-10417"></a>
<a id="trace-10488"></a>
<a id="trace-10502"></a>
<a id="trace-10521"></a>
<a id="trace-10526"></a>
<a id="trace-10535"></a>
<a id="trace-10543"></a>
<a id="trace-10553"></a>
<a id="trace-10560"></a>
<a id="trace-10632"></a>
<a id="trace-10637"></a>
<a id="trace-10647"></a>
<a id="trace-10657"></a>
<a id="trace-10666"></a>
<a id="trace-10673"></a>
<a id="trace-10682"></a>
<a id="trace-10690"></a>
<a id="trace-10702"></a>
<a id="trace-10707"></a>
<a id="trace-10779"></a>
<a id="trace-10784"></a>
<a id="trace-10794"></a>
<a id="trace-10801"></a>
<a id="trace-10818"></a>
<a id="trace-10826"></a>
<a id="trace-10837"></a>
<a id="trace-10848"></a>
<a id="trace-10853"></a>
<a id="trace-10923"></a>
<a id="trace-10929"></a>
<a id="trace-10941"></a>
<a id="trace-10958"></a>
<a id="trace-10963"></a>
<a id="trace-10973"></a>
<a id="trace-10983"></a>
<a id="trace-10992"></a>
<a id="trace-10998"></a>
<a id="trace-11084"></a>
<a id="trace-11092"></a>
<a id="trace-11102"></a>
<a id="trace-11107"></a>
<a id="trace-11119"></a>
<a id="trace-11128"></a>
<a id="trace-11215"></a>
<a id="trace-11222"></a>
<a id="trace-11231"></a>
<a id="trace-11239"></a>
<a id="trace-11255"></a>
<a id="trace-11265"></a>
<a id="trace-11273"></a>
<a id="trace-11282"></a>
<a id="trace-11287"></a>
<a id="trace-11359"></a>
<a id="trace-11376"></a>
<a id="trace-11386"></a>
<a id="trace-11400"></a>
<a id="trace-11428"></a>
<a id="trace-11433"></a>
<a id="trace-11507"></a>
<a id="trace-11517"></a>
<a id="trace-11533"></a>
<a id="trace-11543"></a>
<a id="trace-11570"></a>
<a id="trace-11576"></a>
<a id="trace-11649"></a>
<a id="trace-11655"></a>
<a id="trace-11665"></a>
<a id="trace-11672"></a>
<a id="trace-11682"></a>
<a id="trace-11688"></a>
<a id="trace-11698"></a>
<a id="trace-11706"></a>
<a id="trace-11717"></a>
<a id="trace-11722"></a>
<a id="trace-11796"></a>
<a id="trace-11803"></a>
<a id="trace-11830"></a>
<a id="trace-11835"></a>
<a id="trace-11845"></a>
<a id="trace-11853"></a>
<a id="trace-11861"></a>
<a id="trace-11937"></a>
<a id="trace-11943"></a>
<a id="trace-11961"></a>
<a id="trace-11974"></a>
<a id="trace-11980"></a>
<a id="trace-11990"></a>
<a id="trace-11997"></a>
<a id="trace-12015"></a>
<a id="trace-12084"></a>
<a id="trace-12098"></a>
<a id="trace-12105"></a>
<a id="trace-12115"></a>
<a id="trace-12135"></a>
<a id="trace-12143"></a>
<a id="trace-12154"></a>
<a id="trace-12230"></a>
<a id="trace-12261"></a>
<a id="trace-12266"></a>
<a id="trace-12277"></a>
<a id="trace-12284"></a>
<a id="trace-12301"></a>
<a id="trace-12372"></a>
<a id="trace-12377"></a>
<a id="trace-12388"></a>
<a id="trace-12405"></a>
<a id="trace-12414"></a>
<a id="trace-12425"></a>
<a id="trace-12440"></a>
<a id="trace-12446"></a>
<a id="trace-12517"></a>
<a id="trace-12523"></a>
<a id="trace-12553"></a>
<a id="trace-12564"></a>
<a id="trace-12574"></a>
<a id="trace-12589"></a>
<a id="trace-12595"></a>
<a id="trace-12665"></a>
<a id="trace-12680"></a>
<a id="trace-12686"></a>
<a id="trace-12696"></a>
<a id="trace-12711"></a>
<a id="trace-12719"></a>
<a id="trace-12729"></a>
<a id="trace-12736"></a>
<a id="trace-12812"></a>
<a id="trace-12832"></a>
<a id="trace-12842"></a>
<a id="trace-12847"></a>
<a id="trace-12857"></a>
<a id="trace-12864"></a>
<a id="trace-12957"></a>
<a id="trace-12967"></a>
<a id="trace-12974"></a>
<a id="trace-12983"></a>
<a id="trace-12990"></a>
<a id="trace-13004"></a>
<a id="trace-13012"></a>
<a id="trace-13023"></a>
<a id="trace-13029"></a>
<a id="trace-13101"></a>
<a id="trace-13108"></a>
<a id="trace-13118"></a>
<a id="trace-13125"></a>
<a id="trace-13138"></a>
<a id="trace-13147"></a>
<a id="trace-13155"></a>
<a id="trace-13166"></a>
<a id="trace-13171"></a>
<a id="trace-13254"></a>
<a id="trace-13264"></a>
<a id="trace-13271"></a>
<a id="trace-13280"></a>
<a id="trace-13302"></a>
<a id="trace-13311"></a>
<a id="trace-13316"></a>
- 5.70s–359.80s (×546), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2304604704207489, 'next_transition': 753}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5363055227573638, 'next_transition': 751}.
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
<a id="trace-1013"></a>
<a id="trace-1034"></a>
<a id="trace-1052"></a>
<a id="trace-1070"></a>
<a id="trace-1087"></a>
<a id="trace-1097"></a>
<a id="trace-1117"></a>
<a id="trace-1129"></a>
<a id="trace-1207"></a>
<a id="trace-1219"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 751): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9068300386576748, 'next_transition': 775}.
<a id="trace-1223"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1223): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1133. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7967379838644204, 'next_transition': 1352}.
<a id="trace-1224"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1224): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1133. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7967379838644204, 'next_transition': 1352}.
<a id="trace-1352"></a>
<a id="trace-1374"></a>
<a id="trace-1389"></a>
<a id="trace-1406"></a>
<a id="trace-1433"></a>
<a id="trace-1450"></a>
<a id="trace-1460"></a>
<a id="trace-1473"></a>
<a id="trace-1553"></a>
<a id="trace-1569"></a>
<a id="trace-1587"></a>
<a id="trace-1598"></a>
<a id="trace-1620"></a>
<a id="trace-1635"></a>
- 16.25s–22.75s (×14), actor 5, squad 0 (trace 1352): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1136. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3012496085646676, 'next_transition': 1374}.
<a id="trace-1644"></a>
- 23.10s–23.10s (×1), actor 0, squad 0 (trace 1644): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 20.00s, trace 1480. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1747}.
<a id="trace-1747"></a>
<a id="trace-1752"></a>
<a id="trace-1768"></a>
<a id="trace-1782"></a>
<a id="trace-1861"></a>
<a id="trace-1870"></a>
<a id="trace-1882"></a>
<a id="trace-1894"></a>
- 23.25s–26.75s (×8), actor 5, squad 0 (trace 1747): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 1483. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1752}.
<a id="trace-1902"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 1902): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12925865810807946, 'next_transition': 2022}.
<a id="trace-1903"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 1903): bounding overwatch. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12925865810807946, 'next_transition': 2022}.
<a id="trace-1904"></a>
- 27.10s–27.10s (×1), actor 0, squad 0 (trace 1904): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 1785. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12925865810807946, 'next_transition': 2022}.
<a id="trace-2022"></a>
<a id="trace-2031"></a>
<a id="trace-2053"></a>
<a id="trace-2074"></a>
<a id="trace-2079"></a>
<a id="trace-2092"></a>
<a id="trace-2167"></a>
<a id="trace-2177"></a>
- 27.25s–30.75s (×8), actor 5, squad 0 (trace 2022): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1788. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2592756455538831, 'next_transition': 2031}.
<a id="trace-2179"></a>
- 30.90s–30.90s (×1), actor 1, squad 0 (trace 2179): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20398866341049443, 'next_transition': 2191}.
<a id="trace-2181"></a>
- 30.90s–30.90s (×1), actor 1, squad 0 (trace 2181): NeedSupport. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 31.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20398866341049443, 'next_transition': 2191}.
<a id="trace-2191"></a>
<a id="trace-2196"></a>
- 31.25s–31.75s (×2), actor 5, squad 0 (trace 2191): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2097. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20400847923554538, 'next_transition': 2196}.
<a id="trace-2201"></a>
- 31.90s–31.90s (×1), actor 1, squad 0 (trace 2201): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 32, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2256}.
<a id="trace-2205"></a>
- 31.90s–31.90s (×1), actor 1, squad 0 (trace 2205): MoveTactically. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 32, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2256}.
<a id="trace-2206"></a>
- 31.90s–31.90s (×1), actor 1, squad 0 (trace 2206): traveling overwatch. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 32, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2256}.
<a id="trace-2207"></a>
- 31.90s–31.90s (×1), actor 1, squad 0 (trace 2207): Reorganise complete. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 32, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2256}.
<a id="trace-2256"></a>
- 32.15s–32.15s (×1), actor 1, squad 0 (trace 2256): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 30.00s, trace 2095. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2355}.
<a id="trace-2355"></a>
<a id="trace-2376"></a>
<a id="trace-2395"></a>
<a id="trace-2411"></a>
<a id="trace-2423"></a>
- 32.25s–34.25s (×5), actor 5, squad 0 (trace 2355): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2097. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2376}.
<a id="trace-319"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (events line 319): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2435"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2435): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2435. Next observer evidence: None.
<a id="trace-2436"></a>
- 34.65s–34.65s (×1), actor 5, squad 0 (trace 2436): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 34.65s, trace 2436. Next observer evidence: None.
<a id="trace-2445"></a>
<a id="trace-2517"></a>
<a id="trace-2525"></a>
<a id="trace-2536"></a>
<a id="trace-2550"></a>
- 34.75s–36.75s (×5), actor 5, squad 0 (trace 2445): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 34.65s, trace 2436. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6839692168770345, 'next_transition': 2517}.
<a id="trace-2553"></a>
- 37.10s–37.10s (×1), actor 1, squad 0 (trace 2553): received platoon directive. Knowledge: actor memory at 35.00s, trace 2449. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48000747545291683, 'next_transition': 2661}.
<a id="trace-2661"></a>
<a id="trace-2673"></a>
<a id="trace-2691"></a>
<a id="trace-2705"></a>
<a id="trace-2713"></a>
<a id="trace-2727"></a>
<a id="trace-2803"></a>
<a id="trace-2818"></a>
<a id="trace-2828"></a>
<a id="trace-2838"></a>
<a id="trace-2848"></a>
<a id="trace-2859"></a>
<a id="trace-2872"></a>
<a id="trace-2884"></a>
<a id="trace-2896"></a>
<a id="trace-2913"></a>
<a id="trace-2984"></a>
<a id="trace-2994"></a>
<a id="trace-3008"></a>
<a id="trace-3017"></a>
<a id="trace-3028"></a>
<a id="trace-3043"></a>
<a id="trace-3057"></a>
<a id="trace-3074"></a>
<a id="trace-3082"></a>
<a id="trace-3090"></a>
- 37.25s–49.75s (×26), actor 5, squad 0 (trace 2661): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2451. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9600102775356504, 'next_transition': 2673}.
<a id="trace-3161"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 3161): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 3094. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39385705775037894, 'next_transition': 3406}.
<a id="trace-3162"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 3162): bounding overwatch. Knowledge: actor memory at 50.00s, trace 3094. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39385705775037894, 'next_transition': 3406}.
<a id="trace-3163"></a>
- 50.15s–50.15s (×1), actor 1, squad 0 (trace 3163): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 3094. Next observer evidence: {'until': 50.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39385705775037894, 'next_transition': 3406}.
<a id="trace-3406"></a>
<a id="trace-3418"></a>
<a id="trace-3433"></a>
<a id="trace-3439"></a>
<a id="trace-3461"></a>
<a id="trace-3477"></a>
- 50.25s–52.75s (×6), actor 5, squad 0 (trace 3406): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3096. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6839891910169037, 'next_transition': 3418}.
<a id="trace-3482"></a>
- 53.05s–53.05s (×1), actor 5, squad 0 (trace 3482): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 53.05s, trace 3482. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07292688393178462, 'next_transition': 3487}.
<a id="trace-3487"></a>
- 53.25s–53.25s (×1), actor 5, squad 0 (trace 3487): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.05s, trace 3482. Next observer evidence: None.
<a id="trace-454"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (events line 454): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3496"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (trace 3496): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359105 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 3496. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1491147383728383, 'next_transition': 3500}.
<a id="trace-3497"></a>
- 53.35s–53.35s (×1), actor 5, squad 0 (trace 3497): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.359105 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 53.35s, trace 3497. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1491147383728383, 'next_transition': 3500}.
<a id="trace-3500"></a>
- 53.75s–53.75s (×1), actor 5, squad 0 (trace 3500): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.35s, trace 3497. Next observer evidence: {'until': 54, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14327309028564977, 'next_transition': 3507}.
<a id="trace-3507"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 3507): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 3094. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07420695654721343, 'next_transition': 3808}.
<a id="trace-3508"></a>
- 54.15s–54.15s (×1), actor 1, squad 0 (trace 3508): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 3094. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07420695654721343, 'next_transition': 3808}.
<a id="trace-3808"></a>
<a id="trace-3814"></a>
<a id="trace-3890"></a>
<a id="trace-3895"></a>
<a id="trace-3916"></a>
<a id="trace-3929"></a>
<a id="trace-3941"></a>
<a id="trace-3953"></a>
<a id="trace-3965"></a>
<a id="trace-3969"></a>
<a id="trace-3979"></a>
<a id="trace-3986"></a>
<a id="trace-4062"></a>
<a id="trace-4082"></a>
<a id="trace-4111"></a>
<a id="trace-4131"></a>
<a id="trace-4153"></a>
<a id="trace-4172"></a>
<a id="trace-4185"></a>
- 54.25s–63.25s (×19), actor 5, squad 0 (trace 3808): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 53.35s, trace 3497. Next observer evidence: {'until': 54.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.15347693246869368, 'next_transition': 3814}.
<a id="trace-4192"></a>
- 63.45s–63.45s (×1), actor 1, squad 0 (trace 4192): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 60.00s, trace 3991. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27202050766141567, 'next_transition': 4202}.
<a id="trace-4193"></a>
- 63.45s–63.45s (×1), actor 1, squad 0 (trace 4193): NeedSupport. Knowledge: actor memory at 60.00s, trace 3991. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.27202050766141567, 'next_transition': 4202}.
<a id="trace-4202"></a>
- 63.75s–63.75s (×1), actor 5, squad 0 (trace 4202): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3993. Next observer evidence: {'until': 63.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2741477071801598, 'next_transition': 4207}.
<a id="trace-4207"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 4207): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 3991. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46381230747725677, 'next_transition': 4328}.
<a id="trace-4210"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 4210): ReactToContact: cover and return fire. Knowledge: actor memory at 60.00s, trace 3991. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46381230747725677, 'next_transition': 4328}.
<a id="trace-4211"></a>
- 63.85s–63.85s (×1), actor 1, squad 0 (trace 4211): Reorganise complete: known contact. Knowledge: actor memory at 60.00s, trace 3991. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46381230747725677, 'next_transition': 4328}.
<a id="trace-4328"></a>
<a id="trace-4342"></a>
<a id="trace-4416"></a>
<a id="trace-4427"></a>
<a id="trace-4440"></a>
<a id="trace-4448"></a>
<a id="trace-4457"></a>
<a id="trace-4463"></a>
- 64.25s–67.75s (×8), actor 5, squad 0 (trace 4328): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 3993. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09754509854421027, 'next_transition': 4342}.
<a id="trace-4468"></a>
- 68.00s–68.00s (×1), actor 1, squad 0 (trace 4468): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 65.00s, trace 4349. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3634595151010919, 'next_transition': 4632}.
<a id="trace-4469"></a>
- 68.00s–68.00s (×1), actor 1, squad 0 (trace 4469): rearward bound: one stationary suppressing element. Knowledge: actor memory at 65.00s, trace 4349. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3634595151010919, 'next_transition': 4632}.
<a id="trace-4632"></a>
<a id="trace-4646"></a>
<a id="trace-4664"></a>
<a id="trace-4674"></a>
<a id="trace-4755"></a>
<a id="trace-4761"></a>
<a id="trace-4773"></a>
<a id="trace-4777"></a>
<a id="trace-4790"></a>
<a id="trace-4798"></a>
<a id="trace-4812"></a>
- 68.25s–73.25s (×11), actor 5, squad 0 (trace 4632): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 4351. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299770729955171, 'next_transition': 4646}.
<a id="trace-4815"></a>
- 73.40s–73.40s (×1), actor 1, squad 0 (trace 4815): NeedSupport. Knowledge: actor memory at 70.00s, trace 4678. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5035575356379765, 'next_transition': 4823}.
<a id="trace-4823"></a>
<a id="trace-4837"></a>
<a id="trace-4844"></a>
<a id="trace-4919"></a>
<a id="trace-4923"></a>
<a id="trace-4938"></a>
<a id="trace-4947"></a>
<a id="trace-4960"></a>
<a id="trace-4964"></a>
<a id="trace-4979"></a>
<a id="trace-4987"></a>
<a id="trace-5004"></a>
- 73.75s–79.75s (×12), actor 5, squad 0 (trace 4823): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4680. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4175173033275499, 'next_transition': 4837}.
<a id="trace-5021"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 5021): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 5007. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14571764136936177, 'next_transition': 5137}.
<a id="trace-5022"></a>
- 80.05s–80.05s (×1), actor 1, squad 0 (trace 5022): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 5007. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14571764136936177, 'next_transition': 5137}.
<a id="trace-5137"></a>
<a id="trace-5144"></a>
<a id="trace-5169"></a>
<a id="trace-5179"></a>
<a id="trace-5194"></a>
<a id="trace-5205"></a>
<a id="trace-5211"></a>
<a id="trace-5218"></a>
<a id="trace-5231"></a>
<a id="trace-5240"></a>
<a id="trace-5316"></a>
<a id="trace-5335"></a>
<a id="trace-5350"></a>
<a id="trace-5359"></a>
<a id="trace-5367"></a>
<a id="trace-5381"></a>
<a id="trace-5390"></a>
<a id="trace-5402"></a>
<a id="trace-5409"></a>
<a id="trace-5486"></a>
<a id="trace-5497"></a>
<a id="trace-5506"></a>
<a id="trace-5516"></a>
<a id="trace-5530"></a>
<a id="trace-5542"></a>
<a id="trace-5554"></a>
<a id="trace-5564"></a>
- 80.25s–93.75s (×27), actor 5, squad 0 (trace 5137): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5009. Next observer evidence: {'until': 80.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.29781478137636175, 'next_transition': 5144}.
<a id="trace-5569"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 5569): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5413. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300013492049021, 'next_transition': 5583}.
<a id="trace-5570"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 5570): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5413. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300013492049021, 'next_transition': 5583}.
<a id="trace-5583"></a>
<a id="trace-5593"></a>
<a id="trace-5673"></a>
<a id="trace-5678"></a>
<a id="trace-5692"></a>
<a id="trace-5701"></a>
<a id="trace-5710"></a>
<a id="trace-5715"></a>
<a id="trace-5724"></a>
- 94.25s–98.25s (×9), actor 5, squad 0 (trace 5583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5415. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300214063823563, 'next_transition': 5593}.
<a id="trace-5727"></a>
- 98.55s–98.55s (×1), actor 1, squad 0 (trace 5727): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 5601. Next observer evidence: {'until': 98.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5734}.
<a id="trace-5734"></a>
<a id="trace-5742"></a>
<a id="trace-5758"></a>
<a id="trace-5833"></a>
<a id="trace-5842"></a>
<a id="trace-5853"></a>
<a id="trace-5859"></a>
<a id="trace-5868"></a>
<a id="trace-5874"></a>
- 98.75s–102.75s (×9), actor 5, squad 0 (trace 5734): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 5603. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5742}.
<a id="trace-733"></a>
- 102.85s–102.85s (×1), actor 5, squad 0 (events line 733): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}.
<a id="trace-5877"></a>
- 102.85s–102.85s (×1), actor 5, squad 0 (trace 5877): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.85s, trace 5877. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}.
<a id="trace-5878"></a>
- 102.85s–102.85s (×1), actor 5, squad 0 (trace 5878): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243155 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 102.85s, trace 5878. Next observer evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}.
<a id="trace-5888"></a>
<a id="trace-5895"></a>
<a id="trace-5906"></a>
<a id="trace-5914"></a>
- 103.25s–104.75s (×4), actor 5, squad 0 (trace 5888): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 102.85s, trace 5878. Next observer evidence: {'until': 103.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5895}.
<a id="trace-5930"></a>
- 105.15s–105.15s (×1), actor 1, squad 0 (trace 5930): Withdraw to received rally. Knowledge: actor memory at 105.00s, trace 5919. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5990}.
<a id="trace-5931"></a>
- 105.15s–105.15s (×1), actor 1, squad 0 (trace 5931): rearward bound: one stationary suppressing element. Knowledge: actor memory at 105.00s, trace 5919. Next observer evidence: {'until': 105.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5990}.
<a id="trace-5990"></a>
<a id="trace-5996"></a>
<a id="trace-6010"></a>
<a id="trace-6019"></a>
<a id="trace-6030"></a>
<a id="trace-6041"></a>
<a id="trace-6055"></a>
<a id="trace-6062"></a>
<a id="trace-6077"></a>
<a id="trace-6082"></a>
<a id="trace-6157"></a>
<a id="trace-6167"></a>
<a id="trace-6177"></a>
<a id="trace-6185"></a>
<a id="trace-6195"></a>
<a id="trace-6200"></a>
<a id="trace-6209"></a>
<a id="trace-6216"></a>
<a id="trace-6228"></a>
<a id="trace-6233"></a>
<a id="trace-6303"></a>
<a id="trace-6308"></a>
<a id="trace-6318"></a>
<a id="trace-6336"></a>
<a id="trace-6345"></a>
<a id="trace-6354"></a>
<a id="trace-6361"></a>
<a id="trace-6372"></a>
<a id="trace-6378"></a>
<a id="trace-6451"></a>
<a id="trace-6456"></a>
<a id="trace-6465"></a>
<a id="trace-6471"></a>
<a id="trace-6479"></a>
<a id="trace-6486"></a>
<a id="trace-6494"></a>
<a id="trace-6504"></a>
<a id="trace-6516"></a>
<a id="trace-6522"></a>
<a id="trace-6596"></a>
<a id="trace-6601"></a>
<a id="trace-6612"></a>
<a id="trace-6621"></a>
<a id="trace-6629"></a>
<a id="trace-6634"></a>
<a id="trace-6643"></a>
<a id="trace-6650"></a>
<a id="trace-6659"></a>
<a id="trace-6665"></a>
<a id="trace-6739"></a>
<a id="trace-6745"></a>
<a id="trace-6754"></a>
<a id="trace-6763"></a>
<a id="trace-6775"></a>
<a id="trace-6782"></a>
<a id="trace-6793"></a>
<a id="trace-6800"></a>
<a id="trace-6808"></a>
<a id="trace-6813"></a>
<a id="trace-6881"></a>
<a id="trace-6888"></a>
<a id="trace-6896"></a>
<a id="trace-6904"></a>
<a id="trace-6915"></a>
<a id="trace-6922"></a>
<a id="trace-6932"></a>
<a id="trace-6938"></a>
<a id="trace-6951"></a>
<a id="trace-6957"></a>
<a id="trace-7028"></a>
<a id="trace-7034"></a>
<a id="trace-7041"></a>
<a id="trace-7049"></a>
<a id="trace-7058"></a>
<a id="trace-7064"></a>
<a id="trace-7073"></a>
<a id="trace-7080"></a>
<a id="trace-7092"></a>
<a id="trace-7097"></a>
<a id="trace-7169"></a>
<a id="trace-7174"></a>
<a id="trace-7184"></a>
<a id="trace-7196"></a>
<a id="trace-7205"></a>
<a id="trace-7210"></a>
<a id="trace-7219"></a>
<a id="trace-7225"></a>
<a id="trace-7233"></a>
<a id="trace-7238"></a>
<a id="trace-7310"></a>
<a id="trace-7315"></a>
<a id="trace-7327"></a>
<a id="trace-7336"></a>
<a id="trace-7346"></a>
<a id="trace-7353"></a>
<a id="trace-7363"></a>
<a id="trace-7373"></a>
<a id="trace-7383"></a>
<a id="trace-7388"></a>
<a id="trace-7458"></a>
<a id="trace-7461"></a>
<a id="trace-7469"></a>
<a id="trace-7475"></a>
<a id="trace-7483"></a>
<a id="trace-7489"></a>
<a id="trace-7502"></a>
<a id="trace-7510"></a>
<a id="trace-7519"></a>
<a id="trace-7527"></a>
<a id="trace-7598"></a>
<a id="trace-7603"></a>
<a id="trace-7614"></a>
<a id="trace-7622"></a>
<a id="trace-7632"></a>
<a id="trace-7637"></a>
- 105.25s–162.80s (×115), actor 5, squad 0 (trace 5990): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 5921. Next observer evidence: {'until': 105.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5996}.
<a id="trace-1024"></a>
- 162.85s–162.85s (×1), actor 5, squad 0 (events line 1024): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7640"></a>
- 162.85s–162.85s (×1), actor 5, squad 0 (trace 7640): renew committed intent (75 s lifetime). Knowledge: actor memory at 162.85s, trace 7640. Next observer evidence: {'until': 163.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7649}.
<a id="trace-7649"></a>
<a id="trace-7656"></a>
<a id="trace-7665"></a>
<a id="trace-7674"></a>
<a id="trace-7744"></a>
<a id="trace-7751"></a>
<a id="trace-7762"></a>
<a id="trace-7770"></a>
<a id="trace-7779"></a>
<a id="trace-7785"></a>
<a id="trace-7796"></a>
<a id="trace-7804"></a>
<a id="trace-7812"></a>
<a id="trace-7816"></a>
<a id="trace-7886"></a>
<a id="trace-7892"></a>
<a id="trace-7905"></a>
<a id="trace-7913"></a>
<a id="trace-7922"></a>
<a id="trace-7927"></a>
<a id="trace-7938"></a>
<a id="trace-7946"></a>
<a id="trace-7956"></a>
<a id="trace-7962"></a>
<a id="trace-8034"></a>
<a id="trace-8039"></a>
<a id="trace-8050"></a>
<a id="trace-8058"></a>
<a id="trace-8067"></a>
<a id="trace-8074"></a>
<a id="trace-8085"></a>
<a id="trace-8092"></a>
<a id="trace-8102"></a>
<a id="trace-8109"></a>
<a id="trace-8180"></a>
<a id="trace-8185"></a>
<a id="trace-8195"></a>
<a id="trace-8202"></a>
<a id="trace-8212"></a>
<a id="trace-8220"></a>
<a id="trace-8229"></a>
<a id="trace-8237"></a>
<a id="trace-8247"></a>
<a id="trace-8253"></a>
<a id="trace-8325"></a>
<a id="trace-8331"></a>
<a id="trace-8343"></a>
<a id="trace-8350"></a>
<a id="trace-8359"></a>
<a id="trace-8363"></a>
<a id="trace-8373"></a>
<a id="trace-8381"></a>
<a id="trace-8390"></a>
<a id="trace-8398"></a>
<a id="trace-8469"></a>
<a id="trace-8474"></a>
<a id="trace-8484"></a>
<a id="trace-8492"></a>
<a id="trace-8505"></a>
<a id="trace-8513"></a>
<a id="trace-8522"></a>
<a id="trace-8529"></a>
<a id="trace-8537"></a>
<a id="trace-8543"></a>
<a id="trace-8613"></a>
<a id="trace-8618"></a>
<a id="trace-8626"></a>
<a id="trace-8634"></a>
<a id="trace-8646"></a>
<a id="trace-8653"></a>
<a id="trace-8662"></a>
<a id="trace-8673"></a>
<a id="trace-8684"></a>
<a id="trace-8689"></a>
<a id="trace-8759"></a>
<a id="trace-8764"></a>
<a id="trace-8772"></a>
<a id="trace-8780"></a>
<a id="trace-8790"></a>
<a id="trace-8795"></a>
<a id="trace-8804"></a>
<a id="trace-8812"></a>
<a id="trace-8826"></a>
<a id="trace-8832"></a>
<a id="trace-8905"></a>
<a id="trace-8911"></a>
<a id="trace-8921"></a>
<a id="trace-8929"></a>
<a id="trace-8936"></a>
<a id="trace-8941"></a>
<a id="trace-8950"></a>
<a id="trace-8956"></a>
<a id="trace-8965"></a>
<a id="trace-9040"></a>
<a id="trace-9046"></a>
<a id="trace-9059"></a>
<a id="trace-9068"></a>
<a id="trace-9081"></a>
<a id="trace-9089"></a>
<a id="trace-9097"></a>
<a id="trace-9104"></a>
<a id="trace-9113"></a>
<a id="trace-9117"></a>
<a id="trace-9187"></a>
<a id="trace-9192"></a>
<a id="trace-9202"></a>
<a id="trace-9210"></a>
<a id="trace-9219"></a>
<a id="trace-9225"></a>
<a id="trace-9236"></a>
<a id="trace-9249"></a>
<a id="trace-9261"></a>
<a id="trace-9267"></a>
<a id="trace-9337"></a>
<a id="trace-9342"></a>
<a id="trace-9350"></a>
<a id="trace-9357"></a>
<a id="trace-9366"></a>
<a id="trace-9370"></a>
<a id="trace-9379"></a>
- 163.30s–223.30s (×120), actor 5, squad 0 (trace 7649): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 162.85s, trace 7640. Next observer evidence: {'until': 163.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7656}.
<a id="trace-1308"></a>
- 223.65s–223.65s (×1), actor 5, squad 0 (events line 1308): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9383"></a>
- 223.65s–223.65s (×1), actor 5, squad 0 (trace 9383): renew committed intent (75 s lifetime). Knowledge: actor memory at 223.65s, trace 9383. Next observer evidence: {'until': 223.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9388}.
<a id="trace-9388"></a>
<a id="trace-9400"></a>
<a id="trace-9406"></a>
<a id="trace-9477"></a>
<a id="trace-9489"></a>
<a id="trace-9499"></a>
<a id="trace-9507"></a>
<a id="trace-9516"></a>
<a id="trace-9521"></a>
<a id="trace-9531"></a>
<a id="trace-9538"></a>
<a id="trace-9546"></a>
<a id="trace-9551"></a>
<a id="trace-9620"></a>
<a id="trace-9627"></a>
<a id="trace-9636"></a>
<a id="trace-9645"></a>
<a id="trace-9657"></a>
<a id="trace-9663"></a>
<a id="trace-9677"></a>
<a id="trace-9685"></a>
<a id="trace-9695"></a>
<a id="trace-9700"></a>
<a id="trace-9770"></a>
<a id="trace-9774"></a>
<a id="trace-9783"></a>
<a id="trace-9790"></a>
<a id="trace-9798"></a>
<a id="trace-9803"></a>
<a id="trace-9814"></a>
<a id="trace-9822"></a>
<a id="trace-9833"></a>
<a id="trace-9841"></a>
<a id="trace-9913"></a>
<a id="trace-9918"></a>
<a id="trace-9926"></a>
<a id="trace-9933"></a>
<a id="trace-9942"></a>
<a id="trace-9948"></a>
<a id="trace-9955"></a>
<a id="trace-9962"></a>
<a id="trace-9972"></a>
<a id="trace-9978"></a>
<a id="trace-10049"></a>
<a id="trace-10058"></a>
<a id="trace-10070"></a>
<a id="trace-10079"></a>
<a id="trace-10089"></a>
<a id="trace-10093"></a>
<a id="trace-10103"></a>
<a id="trace-10111"></a>
<a id="trace-10118"></a>
<a id="trace-10124"></a>
<a id="trace-10193"></a>
<a id="trace-10198"></a>
<a id="trace-10207"></a>
<a id="trace-10216"></a>
<a id="trace-10228"></a>
<a id="trace-10236"></a>
<a id="trace-10246"></a>
<a id="trace-10252"></a>
<a id="trace-10262"></a>
<a id="trace-10270"></a>
<a id="trace-10340"></a>
<a id="trace-10346"></a>
<a id="trace-10355"></a>
<a id="trace-10362"></a>
<a id="trace-10372"></a>
<a id="trace-10378"></a>
<a id="trace-10389"></a>
<a id="trace-10398"></a>
<a id="trace-10409"></a>
<a id="trace-10415"></a>
<a id="trace-10486"></a>
<a id="trace-10492"></a>
<a id="trace-10500"></a>
<a id="trace-10510"></a>
<a id="trace-10519"></a>
<a id="trace-10524"></a>
<a id="trace-10533"></a>
<a id="trace-10541"></a>
<a id="trace-10551"></a>
<a id="trace-10558"></a>
<a id="trace-10630"></a>
<a id="trace-10635"></a>
<a id="trace-10645"></a>
<a id="trace-10655"></a>
<a id="trace-10664"></a>
<a id="trace-10671"></a>
<a id="trace-10680"></a>
<a id="trace-10688"></a>
<a id="trace-10700"></a>
<a id="trace-10705"></a>
<a id="trace-10777"></a>
<a id="trace-10782"></a>
<a id="trace-10792"></a>
<a id="trace-10799"></a>
<a id="trace-10810"></a>
<a id="trace-10816"></a>
<a id="trace-10824"></a>
<a id="trace-10835"></a>
<a id="trace-10846"></a>
<a id="trace-10851"></a>
<a id="trace-10921"></a>
<a id="trace-10927"></a>
<a id="trace-10939"></a>
<a id="trace-10947"></a>
<a id="trace-10956"></a>
<a id="trace-10961"></a>
<a id="trace-10971"></a>
<a id="trace-10981"></a>
<a id="trace-10990"></a>
<a id="trace-10996"></a>
<a id="trace-11069"></a>
<a id="trace-11074"></a>
<a id="trace-11082"></a>
<a id="trace-11090"></a>
<a id="trace-11100"></a>
<a id="trace-11105"></a>
<a id="trace-11117"></a>
<a id="trace-11126"></a>
<a id="trace-11135"></a>
- 223.80s–284.30s (×122), actor 5, squad 0 (trace 9388): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 223.65s, trace 9383. Next observer evidence: {'until': 224.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9400}.
<a id="trace-1597"></a>
- 284.80s–284.80s (×1), actor 5, squad 0 (events line 1597): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11141"></a>
- 284.80s–284.80s (×1), actor 5, squad 0 (trace 11141): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 11002. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11213}.
<a id="trace-11143"></a>
- 284.80s–284.80s (×1), actor 5, squad 0 (trace 11143): renew committed intent (75 s lifetime). Knowledge: actor memory at 284.80s, trace 11143. Next observer evidence: {'until': 285.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11213}.
<a id="trace-11213"></a>
<a id="trace-11220"></a>
<a id="trace-11229"></a>
<a id="trace-11237"></a>
<a id="trace-11249"></a>
<a id="trace-11253"></a>
<a id="trace-11263"></a>
<a id="trace-11271"></a>
<a id="trace-11280"></a>
<a id="trace-11285"></a>
<a id="trace-11357"></a>
<a id="trace-11365"></a>
<a id="trace-11374"></a>
<a id="trace-11384"></a>
<a id="trace-11394"></a>
<a id="trace-11398"></a>
<a id="trace-11407"></a>
<a id="trace-11417"></a>
<a id="trace-11426"></a>
<a id="trace-11431"></a>
<a id="trace-11501"></a>
<a id="trace-11505"></a>
<a id="trace-11515"></a>
<a id="trace-11524"></a>
<a id="trace-11531"></a>
<a id="trace-11541"></a>
<a id="trace-11553"></a>
<a id="trace-11560"></a>
<a id="trace-11568"></a>
<a id="trace-11574"></a>
<a id="trace-11647"></a>
<a id="trace-11653"></a>
<a id="trace-11663"></a>
<a id="trace-11670"></a>
<a id="trace-11680"></a>
<a id="trace-11686"></a>
<a id="trace-11696"></a>
<a id="trace-11704"></a>
<a id="trace-11715"></a>
<a id="trace-11720"></a>
<a id="trace-11794"></a>
<a id="trace-11801"></a>
<a id="trace-11811"></a>
<a id="trace-11817"></a>
<a id="trace-11828"></a>
<a id="trace-11833"></a>
<a id="trace-11843"></a>
<a id="trace-11851"></a>
<a id="trace-11859"></a>
<a id="trace-11865"></a>
<a id="trace-11935"></a>
<a id="trace-11941"></a>
<a id="trace-11951"></a>
<a id="trace-11959"></a>
<a id="trace-11972"></a>
<a id="trace-11978"></a>
<a id="trace-11988"></a>
<a id="trace-11995"></a>
<a id="trace-12005"></a>
<a id="trace-12013"></a>
<a id="trace-12082"></a>
<a id="trace-12088"></a>
<a id="trace-12096"></a>
<a id="trace-12103"></a>
<a id="trace-12113"></a>
<a id="trace-12120"></a>
<a id="trace-12133"></a>
<a id="trace-12141"></a>
<a id="trace-12152"></a>
<a id="trace-12158"></a>
<a id="trace-12228"></a>
<a id="trace-12234"></a>
<a id="trace-12245"></a>
<a id="trace-12251"></a>
<a id="trace-12259"></a>
<a id="trace-12264"></a>
<a id="trace-12275"></a>
<a id="trace-12282"></a>
<a id="trace-12293"></a>
<a id="trace-12299"></a>
<a id="trace-12370"></a>
<a id="trace-12375"></a>
<a id="trace-12386"></a>
<a id="trace-12395"></a>
<a id="trace-12403"></a>
<a id="trace-12412"></a>
<a id="trace-12423"></a>
<a id="trace-12430"></a>
<a id="trace-12438"></a>
<a id="trace-12444"></a>
<a id="trace-12515"></a>
<a id="trace-12521"></a>
<a id="trace-12532"></a>
<a id="trace-12537"></a>
<a id="trace-12546"></a>
<a id="trace-12551"></a>
<a id="trace-12562"></a>
<a id="trace-12572"></a>
<a id="trace-12587"></a>
<a id="trace-12593"></a>
<a id="trace-12663"></a>
<a id="trace-12668"></a>
<a id="trace-12678"></a>
<a id="trace-12684"></a>
<a id="trace-12694"></a>
<a id="trace-12699"></a>
<a id="trace-12709"></a>
<a id="trace-12717"></a>
<a id="trace-12727"></a>
<a id="trace-12734"></a>
<a id="trace-12804"></a>
<a id="trace-12810"></a>
<a id="trace-12824"></a>
<a id="trace-12830"></a>
<a id="trace-12840"></a>
<a id="trace-12845"></a>
<a id="trace-12855"></a>
<a id="trace-12862"></a>
<a id="trace-12873"></a>
- 285.30s–344.30s (×119), actor 5, squad 0 (trace 11213): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 285.00s, trace 11147. Next observer evidence: {'until': 285.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11220}.
<a id="trace-1887"></a>
- 344.80s–344.80s (×1), actor 5, squad 0 (events line 1887): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12880"></a>
- 344.80s–344.80s (×1), actor 5, squad 0 (trace 12880): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 340.00s, trace 12740. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12950}.
<a id="trace-12882"></a>
- 344.80s–344.80s (×1), actor 5, squad 0 (trace 12882): renew committed intent (75 s lifetime). Knowledge: actor memory at 344.80s, trace 12882. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12950}.
<a id="trace-12950"></a>
<a id="trace-12955"></a>
<a id="trace-12965"></a>
<a id="trace-12972"></a>
<a id="trace-12981"></a>
<a id="trace-12988"></a>
<a id="trace-13002"></a>
<a id="trace-13010"></a>
<a id="trace-13021"></a>
<a id="trace-13027"></a>
<a id="trace-13099"></a>
<a id="trace-13106"></a>
<a id="trace-13116"></a>
<a id="trace-13123"></a>
<a id="trace-13132"></a>
<a id="trace-13136"></a>
<a id="trace-13145"></a>
<a id="trace-13153"></a>
<a id="trace-13164"></a>
<a id="trace-13169"></a>
<a id="trace-13246"></a>
<a id="trace-13252"></a>
<a id="trace-13262"></a>
<a id="trace-13269"></a>
<a id="trace-13278"></a>
<a id="trace-13286"></a>
<a id="trace-13294"></a>
<a id="trace-13300"></a>
<a id="trace-13309"></a>
<a id="trace-13314"></a>
- 345.30s–359.80s (×30), actor 5, squad 0 (trace 12950): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 12886. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12955}.

## Net delivery

105 matched order/radio deliveries; 248 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.310s; maximum 1.500s. Message-level evidence is in the companion JSON.

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
- 20.00s leader 0, trace 1480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1792: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1793: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1794: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1795: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1796: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2095: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2098: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2100: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2101: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2102: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2103: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2104: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2105: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 34.65s leader 5, trace 2436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2454: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2455: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2456: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2457: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2458: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2459: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 2732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2737: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2738: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2739: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2740: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2741: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2742: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 2917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 2918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 2919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 2920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 2921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 2922: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 2923: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 2924: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 2925: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 2926: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 2927: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3094: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3095: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3097: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3098: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3099: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3100: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3101: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3102: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3103: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3104: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.05s leader 5, trace 3482: estimate 6.86; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 3496: estimate 6.85; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 53.35s leader 5, trace 3497: estimate 6.85; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3823: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3824: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3825: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3826: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3827: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3828: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3829: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3830: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3831: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3832: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3833: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 3991: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3992: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3993: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3994: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3995: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3996: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3997: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3998: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3999: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4000: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4001: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4349: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4350: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4351: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4352: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4353: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4354: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4355: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4356: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4357: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4358: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4678: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4679: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4680: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4681: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4682: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4683: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4684: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4685: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4686: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4687: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4850: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4851: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4852: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4853: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4854: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4855: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4856: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4857: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4858: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4859: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 5007: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5008: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5009: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5010: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5011: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5012: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 5013: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5014: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5015: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5016: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5247: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5248: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5249: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5250: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5251: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5252: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5253: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5254: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5255: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5256: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5413: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5414: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5415: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5416: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5417: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5418: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5419: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5420: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5421: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5422: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5601: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5602: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5603: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5604: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5605: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5606: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5607: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5608: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5609: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5610: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5764: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5765: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5766: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5767: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5768: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5769: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5770: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5771: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5772: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5773: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.85s leader 5, trace 5877: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 102.85s leader 5, trace 5878: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5919: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5920: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5921: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5922: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5923: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5924: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5925: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5926: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5927: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5928: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6085: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6086: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6087: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6088: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6089: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6090: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6091: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6092: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6093: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6094: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6236: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6237: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6238: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6239: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6240: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6241: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6242: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6243: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6244: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6245: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6382: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6383: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6384: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6385: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6386: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6387: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6388: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6389: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6390: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6391: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6528: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6529: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6530: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6531: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6532: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6533: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6534: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6535: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6536: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6537: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6669: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6670: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6671: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6672: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6673: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6674: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6675: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6677: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6678: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6815: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6816: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6817: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6818: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6819: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6820: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6821: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6823: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6824: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 6962: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 6963: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6964: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6965: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6966: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6967: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 6968: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6970: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6971: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7102: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7103: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7104: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7105: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7106: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7107: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7108: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7110: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7111: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7243: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7244: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7245: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7246: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7247: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7248: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7249: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7251: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7252: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7392: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 7393: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7394: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7395: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7396: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7397: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7398: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7400: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7401: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7531: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7532: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7533: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7534: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7535: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7536: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7537: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7539: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7540: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 162.85s leader 5, trace 7640: estimate 5.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 7678: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7679: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7680: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7681: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7682: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7683: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7684: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7686: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7687: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 7820: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 7821: estimate 5.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7822: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 7823: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7824: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7825: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 7826: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7828: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7829: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 7965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 7966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 7968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7969: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7970: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 7971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7973: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7974: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 8114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8117: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8118: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8121: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8122: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
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
- 190.00s leader 32, trace 8406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 8546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 8547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 8548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 8549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 8550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 8551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 8552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 8553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 8554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 8555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 8693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 8694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 8695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 8696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 8697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 8698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 8699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 8700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 8701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 8702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 8835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 8836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 8837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 8838: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 8839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 8840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 8841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 8842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 8843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 8844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 8973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 8974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 8975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 8976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 8977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 8978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 8979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 8980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 8981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 8982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 9121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 9122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 9123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 9124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 9125: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 9126: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 9127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 9128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 9129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 9130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 9271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 9272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 9273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 9274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 9275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 9276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 9277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 9278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 9279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 9280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 223.65s leader 5, trace 9383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 9409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 9410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 9411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 9412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 9413: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 9414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 9415: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 9416: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 9417: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 9418: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 9554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 9555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 9556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 9557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 9558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 9559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 9560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 9561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 9562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 9563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 9703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 9704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 9705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 9706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 9707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 9708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 9709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 9710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 9711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 9712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 9844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 9845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 9846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 9847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 9848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 9849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 9850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 9851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 9852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 9853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 9983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 9984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 9985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 9986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 9987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 9988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 9989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 9990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 9991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 9992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 10127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 10128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 10129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 10130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 10131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 10132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 10133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 10134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 10135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 10136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 10274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 10275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 10276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 10277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 10278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 10279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 10280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 10281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 10282: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 10283: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 10420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 10421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 10422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 10423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 10424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 10425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 10426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 10427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 10428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 10429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 10561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 10562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 10563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 10564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 10565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 10566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 10567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 10568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 10569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 10570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 10709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 10710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 10711: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 10712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 10713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 10714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 10715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 10716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 10717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 10718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 10855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 10856: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 10857: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 10858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 10859: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 10860: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 10861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 10862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 10863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 10864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 11000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 11001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 11002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 11003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 11004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 11005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 11006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 11007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 11008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 11009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 284.80s leader 5, trace 11143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 11145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 11146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 11147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 11148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 11149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 11150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 11151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 11152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 11153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 11154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 11290: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 11291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 11292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 11293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 11294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 11295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 11296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 11297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 11298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 11299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 11434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 11435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 11436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 11437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 11438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 11439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 11440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 11441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 11442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 11443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 11578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 11579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 11580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 11581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 11582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 11583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 11584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 11585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 11586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 11587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 11728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 11729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 11730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 11731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 11732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 11733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 11734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 11735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 11736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 11737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 11869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 11870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 11871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 11872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 11873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 11874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 11875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 11876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 11877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 11878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 12016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 12017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 12018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 12019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 12020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 12021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 12022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 12023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 12024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 12025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 12162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 12163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 12164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 12165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 12166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 12167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 12168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 12169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 12170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 12171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 12303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 12304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 12305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 12306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 12307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 12308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 12309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 12310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 12311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 12312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 12448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 12449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 12450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 12451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 12452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 12453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 12454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 12455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 12456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 12457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 12597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 12598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 12599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 12600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 12601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 12602: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 12603: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 12604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 12605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 12606: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 12738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 12739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 12740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 12741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 12742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 12743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 12744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 12745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 12746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 12747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 344.80s leader 5, trace 12882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 12884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 12885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 12886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 12887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 12888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 12889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 12890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 12891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 12892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 12893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 13031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 13032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 13033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 13034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 13035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 13036: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 13037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 13038: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 13039: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 13040: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 13174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 13175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 13176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 13177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 13178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 13179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 13180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 13181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 13182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 13183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 13318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 13319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 13320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 13321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 13322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 13323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 13324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 13325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 13326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 13327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Reed incapacitated

## Outcome attribution

- 102.85s, evidence 733: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 102.85s, evidence 5877: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243155 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 102.85s, evidence 5878: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.243155 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 103.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5888}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 162.85s, evidence 1024: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 223.65s, evidence 1308: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 284.80s, evidence 1597: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 344.80s, evidence 1887: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
