# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/20/108/good-ember/battle-108-1789674104602549570`

## Battle summary

**Ember** · 360 s · 254 shots.

### Turning points

- 16.7s, squad 1: contact (events line 184). First recorded contact.
- 20.3s, squad 1: withdrawal ([trace 4000](#trace-4000)). 61.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.8s, squad 1: help call ([trace 9259](#trace-9259)). No completion observed before termination.
- 39.0s, squad 0: help call ([trace 9281](#trace-9281)). No completion observed before termination.
- 59.0s, squad 0: withdrawal ([trace 11887](#trace-11887)). 101.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 150.3s, squad 0: assault ([trace 18887](#trace-18887)). 151.3s, squad 0: advanced tactically.
- 216.1s, squad 1: withdrawal ([trace 23489](#trace-23489)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 33 shots, 3/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 2 shots, 2/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 192 shots, 1/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 27 shots, 0/2 lost.

### Decisions and attribution

At 216.1s, squad 1 chose broke contact ([trace 23489](#trace-23489)), followed by 0 shots and 2 own casualties; estimate 9.6 against 0 distinct squad-reported contacts; At 151.3s, squad 0 chose advanced tactically ([trace 19053](#trace-19053)), followed by 1 shots and 0 own casualties; estimate 9.3 against 0 distinct squad-reported contacts; At 0.1s, squad 1 chose advanced tactically ([trace 332](#trace-332)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1372](#trace-1372)). Following evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.836186564305422, 'next_transition': 1925}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 5308](#trace-5308)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6099790987604914, 'next_transition': 5368}.

### Communication

243 matched deliveries (mean 0.42s, max 5.25s); 396 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 16.70s, squad 1, contact, evidence events line 184: First recorded contact; .
- 20.30s, squad 1, withdrawal, evidence 4000: BreakContact: believed ratio at least two without superiority; 61.6s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.75s, squad 1, help call, evidence 9259: NeedSupport; No completion observed before termination.
- 39.05s, squad 0, help call, evidence 9281: NeedSupport; No completion observed before termination.
- 59.05s, squad 0, withdrawal, evidence 11887: BreakContact: believed ratio at least two without superiority; 101.2s, squad 0: contact broken or rally reached: Occupy and report strength.
- 150.30s, squad 0, assault, evidence 18887: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 151.3s, squad 0: advanced tactically.
- 216.05s, squad 1, withdrawal, evidence 23489: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424704592038697, 'next_transition': 935}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424704592038697, 'next_transition': 935}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424704592038697, 'next_transition': 935}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1133}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1133}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004734127439058, 'next_transition': 1133}.
<a id="trace-579"></a>
<a id="trace-581"></a>
<a id="trace-607"></a>
<a id="trace-609"></a>
<a id="trace-638"></a>
<a id="trace-640"></a>
<a id="trace-663"></a>
<a id="trace-665"></a>
<a id="trace-682"></a>
<a id="trace-684"></a>
<a id="trace-706"></a>
<a id="trace-708"></a>
<a id="trace-732"></a>
<a id="trace-734"></a>
<a id="trace-814"></a>
<a id="trace-816"></a>
<a id="trace-834"></a>
<a id="trace-836"></a>
<a id="trace-863"></a>
<a id="trace-865"></a>
<a id="trace-892"></a>
<a id="trace-894"></a>
<a id="trace-911"></a>
<a id="trace-913"></a>
<a id="trace-937"></a>
<a id="trace-939"></a>
<a id="trace-966"></a>
<a id="trace-968"></a>
<a id="trace-993"></a>
<a id="trace-995"></a>
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1039"></a>
<a id="trace-1041"></a>
<a id="trace-1130"></a>
<a id="trace-1132"></a>
<a id="trace-1266"></a>
<a id="trace-1268"></a>
<a id="trace-1290"></a>
<a id="trace-1292"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1348"></a>
<a id="trace-1350"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
<a id="trace-1659"></a>
<a id="trace-1661"></a>
<a id="trace-1684"></a>
<a id="trace-1686"></a>
<a id="trace-1722"></a>
<a id="trace-1724"></a>
<a id="trace-1744"></a>
<a id="trace-1746"></a>
<a id="trace-1827"></a>
<a id="trace-1829"></a>
<a id="trace-1869"></a>
<a id="trace-1871"></a>
<a id="trace-1900"></a>
<a id="trace-1902"></a>
<a id="trace-2122"></a>
<a id="trace-2124"></a>
<a id="trace-2716"></a>
<a id="trace-2718"></a>
<a id="trace-2756"></a>
<a id="trace-2758"></a>
<a id="trace-3110"></a>
<a id="trace-3112"></a>
<a id="trace-3752"></a>
<a id="trace-3754"></a>
<a id="trace-3829"></a>
<a id="trace-3831"></a>
<a id="trace-3892"></a>
<a id="trace-3894"></a>
<a id="trace-3997"></a>
<a id="trace-3999"></a>
<a id="trace-4188"></a>
<a id="trace-4190"></a>
<a id="trace-4556"></a>
<a id="trace-4558"></a>
<a id="trace-4619"></a>
<a id="trace-4621"></a>
<a id="trace-4675"></a>
<a id="trace-4677"></a>
<a id="trace-4704"></a>
<a id="trace-4706"></a>
<a id="trace-4727"></a>
<a id="trace-4729"></a>
<a id="trace-4766"></a>
<a id="trace-4768"></a>
<a id="trace-5108"></a>
<a id="trace-5110"></a>
<a id="trace-5133"></a>
<a id="trace-5135"></a>
<a id="trace-5235"></a>
<a id="trace-5237"></a>
<a id="trace-5262"></a>
<a id="trace-5264"></a>
<a id="trace-5287"></a>
<a id="trace-5289"></a>
<a id="trace-5337"></a>
<a id="trace-5339"></a>
<a id="trace-5372"></a>
<a id="trace-5374"></a>
<a id="trace-5396"></a>
<a id="trace-5398"></a>
<a id="trace-5425"></a>
<a id="trace-5427"></a>
<a id="trace-5451"></a>
<a id="trace-5453"></a>
<a id="trace-5472"></a>
<a id="trace-5474"></a>
<a id="trace-8308"></a>
<a id="trace-8310"></a>
<a id="trace-8410"></a>
<a id="trace-8412"></a>
<a id="trace-8444"></a>
<a id="trace-8446"></a>
<a id="trace-8475"></a>
<a id="trace-8477"></a>
<a id="trace-8502"></a>
<a id="trace-8504"></a>
<a id="trace-8530"></a>
<a id="trace-8532"></a>
<a id="trace-8580"></a>
<a id="trace-8582"></a>
<a id="trace-8628"></a>
<a id="trace-8630"></a>
<a id="trace-8664"></a>
<a id="trace-8666"></a>
<a id="trace-8725"></a>
<a id="trace-8727"></a>
<a id="trace-8768"></a>
<a id="trace-8770"></a>
<a id="trace-8897"></a>
<a id="trace-8899"></a>
<a id="trace-9020"></a>
<a id="trace-9022"></a>
<a id="trace-9071"></a>
<a id="trace-9073"></a>
<a id="trace-9124"></a>
<a id="trace-9126"></a>
<a id="trace-9164"></a>
<a id="trace-9166"></a>
<a id="trace-9191"></a>
<a id="trace-9193"></a>
<a id="trace-9229"></a>
<a id="trace-9231"></a>
<a id="trace-9254"></a>
<a id="trace-9256"></a>
<a id="trace-9300"></a>
<a id="trace-9302"></a>
<a id="trace-9325"></a>
<a id="trace-9327"></a>
<a id="trace-9435"></a>
<a id="trace-9437"></a>
<a id="trace-9492"></a>
<a id="trace-9494"></a>
<a id="trace-9529"></a>
<a id="trace-9531"></a>
<a id="trace-9565"></a>
<a id="trace-9567"></a>
<a id="trace-9601"></a>
<a id="trace-9603"></a>
<a id="trace-9622"></a>
<a id="trace-9624"></a>
<a id="trace-9639"></a>
<a id="trace-9641"></a>
<a id="trace-9658"></a>
<a id="trace-9660"></a>
<a id="trace-9678"></a>
<a id="trace-9680"></a>
<a id="trace-9959"></a>
<a id="trace-9961"></a>
<a id="trace-10045"></a>
<a id="trace-10047"></a>
<a id="trace-10073"></a>
<a id="trace-10075"></a>
<a id="trace-10101"></a>
<a id="trace-10103"></a>
<a id="trace-10130"></a>
<a id="trace-10132"></a>
<a id="trace-10160"></a>
<a id="trace-10162"></a>
<a id="trace-10179"></a>
<a id="trace-10181"></a>
<a id="trace-10461"></a>
<a id="trace-10463"></a>
<a id="trace-10479"></a>
<a id="trace-10481"></a>
<a id="trace-10500"></a>
<a id="trace-10502"></a>
<a id="trace-10521"></a>
<a id="trace-10523"></a>
<a id="trace-10612"></a>
<a id="trace-10614"></a>
<a id="trace-10633"></a>
<a id="trace-10635"></a>
<a id="trace-10731"></a>
<a id="trace-10733"></a>
<a id="trace-10749"></a>
<a id="trace-10751"></a>
<a id="trace-10779"></a>
<a id="trace-10781"></a>
<a id="trace-10799"></a>
<a id="trace-10801"></a>
<a id="trace-10829"></a>
<a id="trace-10831"></a>
<a id="trace-10847"></a>
<a id="trace-10849"></a>
<a id="trace-11202"></a>
<a id="trace-11204"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11660"></a>
<a id="trace-11662"></a>
<a id="trace-11688"></a>
<a id="trace-11690"></a>
<a id="trace-11730"></a>
<a id="trace-11732"></a>
<a id="trace-11770"></a>
<a id="trace-11772"></a>
<a id="trace-11801"></a>
<a id="trace-11803"></a>
<a id="trace-11832"></a>
<a id="trace-11834"></a>
<a id="trace-11862"></a>
<a id="trace-11864"></a>
<a id="trace-11879"></a>
<a id="trace-11881"></a>
<a id="trace-12180"></a>
<a id="trace-12182"></a>
<a id="trace-12199"></a>
<a id="trace-12201"></a>
<a id="trace-12300"></a>
<a id="trace-12302"></a>
<a id="trace-12329"></a>
<a id="trace-12331"></a>
<a id="trace-12360"></a>
<a id="trace-12362"></a>
<a id="trace-12386"></a>
<a id="trace-12388"></a>
<a id="trace-12421"></a>
<a id="trace-12423"></a>
<a id="trace-12447"></a>
<a id="trace-12449"></a>
<a id="trace-12467"></a>
<a id="trace-12469"></a>
<a id="trace-12489"></a>
<a id="trace-12491"></a>
<a id="trace-12520"></a>
<a id="trace-12522"></a>
<a id="trace-12536"></a>
<a id="trace-12538"></a>
<a id="trace-12627"></a>
<a id="trace-12629"></a>
<a id="trace-12669"></a>
<a id="trace-12671"></a>
<a id="trace-12686"></a>
<a id="trace-12688"></a>
<a id="trace-12711"></a>
<a id="trace-12713"></a>
<a id="trace-12733"></a>
<a id="trace-12735"></a>
<a id="trace-12759"></a>
<a id="trace-12761"></a>
<a id="trace-12779"></a>
<a id="trace-12781"></a>
<a id="trace-12803"></a>
<a id="trace-12805"></a>
<a id="trace-12822"></a>
<a id="trace-12824"></a>
<a id="trace-12911"></a>
<a id="trace-12913"></a>
<a id="trace-12926"></a>
<a id="trace-12928"></a>
<a id="trace-12954"></a>
<a id="trace-12956"></a>
<a id="trace-13169"></a>
<a id="trace-13171"></a>
<a id="trace-13198"></a>
<a id="trace-13200"></a>
<a id="trace-13228"></a>
<a id="trace-13230"></a>
<a id="trace-13265"></a>
<a id="trace-13267"></a>
<a id="trace-13278"></a>
<a id="trace-13280"></a>
<a id="trace-13313"></a>
<a id="trace-13315"></a>
<a id="trace-13332"></a>
<a id="trace-13334"></a>
<a id="trace-13414"></a>
<a id="trace-13416"></a>
<a id="trace-13428"></a>
<a id="trace-13430"></a>
<a id="trace-13454"></a>
<a id="trace-13456"></a>
<a id="trace-13473"></a>
<a id="trace-13475"></a>
<a id="trace-13499"></a>
<a id="trace-13501"></a>
<a id="trace-13513"></a>
<a id="trace-13515"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13552"></a>
<a id="trace-13554"></a>
<a id="trace-13572"></a>
<a id="trace-13574"></a>
<a id="trace-13582"></a>
<a id="trace-13584"></a>
<a id="trace-13671"></a>
<a id="trace-13673"></a>
<a id="trace-13687"></a>
<a id="trace-13689"></a>
<a id="trace-13713"></a>
<a id="trace-13715"></a>
<a id="trace-13732"></a>
<a id="trace-13734"></a>
<a id="trace-13762"></a>
<a id="trace-13764"></a>
<a id="trace-13777"></a>
<a id="trace-13779"></a>
<a id="trace-13801"></a>
<a id="trace-13803"></a>
<a id="trace-13814"></a>
<a id="trace-13816"></a>
<a id="trace-13840"></a>
<a id="trace-13842"></a>
<a id="trace-13856"></a>
<a id="trace-13858"></a>
<a id="trace-13940"></a>
<a id="trace-13942"></a>
<a id="trace-13951"></a>
<a id="trace-13953"></a>
<a id="trace-13973"></a>
<a id="trace-13975"></a>
<a id="trace-13991"></a>
<a id="trace-13993"></a>
<a id="trace-14028"></a>
<a id="trace-14030"></a>
<a id="trace-14163"></a>
<a id="trace-14165"></a>
<a id="trace-14192"></a>
<a id="trace-14194"></a>
<a id="trace-14216"></a>
<a id="trace-14218"></a>
<a id="trace-14240"></a>
<a id="trace-14242"></a>
<a id="trace-14261"></a>
<a id="trace-14263"></a>
<a id="trace-14349"></a>
<a id="trace-14351"></a>
<a id="trace-14364"></a>
<a id="trace-14366"></a>
<a id="trace-14381"></a>
<a id="trace-14383"></a>
<a id="trace-14394"></a>
<a id="trace-14396"></a>
<a id="trace-14414"></a>
<a id="trace-14416"></a>
<a id="trace-14429"></a>
<a id="trace-14431"></a>
<a id="trace-14450"></a>
<a id="trace-14452"></a>
<a id="trace-14468"></a>
<a id="trace-14470"></a>
<a id="trace-14486"></a>
<a id="trace-14488"></a>
<a id="trace-14497"></a>
<a id="trace-14499"></a>
<a id="trace-14577"></a>
<a id="trace-14579"></a>
<a id="trace-14590"></a>
<a id="trace-14592"></a>
<a id="trace-14614"></a>
<a id="trace-14616"></a>
<a id="trace-14630"></a>
<a id="trace-14632"></a>
<a id="trace-14651"></a>
<a id="trace-14653"></a>
<a id="trace-14664"></a>
<a id="trace-14666"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14704"></a>
<a id="trace-14706"></a>
<a id="trace-14721"></a>
<a id="trace-14723"></a>
<a id="trace-14885"></a>
<a id="trace-14887"></a>
<a id="trace-14971"></a>
<a id="trace-14973"></a>
<a id="trace-14992"></a>
<a id="trace-14994"></a>
<a id="trace-15012"></a>
<a id="trace-15014"></a>
<a id="trace-15038"></a>
<a id="trace-15040"></a>
<a id="trace-15075"></a>
<a id="trace-15077"></a>
<a id="trace-15100"></a>
<a id="trace-15102"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15137"></a>
<a id="trace-15139"></a>
<a id="trace-15163"></a>
<a id="trace-15165"></a>
<a id="trace-15180"></a>
<a id="trace-15182"></a>
<a id="trace-15259"></a>
<a id="trace-15261"></a>
<a id="trace-15265"></a>
<a id="trace-15267"></a>
<a id="trace-15282"></a>
<a id="trace-15284"></a>
<a id="trace-15292"></a>
<a id="trace-15294"></a>
<a id="trace-15306"></a>
<a id="trace-15308"></a>
<a id="trace-15318"></a>
<a id="trace-15320"></a>
<a id="trace-15334"></a>
<a id="trace-15336"></a>
<a id="trace-15344"></a>
<a id="trace-15346"></a>
<a id="trace-15361"></a>
<a id="trace-15363"></a>
<a id="trace-15379"></a>
<a id="trace-15381"></a>
<a id="trace-15458"></a>
<a id="trace-15460"></a>
<a id="trace-15471"></a>
<a id="trace-15473"></a>
<a id="trace-15491"></a>
<a id="trace-15493"></a>
<a id="trace-15504"></a>
<a id="trace-15506"></a>
<a id="trace-15516"></a>
<a id="trace-15518"></a>
<a id="trace-15525"></a>
<a id="trace-15527"></a>
<a id="trace-15540"></a>
<a id="trace-15542"></a>
<a id="trace-15549"></a>
<a id="trace-15551"></a>
<a id="trace-15564"></a>
<a id="trace-15566"></a>
<a id="trace-15649"></a>
<a id="trace-15651"></a>
<a id="trace-15802"></a>
<a id="trace-15804"></a>
<a id="trace-15824"></a>
<a id="trace-15826"></a>
<a id="trace-15863"></a>
<a id="trace-15865"></a>
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15921"></a>
<a id="trace-15923"></a>
<a id="trace-15945"></a>
<a id="trace-15947"></a>
<a id="trace-15968"></a>
<a id="trace-15970"></a>
<a id="trace-15977"></a>
<a id="trace-15979"></a>
<a id="trace-15993"></a>
<a id="trace-15995"></a>
<a id="trace-16003"></a>
<a id="trace-16005"></a>
<a id="trace-16087"></a>
<a id="trace-16089"></a>
<a id="trace-16103"></a>
<a id="trace-16105"></a>
<a id="trace-16132"></a>
<a id="trace-16134"></a>
<a id="trace-16145"></a>
<a id="trace-16147"></a>
<a id="trace-16327"></a>
<a id="trace-16329"></a>
<a id="trace-16342"></a>
<a id="trace-16344"></a>
<a id="trace-16373"></a>
<a id="trace-16375"></a>
<a id="trace-16388"></a>
<a id="trace-16390"></a>
<a id="trace-16414"></a>
<a id="trace-16416"></a>
<a id="trace-16437"></a>
<a id="trace-16439"></a>
<a id="trace-16579"></a>
<a id="trace-16581"></a>
<a id="trace-16604"></a>
<a id="trace-16606"></a>
<a id="trace-16630"></a>
<a id="trace-16632"></a>
<a id="trace-16649"></a>
<a id="trace-16651"></a>
<a id="trace-16670"></a>
<a id="trace-16672"></a>
<a id="trace-16687"></a>
<a id="trace-16689"></a>
<a id="trace-16709"></a>
<a id="trace-16711"></a>
<a id="trace-16730"></a>
<a id="trace-16732"></a>
<a id="trace-16749"></a>
<a id="trace-16751"></a>
<a id="trace-16769"></a>
<a id="trace-16771"></a>
<a id="trace-16852"></a>
<a id="trace-16854"></a>
<a id="trace-16868"></a>
<a id="trace-16870"></a>
<a id="trace-16893"></a>
<a id="trace-16895"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16931"></a>
<a id="trace-16933"></a>
<a id="trace-17085"></a>
<a id="trace-17087"></a>
<a id="trace-17106"></a>
<a id="trace-17108"></a>
<a id="trace-17119"></a>
<a id="trace-17121"></a>
<a id="trace-17230"></a>
<a id="trace-17232"></a>
<a id="trace-17250"></a>
<a id="trace-17252"></a>
<a id="trace-17336"></a>
<a id="trace-17338"></a>
<a id="trace-17360"></a>
<a id="trace-17362"></a>
<a id="trace-17383"></a>
<a id="trace-17385"></a>
<a id="trace-17404"></a>
<a id="trace-17406"></a>
<a id="trace-17428"></a>
<a id="trace-17430"></a>
<a id="trace-17446"></a>
<a id="trace-17448"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17486"></a>
<a id="trace-17488"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17519"></a>
<a id="trace-17521"></a>
<a id="trace-17604"></a>
<a id="trace-17606"></a>
<a id="trace-17624"></a>
<a id="trace-17626"></a>
<a id="trace-17643"></a>
<a id="trace-17645"></a>
<a id="trace-17659"></a>
<a id="trace-17661"></a>
<a id="trace-17683"></a>
<a id="trace-17685"></a>
<a id="trace-17693"></a>
<a id="trace-17695"></a>
<a id="trace-17796"></a>
<a id="trace-17798"></a>
<a id="trace-17810"></a>
<a id="trace-17812"></a>
<a id="trace-17888"></a>
<a id="trace-17890"></a>
<a id="trace-17906"></a>
<a id="trace-17908"></a>
<a id="trace-18002"></a>
<a id="trace-18004"></a>
<a id="trace-18015"></a>
<a id="trace-18017"></a>
<a id="trace-18156"></a>
<a id="trace-18158"></a>
<a id="trace-18176"></a>
<a id="trace-18178"></a>
<a id="trace-18205"></a>
<a id="trace-18207"></a>
<a id="trace-18223"></a>
<a id="trace-18225"></a>
<a id="trace-18256"></a>
<a id="trace-18258"></a>
<a id="trace-18281"></a>
<a id="trace-18283"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18326"></a>
<a id="trace-18328"></a>
<a id="trace-18611"></a>
<a id="trace-18613"></a>
<a id="trace-19022"></a>
<a id="trace-19024"></a>
<a id="trace-19043"></a>
<a id="trace-19045"></a>
<a id="trace-19182"></a>
<a id="trace-19184"></a>
<a id="trace-19217"></a>
<a id="trace-19219"></a>
<a id="trace-19248"></a>
<a id="trace-19250"></a>
<a id="trace-19275"></a>
<a id="trace-19277"></a>
<a id="trace-19290"></a>
<a id="trace-19292"></a>
<a id="trace-19323"></a>
<a id="trace-19325"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19418"></a>
<a id="trace-19420"></a>
<a id="trace-19492"></a>
<a id="trace-19494"></a>
<a id="trace-19515"></a>
<a id="trace-19517"></a>
<a id="trace-19537"></a>
<a id="trace-19539"></a>
<a id="trace-19573"></a>
<a id="trace-19575"></a>
<a id="trace-19609"></a>
<a id="trace-19611"></a>
<a id="trace-19651"></a>
<a id="trace-19653"></a>
<a id="trace-19692"></a>
<a id="trace-19694"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19754"></a>
<a id="trace-19756"></a>
<a id="trace-19961"></a>
<a id="trace-19963"></a>
<a id="trace-19987"></a>
<a id="trace-19989"></a>
<a id="trace-20012"></a>
<a id="trace-20014"></a>
<a id="trace-20035"></a>
<a id="trace-20037"></a>
<a id="trace-20065"></a>
<a id="trace-20067"></a>
<a id="trace-20083"></a>
<a id="trace-20085"></a>
<a id="trace-20108"></a>
<a id="trace-20110"></a>
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20136"></a>
<a id="trace-20138"></a>
<a id="trace-20157"></a>
<a id="trace-20159"></a>
<a id="trace-20235"></a>
<a id="trace-20237"></a>
<a id="trace-20248"></a>
<a id="trace-20250"></a>
<a id="trace-20268"></a>
<a id="trace-20270"></a>
<a id="trace-20280"></a>
<a id="trace-20282"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20315"></a>
<a id="trace-20317"></a>
<a id="trace-20333"></a>
<a id="trace-20335"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20357"></a>
<a id="trace-20359"></a>
<a id="trace-20370"></a>
<a id="trace-20372"></a>
<a id="trace-20543"></a>
<a id="trace-20545"></a>
<a id="trace-20559"></a>
<a id="trace-20561"></a>
<a id="trace-20574"></a>
<a id="trace-20576"></a>
<a id="trace-20592"></a>
<a id="trace-20594"></a>
<a id="trace-20614"></a>
<a id="trace-20616"></a>
<a id="trace-20623"></a>
<a id="trace-20625"></a>
<a id="trace-20637"></a>
<a id="trace-20639"></a>
<a id="trace-20645"></a>
<a id="trace-20647"></a>
<a id="trace-20660"></a>
<a id="trace-20662"></a>
<a id="trace-20671"></a>
<a id="trace-20673"></a>
<a id="trace-20745"></a>
<a id="trace-20747"></a>
<a id="trace-20756"></a>
<a id="trace-20758"></a>
<a id="trace-20771"></a>
<a id="trace-20773"></a>
<a id="trace-20784"></a>
<a id="trace-20786"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20807"></a>
<a id="trace-20809"></a>
<a id="trace-20821"></a>
<a id="trace-20823"></a>
<a id="trace-20830"></a>
<a id="trace-20832"></a>
<a id="trace-20843"></a>
<a id="trace-20845"></a>
<a id="trace-20854"></a>
<a id="trace-20856"></a>
<a id="trace-20928"></a>
<a id="trace-20930"></a>
<a id="trace-20941"></a>
<a id="trace-20943"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-20970"></a>
<a id="trace-20972"></a>
<a id="trace-20988"></a>
<a id="trace-20990"></a>
<a id="trace-20996"></a>
<a id="trace-20998"></a>
<a id="trace-21011"></a>
<a id="trace-21013"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21049"></a>
<a id="trace-21051"></a>
<a id="trace-21058"></a>
<a id="trace-21060"></a>
<a id="trace-21132"></a>
<a id="trace-21134"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21170"></a>
<a id="trace-21172"></a>
<a id="trace-21188"></a>
<a id="trace-21190"></a>
<a id="trace-21194"></a>
<a id="trace-21196"></a>
<a id="trace-21208"></a>
<a id="trace-21210"></a>
<a id="trace-21220"></a>
<a id="trace-21222"></a>
<a id="trace-21237"></a>
<a id="trace-21239"></a>
<a id="trace-21248"></a>
<a id="trace-21250"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21345"></a>
<a id="trace-21347"></a>
<a id="trace-21364"></a>
<a id="trace-21366"></a>
<a id="trace-21375"></a>
<a id="trace-21377"></a>
<a id="trace-21392"></a>
<a id="trace-21394"></a>
<a id="trace-21403"></a>
<a id="trace-21405"></a>
<a id="trace-21416"></a>
<a id="trace-21418"></a>
<a id="trace-21424"></a>
<a id="trace-21426"></a>
<a id="trace-21438"></a>
<a id="trace-21440"></a>
<a id="trace-21447"></a>
<a id="trace-21449"></a>
<a id="trace-21524"></a>
<a id="trace-21526"></a>
<a id="trace-21538"></a>
<a id="trace-21540"></a>
<a id="trace-21558"></a>
<a id="trace-21560"></a>
<a id="trace-21571"></a>
<a id="trace-21573"></a>
<a id="trace-21596"></a>
<a id="trace-21598"></a>
<a id="trace-21792"></a>
<a id="trace-21794"></a>
<a id="trace-21811"></a>
<a id="trace-21813"></a>
<a id="trace-21824"></a>
<a id="trace-21826"></a>
<a id="trace-21840"></a>
<a id="trace-21842"></a>
<a id="trace-21855"></a>
<a id="trace-21857"></a>
<a id="trace-21931"></a>
<a id="trace-21933"></a>
<a id="trace-21943"></a>
<a id="trace-21945"></a>
<a id="trace-21965"></a>
<a id="trace-21967"></a>
<a id="trace-21980"></a>
<a id="trace-21982"></a>
<a id="trace-22006"></a>
<a id="trace-22008"></a>
<a id="trace-22019"></a>
<a id="trace-22021"></a>
<a id="trace-22045"></a>
<a id="trace-22047"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22085"></a>
<a id="trace-22087"></a>
<a id="trace-22095"></a>
<a id="trace-22097"></a>
<a id="trace-22172"></a>
<a id="trace-22174"></a>
<a id="trace-22182"></a>
<a id="trace-22184"></a>
<a id="trace-22206"></a>
<a id="trace-22208"></a>
<a id="trace-22222"></a>
<a id="trace-22224"></a>
<a id="trace-22242"></a>
<a id="trace-22244"></a>
<a id="trace-22466"></a>
<a id="trace-22468"></a>
<a id="trace-22485"></a>
<a id="trace-22487"></a>
<a id="trace-22498"></a>
<a id="trace-22500"></a>
<a id="trace-22520"></a>
<a id="trace-22522"></a>
<a id="trace-22541"></a>
<a id="trace-22543"></a>
<a id="trace-22647"></a>
<a id="trace-22649"></a>
<a id="trace-22689"></a>
<a id="trace-22691"></a>
<a id="trace-23150"></a>
<a id="trace-23152"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23235"></a>
<a id="trace-23237"></a>
<a id="trace-23260"></a>
<a id="trace-23262"></a>
<a id="trace-23287"></a>
<a id="trace-23289"></a>
<a id="trace-23305"></a>
<a id="trace-23307"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23355"></a>
<a id="trace-23357"></a>
<a id="trace-23442"></a>
<a id="trace-23444"></a>
<a id="trace-23473"></a>
<a id="trace-23475"></a>
<a id="trace-23663"></a>
<a id="trace-23665"></a>
<a id="trace-23691"></a>
<a id="trace-23693"></a>
<a id="trace-23736"></a>
<a id="trace-23738"></a>
<a id="trace-23766"></a>
<a id="trace-23768"></a>
<a id="trace-23794"></a>
<a id="trace-23796"></a>
<a id="trace-23802"></a>
<a id="trace-23804"></a>
<a id="trace-23817"></a>
<a id="trace-23819"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23899"></a>
<a id="trace-23901"></a>
<a id="trace-23912"></a>
<a id="trace-23914"></a>
<a id="trace-23925"></a>
<a id="trace-23927"></a>
<a id="trace-23938"></a>
<a id="trace-23940"></a>
<a id="trace-23954"></a>
<a id="trace-23956"></a>
<a id="trace-23964"></a>
<a id="trace-23966"></a>
<a id="trace-23981"></a>
<a id="trace-23983"></a>
<a id="trace-23991"></a>
<a id="trace-23993"></a>
<a id="trace-24006"></a>
<a id="trace-24008"></a>
<a id="trace-24016"></a>
<a id="trace-24018"></a>
<a id="trace-24086"></a>
<a id="trace-24088"></a>
<a id="trace-24097"></a>
<a id="trace-24099"></a>
<a id="trace-24110"></a>
<a id="trace-24112"></a>
<a id="trace-24120"></a>
<a id="trace-24122"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24144"></a>
<a id="trace-24146"></a>
<a id="trace-24161"></a>
<a id="trace-24163"></a>
<a id="trace-24169"></a>
<a id="trace-24171"></a>
<a id="trace-24180"></a>
<a id="trace-24182"></a>
<a id="trace-24186"></a>
<a id="trace-24188"></a>
<a id="trace-24253"></a>
<a id="trace-24255"></a>
<a id="trace-24261"></a>
<a id="trace-24263"></a>
<a id="trace-24272"></a>
<a id="trace-24274"></a>
<a id="trace-24281"></a>
<a id="trace-24283"></a>
<a id="trace-24295"></a>
<a id="trace-24297"></a>
<a id="trace-24301"></a>
<a id="trace-24303"></a>
<a id="trace-24315"></a>
<a id="trace-24317"></a>
<a id="trace-24321"></a>
<a id="trace-24323"></a>
<a id="trace-24331"></a>
<a id="trace-24333"></a>
<a id="trace-24338"></a>
<a id="trace-24340"></a>
<a id="trace-24406"></a>
<a id="trace-24408"></a>
<a id="trace-24413"></a>
<a id="trace-24415"></a>
<a id="trace-24424"></a>
<a id="trace-24426"></a>
<a id="trace-24433"></a>
<a id="trace-24435"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24467"></a>
<a id="trace-24469"></a>
<a id="trace-24473"></a>
<a id="trace-24475"></a>
<a id="trace-24484"></a>
<a id="trace-24486"></a>
<a id="trace-24493"></a>
<a id="trace-24495"></a>
<a id="trace-24569"></a>
<a id="trace-24571"></a>
<a id="trace-24585"></a>
<a id="trace-24587"></a>
<a id="trace-24596"></a>
<a id="trace-24598"></a>
<a id="trace-24606"></a>
<a id="trace-24608"></a>
<a id="trace-24619"></a>
<a id="trace-24621"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24634"></a>
<a id="trace-24636"></a>
<a id="trace-24640"></a>
<a id="trace-24642"></a>
<a id="trace-24650"></a>
<a id="trace-24652"></a>
<a id="trace-24657"></a>
<a id="trace-24659"></a>
<a id="trace-24725"></a>
<a id="trace-24727"></a>
<a id="trace-24735"></a>
<a id="trace-24737"></a>
<a id="trace-24747"></a>
<a id="trace-24749"></a>
<a id="trace-24759"></a>
<a id="trace-24761"></a>
<a id="trace-24781"></a>
<a id="trace-24783"></a>
<a id="trace-24791"></a>
<a id="trace-24793"></a>
<a id="trace-24809"></a>
<a id="trace-24811"></a>
<a id="trace-24815"></a>
<a id="trace-24817"></a>
<a id="trace-24825"></a>
<a id="trace-24827"></a>
<a id="trace-24832"></a>
<a id="trace-24834"></a>
<a id="trace-24900"></a>
<a id="trace-24902"></a>
<a id="trace-24906"></a>
<a id="trace-24908"></a>
<a id="trace-24917"></a>
<a id="trace-24919"></a>
<a id="trace-24926"></a>
<a id="trace-24928"></a>
<a id="trace-24941"></a>
<a id="trace-24943"></a>
<a id="trace-24948"></a>
<a id="trace-24950"></a>
<a id="trace-24964"></a>
<a id="trace-24966"></a>
<a id="trace-24970"></a>
<a id="trace-24972"></a>
<a id="trace-24987"></a>
<a id="trace-24989"></a>
<a id="trace-25002"></a>
<a id="trace-25004"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25081"></a>
<a id="trace-25083"></a>
<a id="trace-25091"></a>
<a id="trace-25093"></a>
<a id="trace-25100"></a>
<a id="trace-25102"></a>
<a id="trace-25113"></a>
<a id="trace-25115"></a>
<a id="trace-25119"></a>
<a id="trace-25121"></a>
<a id="trace-25130"></a>
<a id="trace-25132"></a>
<a id="trace-25136"></a>
<a id="trace-25138"></a>
<a id="trace-25147"></a>
<a id="trace-25149"></a>
<a id="trace-25155"></a>
<a id="trace-25157"></a>
<a id="trace-25226"></a>
<a id="trace-25228"></a>
<a id="trace-25237"></a>
<a id="trace-25239"></a>
<a id="trace-25252"></a>
<a id="trace-25254"></a>
<a id="trace-25269"></a>
<a id="trace-25271"></a>
<a id="trace-25285"></a>
<a id="trace-25287"></a>
<a id="trace-25293"></a>
<a id="trace-25295"></a>
<a id="trace-25304"></a>
<a id="trace-25306"></a>
<a id="trace-25310"></a>
<a id="trace-25312"></a>
<a id="trace-25320"></a>
<a id="trace-25322"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25394"></a>
<a id="trace-25396"></a>
<a id="trace-25401"></a>
<a id="trace-25403"></a>
<a id="trace-25412"></a>
<a id="trace-25414"></a>
<a id="trace-25424"></a>
<a id="trace-25426"></a>
<a id="trace-25441"></a>
<a id="trace-25443"></a>
<a id="trace-25452"></a>
<a id="trace-25454"></a>
<a id="trace-25464"></a>
<a id="trace-25466"></a>
<a id="trace-25472"></a>
<a id="trace-25474"></a>
<a id="trace-25488"></a>
<a id="trace-25490"></a>
<a id="trace-25498"></a>
<a id="trace-25500"></a>
<a id="trace-25566"></a>
<a id="trace-25568"></a>
<a id="trace-25572"></a>
<a id="trace-25574"></a>
<a id="trace-25582"></a>
<a id="trace-25584"></a>
<a id="trace-25591"></a>
<a id="trace-25593"></a>
<a id="trace-25606"></a>
<a id="trace-25608"></a>
<a id="trace-25612"></a>
<a id="trace-25614"></a>
<a id="trace-25626"></a>
<a id="trace-25628"></a>
<a id="trace-25636"></a>
<a id="trace-25638"></a>
<a id="trace-25650"></a>
<a id="trace-25652"></a>
<a id="trace-25659"></a>
<a id="trace-25661"></a>
<a id="trace-25729"></a>
<a id="trace-25731"></a>
<a id="trace-25738"></a>
<a id="trace-25740"></a>
<a id="trace-25751"></a>
<a id="trace-25753"></a>
<a id="trace-25764"></a>
<a id="trace-25766"></a>
<a id="trace-25778"></a>
<a id="trace-25780"></a>
<a id="trace-25784"></a>
<a id="trace-25786"></a>
<a id="trace-25795"></a>
<a id="trace-25797"></a>
<a id="trace-25803"></a>
<a id="trace-25805"></a>
<a id="trace-25813"></a>
<a id="trace-25815"></a>
<a id="trace-25823"></a>
<a id="trace-25825"></a>
<a id="trace-25895"></a>
<a id="trace-25897"></a>
<a id="trace-25902"></a>
<a id="trace-25904"></a>
<a id="trace-25916"></a>
<a id="trace-25918"></a>
<a id="trace-25926"></a>
<a id="trace-25928"></a>
<a id="trace-25942"></a>
<a id="trace-25944"></a>
<a id="trace-25950"></a>
<a id="trace-25952"></a>
<a id="trace-25964"></a>
<a id="trace-25966"></a>
<a id="trace-25970"></a>
<a id="trace-25972"></a>
<a id="trace-25983"></a>
<a id="trace-25985"></a>
<a id="trace-25991"></a>
<a id="trace-25993"></a>
<a id="trace-26061"></a>
<a id="trace-26063"></a>
<a id="trace-26067"></a>
<a id="trace-26069"></a>
<a id="trace-26081"></a>
<a id="trace-26083"></a>
<a id="trace-26090"></a>
<a id="trace-26092"></a>
<a id="trace-26116"></a>
<a id="trace-26118"></a>
<a id="trace-26127"></a>
<a id="trace-26129"></a>
<a id="trace-26136"></a>
<a id="trace-26138"></a>
<a id="trace-26147"></a>
<a id="trace-26149"></a>
<a id="trace-26155"></a>
<a id="trace-26157"></a>
<a id="trace-26224"></a>
<a id="trace-26226"></a>
<a id="trace-26232"></a>
<a id="trace-26234"></a>
<a id="trace-26246"></a>
<a id="trace-26248"></a>
<a id="trace-26256"></a>
<a id="trace-26258"></a>
<a id="trace-26271"></a>
<a id="trace-26273"></a>
<a id="trace-26278"></a>
<a id="trace-26280"></a>
<a id="trace-26290"></a>
<a id="trace-26292"></a>
<a id="trace-26300"></a>
<a id="trace-26302"></a>
<a id="trace-26312"></a>
<a id="trace-26314"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26390"></a>
<a id="trace-26392"></a>
<a id="trace-26396"></a>
<a id="trace-26398"></a>
<a id="trace-26409"></a>
<a id="trace-26411"></a>
<a id="trace-26419"></a>
<a id="trace-26421"></a>
<a id="trace-26433"></a>
<a id="trace-26435"></a>
<a id="trace-26441"></a>
<a id="trace-26443"></a>
<a id="trace-26455"></a>
<a id="trace-26457"></a>
<a id="trace-26463"></a>
<a id="trace-26465"></a>
<a id="trace-26474"></a>
<a id="trace-26476"></a>
<a id="trace-26483"></a>
<a id="trace-26485"></a>
<a id="trace-26555"></a>
<a id="trace-26557"></a>
<a id="trace-26564"></a>
<a id="trace-26566"></a>
<a id="trace-26577"></a>
<a id="trace-26579"></a>
<a id="trace-26585"></a>
<a id="trace-26587"></a>
<a id="trace-26599"></a>
<a id="trace-26601"></a>
<a id="trace-26607"></a>
<a id="trace-26609"></a>
<a id="trace-26620"></a>
<a id="trace-26622"></a>
<a id="trace-26625"></a>
<a id="trace-26627"></a>
<a id="trace-26635"></a>
<a id="trace-26637"></a>
<a id="trace-26643"></a>
<a id="trace-26645"></a>
<a id="trace-26717"></a>
<a id="trace-26719"></a>
<a id="trace-26725"></a>
<a id="trace-26727"></a>
<a id="trace-26739"></a>
<a id="trace-26741"></a>
<a id="trace-26751"></a>
<a id="trace-26753"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26773"></a>
<a id="trace-26775"></a>
<a id="trace-26784"></a>
<a id="trace-26786"></a>
<a id="trace-26789"></a>
<a id="trace-26791"></a>
<a id="trace-26799"></a>
<a id="trace-26801"></a>
<a id="trace-26808"></a>
<a id="trace-26810"></a>
<a id="trace-26878"></a>
<a id="trace-26880"></a>
<a id="trace-26884"></a>
<a id="trace-26886"></a>
<a id="trace-26896"></a>
<a id="trace-26898"></a>
<a id="trace-26908"></a>
<a id="trace-26910"></a>
<a id="trace-26924"></a>
<a id="trace-26926"></a>
<a id="trace-26935"></a>
<a id="trace-26937"></a>
<a id="trace-26951"></a>
<a id="trace-26953"></a>
<a id="trace-26957"></a>
<a id="trace-26959"></a>
<a id="trace-26970"></a>
<a id="trace-26972"></a>
<a id="trace-26977"></a>
<a id="trace-26979"></a>
<a id="trace-27045"></a>
<a id="trace-27047"></a>
<a id="trace-27051"></a>
<a id="trace-27053"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
<a id="trace-27075"></a>
<a id="trace-27077"></a>
<a id="trace-27090"></a>
<a id="trace-27092"></a>
<a id="trace-27097"></a>
<a id="trace-27099"></a>
<a id="trace-27110"></a>
<a id="trace-27112"></a>
<a id="trace-27115"></a>
<a id="trace-27117"></a>
<a id="trace-27131"></a>
<a id="trace-27133"></a>
<a id="trace-27140"></a>
<a id="trace-27142"></a>
<a id="trace-27215"></a>
<a id="trace-27217"></a>
<a id="trace-27224"></a>
<a id="trace-27226"></a>
<a id="trace-27235"></a>
<a id="trace-27237"></a>
<a id="trace-27244"></a>
<a id="trace-27246"></a>
<a id="trace-27257"></a>
<a id="trace-27259"></a>
<a id="trace-27264"></a>
<a id="trace-27266"></a>
<a id="trace-27275"></a>
<a id="trace-27277"></a>
<a id="trace-27283"></a>
<a id="trace-27285"></a>
<a id="trace-27296"></a>
<a id="trace-27298"></a>
<a id="trace-27305"></a>
<a id="trace-27307"></a>
<a id="trace-27376"></a>
<a id="trace-27378"></a>
<a id="trace-27383"></a>
<a id="trace-27385"></a>
<a id="trace-27396"></a>
<a id="trace-27398"></a>
<a id="trace-27412"></a>
<a id="trace-27414"></a>
<a id="trace-27431"></a>
<a id="trace-27433"></a>
<a id="trace-27439"></a>
<a id="trace-27441"></a>
<a id="trace-27450"></a>
<a id="trace-27452"></a>
<a id="trace-27455"></a>
<a id="trace-27457"></a>
<a id="trace-27465"></a>
<a id="trace-27467"></a>
<a id="trace-27472"></a>
<a id="trace-27474"></a>
<a id="trace-27540"></a>
<a id="trace-27542"></a>
<a id="trace-27549"></a>
<a id="trace-27551"></a>
<a id="trace-27561"></a>
<a id="trace-27563"></a>
<a id="trace-27571"></a>
<a id="trace-27573"></a>
<a id="trace-27585"></a>
<a id="trace-27587"></a>
<a id="trace-27595"></a>
<a id="trace-27597"></a>
<a id="trace-27609"></a>
<a id="trace-27611"></a>
<a id="trace-27621"></a>
<a id="trace-27623"></a>
<a id="trace-27636"></a>
<a id="trace-27638"></a>
<a id="trace-27644"></a>
<a id="trace-27646"></a>
<a id="trace-27712"></a>
<a id="trace-27714"></a>
<a id="trace-27718"></a>
<a id="trace-27720"></a>
<a id="trace-27730"></a>
<a id="trace-27732"></a>
<a id="trace-27739"></a>
<a id="trace-27741"></a>
<a id="trace-27754"></a>
<a id="trace-27756"></a>
<a id="trace-27761"></a>
<a id="trace-27763"></a>
<a id="trace-27773"></a>
<a id="trace-27775"></a>
<a id="trace-27779"></a>
<a id="trace-27781"></a>
<a id="trace-27792"></a>
<a id="trace-27794"></a>
<a id="trace-27804"></a>
<a id="trace-27806"></a>
<a id="trace-27876"></a>
<a id="trace-27878"></a>
<a id="trace-27883"></a>
<a id="trace-27885"></a>
<a id="trace-27897"></a>
<a id="trace-27899"></a>
<a id="trace-27909"></a>
<a id="trace-27911"></a>
<a id="trace-27922"></a>
<a id="trace-27924"></a>
<a id="trace-27929"></a>
<a id="trace-27931"></a>
<a id="trace-27939"></a>
<a id="trace-27941"></a>
<a id="trace-27946"></a>
<a id="trace-27948"></a>
<a id="trace-27959"></a>
<a id="trace-27961"></a>
<a id="trace-27967"></a>
<a id="trace-27969"></a>
<a id="trace-28035"></a>
<a id="trace-28037"></a>
<a id="trace-28043"></a>
<a id="trace-28045"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28069"></a>
<a id="trace-28071"></a>
<a id="trace-28086"></a>
<a id="trace-28088"></a>
<a id="trace-28093"></a>
<a id="trace-28095"></a>
<a id="trace-28106"></a>
<a id="trace-28108"></a>
<a id="trace-28116"></a>
<a id="trace-28118"></a>
<a id="trace-28128"></a>
<a id="trace-28130"></a>
<a id="trace-28135"></a>
<a id="trace-28137"></a>
<a id="trace-28204"></a>
<a id="trace-28206"></a>
<a id="trace-28213"></a>
<a id="trace-28215"></a>
<a id="trace-28226"></a>
<a id="trace-28228"></a>
<a id="trace-28235"></a>
<a id="trace-28237"></a>
<a id="trace-28251"></a>
<a id="trace-28253"></a>
<a id="trace-28256"></a>
<a id="trace-28258"></a>
<a id="trace-28272"></a>
<a id="trace-28274"></a>
<a id="trace-28281"></a>
<a id="trace-28283"></a>
<a id="trace-28291"></a>
<a id="trace-28293"></a>
<a id="trace-28299"></a>
<a id="trace-28301"></a>
<a id="trace-28369"></a>
<a id="trace-28371"></a>
<a id="trace-28375"></a>
<a id="trace-28377"></a>
<a id="trace-28389"></a>
<a id="trace-28391"></a>
<a id="trace-28398"></a>
<a id="trace-28400"></a>
<a id="trace-28414"></a>
<a id="trace-28416"></a>
<a id="trace-28421"></a>
<a id="trace-28423"></a>
<a id="trace-28434"></a>
<a id="trace-28436"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28453"></a>
<a id="trace-28455"></a>
<a id="trace-28464"></a>
<a id="trace-28466"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079420810525734, 'next_transition': 607}.
<a id="trace-935"></a>
<a id="trace-964"></a>
<a id="trace-989"></a>
<a id="trace-991"></a>
<a id="trace-1018"></a>
<a id="trace-1020"></a>
<a id="trace-1035"></a>
<a id="trace-1037"></a>
<a id="trace-1126"></a>
<a id="trace-1128"></a>
<a id="trace-1262"></a>
<a id="trace-1264"></a>
<a id="trace-1286"></a>
<a id="trace-1288"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 935): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5115098022765929, 'next_transition': 964}.
<a id="trace-1133"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1133): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1055. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.671172841235616, 'next_transition': 137}.
<a id="trace-1134"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1134): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1055. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.671172841235616, 'next_transition': 137}.
<a id="trace-137"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.836186564305422, 'next_transition': 1925}.
<a id="trace-1372"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1372): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1372. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.836186564305422, 'next_transition': 1925}.
<a id="trace-1373"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1373): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1373. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.836186564305422, 'next_transition': 1925}.
<a id="trace-1374"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1374): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1655}.
<a id="trace-1375"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1375): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47249775681491946, 'next_transition': 1655}.
<a id="trace-1655"></a>
<a id="trace-1657"></a>
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-1823"></a>
<a id="trace-1825"></a>
<a id="trace-1865"></a>
<a id="trace-1867"></a>
<a id="trace-1896"></a>
<a id="trace-1898"></a>
<a id="trace-2118"></a>
<a id="trace-2120"></a>
<a id="trace-2712"></a>
<a id="trace-2714"></a>
<a id="trace-2752"></a>
<a id="trace-2754"></a>
- 13.20s–17.75s (×18), actor 5, squad 0 (trace 1655): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1373. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1221960570934353, 'next_transition': 1718}.
<a id="trace-1925"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1925): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-1926"></a>
- 16.70s–16.70s (×1), actor 8, squad 1 (trace 1926): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-1927"></a>
<a id="trace-2125"></a>
<a id="trace-2318"></a>
<a id="trace-2506"></a>
- 16.70s–16.95s (×4), actor 8, squad 1 (trace 1927): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1762. Next observer evidence: None.
<a id="trace-2774"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 2774): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3113}.
<a id="trace-2775"></a>
- 18.00s–18.00s (×1), actor 0, squad 0 (trace 2775): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3113}.
<a id="trace-2776"></a>
<a id="trace-3113"></a>
<a id="trace-3428"></a>
- 18.00s–18.50s (×3), actor 0, squad 0 (trace 2776): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1754. Next observer evidence: {'until': 18.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07875001603174452, 'next_transition': 3113}.
<a id="trace-3748"></a>
<a id="trace-3750"></a>
<a id="trace-3825"></a>
<a id="trace-3827"></a>
<a id="trace-3888"></a>
<a id="trace-3890"></a>
<a id="trace-3993"></a>
<a id="trace-3995"></a>
<a id="trace-4184"></a>
<a id="trace-4186"></a>
- 18.75s–20.75s (×10), actor 5, squad 0 (trace 3748): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1759. Next observer evidence: {'until': 19.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3510487670650612, 'next_transition': 3825}.
<a id="trace-4000"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4000): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 3911. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.503714600649147, 'next_transition': 8941}.
<a id="trace-4001"></a>
- 20.30s–20.30s (×1), actor 8, squad 1 (trace 4001): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 3911. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 19.503714600649147, 'next_transition': 8941}.
<a id="trace-4194"></a>
- 20.80s–20.80s (×1), actor 0, squad 0 (trace 4194): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3903. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9503717008552334, 'next_transition': 4615}.
<a id="trace-4615"></a>
<a id="trace-4617"></a>
<a id="trace-4723"></a>
<a id="trace-4725"></a>
- 21.75s–23.25s (×4), actor 5, squad 0 (trace 4615): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3908. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.922724610154299, 'next_transition': 4723}.
<a id="trace-4777"></a>
- 23.95s–23.95s (×1), actor 0, squad 0 (trace 4777): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3903. Next observer evidence: {'until': 24.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.32298163393296686, 'next_transition': 5104}.
<a id="trace-5104"></a>
<a id="trace-5106"></a>
<a id="trace-5129"></a>
<a id="trace-5131"></a>
<a id="trace-5231"></a>
<a id="trace-5233"></a>
<a id="trace-5258"></a>
<a id="trace-5260"></a>
- 24.25s–25.75s (×8), actor 5, squad 0 (trace 5104): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3908. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2885781294752328, 'next_transition': 5129}.
<a id="trace-401"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 401): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5308"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5308): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5308. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6099790987604914, 'next_transition': 5368}.
<a id="trace-5309"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5309): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5309. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6099790987604914, 'next_transition': 5368}.
<a id="trace-5368"></a>
<a id="trace-5370"></a>
- 27.25s–27.25s (×2), actor 5, squad 0 (trace 5368): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5309. Next observer evidence: {'until': 27.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22846952436072582, 'next_transition': 5388}.
<a id="trace-5388"></a>
- 27.65s–27.65s (×1), actor 0, squad 0 (trace 5388): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5142. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2291186915661836, 'next_transition': 5421}.
<a id="trace-5421"></a>
<a id="trace-5423"></a>
- 28.25s–28.25s (×2), actor 5, squad 0 (trace 5421): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5309. Next observer evidence: {'until': 29.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.078880982219708, 'next_transition': 5487}.
<a id="trace-5487"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 5487): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 25.00s, trace 5142. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06790009528021695, 'next_transition': 8304}.
<a id="trace-8033"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 8033): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 25.00s, trace 5142. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06790009528021695, 'next_transition': 8304}.
<a id="trace-8034"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 8034): MoveTactically. Knowledge: actor memory at 25.00s, trace 5142. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06790009528021695, 'next_transition': 8304}.
<a id="trace-8035"></a>
- 29.55s–29.55s (×1), actor 0, squad 0 (trace 8035): contact cover complete: assessment resumes closure. Knowledge: actor memory at 25.00s, trace 5142. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06790009528021695, 'next_transition': 8304}.
<a id="trace-8304"></a>
<a id="trace-8306"></a>
<a id="trace-8406"></a>
<a id="trace-8408"></a>
<a id="trace-8440"></a>
<a id="trace-8442"></a>
<a id="trace-8498"></a>
<a id="trace-8500"></a>
<a id="trace-8526"></a>
<a id="trace-8528"></a>
<a id="trace-8624"></a>
<a id="trace-8626"></a>
<a id="trace-8660"></a>
<a id="trace-8662"></a>
<a id="trace-8721"></a>
<a id="trace-8723"></a>
<a id="trace-8764"></a>
<a id="trace-8766"></a>
<a id="trace-8893"></a>
<a id="trace-8895"></a>
<a id="trace-9016"></a>
<a id="trace-9018"></a>
<a id="trace-9120"></a>
<a id="trace-9122"></a>
<a id="trace-9160"></a>
<a id="trace-9162"></a>
<a id="trace-9225"></a>
<a id="trace-9227"></a>
<a id="trace-9250"></a>
<a id="trace-9252"></a>
- 29.75s–38.75s (×30), actor 5, squad 0 (trace 8304): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5309. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07016292775568866, 'next_transition': 8406}.
<a id="trace-8941"></a>
- 35.65s–35.65s (×1), actor 8, squad 1 (trace 8941): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 8804. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.212766681893959, 'next_transition': 9259}.
<a id="trace-8942"></a>
- 35.65s–35.65s (×1), actor 8, squad 1 (trace 8942): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 8804. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.212766681893959, 'next_transition': 9259}.
<a id="trace-9259"></a>
- 38.75s–38.75s (×1), actor 8, squad 1 (trace 9259): NeedSupport. Knowledge: actor memory at 35.00s, trace 8804. Next observer evidence: {'until': 51, 'shots': 0, 'casualties': 0, 'mean_displacement': 12.822773543660514, 'next_transition': 10649}.
<a id="trace-9281"></a>
- 39.05s–39.05s (×1), actor 0, squad 0 (trace 9281): NeedSupport. Knowledge: actor memory at 35.00s, trace 8796. Next observer evidence: {'until': 39.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4340592275419949, 'next_transition': 9321}.
<a id="trace-9321"></a>
<a id="trace-9323"></a>
<a id="trace-9431"></a>
<a id="trace-9433"></a>
- 39.75s–40.25s (×4), actor 5, squad 0 (trace 9321): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8801. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30171451091959023, 'next_transition': 9431}.
<a id="trace-653"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (events line 653): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9446"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 9446): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.852254 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 9446. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20123848114773726, 'next_transition': 9488}.
<a id="trace-9447"></a>
- 40.35s–40.35s (×1), actor 5, squad 0 (trace 9447): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.852254 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 40.35s, trace 9447. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20123848114773726, 'next_transition': 9488}.
<a id="trace-9488"></a>
<a id="trace-9490"></a>
<a id="trace-9525"></a>
<a id="trace-9527"></a>
<a id="trace-9561"></a>
<a id="trace-9563"></a>
<a id="trace-9597"></a>
<a id="trace-9599"></a>
<a id="trace-9618"></a>
<a id="trace-9620"></a>
<a id="trace-9635"></a>
<a id="trace-9637"></a>
<a id="trace-9654"></a>
<a id="trace-9656"></a>
- 40.75s–43.75s (×14), actor 5, squad 0 (trace 9488): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.35s, trace 9447. Next observer evidence: {'until': 41.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8501922193768808, 'next_transition': 9525}.
<a id="trace-9686"></a>
- 44.50s–44.50s (×1), actor 1, squad 0 (trace 9686): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 40.00s, trace 9340. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8379012836179057, 'next_transition': 10069}.
<a id="trace-10069"></a>
<a id="trace-10071"></a>
<a id="trace-10097"></a>
<a id="trace-10099"></a>
<a id="trace-10126"></a>
<a id="trace-10128"></a>
<a id="trace-10156"></a>
<a id="trace-10158"></a>
<a id="trace-10175"></a>
<a id="trace-10177"></a>
- 45.75s–47.75s (×10), actor 5, squad 0 (trace 10069): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9971. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6875867593534691, 'next_transition': 10097}.
<a id="trace-10185"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10185): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 9967. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250599143742145, 'next_transition': 10477}.
<a id="trace-10443"></a>
- 47.85s–47.85s (×1), actor 1, squad 0 (trace 10443): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 45.00s, trace 9967. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5250599143742145, 'next_transition': 10477}.
<a id="trace-10477"></a>
<a id="trace-10498"></a>
<a id="trace-10519"></a>
<a id="trace-10610"></a>
<a id="trace-10629"></a>
<a id="trace-10631"></a>
<a id="trace-10727"></a>
<a id="trace-10729"></a>
<a id="trace-10775"></a>
<a id="trace-10777"></a>
<a id="trace-10795"></a>
<a id="trace-10797"></a>
- 48.75s–52.75s (×12), actor 5, squad 0 (trace 10477): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9971. Next observer evidence: {'until': 49.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4254415826425963, 'next_transition': 10498}.
<a id="trace-10649"></a>
- 51.10s–51.10s (×1), actor 8, squad 1 (trace 10649): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 50.00s, trace 10546. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.883699703972296, 'next_transition': 12373}.
<a id="trace-10666"></a>
- 51.10s–51.10s (×1), actor 8, squad 1 (trace 10666): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 50.00s, trace 10546. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.883699703972296, 'next_transition': 12373}.
<a id="trace-10816"></a>
- 53.15s–53.15s (×1), actor 1, squad 0 (trace 10816): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2099914223002363, 'next_transition': 10825}.
<a id="trace-10825"></a>
<a id="trace-10827"></a>
<a id="trace-10843"></a>
<a id="trace-10845"></a>
- 53.25s–53.75s (×4), actor 5, squad 0 (trace 10825): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10543. Next observer evidence: {'until': 53.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199991023125566, 'next_transition': 10843}.
<a id="trace-10855"></a>
- 53.90s–53.90s (×1), actor 1, squad 0 (trace 10855): Reorganise: completed/failed drill. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5838324219188611, 'next_transition': 11198}.
<a id="trace-10860"></a>
- 53.90s–53.90s (×1), actor 1, squad 0 (trace 10860): MoveTactically. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5838324219188611, 'next_transition': 11198}.
<a id="trace-10861"></a>
- 53.90s–53.90s (×1), actor 1, squad 0 (trace 10861): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5838324219188611, 'next_transition': 11198}.
<a id="trace-11198"></a>
<a id="trace-11200"></a>
<a id="trace-11223"></a>
<a id="trace-11225"></a>
- 54.25s–54.75s (×4), actor 5, squad 0 (trace 11198): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10543. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4525717257780825, 'next_transition': 11223}.
<a id="trace-11232"></a>
- 54.75s–54.75s (×1), actor 1, squad 0 (trace 11232): ReactToContact: cover and return fire. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6094678502102248, 'next_transition': 11684}.
<a id="trace-11233"></a>
- 54.75s–54.75s (×1), actor 1, squad 0 (trace 11233): new contact inside 100 m. Knowledge: actor memory at 50.00s, trace 10539. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6094678502102248, 'next_transition': 11684}.
<a id="trace-11684"></a>
<a id="trace-11686"></a>
<a id="trace-11726"></a>
<a id="trace-11728"></a>
<a id="trace-11766"></a>
<a id="trace-11768"></a>
<a id="trace-11797"></a>
<a id="trace-11799"></a>
<a id="trace-11828"></a>
<a id="trace-11830"></a>
<a id="trace-11858"></a>
<a id="trace-11860"></a>
<a id="trace-11875"></a>
<a id="trace-11877"></a>
- 55.75s–58.75s (×14), actor 5, squad 0 (trace 11684): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 11570. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4097830578251, 'next_transition': 11726}.
<a id="trace-11887"></a>
- 59.05s–59.05s (×1), actor 1, squad 0 (trace 11887): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 55.00s, trace 11567. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999979899451673, 'next_transition': 12176}.
<a id="trace-11888"></a>
- 59.05s–59.05s (×1), actor 1, squad 0 (trace 11888): rearward bound: one stationary suppressing element. Knowledge: actor memory at 55.00s, trace 11567. Next observer evidence: {'until': 59.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999979899451673, 'next_transition': 12176}.
<a id="trace-12176"></a>
<a id="trace-12178"></a>
<a id="trace-12195"></a>
<a id="trace-12197"></a>
<a id="trace-12296"></a>
<a id="trace-12298"></a>
<a id="trace-12325"></a>
<a id="trace-12327"></a>
<a id="trace-12356"></a>
<a id="trace-12358"></a>
<a id="trace-12382"></a>
<a id="trace-12384"></a>
<a id="trace-12417"></a>
<a id="trace-12419"></a>
<a id="trace-12443"></a>
<a id="trace-12445"></a>
<a id="trace-12463"></a>
<a id="trace-12465"></a>
<a id="trace-12485"></a>
<a id="trace-12487"></a>
<a id="trace-12516"></a>
<a id="trace-12518"></a>
<a id="trace-12532"></a>
<a id="trace-12534"></a>
<a id="trace-12623"></a>
<a id="trace-12625"></a>
<a id="trace-12639"></a>
<a id="trace-12641"></a>
<a id="trace-12707"></a>
<a id="trace-12709"></a>
<a id="trace-12729"></a>
<a id="trace-12731"></a>
<a id="trace-12799"></a>
<a id="trace-12801"></a>
<a id="trace-12818"></a>
<a id="trace-12820"></a>
<a id="trace-12907"></a>
<a id="trace-12909"></a>
<a id="trace-12922"></a>
<a id="trace-12924"></a>
<a id="trace-12950"></a>
<a id="trace-12952"></a>
- 59.25s–71.25s (×42), actor 5, squad 0 (trace 12176): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 11570. Next observer evidence: {'until': 59.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.536933538524442, 'next_transition': 12195}.
<a id="trace-12373"></a>
- 61.60s–61.60s (×1), actor 8, squad 1 (trace 12373): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 60.00s, trace 12222. Next observer evidence: {'until': 81.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2050054434229875, 'next_transition': 1288}.
<a id="trace-12965"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 12965): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 12830. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6974599296344836, 'next_transition': 13194}.
<a id="trace-13007"></a>
- 71.65s–71.65s (×1), actor 1, squad 0 (trace 13007): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 12830. Next observer evidence: {'until': 72.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6974599296344836, 'next_transition': 13194}.
<a id="trace-13194"></a>
<a id="trace-13196"></a>
<a id="trace-13261"></a>
<a id="trace-13263"></a>
<a id="trace-13274"></a>
<a id="trace-13276"></a>
<a id="trace-13309"></a>
<a id="trace-13311"></a>
<a id="trace-13328"></a>
<a id="trace-13330"></a>
<a id="trace-13410"></a>
<a id="trace-13412"></a>
<a id="trace-13424"></a>
<a id="trace-13426"></a>
<a id="trace-13450"></a>
<a id="trace-13452"></a>
<a id="trace-13469"></a>
<a id="trace-13471"></a>
<a id="trace-13495"></a>
<a id="trace-13497"></a>
<a id="trace-13509"></a>
<a id="trace-13511"></a>
<a id="trace-13548"></a>
<a id="trace-13550"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13709"></a>
<a id="trace-13711"></a>
<a id="trace-13758"></a>
<a id="trace-13760"></a>
<a id="trace-13773"></a>
<a id="trace-13775"></a>
<a id="trace-13797"></a>
<a id="trace-13799"></a>
<a id="trace-13810"></a>
<a id="trace-13812"></a>
<a id="trace-13836"></a>
<a id="trace-13838"></a>
<a id="trace-13852"></a>
<a id="trace-13854"></a>
<a id="trace-13936"></a>
<a id="trace-13938"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
- 72.25s–86.75s (×44), actor 5, squad 0 (trace 13194): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12833. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2859149949252107, 'next_transition': 13261}.
<a id="trace-1288"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1288): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13738"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 13738): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.200842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 13738. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13994}.
<a id="trace-13739"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 13739): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.200842 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.80s, trace 13739. Next observer evidence: {'until': 87, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13994}.
<a id="trace-13994"></a>
- 87.00s–87.00s (×1), actor 8, squad 1 (trace 13994): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 13871. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14352}.
<a id="trace-13995"></a>
- 87.00s–87.00s (×1), actor 8, squad 1 (trace 13995): new contact inside 100 m. Knowledge: actor memory at 85.00s, trace 13871. Next observer evidence: {'until': 90.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14352}.
<a id="trace-14031"></a>
- 87.25s–87.25s (×1), actor 1, squad 0 (trace 14031): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 13865. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120391125158686, 'next_transition': 14159}.
<a id="trace-14093"></a>
- 87.25s–87.25s (×1), actor 1, squad 0 (trace 14093): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 13865. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120391125158686, 'next_transition': 14159}.
<a id="trace-14159"></a>
<a id="trace-14161"></a>
<a id="trace-14188"></a>
<a id="trace-14190"></a>
<a id="trace-14236"></a>
<a id="trace-14238"></a>
<a id="trace-14257"></a>
<a id="trace-14259"></a>
<a id="trace-14345"></a>
<a id="trace-14347"></a>
<a id="trace-14360"></a>
<a id="trace-14362"></a>
<a id="trace-14377"></a>
<a id="trace-14379"></a>
<a id="trace-14390"></a>
<a id="trace-14392"></a>
<a id="trace-14410"></a>
<a id="trace-14412"></a>
<a id="trace-14425"></a>
<a id="trace-14427"></a>
<a id="trace-14446"></a>
<a id="trace-14448"></a>
<a id="trace-14464"></a>
<a id="trace-14466"></a>
<a id="trace-14493"></a>
<a id="trace-14495"></a>
<a id="trace-14586"></a>
<a id="trace-14588"></a>
<a id="trace-14610"></a>
<a id="trace-14612"></a>
<a id="trace-14626"></a>
<a id="trace-14628"></a>
<a id="trace-14647"></a>
<a id="trace-14649"></a>
<a id="trace-14660"></a>
<a id="trace-14662"></a>
<a id="trace-14686"></a>
<a id="trace-14688"></a>
<a id="trace-14700"></a>
<a id="trace-14702"></a>
<a id="trace-14717"></a>
<a id="trace-14719"></a>
- 87.75s–99.25s (×42), actor 5, squad 0 (trace 14159): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13868. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35804985906071324, 'next_transition': 14188}.
<a id="trace-14352"></a>
- 90.35s–90.35s (×1), actor 8, squad 1 (trace 14352): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 14276. Next observer evidence: {'until': 109.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1849}.
<a id="trace-14354"></a>
- 90.35s–90.35s (×1), actor 8, squad 1 (trace 14354): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 90.00s, trace 14276. Next observer evidence: {'until': 109.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1849}.
<a id="trace-14724"></a>
- 99.25s–99.25s (×1), actor 1, squad 0 (trace 14724): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 95.00s, trace 14504. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.558019214927677, 'next_transition': 15008}.
<a id="trace-14725"></a>
- 99.25s–99.25s (×1), actor 1, squad 0 (trace 14725): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 95.00s, trace 14504. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.558019214927677, 'next_transition': 15008}.
<a id="trace-15008"></a>
<a id="trace-15010"></a>
- 101.25s–101.25s (×2), actor 5, squad 0 (trace 15008): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14892. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5711964710696767, 'next_transition': 15034}.
<a id="trace-15015"></a>
- 101.25s–101.25s (×1), actor 1, squad 0 (trace 15015): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 100.00s, trace 14889. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5711964710696767, 'next_transition': 15034}.
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15071"></a>
<a id="trace-15073"></a>
<a id="trace-15096"></a>
<a id="trace-15098"></a>
<a id="trace-15133"></a>
<a id="trace-15135"></a>
<a id="trace-15159"></a>
<a id="trace-15161"></a>
<a id="trace-15278"></a>
<a id="trace-15280"></a>
<a id="trace-15302"></a>
<a id="trace-15304"></a>
<a id="trace-15314"></a>
<a id="trace-15316"></a>
<a id="trace-15330"></a>
<a id="trace-15332"></a>
<a id="trace-15357"></a>
<a id="trace-15359"></a>
- 101.75s–109.25s (×20), actor 5, squad 0 (trace 15034): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14892. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8567755007308931, 'next_transition': 15071}.
<a id="trace-1848"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (events line 1848): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15375}.
<a id="trace-1849"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (events line 1849): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15570}.
<a id="trace-15367"></a>
- 109.45s–109.45s (×1), actor 5, squad 0 (trace 15367): renew committed intent (75 s lifetime). Knowledge: actor memory at 109.45s, trace 15367. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15375}.
<a id="trace-15368"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 15368): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.293073 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15368. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15570}.
<a id="trace-15369"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 15369): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.293073 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 15369. Next observer evidence: {'until': 114.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15570}.
<a id="trace-15375"></a>
<a id="trace-15377"></a>
<a id="trace-15467"></a>
<a id="trace-15469"></a>
<a id="trace-15487"></a>
<a id="trace-15489"></a>
<a id="trace-15500"></a>
<a id="trace-15502"></a>
<a id="trace-15521"></a>
<a id="trace-15523"></a>
<a id="trace-15536"></a>
<a id="trace-15538"></a>
<a id="trace-15545"></a>
<a id="trace-15547"></a>
<a id="trace-15560"></a>
<a id="trace-15562"></a>
- 109.75s–114.25s (×16), actor 5, squad 0 (trace 15375): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 109.45s, trace 15369. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15467}.
<a id="trace-15570"></a>
- 114.65s–114.65s (×1), actor 8, squad 1 (trace 15570): MoveTactically. Knowledge: actor memory at 110.00s, trace 15391. Next observer evidence: None.
<a id="trace-15571"></a>
- 114.65s–114.65s (×1), actor 8, squad 1 (trace 15571): received platoon directive. Knowledge: actor memory at 110.00s, trace 15391. Next observer evidence: None.
<a id="trace-15593"></a>
- 114.70s–114.70s (×1), actor 8, squad 1 (trace 15593): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 15391. Next observer evidence: {'until': 124.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.99996091112488, 'next_transition': 16449}.
<a id="trace-15652"></a>
- 114.85s–114.85s (×1), actor 1, squad 0 (trace 15652): MoveTactically. Knowledge: actor memory at 110.00s, trace 15385. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15798}.
<a id="trace-15653"></a>
- 114.85s–114.85s (×1), actor 1, squad 0 (trace 15653): received platoon directive. Knowledge: actor memory at 110.00s, trace 15385. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15798}.
<a id="trace-15798"></a>
<a id="trace-15800"></a>
<a id="trace-15820"></a>
<a id="trace-15822"></a>
<a id="trace-15859"></a>
<a id="trace-15861"></a>
<a id="trace-15917"></a>
<a id="trace-15919"></a>
<a id="trace-15941"></a>
<a id="trace-15943"></a>
<a id="trace-15964"></a>
<a id="trace-15966"></a>
<a id="trace-15999"></a>
<a id="trace-16001"></a>
<a id="trace-16083"></a>
<a id="trace-16085"></a>
<a id="trace-16099"></a>
<a id="trace-16101"></a>
<a id="trace-16128"></a>
<a id="trace-16130"></a>
<a id="trace-16141"></a>
<a id="trace-16143"></a>
- 115.25s–121.75s (×22), actor 5, squad 0 (trace 15798): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 15728. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15820}.
<a id="trace-16153"></a>
- 121.85s–121.85s (×1), actor 1, squad 0 (trace 16153): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 16008. Next observer evidence: {'until': 122.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16323}.
<a id="trace-16323"></a>
<a id="trace-16325"></a>
<a id="trace-16369"></a>
<a id="trace-16371"></a>
<a id="trace-16384"></a>
<a id="trace-16386"></a>
<a id="trace-16410"></a>
<a id="trace-16412"></a>
<a id="trace-16433"></a>
<a id="trace-16435"></a>
<a id="trace-16600"></a>
<a id="trace-16602"></a>
<a id="trace-16626"></a>
<a id="trace-16628"></a>
<a id="trace-16645"></a>
<a id="trace-16647"></a>
<a id="trace-16666"></a>
<a id="trace-16668"></a>
<a id="trace-16683"></a>
<a id="trace-16685"></a>
<a id="trace-16726"></a>
<a id="trace-16728"></a>
<a id="trace-16745"></a>
<a id="trace-16747"></a>
<a id="trace-16765"></a>
<a id="trace-16767"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16889"></a>
<a id="trace-16891"></a>
<a id="trace-16904"></a>
<a id="trace-16906"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-17102"></a>
<a id="trace-17104"></a>
<a id="trace-17115"></a>
<a id="trace-17117"></a>
- 122.25s–133.80s (×38), actor 5, squad 0 (trace 16323): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 16011. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.24779878416646242, 'next_transition': 16369}.
<a id="trace-16449"></a>
- 124.90s–124.90s (×1), actor 8, squad 1 (trace 16449): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 16014. Next observer evidence: None.
<a id="trace-16452"></a>
- 124.95s–124.95s (×1), actor 8, squad 1 (trace 16452): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 16014. Next observer evidence: {'until': 132.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.738895477281496, 'next_transition': 16939}.
<a id="trace-16939"></a>
- 132.70s–132.70s (×1), actor 8, squad 1 (trace 16939): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 16779. Next observer evidence: None.
<a id="trace-17025"></a>
- 132.75s–132.75s (×1), actor 8, squad 1 (trace 17025): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 16779. Next observer evidence: {'until': 142.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.768127479834767, 'next_transition': 17700}.
<a id="trace-17132"></a>
- 134.20s–134.20s (×1), actor 1, squad 0 (trace 17132): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 16773. Next observer evidence: {'until': 134.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679135112354812, 'next_transition': 17246}.
<a id="trace-17246"></a>
<a id="trace-17248"></a>
<a id="trace-17356"></a>
<a id="trace-17358"></a>
<a id="trace-17379"></a>
<a id="trace-17381"></a>
<a id="trace-17400"></a>
<a id="trace-17402"></a>
<a id="trace-17442"></a>
<a id="trace-17444"></a>
<a id="trace-17468"></a>
<a id="trace-17470"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17505"></a>
<a id="trace-17507"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17600"></a>
<a id="trace-17602"></a>
<a id="trace-17620"></a>
<a id="trace-17622"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17655"></a>
<a id="trace-17657"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17792"></a>
<a id="trace-17794"></a>
<a id="trace-17806"></a>
<a id="trace-17808"></a>
- 134.80s–143.80s (×32), actor 5, squad 0 (trace 17246): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 130.00s, trace 16776. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3234096396927298, 'next_transition': 17356}.
<a id="trace-17700"></a>
- 142.90s–142.90s (×1), actor 8, squad 1 (trace 17700): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 140.00s, trace 17533. Next observer evidence: {'until': 150, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.647508016254832, 'next_transition': 18355}.
<a id="trace-17821"></a>
- 144.05s–144.05s (×1), actor 1, squad 0 (trace 17821): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 140.00s, trace 17527. Next observer evidence: {'until': 144.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.13122687974312383, 'next_transition': 17902}.
<a id="trace-17902"></a>
<a id="trace-17904"></a>
<a id="trace-17998"></a>
<a id="trace-18000"></a>
- 144.80s–145.30s (×4), actor 5, squad 0 (trace 17902): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 140.00s, trace 17530. Next observer evidence: {'until': 145.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7578510775769586, 'next_transition': 17998}.
<a id="trace-18022"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 18022): ReactToContact: cover and return fire. Knowledge: actor memory at 145.00s, trace 17916. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19211536771683194, 'next_transition': 18152}.
<a id="trace-18023"></a>
- 146.05s–146.05s (×1), actor 1, squad 0 (trace 18023): new contact inside 100 m. Knowledge: actor memory at 145.00s, trace 17916. Next observer evidence: {'until': 146.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.19211536771683194, 'next_transition': 18152}.
<a id="trace-18152"></a>
<a id="trace-18154"></a>
<a id="trace-18172"></a>
<a id="trace-18174"></a>
<a id="trace-18201"></a>
<a id="trace-18203"></a>
<a id="trace-18252"></a>
<a id="trace-18254"></a>
<a id="trace-18277"></a>
<a id="trace-18279"></a>
<a id="trace-18322"></a>
<a id="trace-18324"></a>
- 146.30s–149.80s (×12), actor 5, squad 0 (trace 18152): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 145.00s, trace 17919. Next observer evidence: {'until': 146.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3496005529094715, 'next_transition': 18172}.
<a id="trace-18329"></a>
- 149.80s–149.80s (×1), actor 1, squad 0 (trace 18329): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 145.00s, trace 17916. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18607}.
<a id="trace-18355"></a>
- 150.10s–150.10s (×1), actor 8, squad 1 (trace 18355): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 18340. Next observer evidence: None.
<a id="trace-18445"></a>
- 150.10s–150.10s (×1), actor 8, squad 1 (trace 18445): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 150.00s, trace 18340. Next observer evidence: None.
<a id="trace-18451"></a>
- 150.15s–150.15s (×1), actor 8, squad 1 (trace 18451): recovering: retry accepted element corridor in column. Knowledge: actor memory at 150.00s, trace 18340. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18594}.
<a id="trace-18541"></a>
- 150.15s–150.15s (×1), actor 8, squad 1 (trace 18541): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 150.00s, trace 18340. Next observer evidence: {'until': 150.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18594}.
<a id="trace-18594"></a>
- 150.20s–150.20s (×1), actor 8, squad 1 (trace 18594): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 150.00s, trace 18340. Next observer evidence: {'until': 164.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2445}.
<a id="trace-18607"></a>
<a id="trace-18609"></a>
- 150.30s–150.30s (×2), actor 5, squad 0 (trace 18607): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18337. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-18615"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 18615): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-18887"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 18887): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-18888"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 18888): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-18987"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 18987): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-18988"></a>
- 150.30s–150.30s (×1), actor 1, squad 0 (trace 18988): Assaulting. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 150.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19018}.
<a id="trace-19018"></a>
<a id="trace-19020"></a>
<a id="trace-19039"></a>
<a id="trace-19041"></a>
- 150.80s–151.30s (×4), actor 5, squad 0 (trace 19018): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18337. Next observer evidence: {'until': 151.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19039}.
<a id="trace-19048"></a>
- 151.30s–151.30s (×1), actor 1, squad 0 (trace 19048): Reorganise: completed/failed drill. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 152.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29569999999999946, 'next_transition': 19244}.
<a id="trace-19053"></a>
- 151.30s–151.30s (×1), actor 1, squad 0 (trace 19053): MoveTactically. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 152.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29569999999999946, 'next_transition': 19244}.
<a id="trace-19054"></a>
- 151.30s–151.30s (×1), actor 1, squad 0 (trace 19054): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 150.00s, trace 18334. Next observer evidence: {'until': 152.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29569999999999946, 'next_transition': 19244}.
<a id="trace-19244"></a>
<a id="trace-19246"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19286"></a>
<a id="trace-19288"></a>
<a id="trace-19319"></a>
<a id="trace-19321"></a>
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19414"></a>
<a id="trace-19416"></a>
- 152.80s–155.30s (×12), actor 5, squad 0 (trace 19244): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 18337. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19271}.
<a id="trace-19424"></a>
- 155.40s–155.40s (×1), actor 1, squad 0 (trace 19424): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 19344. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03011666666666694, 'next_transition': 19488}.
<a id="trace-19488"></a>
<a id="trace-19490"></a>
<a id="trace-19511"></a>
<a id="trace-19513"></a>
<a id="trace-19533"></a>
<a id="trace-19535"></a>
<a id="trace-19569"></a>
<a id="trace-19571"></a>
<a id="trace-19647"></a>
<a id="trace-19649"></a>
<a id="trace-19688"></a>
<a id="trace-19690"></a>
<a id="trace-19720"></a>
<a id="trace-19722"></a>
<a id="trace-19750"></a>
<a id="trace-19752"></a>
- 155.80s–159.80s (×16), actor 5, squad 0 (trace 19488): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 19347. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12304999999999922, 'next_transition': 19511}.
<a id="trace-19784"></a>
- 160.05s–160.05s (×1), actor 1, squad 0 (trace 19784): ReactToContact: cover and return fire. Knowledge: actor memory at 160.00s, trace 19763. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.105006196907082, 'next_transition': 19957}.
<a id="trace-19785"></a>
- 160.05s–160.05s (×1), actor 1, squad 0 (trace 19785): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 160.00s, trace 19763. Next observer evidence: {'until': 160.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.105006196907082, 'next_transition': 19957}.
<a id="trace-19957"></a>
<a id="trace-19959"></a>
<a id="trace-19983"></a>
<a id="trace-19985"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20061"></a>
<a id="trace-20063"></a>
<a id="trace-20079"></a>
<a id="trace-20081"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20132"></a>
<a id="trace-20134"></a>
- 160.30s–164.30s (×14), actor 5, squad 0 (trace 19957): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 19766. Next observer evidence: {'until': 160.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.36750625645826657, 'next_transition': 19983}.
<a id="trace-20141"></a>
- 164.45s–164.45s (×1), actor 1, squad 0 (trace 20141): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 160.00s, trace 19763. Next observer evidence: {'until': 165.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300039568129719, 'next_transition': 20231}.
<a id="trace-2445"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (events line 2445): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20376}.
<a id="trace-20147"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (trace 20147): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.498505 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 20147. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20376}.
<a id="trace-20148"></a>
- 164.75s–164.75s (×1), actor 5, squad 1 (trace 20148): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.498505 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.75s, trace 20148. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20376}.
<a id="trace-20231"></a>
<a id="trace-20233"></a>
<a id="trace-20244"></a>
<a id="trace-20246"></a>
<a id="trace-20300"></a>
<a id="trace-20302"></a>
<a id="trace-20311"></a>
<a id="trace-20313"></a>
<a id="trace-20329"></a>
<a id="trace-20331"></a>
<a id="trace-20340"></a>
<a id="trace-20342"></a>
- 165.30s–168.80s (×12), actor 5, squad 0 (trace 20231): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 20165. Next observer evidence: {'until': 165.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7559752800191275, 'next_transition': 20244}.
<a id="trace-20362"></a>
- 169.45s–169.45s (×1), actor 1, squad 0 (trace 20362): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 165.00s, trace 20163. Next observer evidence: {'until': 169.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20366}.
<a id="trace-20366"></a>
<a id="trace-20368"></a>
<a id="trace-20539"></a>
<a id="trace-20541"></a>
<a id="trace-20555"></a>
<a id="trace-20557"></a>
<a id="trace-20588"></a>
<a id="trace-20590"></a>
<a id="trace-20610"></a>
<a id="trace-20612"></a>
<a id="trace-20619"></a>
<a id="trace-20621"></a>
<a id="trace-20633"></a>
<a id="trace-20635"></a>
<a id="trace-20656"></a>
<a id="trace-20658"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20741"></a>
<a id="trace-20743"></a>
<a id="trace-20752"></a>
<a id="trace-20754"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20803"></a>
<a id="trace-20805"></a>
<a id="trace-20817"></a>
<a id="trace-20819"></a>
- 169.80s–178.30s (×30), actor 5, squad 0 (trace 20366): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 165.00s, trace 20165. Next observer evidence: {'until': 170.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20539}.
<a id="trace-20376"></a>
- 169.95s–169.95s (×1), actor 8, squad 1 (trace 20376): received platoon directive. Knowledge: actor memory at 165.00s, trace 20168. Next observer evidence: {'until': 170, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20487}.
<a id="trace-20466"></a>
- 169.95s–169.95s (×1), actor 8, squad 1 (trace 20466): unavailable formation slots: contract to column on accepted route. Knowledge: actor memory at 165.00s, trace 20168. Next observer evidence: {'until': 170, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20487}.
<a id="trace-20487"></a>
- 170.00s–170.00s (×1), actor 8, squad 1 (trace 20487): Blocked: local route/column remedies exhausted; column position unavailable. Knowledge: actor memory at 170.00s, trace 20476. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2510}.
<a id="trace-2468"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 2468): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20839}.
<a id="trace-20825"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 20825): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.55s, trace 20825. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20839}.
<a id="trace-20839"></a>
<a id="trace-20841"></a>
<a id="trace-20850"></a>
<a id="trace-20852"></a>
<a id="trace-20924"></a>
<a id="trace-20926"></a>
<a id="trace-20937"></a>
<a id="trace-20939"></a>
<a id="trace-20955"></a>
<a id="trace-20957"></a>
<a id="trace-20966"></a>
<a id="trace-20968"></a>
<a id="trace-20984"></a>
<a id="trace-20986"></a>
<a id="trace-20992"></a>
<a id="trace-20994"></a>
<a id="trace-21007"></a>
<a id="trace-21009"></a>
<a id="trace-21029"></a>
<a id="trace-21031"></a>
<a id="trace-21045"></a>
<a id="trace-21047"></a>
<a id="trace-21054"></a>
<a id="trace-21056"></a>
<a id="trace-21128"></a>
<a id="trace-21130"></a>
- 179.30s–185.30s (×26), actor 5, squad 0 (trace 20839): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 20825. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20850}.
<a id="trace-21135"></a>
- 185.45s–185.45s (×1), actor 1, squad 0 (trace 21135): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 185.00s, trace 21061. Next observer evidence: {'until': 185.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21139}.
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21155"></a>
<a id="trace-21157"></a>
<a id="trace-21166"></a>
<a id="trace-21168"></a>
<a id="trace-21184"></a>
<a id="trace-21186"></a>
<a id="trace-21204"></a>
<a id="trace-21206"></a>
<a id="trace-21216"></a>
<a id="trace-21218"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21244"></a>
<a id="trace-21246"></a>
<a id="trace-21328"></a>
<a id="trace-21330"></a>
<a id="trace-21341"></a>
<a id="trace-21343"></a>
<a id="trace-21360"></a>
<a id="trace-21362"></a>
<a id="trace-21371"></a>
<a id="trace-21373"></a>
<a id="trace-21388"></a>
<a id="trace-21390"></a>
<a id="trace-21399"></a>
<a id="trace-21401"></a>
<a id="trace-21412"></a>
<a id="trace-21414"></a>
<a id="trace-21420"></a>
<a id="trace-21422"></a>
<a id="trace-21434"></a>
<a id="trace-21436"></a>
<a id="trace-21443"></a>
<a id="trace-21445"></a>
<a id="trace-21520"></a>
<a id="trace-21522"></a>
<a id="trace-21534"></a>
<a id="trace-21536"></a>
<a id="trace-21554"></a>
<a id="trace-21556"></a>
<a id="trace-21567"></a>
<a id="trace-21569"></a>
<a id="trace-21807"></a>
<a id="trace-21809"></a>
<a id="trace-21820"></a>
<a id="trace-21822"></a>
<a id="trace-21836"></a>
<a id="trace-21838"></a>
<a id="trace-21851"></a>
<a id="trace-21853"></a>
<a id="trace-21939"></a>
<a id="trace-21941"></a>
<a id="trace-21961"></a>
<a id="trace-21963"></a>
<a id="trace-21976"></a>
<a id="trace-21978"></a>
<a id="trace-22002"></a>
<a id="trace-22004"></a>
<a id="trace-22015"></a>
<a id="trace-22017"></a>
<a id="trace-22041"></a>
<a id="trace-22043"></a>
<a id="trace-22066"></a>
<a id="trace-22068"></a>
<a id="trace-22091"></a>
<a id="trace-22093"></a>
<a id="trace-22168"></a>
<a id="trace-22170"></a>
<a id="trace-22178"></a>
<a id="trace-22180"></a>
<a id="trace-22202"></a>
<a id="trace-22204"></a>
<a id="trace-22218"></a>
<a id="trace-22220"></a>
<a id="trace-22238"></a>
<a id="trace-22240"></a>
<a id="trace-22462"></a>
<a id="trace-22464"></a>
<a id="trace-22481"></a>
<a id="trace-22483"></a>
<a id="trace-22516"></a>
<a id="trace-22518"></a>
<a id="trace-22643"></a>
<a id="trace-22645"></a>
<a id="trace-22685"></a>
<a id="trace-22687"></a>
<a id="trace-23146"></a>
<a id="trace-23148"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23231"></a>
<a id="trace-23233"></a>
<a id="trace-23256"></a>
<a id="trace-23258"></a>
<a id="trace-23301"></a>
<a id="trace-23303"></a>
<a id="trace-23340"></a>
<a id="trace-23342"></a>
<a id="trace-23351"></a>
<a id="trace-23353"></a>
<a id="trace-23438"></a>
<a id="trace-23440"></a>
<a id="trace-23687"></a>
<a id="trace-23689"></a>
<a id="trace-23732"></a>
<a id="trace-23734"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23790"></a>
<a id="trace-23792"></a>
<a id="trace-23813"></a>
<a id="trace-23815"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
<a id="trace-23895"></a>
<a id="trace-23897"></a>
<a id="trace-23908"></a>
<a id="trace-23910"></a>
<a id="trace-23934"></a>
<a id="trace-23936"></a>
<a id="trace-23960"></a>
<a id="trace-23962"></a>
<a id="trace-23977"></a>
<a id="trace-23979"></a>
<a id="trace-23987"></a>
<a id="trace-23989"></a>
<a id="trace-24002"></a>
<a id="trace-24004"></a>
<a id="trace-24012"></a>
<a id="trace-24014"></a>
<a id="trace-24084"></a>
<a id="trace-24095"></a>
<a id="trace-24108"></a>
<a id="trace-24134"></a>
<a id="trace-24142"></a>
<a id="trace-24159"></a>
<a id="trace-24167"></a>
<a id="trace-24184"></a>
<a id="trace-24259"></a>
<a id="trace-24270"></a>
<a id="trace-24279"></a>
<a id="trace-24293"></a>
<a id="trace-24299"></a>
<a id="trace-24319"></a>
<a id="trace-24329"></a>
<a id="trace-24336"></a>
<a id="trace-24404"></a>
<a id="trace-24422"></a>
<a id="trace-24431"></a>
<a id="trace-24445"></a>
<a id="trace-24451"></a>
<a id="trace-24465"></a>
<a id="trace-24471"></a>
<a id="trace-24482"></a>
<a id="trace-24491"></a>
<a id="trace-24567"></a>
<a id="trace-24583"></a>
<a id="trace-24604"></a>
<a id="trace-24617"></a>
<a id="trace-24638"></a>
<a id="trace-24648"></a>
<a id="trace-24655"></a>
<a id="trace-24723"></a>
<a id="trace-24733"></a>
<a id="trace-24745"></a>
<a id="trace-24779"></a>
- 185.80s–247.30s (×168), actor 5, squad 0 (trace 21139): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 21063. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21155}.
<a id="trace-2510"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (events line 2510): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21395"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 21395): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.338001 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 21395. Next observer evidence: {'until': 197.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21600}.
<a id="trace-21396"></a>
- 192.35s–192.35s (×1), actor 5, squad 1 (trace 21396): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.338001 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 192.35s, trace 21396. Next observer evidence: {'until': 197.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21600}.
<a id="trace-21600"></a>
- 197.55s–197.55s (×1), actor 8, squad 1 (trace 21600): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 21455. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.895827695558523, 'next_transition': 21947}.
<a id="trace-21601"></a>
- 197.55s–197.55s (×1), actor 8, squad 1 (trace 21601): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 21455. Next observer evidence: {'until': 200.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.895827695558523, 'next_transition': 21947}.
<a id="trace-21947"></a>
- 200.90s–200.90s (×1), actor 8, squad 1 (trace 21947): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 21866. Next observer evidence: {'until': 205.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.498682882179905, 'next_transition': 22187}.
<a id="trace-22187"></a>
- 205.95s–205.95s (×1), actor 8, squad 1 (trace 22187): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 205.00s, trace 22103. Next observer evidence: {'until': 207.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.022548763379045, 'next_transition': 22247}.
<a id="trace-22247"></a>
- 207.40s–207.40s (×1), actor 8, squad 1 (trace 22247): new contact inside 100 m. Knowledge: actor memory at 205.00s, trace 22103. Next observer evidence: {'until': 210.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8316500000000007, 'next_transition': 22679}.
<a id="trace-22679"></a>
- 210.75s–210.75s (×1), actor 8, squad 1 (trace 22679): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 210.00s, trace 22560. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13327654546266804, 'next_transition': 22697}.
<a id="trace-22697"></a>
- 210.85s–210.85s (×1), actor 8, squad 1 (trace 22697): new contact inside 100 m. Knowledge: actor memory at 210.00s, trace 22560. Next observer evidence: None.
<a id="trace-22907"></a>
- 210.90s–210.90s (×1), actor 8, squad 1 (trace 22907): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 210.00s, trace 22560. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09635230673008943, 'next_transition': 23330}.
<a id="trace-23330"></a>
- 214.25s–214.25s (×1), actor 8, squad 1 (trace 23330): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 210.00s, trace 22560. Next observer evidence: {'until': 216, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0019499999999998963, 'next_transition': 23489}.
<a id="trace-23489"></a>
- 216.05s–216.05s (×1), actor 8, squad 1 (trace 23489): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 215.00s, trace 23366. Next observer evidence: {'until': 246, 'shots': 0, 'casualties': 2, 'mean_displacement': 0.4371999999999998, 'next_transition': None}.
<a id="trace-23490"></a>
- 216.05s–216.05s (×1), actor 8, squad 1 (trace 23490): rearward bound: one stationary suppressing element. Knowledge: actor memory at 215.00s, trace 23366. Next observer evidence: {'until': 246, 'shots': 0, 'casualties': 2, 'mean_displacement': 0.4371999999999998, 'next_transition': None}.
<a id="trace-2800"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (events line 2800): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24785"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 24785): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.60s, trace 24785. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24807}.
<a id="trace-24807"></a>
<a id="trace-24813"></a>
<a id="trace-24823"></a>
<a id="trace-24830"></a>
<a id="trace-24898"></a>
<a id="trace-24904"></a>
<a id="trace-24915"></a>
<a id="trace-24924"></a>
<a id="trace-24939"></a>
<a id="trace-24946"></a>
<a id="trace-24962"></a>
<a id="trace-24968"></a>
<a id="trace-24985"></a>
<a id="trace-25000"></a>
<a id="trace-25072"></a>
<a id="trace-25079"></a>
<a id="trace-25098"></a>
<a id="trace-25111"></a>
<a id="trace-25117"></a>
<a id="trace-25128"></a>
<a id="trace-25134"></a>
<a id="trace-25153"></a>
<a id="trace-25235"></a>
<a id="trace-25250"></a>
- 248.30s–261.30s (×24), actor 5, squad 0 (trace 24807): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.60s, trace 24785. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24813}.
<a id="trace-25258"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (trace 25258): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.931951 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25258. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2839}.
<a id="trace-25259"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (trace 25259): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.931951 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 261.40s, trace 25259. Next observer evidence: {'until': 261.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2839}.
<a id="trace-2839"></a>
- 261.40s–261.40s (×1), actor 5, squad 0 (events line 2839): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 262.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25291}.
<a id="trace-25291"></a>
<a id="trace-25302"></a>
<a id="trace-25308"></a>
<a id="trace-25318"></a>
<a id="trace-25325"></a>
<a id="trace-25410"></a>
<a id="trace-25422"></a>
<a id="trace-25450"></a>
- 262.80s–267.80s (×8), actor 5, squad 0 (trace 25291): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 261.40s, trace 25259. Next observer evidence: {'until': 263.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25302}.
<a id="trace-25467"></a>
- 268.45s–268.45s (×1), actor 1, squad 0 (trace 25467): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 265.00s, trace 25330. Next observer evidence: {'until': 268.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25470}.
<a id="trace-25470"></a>
<a id="trace-25486"></a>
<a id="trace-25496"></a>
<a id="trace-25570"></a>
<a id="trace-25589"></a>
<a id="trace-25604"></a>
<a id="trace-25610"></a>
<a id="trace-25624"></a>
<a id="trace-25634"></a>
<a id="trace-25648"></a>
<a id="trace-25657"></a>
<a id="trace-25727"></a>
<a id="trace-25749"></a>
<a id="trace-25762"></a>
<a id="trace-25776"></a>
<a id="trace-25782"></a>
<a id="trace-25793"></a>
<a id="trace-25801"></a>
<a id="trace-25811"></a>
<a id="trace-25821"></a>
<a id="trace-25893"></a>
<a id="trace-25914"></a>
<a id="trace-25940"></a>
<a id="trace-25948"></a>
<a id="trace-25962"></a>
<a id="trace-25968"></a>
<a id="trace-25981"></a>
<a id="trace-25989"></a>
<a id="trace-26059"></a>
<a id="trace-26065"></a>
<a id="trace-26079"></a>
<a id="trace-26088"></a>
<a id="trace-26106"></a>
<a id="trace-26114"></a>
<a id="trace-26125"></a>
<a id="trace-26134"></a>
<a id="trace-26145"></a>
<a id="trace-26153"></a>
<a id="trace-26222"></a>
<a id="trace-26244"></a>
<a id="trace-26254"></a>
<a id="trace-26269"></a>
<a id="trace-26276"></a>
<a id="trace-26318"></a>
<a id="trace-26394"></a>
<a id="trace-26407"></a>
<a id="trace-26417"></a>
<a id="trace-26431"></a>
<a id="trace-26453"></a>
<a id="trace-26461"></a>
<a id="trace-26472"></a>
<a id="trace-26553"></a>
<a id="trace-26562"></a>
<a id="trace-26575"></a>
<a id="trace-26597"></a>
<a id="trace-26605"></a>
<a id="trace-26618"></a>
<a id="trace-26641"></a>
<a id="trace-26715"></a>
<a id="trace-26723"></a>
<a id="trace-26765"></a>
<a id="trace-26806"></a>
<a id="trace-26876"></a>
<a id="trace-26882"></a>
<a id="trace-26894"></a>
<a id="trace-26906"></a>
<a id="trace-26922"></a>
<a id="trace-26949"></a>
<a id="trace-26968"></a>
<a id="trace-26975"></a>
<a id="trace-27049"></a>
<a id="trace-27061"></a>
- 268.80s–316.30s (×72), actor 5, squad 0 (trace 25470): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 25332. Next observer evidence: {'until': 269.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25486}.
<a id="trace-2983"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (events line 2983): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27069"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 27069): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 27069. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27073}.
<a id="trace-27070"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 27070): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.60s, trace 27070. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27073}.
<a id="trace-27073"></a>
<a id="trace-27088"></a>
<a id="trace-27129"></a>
<a id="trace-27138"></a>
<a id="trace-27222"></a>
<a id="trace-27233"></a>
<a id="trace-27242"></a>
<a id="trace-27255"></a>
<a id="trace-27262"></a>
<a id="trace-27273"></a>
- 316.80s–323.30s (×10), actor 5, squad 0 (trace 27073): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.60s, trace 27070. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27088}.
<a id="trace-27278"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 27278): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 320.00s, trace 27149. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27281}.
<a id="trace-27279"></a>
- 323.45s–323.45s (×1), actor 1, squad 0 (trace 27279): ; retain contact cover stage. Knowledge: actor memory at 320.00s, trace 27149. Next observer evidence: {'until': 323.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27281}.
<a id="trace-27281"></a>
<a id="trace-27294"></a>
<a id="trace-27303"></a>
<a id="trace-27374"></a>
<a id="trace-27381"></a>
<a id="trace-27410"></a>
<a id="trace-27429"></a>
<a id="trace-27437"></a>
<a id="trace-27448"></a>
<a id="trace-27463"></a>
<a id="trace-27538"></a>
<a id="trace-27547"></a>
<a id="trace-27559"></a>
<a id="trace-27583"></a>
<a id="trace-27593"></a>
<a id="trace-27619"></a>
<a id="trace-27634"></a>
<a id="trace-27642"></a>
<a id="trace-27710"></a>
<a id="trace-27716"></a>
<a id="trace-27728"></a>
<a id="trace-27737"></a>
<a id="trace-27759"></a>
<a id="trace-27777"></a>
<a id="trace-27802"></a>
<a id="trace-27874"></a>
<a id="trace-27881"></a>
<a id="trace-27895"></a>
<a id="trace-27907"></a>
<a id="trace-27927"></a>
<a id="trace-27944"></a>
<a id="trace-27957"></a>
<a id="trace-28033"></a>
<a id="trace-28056"></a>
<a id="trace-28067"></a>
<a id="trace-28084"></a>
<a id="trace-28091"></a>
<a id="trace-28104"></a>
<a id="trace-28114"></a>
<a id="trace-28126"></a>
<a id="trace-28133"></a>
<a id="trace-28202"></a>
<a id="trace-28211"></a>
<a id="trace-28224"></a>
<a id="trace-28233"></a>
<a id="trace-28249"></a>
<a id="trace-28270"></a>
<a id="trace-28297"></a>
<a id="trace-28387"></a>
<a id="trace-28412"></a>
<a id="trace-28419"></a>
<a id="trace-28432"></a>
<a id="trace-28439"></a>
<a id="trace-28451"></a>
<a id="trace-28462"></a>
- 323.80s–359.80s (×55), actor 5, squad 0 (trace 27281): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 27151. Next observer evidence: {'until': 324.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27294}.

## Net delivery

243 matched order/radio deliveries; 396 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.422s; maximum 5.250s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3903: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3911: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3913: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3914: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3915: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3916: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3918: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3919: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3921: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3922: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5142: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5148: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5150: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5151: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5152: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5153: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5154: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5155: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5157: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5158: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5159: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5160: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5161: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 8318: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 8319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 8320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 8321: estimate 8.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 8322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 8323: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 8324: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 8325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 8326: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 8327: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 8328: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 8329: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 8330: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 8331: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 8332: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 8333: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 8334: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 8335: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 8336: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 8337: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 8796: estimate 11.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8797: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8799: estimate 8.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8801: estimate 10.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8802: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 8804: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8805: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8806: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8807: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8808: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8809: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8810: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8811: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8812: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8813: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8814: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8815: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 9339: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9340: estimate 8.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9341: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9342: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9344: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9345: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 9347: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9348: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9349: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9350: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9351: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9352: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9353: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9354: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9355: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9356: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9357: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9358: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 9446: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.35s leader 5, trace 9447: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9967: estimate 8.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9968: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9969: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9971: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9972: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 9974: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9975: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9976: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9977: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9978: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9979: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9980: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9981: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9982: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9983: estimate 5.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9984: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9985: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10539: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 10540: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 10541: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10543: estimate 12.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10544: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 10546: estimate 8.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10547: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10548: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10549: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10550: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10551: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10552: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10553: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10554: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10555: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10556: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10557: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11567: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11568: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11570: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11571: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 11573: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11574: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11575: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11576: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11577: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11578: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11579: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11580: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11581: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 11582: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11583: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11584: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 12216: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 12217: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 12218: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 12219: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 12220: estimate 12.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 12221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 12222: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 12223: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 12224: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 12225: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 12226: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 12227: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 12228: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 12229: estimate 9.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 12230: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 12231: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 12232: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 12233: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 12554: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 12555: estimate 9.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 12556: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 12557: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 12558: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 12559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 12560: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 12561: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 12562: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 12563: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 12564: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 12565: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 12566: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 12567: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 12568: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 12569: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 12570: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 12571: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12830: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 12831: estimate 9.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12832: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12833: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12834: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 12836: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12837: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12838: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12839: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12840: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12841: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12842: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12843: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12844: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12845: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12846: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12847: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 13339: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 13340: estimate 9.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 13341: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 13342: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 13343: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 13344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 13345: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 13346: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 13347: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 13348: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 13349: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 13350: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 13351: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 13352: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 13353: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 13354: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 13355: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 13356: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13591: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 13592: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13593: estimate 8.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13594: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13595: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13597: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13598: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13599: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13600: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13601: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13602: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13603: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13604: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13605: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13606: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13607: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13608: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 13738: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 13739: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 13865: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 13866: estimate 8.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13867: estimate 8.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13868: estimate 12.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13869: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 13871: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13872: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13873: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13874: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13875: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13876: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13877: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13878: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13879: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13880: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13881: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13882: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 14270: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 14271: estimate 8.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 14272: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 14273: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 14274: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 14275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 14276: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 14277: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 14278: estimate 7.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 14279: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 14280: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 14281: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 14282: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 14283: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 14284: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 14285: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 14286: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 14287: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 14504: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 14505: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14506: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14507: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14508: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 14510: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14511: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14512: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14513: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14514: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14515: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14516: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14517: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14518: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14519: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14520: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14521: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 14889: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 14890: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 14891: estimate 7.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14892: estimate 11.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14893: estimate 11.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 14895: estimate 8.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14896: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14897: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14898: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14899: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14900: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14901: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14902: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14903: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14904: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14905: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14906: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15185: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15186: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15187: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15188: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15189: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 15191: estimate 8.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15192: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15193: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15194: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15195: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15196: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15197: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15198: estimate 8.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15199: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15200: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15201: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15202: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15367: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15368: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 15369: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15385: estimate 9.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15386: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15387: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15388: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15389: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 15391: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15392: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15393: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15394: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15395: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15396: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15397: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15398: estimate 8.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15399: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15400: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15401: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15402: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 15725: estimate 8.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 15726: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 15727: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15728: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15729: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 15730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 15731: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15732: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15733: estimate 6.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15734: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15735: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15736: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15737: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15738: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15739: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15740: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15741: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15742: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16008: estimate 8.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16009: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16010: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16011: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16012: estimate 10.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 16014: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 16015: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16016: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16017: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16018: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16019: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16020: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16021: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16022: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16023: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16024: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 16025: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16506: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16507: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16508: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16509: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16510: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 16512: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16514: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16515: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16516: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16517: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16518: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16519: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16520: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16521: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16522: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16523: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16773: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 16774: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16775: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16776: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 16777: estimate 9.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 16779: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16781: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16782: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16783: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16784: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16785: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16786: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16787: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16788: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16789: estimate 5.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16790: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 17260: estimate 7.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 17261: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 17262: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 17263: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 17264: estimate 7.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 17265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 17266: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 17267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 17268: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 17269: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 17270: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 17271: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 17272: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 17273: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 17274: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 17275: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 17276: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 17277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17527: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 17528: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17529: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17530: estimate 8.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17531: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 17532: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 17533: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17535: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17536: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17537: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17538: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17539: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17540: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17541: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17542: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17543: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17916: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 17917: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17918: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17919: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17920: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 17922: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17924: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17925: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17926: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17927: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17928: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17929: estimate 5.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17930: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17931: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17932: estimate 4.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17933: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 18334: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 18335: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 18336: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 18337: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 18338: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 18339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 18340: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 18341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 18342: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 18343: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 18344: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 18345: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 18346: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 18347: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 18348: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 18349: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 18350: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 18351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 19344: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 19345: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 19346: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 19347: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 19348: estimate 9.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 19349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 19350: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 19351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 19352: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 19353: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 19354: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 19355: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 19356: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 19357: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 19358: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 19359: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 19360: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 19361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 19763: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 19764: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 19765: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 19766: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 19767: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 19768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 19769: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 19770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 19771: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 19772: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 19773: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 19774: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 19775: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 19776: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 19777: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 19778: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 19779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 20147: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.75s leader 5, trace 20148: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 20163: estimate 10.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 20164: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 20165: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 20166: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 20167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 20168: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 20169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 20170: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 20171: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 20172: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 20173: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 20174: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 20175: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 20176: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 20177: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 20178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 20471: estimate 10.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 20472: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 20473: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 20474: estimate 10.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 20475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 20476: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 20477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 20478: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 20479: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 20480: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 20481: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 20482: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 20483: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 20484: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 20485: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 20486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 20674: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 20675: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 20676: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 20677: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 20678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 20679: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 20680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 20681: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 20682: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 20683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 20684: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 20685: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 20686: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 20687: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 20688: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 20689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 20825: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 20857: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 20858: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 20859: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 20860: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 20861: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 20862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 20863: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 20864: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 20865: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 20866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 20867: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 20868: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 20869: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 20870: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 20871: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 20872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 21061: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 21062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 21063: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 21064: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 21065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 21066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 21067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 21068: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 21069: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 21070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 21071: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 21072: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 21073: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 21074: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 21075: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 21076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 21251: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 21252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 21253: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 21254: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 21255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 21256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 21257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 21258: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 21259: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 21260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 21261: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 21262: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 21263: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 21264: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 21265: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 21266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 21395: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 192.35s leader 5, trace 21396: estimate 9.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 21450: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21452: estimate 9.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21453: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 21455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 21456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21457: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21458: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21460: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21461: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21462: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21463: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21464: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 21465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 21861: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21862: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21863: estimate 9.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21864: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21865: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 21866: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 21867: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21868: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21869: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21870: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21871: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21872: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21873: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21874: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21875: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 22098: estimate 8.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 22099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22100: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 22101: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 22102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 22103: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 22104: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22105: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22106: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22108: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22109: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22110: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22111: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22112: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 22113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 22555: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 22556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22557: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22558: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 22560: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 22561: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22562: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22563: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22565: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22566: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22567: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22568: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22569: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 23361: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 23362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 23363: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 23364: estimate 9.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 23365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 23366: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 23367: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 23368: estimate 4.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 23369: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 23370: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 23371: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 23372: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 23373: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 23374: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 23375: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 23376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 23832: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 23833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23834: estimate 9.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23835: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23837: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23838: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23839: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23840: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23841: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23842: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23843: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23844: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 23845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 24021: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 24022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 24023: estimate 10.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 24024: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 24025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 24026: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 24027: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 24028: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 24029: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 24030: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 24031: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 24032: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 24033: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 24034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 24189: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 24190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 24191: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 24192: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 24193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 24194: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 24195: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 24196: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 24197: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 24198: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 24199: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 24200: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 24201: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 24202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 24341: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 24342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 24343: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 24344: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 24345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 24346: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 24347: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 24348: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 24349: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 24350: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 24351: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 24352: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 24353: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 24354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 24496: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 24497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 24498: estimate 9.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 24499: estimate 9.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 24500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 24501: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 24502: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 24503: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 24504: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 24505: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 24506: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 24507: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 24508: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 24509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 24660: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 24661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 24662: estimate 9.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 24663: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 24664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 24665: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 24666: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 24667: estimate 2.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24668: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24669: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24670: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24671: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24672: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 24673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 24785: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24835: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 24836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24837: estimate 9.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 24838: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 24839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24840: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24841: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24842: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24843: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24844: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24845: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24846: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24847: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 24848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 25006: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 25007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 25008: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 25009: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 25010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 25011: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 25012: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 25013: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 25014: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 25015: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 25016: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 25017: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 25018: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 25019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 25161: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 25162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 25163: estimate 8.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 25164: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 25165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 25166: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 25167: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 25168: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 25169: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 25170: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 25171: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 25172: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 25173: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 25174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25258: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 261.40s leader 5, trace 25259: estimate 8.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 25330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 25331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 25332: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 25333: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 25334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 25335: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 25336: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 25337: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 25338: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 25339: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 25340: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 25341: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 25342: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 25343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 25501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 25502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 25503: estimate 7.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 25504: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 25505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 25506: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 25507: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 25508: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 25509: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 25510: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 25511: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 25512: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 25513: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 25514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 25662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 25663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25664: estimate 7.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25665: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 25666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 25667: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25668: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25669: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25670: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25671: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25672: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25673: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25674: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 25675: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 25826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 25827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25828: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 25829: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 25830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25831: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25832: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25833: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25834: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25835: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25836: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25837: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25838: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 25839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 25994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 25995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25996: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 25997: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 25998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25999: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 26000: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 26001: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 26002: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 26003: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 26004: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 26005: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 26006: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 26007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 26158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 26159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 26160: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 26161: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 26162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 26163: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 26164: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 26165: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 26166: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 26167: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 26168: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 26169: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 26170: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 26171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 26324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 26325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 26326: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 26327: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 26328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 26329: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 26330: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 26331: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 26332: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 26333: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 26334: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 26335: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 26336: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 26337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 26486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 26487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 26488: estimate 6.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 26489: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 26490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 26491: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 26492: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 26493: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 26494: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 26495: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 26496: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 26497: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 26498: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 26499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 26648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 26649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 26650: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 26651: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 26652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 26653: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 26654: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 26655: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 26656: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 26657: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 26658: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 26659: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 26660: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 26661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 26811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 26812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26813: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 26814: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 26815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26816: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26817: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26818: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26819: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26820: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26821: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26822: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26823: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 26824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 26980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 26981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 26983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 26984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26985: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26986: estimate 2.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26987: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26988: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26989: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26990: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26991: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26992: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 26993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 27069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 27070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 27149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 27150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 27151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 27152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 27153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 27154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 27155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 27156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 27157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 27158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 27159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 27160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 27161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 27162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 27310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 27311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 27312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 27313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 27314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 27315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 27316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 27317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 27318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 27319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 27320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 27321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 27322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 27323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 27475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 27476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 27477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 27478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 27479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 27480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 27482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 27484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 27485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27487: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 27488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 27647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 27648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 27649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 27650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 27651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 27652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 27656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 27660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 27807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 27808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 27810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 27811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 27820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 27970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 27971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 27974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 28138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 28139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 28140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 28141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 28142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 28143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 28145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 28146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 28147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 28148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 28151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 28302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 28303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 28304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 28305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 28306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 28307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 28308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 28309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 28310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 28311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 28312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 28313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 28314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 28315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 28468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 28469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 28470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 28471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 28472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 28473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 28475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 28478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 28481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale killed in action
- 1: Soren killed in action
- 1: Bram killed in action
- 1: Ash killed in action
- 1: Cole incapacitated
- 1: Bren incapacitated

## Outcome attribution

- 150.20s, evidence 18594: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 164.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2445}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 170.00s, evidence 20487: Blocked: local route/column remedies exhausted; column position unavailable. Following evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2510}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
