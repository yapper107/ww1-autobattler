# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/23/109/good-azure/battle-109-1789674183636712787`

## Battle summary

**Ember** · 360 s · 183 shots.

### Turning points

- 18.9s, squad 4: contact (events line 199). First recorded contact.
- 23.1s, squad 0: withdrawal ([trace 1918](#trace-1918)). 32.7s, squad 0: took cover and returned fire.
- 32.2s, squad 0: help call ([trace 2627](#trace-2627)). No completion observed before termination.
- 39.2s, squad 0: help call ([trace 3097](#trace-3097)). No completion observed before termination.
- 70.1s, squad 0: withdrawal ([trace 4549](#trace-4549)). 114.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 198.1s, squad 0: withdrawal ([trace 9354](#trace-9354)). 235.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 217.3s, squad 0: help call ([trace 10223](#trace-10223)). No completion observed before termination.
- 244.7s, squad 0: withdrawal ([trace 11276](#trace-11276)). 303.5s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, Withdraw to received rally and 2 further drill types; withdrew; 10 shots, 2/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 173 shots, 1/6 lost.

### Decisions and attribution

At 197.4s, squad 0 chose FightHere: nearest known group ([trace 9347](#trace-9347)), followed by 1 shots and 0 own casualties; estimate 7.9 against 6 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 4.0s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 399](#trace-399)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 398](#trace-398)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
- 22.3s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011772 retreat threshold=0.500000 initiative=delegated ([trace 1885](#trace-1885)). Following evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42488962142343806, 'next_transition': 1899}.

### Communication

250 matched deliveries (mean 0.19s, max 1.80s); 244 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 18.85s, squad 4, contact, evidence events line 199: First recorded contact; .
- 23.15s, squad 0, withdrawal, evidence 1918: BreakContact: believed ratio at least two without superiority; 32.7s, squad 0: took cover and returned fire.
- 32.25s, squad 0, help call, evidence 2627: NeedSupport; No completion observed before termination.
- 39.15s, squad 0, help call, evidence 3097: NeedSupport; No completion observed before termination.
- 70.05s, squad 0, withdrawal, evidence 4549: Withdraw to received rally; 114.8s, squad 0: contact broken or rally reached: Occupy and report strength.
- 198.05s, squad 0, withdrawal, evidence 9354: BreakContact: believed ratio at least two without superiority; 235.9s, squad 0: contact broken or rally reached: Occupy and report strength.
- 217.30s, squad 0, help call, evidence 10223: NeedSupport; No completion observed before termination.
- 244.65s, squad 0, withdrawal, evidence 11276: Withdraw to received rally; 303.5s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0287288310560543, 'next_transition': 333}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
- 1.60s–3.65s (×5), actor 5, squad 0 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2200132801496435, 'next_transition': 351}.
<a id="trace-59"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 59): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-398"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 398): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 398. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-399"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 399): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999980294168104, 'next_transition': 412}.
<a id="trace-412"></a>
<a id="trace-431"></a>
<a id="trace-505"></a>
<a id="trace-517"></a>
- 4.20s–5.70s (×4), actor 5, squad 0 (trace 412): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 399. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8000145545374151, 'next_transition': 431}.
<a id="trace-519"></a>
<a id="trace-731"></a>
<a id="trace-755"></a>
<a id="trace-777"></a>
<a id="trace-821"></a>
<a id="trace-852"></a>
<a id="trace-868"></a>
<a id="trace-881"></a>
<a id="trace-965"></a>
<a id="trace-978"></a>
<a id="trace-993"></a>
<a id="trace-1013"></a>
<a id="trace-1049"></a>
<a id="trace-1066"></a>
<a id="trace-1076"></a>
<a id="trace-1109"></a>
<a id="trace-1186"></a>
<a id="trace-1199"></a>
<a id="trace-1373"></a>
<a id="trace-1395"></a>
<a id="trace-1413"></a>
<a id="trace-1457"></a>
<a id="trace-1476"></a>
<a id="trace-1696"></a>
<a id="trace-1780"></a>
<a id="trace-1808"></a>
<a id="trace-1826"></a>
<a id="trace-1847"></a>
<a id="trace-1881"></a>
<a id="trace-1901"></a>
<a id="trace-2196"></a>
<a id="trace-2207"></a>
<a id="trace-2263"></a>
<a id="trace-2341"></a>
<a id="trace-2370"></a>
<a id="trace-2398"></a>
<a id="trace-2409"></a>
<a id="trace-2422"></a>
<a id="trace-2431"></a>
<a id="trace-2446"></a>
<a id="trace-2472"></a>
<a id="trace-2486"></a>
<a id="trace-2569"></a>
<a id="trace-2581"></a>
<a id="trace-2598"></a>
<a id="trace-2609"></a>
<a id="trace-2625"></a>
<a id="trace-2761"></a>
<a id="trace-2769"></a>
<a id="trace-2869"></a>
<a id="trace-2895"></a>
<a id="trace-2910"></a>
<a id="trace-2995"></a>
<a id="trace-3018"></a>
<a id="trace-3055"></a>
<a id="trace-3066"></a>
<a id="trace-3075"></a>
<a id="trace-3087"></a>
<a id="trace-3094"></a>
<a id="trace-3109"></a>
<a id="trace-3114"></a>
<a id="trace-3272"></a>
<a id="trace-3286"></a>
<a id="trace-3378"></a>
<a id="trace-3388"></a>
<a id="trace-3425"></a>
<a id="trace-3433"></a>
<a id="trace-3445"></a>
<a id="trace-3525"></a>
<a id="trace-3542"></a>
<a id="trace-3618"></a>
<a id="trace-3625"></a>
<a id="trace-3697"></a>
<a id="trace-3706"></a>
<a id="trace-3720"></a>
<a id="trace-3727"></a>
<a id="trace-3738"></a>
<a id="trace-3843"></a>
<a id="trace-3849"></a>
<a id="trace-3859"></a>
<a id="trace-3864"></a>
<a id="trace-3877"></a>
<a id="trace-3897"></a>
<a id="trace-3903"></a>
<a id="trace-3921"></a>
<a id="trace-4038"></a>
<a id="trace-4046"></a>
<a id="trace-4060"></a>
<a id="trace-4084"></a>
<a id="trace-4089"></a>
<a id="trace-4102"></a>
<a id="trace-4108"></a>
<a id="trace-4117"></a>
<a id="trace-4123"></a>
<a id="trace-4202"></a>
<a id="trace-4228"></a>
<a id="trace-4236"></a>
<a id="trace-4251"></a>
<a id="trace-4315"></a>
<a id="trace-4325"></a>
<a id="trace-4333"></a>
<a id="trace-4437"></a>
<a id="trace-4444"></a>
<a id="trace-4461"></a>
<a id="trace-4476"></a>
<a id="trace-4496"></a>
<a id="trace-4517"></a>
<a id="trace-4531"></a>
<a id="trace-4536"></a>
<a id="trace-4692"></a>
<a id="trace-4697"></a>
<a id="trace-4710"></a>
<a id="trace-4725"></a>
<a id="trace-4740"></a>
<a id="trace-4745"></a>
<a id="trace-4758"></a>
<a id="trace-4766"></a>
<a id="trace-4838"></a>
<a id="trace-4844"></a>
<a id="trace-4859"></a>
<a id="trace-4887"></a>
<a id="trace-4901"></a>
<a id="trace-4916"></a>
<a id="trace-4924"></a>
<a id="trace-5003"></a>
<a id="trace-5016"></a>
<a id="trace-5039"></a>
<a id="trace-5107"></a>
<a id="trace-5118"></a>
<a id="trace-5132"></a>
<a id="trace-5137"></a>
<a id="trace-5245"></a>
<a id="trace-5264"></a>
<a id="trace-5281"></a>
<a id="trace-5291"></a>
<a id="trace-5304"></a>
<a id="trace-5313"></a>
<a id="trace-5327"></a>
<a id="trace-5334"></a>
<a id="trace-5413"></a>
<a id="trace-5430"></a>
<a id="trace-5483"></a>
<a id="trace-5493"></a>
<a id="trace-5561"></a>
<a id="trace-5572"></a>
<a id="trace-5673"></a>
<a id="trace-5685"></a>
<a id="trace-5699"></a>
<a id="trace-5706"></a>
<a id="trace-5722"></a>
<a id="trace-5742"></a>
<a id="trace-5832"></a>
<a id="trace-5845"></a>
<a id="trace-5859"></a>
<a id="trace-5866"></a>
<a id="trace-5880"></a>
<a id="trace-5890"></a>
<a id="trace-5899"></a>
<a id="trace-5905"></a>
<a id="trace-5919"></a>
<a id="trace-5932"></a>
<a id="trace-6017"></a>
<a id="trace-6086"></a>
<a id="trace-6098"></a>
<a id="trace-6124"></a>
<a id="trace-6145"></a>
<a id="trace-6155"></a>
<a id="trace-6172"></a>
<a id="trace-6179"></a>
<a id="trace-6254"></a>
<a id="trace-6264"></a>
<a id="trace-6273"></a>
<a id="trace-6284"></a>
<a id="trace-6298"></a>
<a id="trace-6306"></a>
<a id="trace-6323"></a>
<a id="trace-6331"></a>
<a id="trace-6345"></a>
<a id="trace-6439"></a>
<a id="trace-6449"></a>
<a id="trace-6467"></a>
<a id="trace-6478"></a>
<a id="trace-6494"></a>
<a id="trace-6523"></a>
<a id="trace-6532"></a>
<a id="trace-6540"></a>
<a id="trace-6614"></a>
<a id="trace-6636"></a>
<a id="trace-6663"></a>
<a id="trace-6670"></a>
<a id="trace-6677"></a>
<a id="trace-6777"></a>
<a id="trace-6785"></a>
<a id="trace-6794"></a>
<a id="trace-6803"></a>
<a id="trace-6812"></a>
<a id="trace-6832"></a>
<a id="trace-6902"></a>
<a id="trace-6908"></a>
<a id="trace-6918"></a>
<a id="trace-6925"></a>
<a id="trace-6935"></a>
<a id="trace-6944"></a>
<a id="trace-6952"></a>
<a id="trace-6957"></a>
<a id="trace-6964"></a>
<a id="trace-6974"></a>
<a id="trace-7044"></a>
<a id="trace-7054"></a>
<a id="trace-7066"></a>
<a id="trace-7073"></a>
<a id="trace-7083"></a>
<a id="trace-7099"></a>
<a id="trace-7105"></a>
<a id="trace-7115"></a>
<a id="trace-7121"></a>
<a id="trace-7191"></a>
<a id="trace-7199"></a>
<a id="trace-7215"></a>
<a id="trace-7224"></a>
<a id="trace-7231"></a>
<a id="trace-7241"></a>
<a id="trace-7250"></a>
<a id="trace-7262"></a>
<a id="trace-7268"></a>
<a id="trace-7354"></a>
<a id="trace-7362"></a>
<a id="trace-7369"></a>
<a id="trace-7378"></a>
<a id="trace-7385"></a>
<a id="trace-7390"></a>
<a id="trace-7400"></a>
<a id="trace-7406"></a>
<a id="trace-7480"></a>
<a id="trace-7490"></a>
<a id="trace-7508"></a>
<a id="trace-7526"></a>
<a id="trace-7539"></a>
<a id="trace-7546"></a>
<a id="trace-7622"></a>
<a id="trace-7639"></a>
<a id="trace-7646"></a>
<a id="trace-7654"></a>
<a id="trace-7664"></a>
<a id="trace-7677"></a>
<a id="trace-7685"></a>
<a id="trace-7773"></a>
<a id="trace-7779"></a>
<a id="trace-7849"></a>
<a id="trace-7878"></a>
<a id="trace-7884"></a>
<a id="trace-7899"></a>
<a id="trace-7916"></a>
<a id="trace-7992"></a>
<a id="trace-8021"></a>
<a id="trace-8038"></a>
<a id="trace-8045"></a>
<a id="trace-8059"></a>
<a id="trace-8079"></a>
<a id="trace-8086"></a>
<a id="trace-8161"></a>
<a id="trace-8185"></a>
<a id="trace-8195"></a>
<a id="trace-8234"></a>
<a id="trace-8243"></a>
<a id="trace-8249"></a>
<a id="trace-8370"></a>
<a id="trace-8386"></a>
<a id="trace-8462"></a>
<a id="trace-8468"></a>
<a id="trace-8487"></a>
<a id="trace-8505"></a>
<a id="trace-8515"></a>
<a id="trace-8539"></a>
<a id="trace-8546"></a>
<a id="trace-8560"></a>
<a id="trace-8657"></a>
<a id="trace-8670"></a>
<a id="trace-8683"></a>
<a id="trace-8691"></a>
<a id="trace-8706"></a>
<a id="trace-8715"></a>
<a id="trace-8725"></a>
<a id="trace-8770"></a>
<a id="trace-8783"></a>
<a id="trace-8800"></a>
<a id="trace-8900"></a>
<a id="trace-8915"></a>
<a id="trace-8934"></a>
<a id="trace-8946"></a>
<a id="trace-8967"></a>
<a id="trace-8977"></a>
<a id="trace-9054"></a>
<a id="trace-9072"></a>
<a id="trace-9101"></a>
<a id="trace-9122"></a>
<a id="trace-9208"></a>
<a id="trace-9223"></a>
<a id="trace-9304"></a>
<a id="trace-9345"></a>
<a id="trace-9479"></a>
<a id="trace-9488"></a>
<a id="trace-9496"></a>
<a id="trace-9500"></a>
<a id="trace-9582"></a>
<a id="trace-9593"></a>
<a id="trace-9610"></a>
<a id="trace-9622"></a>
<a id="trace-9638"></a>
<a id="trace-9735"></a>
<a id="trace-9751"></a>
<a id="trace-9758"></a>
<a id="trace-9784"></a>
<a id="trace-9797"></a>
<a id="trace-9817"></a>
<a id="trace-9830"></a>
<a id="trace-9838"></a>
<a id="trace-9914"></a>
<a id="trace-9939"></a>
<a id="trace-9948"></a>
<a id="trace-9964"></a>
<a id="trace-9975"></a>
<a id="trace-9984"></a>
<a id="trace-10054"></a>
<a id="trace-10076"></a>
<a id="trace-10088"></a>
<a id="trace-10170"></a>
<a id="trace-10182"></a>
<a id="trace-10202"></a>
<a id="trace-10212"></a>
<a id="trace-10222"></a>
<a id="trace-10232"></a>
<a id="trace-10244"></a>
<a id="trace-10252"></a>
<a id="trace-10340"></a>
<a id="trace-10351"></a>
<a id="trace-10363"></a>
<a id="trace-10379"></a>
<a id="trace-10384"></a>
<a id="trace-10392"></a>
<a id="trace-10401"></a>
<a id="trace-10415"></a>
<a id="trace-10427"></a>
<a id="trace-10498"></a>
<a id="trace-10519"></a>
<a id="trace-10523"></a>
<a id="trace-10533"></a>
<a id="trace-10542"></a>
<a id="trace-10641"></a>
<a id="trace-10718"></a>
<a id="trace-10731"></a>
<a id="trace-10743"></a>
<a id="trace-10753"></a>
<a id="trace-10770"></a>
<a id="trace-10784"></a>
<a id="trace-10793"></a>
<a id="trace-10804"></a>
<a id="trace-10818"></a>
<a id="trace-10826"></a>
<a id="trace-10926"></a>
<a id="trace-10948"></a>
<a id="trace-10968"></a>
<a id="trace-10980"></a>
<a id="trace-11056"></a>
<a id="trace-11068"></a>
<a id="trace-11084"></a>
<a id="trace-11095"></a>
<a id="trace-11173"></a>
<a id="trace-11187"></a>
<a id="trace-11201"></a>
<a id="trace-11208"></a>
<a id="trace-11234"></a>
<a id="trace-11246"></a>
<a id="trace-11258"></a>
<a id="trace-11273"></a>
<a id="trace-11340"></a>
<a id="trace-11422"></a>
<a id="trace-11439"></a>
<a id="trace-11448"></a>
<a id="trace-11461"></a>
<a id="trace-11470"></a>
<a id="trace-11486"></a>
<a id="trace-11500"></a>
<a id="trace-11510"></a>
<a id="trace-11524"></a>
<a id="trace-11601"></a>
<a id="trace-11609"></a>
<a id="trace-11624"></a>
<a id="trace-11632"></a>
<a id="trace-11656"></a>
<a id="trace-11671"></a>
<a id="trace-11685"></a>
<a id="trace-11694"></a>
<a id="trace-11767"></a>
<a id="trace-11778"></a>
<a id="trace-11807"></a>
<a id="trace-11876"></a>
<a id="trace-11901"></a>
<a id="trace-11916"></a>
<a id="trace-11928"></a>
<a id="trace-11934"></a>
<a id="trace-12013"></a>
<a id="trace-12037"></a>
<a id="trace-12047"></a>
<a id="trace-12060"></a>
<a id="trace-12069"></a>
<a id="trace-12083"></a>
<a id="trace-12092"></a>
<a id="trace-12114"></a>
<a id="trace-12191"></a>
<a id="trace-12214"></a>
<a id="trace-12223"></a>
<a id="trace-12233"></a>
<a id="trace-12255"></a>
<a id="trace-12264"></a>
<a id="trace-12372"></a>
<a id="trace-12390"></a>
<a id="trace-12406"></a>
<a id="trace-12416"></a>
<a id="trace-12484"></a>
<a id="trace-12506"></a>
<a id="trace-12613"></a>
<a id="trace-12624"></a>
<a id="trace-12637"></a>
<a id="trace-12644"></a>
<a id="trace-12663"></a>
<a id="trace-12670"></a>
<a id="trace-12767"></a>
<a id="trace-12776"></a>
<a id="trace-12791"></a>
<a id="trace-12864"></a>
<a id="trace-12873"></a>
<a id="trace-12898"></a>
<a id="trace-12916"></a>
<a id="trace-12928"></a>
<a id="trace-13014"></a>
<a id="trace-13028"></a>
<a id="trace-13035"></a>
<a id="trace-13047"></a>
<a id="trace-13067"></a>
<a id="trace-13077"></a>
<a id="trace-13092"></a>
<a id="trace-13173"></a>
<a id="trace-13188"></a>
<a id="trace-13197"></a>
<a id="trace-13204"></a>
<a id="trace-13227"></a>
<a id="trace-13242"></a>
<a id="trace-13251"></a>
<a id="trace-13268"></a>
<a id="trace-13278"></a>
<a id="trace-13349"></a>
<a id="trace-13359"></a>
<a id="trace-13373"></a>
<a id="trace-13383"></a>
<a id="trace-13399"></a>
<a id="trace-13406"></a>
<a id="trace-13425"></a>
<a id="trace-13478"></a>
<a id="trace-13492"></a>
<a id="trace-13503"></a>
<a id="trace-13574"></a>
<a id="trace-13631"></a>
<a id="trace-13647"></a>
<a id="trace-13659"></a>
<a id="trace-13672"></a>
<a id="trace-13681"></a>
<a id="trace-13711"></a>
<a id="trace-13741"></a>
<a id="trace-13827"></a>
<a id="trace-13844"></a>
<a id="trace-13864"></a>
<a id="trace-13869"></a>
<a id="trace-13884"></a>
<a id="trace-13912"></a>
<a id="trace-13918"></a>
<a id="trace-14010"></a>
<a id="trace-14027"></a>
<a id="trace-14036"></a>
<a id="trace-14045"></a>
<a id="trace-14158"></a>
<a id="trace-14287"></a>
<a id="trace-14363"></a>
<a id="trace-14378"></a>
<a id="trace-14399"></a>
<a id="trace-14427"></a>
<a id="trace-14437"></a>
<a id="trace-14455"></a>
<a id="trace-14466"></a>
<a id="trace-14485"></a>
<a id="trace-14561"></a>
<a id="trace-14572"></a>
<a id="trace-14588"></a>
<a id="trace-14616"></a>
<a id="trace-14631"></a>
<a id="trace-14641"></a>
<a id="trace-14672"></a>
<a id="trace-14748"></a>
<a id="trace-14881"></a>
<a id="trace-14890"></a>
<a id="trace-14919"></a>
<a id="trace-14930"></a>
<a id="trace-14947"></a>
<a id="trace-14956"></a>
<a id="trace-15046"></a>
<a id="trace-15060"></a>
<a id="trace-15070"></a>
<a id="trace-15085"></a>
<a id="trace-15096"></a>
<a id="trace-15111"></a>
<a id="trace-15136"></a>
<a id="trace-15143"></a>
<a id="trace-15237"></a>
<a id="trace-15251"></a>
<a id="trace-15265"></a>
<a id="trace-15276"></a>
<a id="trace-15294"></a>
<a id="trace-15302"></a>
<a id="trace-15316"></a>
<a id="trace-15399"></a>
<a id="trace-15408"></a>
<a id="trace-15422"></a>
<a id="trace-15451"></a>
<a id="trace-15465"></a>
<a id="trace-15471"></a>
<a id="trace-15483"></a>
<a id="trace-15495"></a>
<a id="trace-15676"></a>
<a id="trace-15686"></a>
<a id="trace-15698"></a>
<a id="trace-15706"></a>
<a id="trace-15725"></a>
<a id="trace-15748"></a>
<a id="trace-15771"></a>
<a id="trace-15850"></a>
<a id="trace-15862"></a>
<a id="trace-15878"></a>
<a id="trace-15889"></a>
<a id="trace-15906"></a>
<a id="trace-15915"></a>
<a id="trace-15930"></a>
<a id="trace-15939"></a>
<a id="trace-15953"></a>
<a id="trace-15960"></a>
<a id="trace-16033"></a>
<a id="trace-16039"></a>
<a id="trace-16056"></a>
<a id="trace-16083"></a>
<a id="trace-16091"></a>
<a id="trace-16212"></a>
<a id="trace-16220"></a>
<a id="trace-16241"></a>
- 5.70s–359.30s (×552), actor 37, squad 4 (trace 519): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 444. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23624914977796294, 'next_transition': 731}.
<a id="trace-528"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 528): received platoon directive. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.54263210113952, 'next_transition': 729}.
<a id="trace-729"></a>
<a id="trace-753"></a>
<a id="trace-775"></a>
<a id="trace-795"></a>
<a id="trace-819"></a>
<a id="trace-850"></a>
<a id="trace-866"></a>
<a id="trace-879"></a>
<a id="trace-963"></a>
<a id="trace-976"></a>
<a id="trace-991"></a>
<a id="trace-1011"></a>
<a id="trace-1030"></a>
<a id="trace-1047"></a>
<a id="trace-1064"></a>
<a id="trace-1074"></a>
<a id="trace-1095"></a>
<a id="trace-1107"></a>
<a id="trace-1184"></a>
<a id="trace-1197"></a>
- 6.20s–15.70s (×20), actor 5, squad 0 (trace 729): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 438. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8881602511550354, 'next_transition': 753}.
<a id="trace-1201"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1201): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1111. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6534959370887249, 'next_transition': 1371}.
<a id="trace-1202"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 1202): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1111. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6534959370887249, 'next_transition': 1371}.
<a id="trace-1371"></a>
<a id="trace-1393"></a>
<a id="trace-1411"></a>
<a id="trace-1427"></a>
<a id="trace-1455"></a>
<a id="trace-1474"></a>
<a id="trace-1489"></a>
- 16.25s–19.25s (×7), actor 5, squad 0 (trace 1371): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1114. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3012286589028082, 'next_transition': 1393}.
<a id="trace-1495"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1495): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1111. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1694}.
<a id="trace-1496"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1496): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1111. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1694}.
<a id="trace-1497"></a>
- 19.35s–19.35s (×1), actor 0, squad 0 (trace 1497): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1111. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3799901488369171, 'next_transition': 1694}.
<a id="trace-1694"></a>
<a id="trace-1778"></a>
<a id="trace-1806"></a>
<a id="trace-1824"></a>
<a id="trace-1845"></a>
<a id="trace-1879"></a>
- 19.75s–22.25s (×6), actor 5, squad 0 (trace 1694): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1114. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6630078861589045, 'next_transition': 1778}.
<a id="trace-252"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (events line 252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1885"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 1885): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011772 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 1885. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42488962142343806, 'next_transition': 1899}.
<a id="trace-1886"></a>
- 22.30s–22.30s (×1), actor 5, squad 0 (trace 1886): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.011772 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 22.30s, trace 1886. Next observer evidence: {'until': 22.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42488962142343806, 'next_transition': 1899}.
<a id="trace-1899"></a>
- 22.75s–22.75s (×1), actor 5, squad 0 (trace 1899): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 22.30s, trace 1886. Next observer evidence: {'until': 23, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.42739406540500635, 'next_transition': 1913}.
<a id="trace-1913"></a>
- 23.05s–23.05s (×1), actor 5, squad 0 (trace 1913): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 23.05s, trace 1913. Next observer evidence: None.
<a id="trace-1918"></a>
- 23.15s–23.15s (×1), actor 0, squad 0 (trace 1918): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 1699. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26638107229741625, 'next_transition': 2194}.
<a id="trace-1919"></a>
- 23.15s–23.15s (×1), actor 0, squad 0 (trace 1919): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 1699. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.26638107229741625, 'next_transition': 2194}.
<a id="trace-2194"></a>
<a id="trace-2205"></a>
<a id="trace-2226"></a>
<a id="trace-2261"></a>
<a id="trace-2339"></a>
<a id="trace-2368"></a>
<a id="trace-2396"></a>
<a id="trace-2407"></a>
<a id="trace-2420"></a>
<a id="trace-2429"></a>
<a id="trace-2444"></a>
<a id="trace-2462"></a>
<a id="trace-2470"></a>
<a id="trace-2484"></a>
<a id="trace-2567"></a>
<a id="trace-2579"></a>
<a id="trace-2596"></a>
<a id="trace-2607"></a>
<a id="trace-2623"></a>
- 23.25s–32.25s (×19), actor 5, squad 0 (trace 2194): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.05s, trace 1913. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2807895699110215, 'next_transition': 2205}.
<a id="trace-2626"></a>
- 32.25s–32.25s (×1), actor 0, squad 0 (trace 2626): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200792130407274, 'next_transition': 2635}.
<a id="trace-2627"></a>
- 32.25s–32.25s (×1), actor 0, squad 0 (trace 2627): NeedSupport. Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25200792130407274, 'next_transition': 2635}.
<a id="trace-2635"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 2635): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: None.
<a id="trace-2639"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 2639): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: None.
<a id="trace-2640"></a>
- 32.65s–32.65s (×1), actor 0, squad 0 (trace 2640): Reorganise complete: known contact. Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: None.
<a id="trace-2759"></a>
<a id="trace-2767"></a>
- 32.75s–33.25s (×2), actor 5, squad 0 (trace 2759): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2492. Next observer evidence: {'until': 33.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0709930850653009, 'next_transition': 2767}.
<a id="trace-2774"></a>
- 33.65s–33.65s (×1), actor 0, squad 0 (trace 2774): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 30.00s, trace 2489. Next observer evidence: None.
<a id="trace-2867"></a>
<a id="trace-2893"></a>
<a id="trace-2908"></a>
<a id="trace-2993"></a>
<a id="trace-3016"></a>
<a id="trace-3038"></a>
<a id="trace-3053"></a>
<a id="trace-3064"></a>
<a id="trace-3073"></a>
<a id="trace-3085"></a>
<a id="trace-3092"></a>
- 33.75s–38.75s (×11), actor 5, squad 0 (trace 2867): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2492. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2125028313653377, 'next_transition': 2893}.
<a id="trace-3095"></a>
- 39.15s–39.15s (×1), actor 1, squad 0 (trace 3095): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 2917. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748205056450076, 'next_transition': 3107}.
<a id="trace-3097"></a>
- 39.15s–39.15s (×1), actor 1, squad 0 (trace 3097): NeedSupport. Knowledge: actor memory at 35.00s, trace 2917. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15748205056450076, 'next_transition': 3107}.
<a id="trace-3107"></a>
<a id="trace-3112"></a>
- 39.25s–39.75s (×2), actor 5, squad 0 (trace 3107): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2919. Next observer evidence: {'until': 39.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150175084419912, 'next_transition': 3112}.
<a id="trace-3183"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 3183): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750671612664677, 'next_transition': 3270}.
<a id="trace-3186"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 3186): MoveTactically. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750671612664677, 'next_transition': 3270}.
<a id="trace-3187"></a>
- 40.15s–40.15s (×1), actor 1, squad 0 (trace 3187): Reorganise complete. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750671612664677, 'next_transition': 3270}.
<a id="trace-3270"></a>
<a id="trace-3284"></a>
- 40.25s–40.75s (×2), actor 5, squad 0 (trace 3270): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3119. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149928431726664, 'next_transition': 3284}.
<a id="trace-3295"></a>
- 41.15s–41.15s (×1), actor 1, squad 0 (trace 3295): traveling overwatch. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725075872758865, 'next_transition': 3376}.
<a id="trace-3296"></a>
- 41.15s–41.15s (×1), actor 1, squad 0 (trace 3296): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725075872758865, 'next_transition': 3376}.
<a id="trace-3376"></a>
<a id="trace-3386"></a>
- 41.25s–41.75s (×2), actor 5, squad 0 (trace 3376): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 3119. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449928533680676, 'next_transition': 3386}.
<a id="trace-404"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (events line 404): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-3397"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3397): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.232395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3397. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724639306117608, 'next_transition': 3407}.
<a id="trace-3398"></a>
- 42.10s–42.10s (×1), actor 5, squad 0 (trace 3398): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.232395 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 3398. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724639306117608, 'next_transition': 3407}.
<a id="trace-3407"></a>
<a id="trace-3423"></a>
<a id="trace-3431"></a>
<a id="trace-3443"></a>
- 42.25s–43.75s (×4), actor 5, squad 0 (trace 3407): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 3398. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6489707309077977, 'next_transition': 3423}.
<a id="trace-3446"></a>
- 43.85s–43.85s (×1), actor 1, squad 0 (trace 3446): bounding overwatch. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150011421011045, 'next_transition': 3523}.
<a id="trace-3447"></a>
- 43.85s–43.85s (×1), actor 1, squad 0 (trace 3447): received platoon directive. Knowledge: actor memory at 40.00s, trace 3117. Next observer evidence: {'until': 44.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150011421011045, 'next_transition': 3523}.
<a id="trace-3523"></a>
<a id="trace-3540"></a>
<a id="trace-3616"></a>
<a id="trace-3623"></a>
- 44.25s–45.75s (×4), actor 5, squad 0 (trace 3523): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 42.10s, trace 3398. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13273113380533588, 'next_transition': 3540}.
<a id="trace-3629"></a>
- 46.05s–46.05s (×1), actor 1, squad 0 (trace 3629): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 45.00s, trace 3544. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500118253746306, 'next_transition': 3695}.
<a id="trace-3695"></a>
<a id="trace-3704"></a>
<a id="trace-3718"></a>
<a id="trace-3725"></a>
<a id="trace-3736"></a>
<a id="trace-3749"></a>
<a id="trace-3761"></a>
<a id="trace-3764"></a>
<a id="trace-3841"></a>
<a id="trace-3847"></a>
<a id="trace-3857"></a>
<a id="trace-3862"></a>
<a id="trace-3875"></a>
<a id="trace-3886"></a>
<a id="trace-3895"></a>
<a id="trace-3901"></a>
<a id="trace-3912"></a>
<a id="trace-3919"></a>
- 46.25s–54.75s (×18), actor 5, squad 0 (trace 3695): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 3546. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36494194743821995, 'next_transition': 3704}.
<a id="trace-3924"></a>
- 54.85s–54.85s (×1), actor 1, squad 0 (trace 3924): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 3768. Next observer evidence: {'until': 55.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4036}.
<a id="trace-4036"></a>
<a id="trace-4044"></a>
<a id="trace-4058"></a>
<a id="trace-4071"></a>
<a id="trace-4082"></a>
<a id="trace-4087"></a>
<a id="trace-4100"></a>
<a id="trace-4106"></a>
<a id="trace-4115"></a>
<a id="trace-4121"></a>
<a id="trace-4200"></a>
<a id="trace-4214"></a>
<a id="trace-4226"></a>
<a id="trace-4234"></a>
<a id="trace-4249"></a>
- 55.25s–62.25s (×15), actor 5, squad 0 (trace 4036): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3971. Next observer evidence: {'until': 55.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03937400792401002, 'next_transition': 4044}.
<a id="trace-4259"></a>
- 62.65s–62.65s (×1), actor 1, squad 0 (trace 4259): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 4126. Next observer evidence: None.
<a id="trace-4313"></a>
<a id="trace-4323"></a>
<a id="trace-4331"></a>
<a id="trace-4350"></a>
<a id="trace-4356"></a>
<a id="trace-4435"></a>
<a id="trace-4442"></a>
<a id="trace-4459"></a>
<a id="trace-4474"></a>
<a id="trace-4482"></a>
<a id="trace-4494"></a>
- 62.75s–67.75s (×11), actor 5, squad 0 (trace 4313): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 4128. Next observer evidence: {'until': 63.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4323}.
<a id="trace-547"></a>
- 68.05s–68.05s (×1), actor 5, squad 0 (events line 547): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4499"></a>
- 68.05s–68.05s (×1), actor 5, squad 0 (trace 4499): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.218417 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.05s, trace 4499. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751000365056175, 'next_transition': 4509}.
<a id="trace-4500"></a>
- 68.05s–68.05s (×1), actor 5, squad 0 (trace 4500): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.218417 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 68.05s, trace 4500. Next observer evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751000365056175, 'next_transition': 4509}.
<a id="trace-4509"></a>
<a id="trace-4515"></a>
<a id="trace-4529"></a>
<a id="trace-4534"></a>
- 68.25s–69.75s (×4), actor 5, squad 0 (trace 4509): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 68.05s, trace 4500. Next observer evidence: {'until': 68.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150153696647194, 'next_transition': 4515}.
<a id="trace-4549"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 4549): Withdraw to received rally. Knowledge: actor memory at 70.00s, trace 4539. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248833207305707, 'next_transition': 4664}.
<a id="trace-4550"></a>
- 70.05s–70.05s (×1), actor 1, squad 0 (trace 4550): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 4539. Next observer evidence: {'until': 70.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47248833207305707, 'next_transition': 4664}.
<a id="trace-4664"></a>
<a id="trace-4669"></a>
<a id="trace-4690"></a>
<a id="trace-4695"></a>
<a id="trace-4708"></a>
<a id="trace-4723"></a>
<a id="trace-4738"></a>
<a id="trace-4743"></a>
<a id="trace-4756"></a>
<a id="trace-4764"></a>
<a id="trace-4836"></a>
<a id="trace-4842"></a>
<a id="trace-4857"></a>
<a id="trace-4866"></a>
<a id="trace-4878"></a>
<a id="trace-4885"></a>
<a id="trace-4899"></a>
<a id="trace-4905"></a>
<a id="trace-4914"></a>
<a id="trace-4922"></a>
<a id="trace-5001"></a>
<a id="trace-5014"></a>
<a id="trace-5029"></a>
<a id="trace-5037"></a>
- 70.25s–81.75s (×24), actor 5, squad 0 (trace 4664): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4541. Next observer evidence: {'until': 70.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450304329767001, 'next_transition': 4669}.
<a id="trace-5041"></a>
- 81.85s–81.85s (×1), actor 1, squad 0 (trace 5041): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 80.00s, trace 4929. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299838805223184, 'next_transition': 5105}.
<a id="trace-5042"></a>
- 81.85s–81.85s (×1), actor 1, squad 0 (trace 5042): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 80.00s, trace 4929. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299838805223184, 'next_transition': 5105}.
<a id="trace-5105"></a>
<a id="trace-5116"></a>
<a id="trace-5130"></a>
<a id="trace-5135"></a>
<a id="trace-5154"></a>
<a id="trace-5165"></a>
<a id="trace-5243"></a>
<a id="trace-5249"></a>
<a id="trace-5262"></a>
<a id="trace-5272"></a>
<a id="trace-5279"></a>
<a id="trace-5289"></a>
<a id="trace-5302"></a>
<a id="trace-5311"></a>
<a id="trace-5325"></a>
<a id="trace-5332"></a>
<a id="trace-5411"></a>
<a id="trace-5418"></a>
<a id="trace-5428"></a>
<a id="trace-5435"></a>
<a id="trace-5447"></a>
<a id="trace-5464"></a>
<a id="trace-5481"></a>
<a id="trace-5491"></a>
- 82.25s–93.75s (×24), actor 5, squad 0 (trace 5105): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 4931. Next observer evidence: {'until': 82.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630016943909051, 'next_transition': 5116}.
<a id="trace-5495"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 5495): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 90.00s, trace 5337. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300167279063318, 'next_transition': 5559}.
<a id="trace-5496"></a>
- 93.85s–93.85s (×1), actor 1, squad 0 (trace 5496): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 90.00s, trace 5337. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300167279063318, 'next_transition': 5559}.
<a id="trace-5559"></a>
<a id="trace-5570"></a>
<a id="trace-5647"></a>
<a id="trace-5671"></a>
<a id="trace-5683"></a>
<a id="trace-5697"></a>
<a id="trace-5704"></a>
<a id="trace-5720"></a>
<a id="trace-5731"></a>
<a id="trace-5740"></a>
<a id="trace-5752"></a>
<a id="trace-5830"></a>
<a id="trace-5843"></a>
<a id="trace-5857"></a>
<a id="trace-5864"></a>
<a id="trace-5878"></a>
<a id="trace-5888"></a>
<a id="trace-5897"></a>
<a id="trace-5903"></a>
<a id="trace-5917"></a>
<a id="trace-5930"></a>
<a id="trace-6005"></a>
<a id="trace-6015"></a>
- 94.25s–105.75s (×23), actor 5, squad 0 (trace 5559): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 5339. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6693644986496644, 'next_transition': 5570}.
<a id="trace-6019"></a>
- 105.85s–105.85s (×1), actor 1, squad 0 (trace 6019): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 105.00s, trace 5937. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300106685604626, 'next_transition': 6084}.
<a id="trace-6020"></a>
- 105.85s–105.85s (×1), actor 1, squad 0 (trace 6020): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 105.00s, trace 5937. Next observer evidence: {'until': 106.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300106685604626, 'next_transition': 6084}.
<a id="trace-6084"></a>
<a id="trace-6096"></a>
<a id="trace-6114"></a>
<a id="trace-6122"></a>
<a id="trace-6143"></a>
<a id="trace-6153"></a>
<a id="trace-6170"></a>
<a id="trace-6177"></a>
<a id="trace-6252"></a>
<a id="trace-6262"></a>
<a id="trace-6271"></a>
<a id="trace-6282"></a>
<a id="trace-6296"></a>
<a id="trace-6304"></a>
<a id="trace-6321"></a>
<a id="trace-6329"></a>
<a id="trace-6343"></a>
<a id="trace-6358"></a>
- 106.25s–114.75s (×18), actor 5, squad 0 (trace 6084): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 105.00s, trace 5939. Next observer evidence: {'until': 106.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.629959465956655, 'next_transition': 6096}.
<a id="trace-6361"></a>
- 114.85s–114.85s (×1), actor 1, squad 0 (trace 6361): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 110.00s, trace 6181. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21093158111177127, 'next_transition': 6437}.
<a id="trace-6437"></a>
<a id="trace-6447"></a>
<a id="trace-6465"></a>
<a id="trace-6476"></a>
<a id="trace-6492"></a>
<a id="trace-6504"></a>
<a id="trace-6515"></a>
<a id="trace-6521"></a>
<a id="trace-6530"></a>
<a id="trace-6538"></a>
<a id="trace-6612"></a>
<a id="trace-6618"></a>
<a id="trace-6628"></a>
<a id="trace-6634"></a>
<a id="trace-6645"></a>
<a id="trace-6655"></a>
<a id="trace-6661"></a>
<a id="trace-6668"></a>
<a id="trace-6675"></a>
<a id="trace-6682"></a>
<a id="trace-6752"></a>
<a id="trace-6758"></a>
<a id="trace-6769"></a>
<a id="trace-6775"></a>
<a id="trace-6783"></a>
<a id="trace-6792"></a>
- 115.25s–127.75s (×26), actor 5, squad 0 (trace 6437): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 6367. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6447}.
<a id="trace-927"></a>
- 128.05s–128.05s (×1), actor 5, squad 0 (events line 927): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6801}.
<a id="trace-6796"></a>
- 128.05s–128.05s (×1), actor 5, squad 0 (trace 6796): renew committed intent (75 s lifetime). Knowledge: actor memory at 128.05s, trace 6796. Next observer evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6801}.
<a id="trace-6801"></a>
<a id="trace-6810"></a>
<a id="trace-6821"></a>
<a id="trace-6830"></a>
<a id="trace-6900"></a>
<a id="trace-6906"></a>
<a id="trace-6916"></a>
<a id="trace-6923"></a>
<a id="trace-6933"></a>
<a id="trace-6942"></a>
<a id="trace-6950"></a>
<a id="trace-6955"></a>
<a id="trace-6962"></a>
<a id="trace-6972"></a>
<a id="trace-7042"></a>
<a id="trace-7052"></a>
<a id="trace-7064"></a>
<a id="trace-7071"></a>
<a id="trace-7081"></a>
<a id="trace-7089"></a>
<a id="trace-7097"></a>
<a id="trace-7103"></a>
<a id="trace-7113"></a>
<a id="trace-7119"></a>
<a id="trace-7189"></a>
<a id="trace-7197"></a>
<a id="trace-7205"></a>
<a id="trace-7213"></a>
<a id="trace-7222"></a>
<a id="trace-7229"></a>
<a id="trace-7239"></a>
<a id="trace-7248"></a>
<a id="trace-7260"></a>
<a id="trace-7266"></a>
<a id="trace-7338"></a>
<a id="trace-7343"></a>
<a id="trace-7352"></a>
<a id="trace-7367"></a>
<a id="trace-7376"></a>
<a id="trace-7383"></a>
<a id="trace-7388"></a>
<a id="trace-7398"></a>
<a id="trace-7404"></a>
<a id="trace-7478"></a>
<a id="trace-7488"></a>
<a id="trace-7500"></a>
<a id="trace-7506"></a>
<a id="trace-7514"></a>
<a id="trace-7524"></a>
<a id="trace-7531"></a>
<a id="trace-7537"></a>
<a id="trace-7544"></a>
<a id="trace-7550"></a>
<a id="trace-7620"></a>
<a id="trace-7626"></a>
<a id="trace-7637"></a>
<a id="trace-7644"></a>
<a id="trace-7652"></a>
<a id="trace-7662"></a>
<a id="trace-7675"></a>
<a id="trace-7683"></a>
- 128.30s–158.80s (×61), actor 5, squad 0 (trace 6801): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 128.05s, trace 6796. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6810}.
<a id="trace-1076"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (events line 1076): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7695}.
<a id="trace-7686"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (trace 7686): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 158.95s, trace 7686. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7695}.
<a id="trace-7687"></a>
- 158.95s–158.95s (×1), actor 5, squad 0 (trace 7687): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.500083 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 158.95s, trace 7687. Next observer evidence: {'until': 159.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7695}.
<a id="trace-7695"></a>
<a id="trace-7702"></a>
<a id="trace-7771"></a>
<a id="trace-7777"></a>
<a id="trace-7786"></a>
- 159.30s–161.30s (×5), actor 5, squad 0 (trace 7695): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 158.95s, trace 7687. Next observer evidence: {'until': 159.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7702}.
<a id="trace-7790"></a>
- 161.45s–161.45s (×1), actor 1, squad 0 (trace 7790): MoveTactically. Knowledge: actor memory at 160.00s, trace 7704. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7847}.
<a id="trace-7791"></a>
- 161.45s–161.45s (×1), actor 1, squad 0 (trace 7791): traveling overwatch. Knowledge: actor memory at 160.00s, trace 7704. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7847}.
<a id="trace-7792"></a>
- 161.45s–161.45s (×1), actor 1, squad 0 (trace 7792): received platoon directive. Knowledge: actor memory at 160.00s, trace 7704. Next observer evidence: {'until': 161.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7847}.
<a id="trace-7847"></a>
<a id="trace-7857"></a>
<a id="trace-7867"></a>
<a id="trace-7876"></a>
<a id="trace-7882"></a>
<a id="trace-7897"></a>
<a id="trace-7914"></a>
<a id="trace-7990"></a>
<a id="trace-8007"></a>
<a id="trace-8019"></a>
<a id="trace-8026"></a>
<a id="trace-8036"></a>
<a id="trace-8043"></a>
<a id="trace-8057"></a>
<a id="trace-8069"></a>
<a id="trace-8077"></a>
<a id="trace-8084"></a>
<a id="trace-8159"></a>
<a id="trace-8173"></a>
<a id="trace-8183"></a>
<a id="trace-8193"></a>
- 161.80s–171.80s (×21), actor 5, squad 0 (trace 7847): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 160.00s, trace 7706. Next observer evidence: {'until': 162.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 7857}.
<a id="trace-1159"></a>
- 172.15s–172.15s (×1), actor 5, squad 0 (events line 1159): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8201"></a>
- 172.15s–172.15s (×1), actor 5, squad 0 (trace 8201): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 172.15s, trace 8201. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749870039146363, 'next_transition': 8218}.
<a id="trace-8202"></a>
- 172.15s–172.15s (×1), actor 5, squad 0 (trace 8202): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 172.15s, trace 8202. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749870039146363, 'next_transition': 8218}.
<a id="trace-8218"></a>
<a id="trace-8232"></a>
<a id="trace-8241"></a>
<a id="trace-8247"></a>
- 172.30s–173.80s (×4), actor 5, squad 0 (trace 8218): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 172.15s, trace 8202. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299737028747501, 'next_transition': 8232}.
<a id="trace-8250"></a>
- 173.85s–173.85s (×1), actor 1, squad 0 (trace 8250): traveling. Knowledge: actor memory at 170.00s, trace 8088. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450031101139338, 'next_transition': 8368}.
<a id="trace-8251"></a>
- 173.85s–173.85s (×1), actor 1, squad 0 (trace 8251): received platoon directive. Knowledge: actor memory at 170.00s, trace 8088. Next observer evidence: {'until': 174.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450031101139338, 'next_transition': 8368}.
<a id="trace-8368"></a>
<a id="trace-8384"></a>
<a id="trace-8460"></a>
<a id="trace-8466"></a>
<a id="trace-8485"></a>
<a id="trace-8503"></a>
<a id="trace-8513"></a>
<a id="trace-8524"></a>
<a id="trace-8537"></a>
<a id="trace-8544"></a>
<a id="trace-8558"></a>
<a id="trace-8575"></a>
<a id="trace-8655"></a>
<a id="trace-8668"></a>
<a id="trace-8681"></a>
<a id="trace-8689"></a>
<a id="trace-8704"></a>
<a id="trace-8713"></a>
<a id="trace-8723"></a>
- 174.30s–183.30s (×19), actor 5, squad 0 (trace 8368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 172.15s, trace 8202. Next observer evidence: {'until': 174.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2206423669349673, 'next_transition': 8384}.
<a id="trace-8726"></a>
- 183.45s–183.45s (×1), actor 1, squad 0 (trace 8726): traveling overwatch. Knowledge: actor memory at 180.00s, trace 8578. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300001626983927, 'next_transition': 8768}.
<a id="trace-8727"></a>
- 183.45s–183.45s (×1), actor 1, squad 0 (trace 8727): matching received arrivals: traveling stage complete. Knowledge: actor memory at 180.00s, trace 8578. Next observer evidence: {'until': 183.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300001626983927, 'next_transition': 8768}.
<a id="trace-8768"></a>
<a id="trace-8781"></a>
<a id="trace-8798"></a>
<a id="trace-8872"></a>
<a id="trace-8879"></a>
<a id="trace-8898"></a>
<a id="trace-8913"></a>
<a id="trace-8925"></a>
<a id="trace-8932"></a>
<a id="trace-8944"></a>
<a id="trace-8958"></a>
<a id="trace-8965"></a>
<a id="trace-8975"></a>
<a id="trace-9052"></a>
<a id="trace-9059"></a>
<a id="trace-9070"></a>
<a id="trace-9080"></a>
<a id="trace-9099"></a>
<a id="trace-9112"></a>
<a id="trace-9120"></a>
- 183.80s–193.30s (×20), actor 5, squad 0 (trace 8768): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 8580. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300001626983925, 'next_transition': 8781}.
<a id="trace-9123"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 9123): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 8978. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150042301303272, 'next_transition': 9193}.
<a id="trace-9124"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 9124): bounding overwatch. Knowledge: actor memory at 190.00s, trace 8978. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150042301303272, 'next_transition': 9193}.
<a id="trace-9125"></a>
- 193.65s–193.65s (×1), actor 1, squad 0 (trace 9125): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 8978. Next observer evidence: {'until': 193.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150042301303272, 'next_transition': 9193}.
<a id="trace-9193"></a>
<a id="trace-9206"></a>
<a id="trace-9221"></a>
<a id="trace-9296"></a>
<a id="trace-9302"></a>
<a id="trace-9321"></a>
<a id="trace-9332"></a>
- 193.80s–196.80s (×7), actor 5, squad 0 (trace 9193): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 8980. Next observer evidence: {'until': 194.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300084602606543, 'next_transition': 9206}.
<a id="trace-9339"></a>
- 197.10s–197.10s (×1), actor 5, squad 0 (trace 9339): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 197.10s, trace 9339. Next observer evidence: {'until': 197.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05942582601234946, 'next_transition': 9343}.
<a id="trace-9343"></a>
- 197.30s–197.30s (×1), actor 5, squad 0 (trace 9343): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 197.10s, trace 9339. Next observer evidence: None.
<a id="trace-1363"></a>
- 197.35s–197.35s (×1), actor 5, squad 0 (events line 1363): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9346"></a>
- 197.35s–197.35s (×1), actor 5, squad 0 (trace 9346): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.213769 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.35s, trace 9346. Next observer evidence: {'until': 197.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1957211663242522, 'next_transition': 9351}.
<a id="trace-9347"></a>
- 197.35s–197.35s (×1), actor 5, squad 0 (trace 9347): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.213769 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 197.35s, trace 9347. Next observer evidence: {'until': 197.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1957211663242522, 'next_transition': 9351}.
<a id="trace-9351"></a>
- 197.80s–197.80s (×1), actor 5, squad 0 (trace 9351): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 197.35s, trace 9347. Next observer evidence: {'until': 198, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06830280469534637, 'next_transition': 9354}.
<a id="trace-9354"></a>
- 198.05s–198.05s (×1), actor 1, squad 0 (trace 9354): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 195.00s, trace 9229. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06983164766466916, 'next_transition': 9477}.
<a id="trace-9355"></a>
- 198.05s–198.05s (×1), actor 1, squad 0 (trace 9355): rearward bound: one stationary suppressing element. Knowledge: actor memory at 195.00s, trace 9229. Next observer evidence: {'until': 198.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06983164766466916, 'next_transition': 9477}.
<a id="trace-9477"></a>
<a id="trace-9486"></a>
<a id="trace-9494"></a>
<a id="trace-9498"></a>
<a id="trace-9580"></a>
<a id="trace-9591"></a>
<a id="trace-9600"></a>
<a id="trace-9608"></a>
<a id="trace-9620"></a>
<a id="trace-9624"></a>
<a id="trace-9630"></a>
<a id="trace-9636"></a>
<a id="trace-9649"></a>
<a id="trace-9659"></a>
<a id="trace-9728"></a>
<a id="trace-9733"></a>
<a id="trace-9749"></a>
<a id="trace-9756"></a>
<a id="trace-9772"></a>
<a id="trace-9782"></a>
<a id="trace-9795"></a>
<a id="trace-9815"></a>
<a id="trace-9828"></a>
<a id="trace-9836"></a>
<a id="trace-9912"></a>
<a id="trace-9930"></a>
<a id="trace-9937"></a>
<a id="trace-9946"></a>
<a id="trace-9962"></a>
<a id="trace-9973"></a>
<a id="trace-9982"></a>
- 198.30s–213.30s (×31), actor 5, squad 0 (trace 9477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 197.35s, trace 9347. Next observer evidence: {'until': 198.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1264623089602687, 'next_transition': 9486}.
<a id="trace-9987"></a>
- 213.35s–213.35s (×1), actor 1, squad 0 (trace 9987): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 210.00s, trace 9839. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9456116793147663, 'next_transition': 10052}.
<a id="trace-9988"></a>
- 213.35s–213.35s (×1), actor 1, squad 0 (trace 9988): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 210.00s, trace 9839. Next observer evidence: {'until': 213.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9456116793147663, 'next_transition': 10052}.
<a id="trace-10052"></a>
<a id="trace-10074"></a>
<a id="trace-10086"></a>
<a id="trace-10168"></a>
<a id="trace-10180"></a>
<a id="trace-10200"></a>
<a id="trace-10210"></a>
<a id="trace-10220"></a>
- 213.80s–217.30s (×8), actor 5, squad 0 (trace 10052): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 9841. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6301728672984169, 'next_transition': 10074}.
<a id="trace-10223"></a>
- 217.30s–217.30s (×1), actor 1, squad 0 (trace 10223): NeedSupport. Knowledge: actor memory at 215.00s, trace 10101. Next observer evidence: {'until': 217.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3370123467322822, 'next_transition': 10230}.
<a id="trace-10230"></a>
<a id="trace-10242"></a>
<a id="trace-10250"></a>
<a id="trace-10261"></a>
<a id="trace-10264"></a>
<a id="trace-10338"></a>
<a id="trace-10349"></a>
<a id="trace-10358"></a>
<a id="trace-10361"></a>
<a id="trace-10377"></a>
<a id="trace-10382"></a>
<a id="trace-10390"></a>
<a id="trace-10399"></a>
<a id="trace-10413"></a>
<a id="trace-10425"></a>
<a id="trace-10496"></a>
<a id="trace-10501"></a>
<a id="trace-10517"></a>
<a id="trace-10521"></a>
<a id="trace-10531"></a>
<a id="trace-10540"></a>
<a id="trace-10556"></a>
<a id="trace-10569"></a>
<a id="trace-10579"></a>
- 217.80s–229.30s (×24), actor 5, squad 0 (trace 10230): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 10103. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267989423614008, 'next_transition': 10242}.
<a id="trace-10583"></a>
- 229.55s–229.55s (×1), actor 1, squad 0 (trace 10583): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 225.00s, trace 10430. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299990131848401, 'next_transition': 10639}.
<a id="trace-10584"></a>
- 229.55s–229.55s (×1), actor 1, squad 0 (trace 10584): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 225.00s, trace 10430. Next observer evidence: {'until': 229.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6299990131848401, 'next_transition': 10639}.
<a id="trace-10639"></a>
<a id="trace-10716"></a>
<a id="trace-10729"></a>
<a id="trace-10741"></a>
<a id="trace-10751"></a>
<a id="trace-10768"></a>
<a id="trace-10782"></a>
<a id="trace-10791"></a>
<a id="trace-10802"></a>
<a id="trace-10816"></a>
<a id="trace-10824"></a>
<a id="trace-10897"></a>
- 229.80s–235.30s (×12), actor 5, squad 0 (trace 10639): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 10432. Next observer evidence: {'until': 230.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.630004359630624, 'next_transition': 10716}.
<a id="trace-10908"></a>
- 235.85s–235.85s (×1), actor 1, squad 0 (trace 10908): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 235.00s, trace 10830. Next observer evidence: {'until': 236.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149908431208778, 'next_transition': 10924}.
<a id="trace-10924"></a>
<a id="trace-10946"></a>
- 236.30s–236.80s (×2), actor 5, squad 0 (trace 10924): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 10832. Next observer evidence: {'until': 236.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.23626136013145616, 'next_transition': 10946}.
<a id="trace-10949"></a>
- 236.85s–236.85s (×1), actor 1, squad 0 (trace 10949): MoveTactically. Knowledge: actor memory at 235.00s, trace 10830. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450183603770632, 'next_transition': 10966}.
<a id="trace-10950"></a>
- 236.85s–236.85s (×1), actor 1, squad 0 (trace 10950): traveling overwatch. Knowledge: actor memory at 235.00s, trace 10830. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450183603770632, 'next_transition': 10966}.
<a id="trace-10951"></a>
- 236.85s–236.85s (×1), actor 1, squad 0 (trace 10951): received platoon directive. Knowledge: actor memory at 235.00s, trace 10830. Next observer evidence: {'until': 237.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450183603770632, 'next_transition': 10966}.
<a id="trace-10966"></a>
<a id="trace-10978"></a>
- 237.30s–237.80s (×2), actor 5, squad 0 (trace 10966): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 10832. Next observer evidence: {'until': 237.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0631311190300112, 'next_transition': 10978}.
<a id="trace-10981"></a>
- 237.85s–237.85s (×1), actor 1, squad 0 (trace 10981): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 235.00s, trace 10830. Next observer evidence: {'until': 238.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8268468494880701, 'next_transition': 11054}.
<a id="trace-11054"></a>
<a id="trace-11066"></a>
<a id="trace-11082"></a>
<a id="trace-11093"></a>
<a id="trace-11171"></a>
<a id="trace-11185"></a>
<a id="trace-11199"></a>
<a id="trace-11206"></a>
- 238.30s–241.80s (×8), actor 5, squad 0 (trace 11054): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 235.00s, trace 10832. Next observer evidence: {'until': 238.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9842978920535206, 'next_transition': 11066}.
<a id="trace-1612"></a>
- 242.10s–242.10s (×1), actor 5, squad 0 (events line 1612): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-11212"></a>
- 242.10s–242.10s (×1), actor 5, squad 0 (trace 11212): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 242.10s, trace 11212. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15747288853958016, 'next_transition': 11223}.
<a id="trace-11213"></a>
- 242.10s–242.10s (×1), actor 5, squad 0 (trace 11213): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245531 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 242.10s, trace 11213. Next observer evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15747288853958016, 'next_transition': 11223}.
<a id="trace-11223"></a>
<a id="trace-11232"></a>
<a id="trace-11244"></a>
<a id="trace-11256"></a>
<a id="trace-11271"></a>
- 242.30s–244.30s (×5), actor 5, squad 0 (trace 11223): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 242.10s, trace 11213. Next observer evidence: {'until': 242.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4724976752588326, 'next_transition': 11232}.
<a id="trace-11276"></a>
- 244.65s–244.65s (×1), actor 1, squad 0 (trace 11276): Withdraw to received rally. Knowledge: actor memory at 240.00s, trace 11096. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501906983212125, 'next_transition': 11338}.
<a id="trace-11277"></a>
- 244.65s–244.65s (×1), actor 1, squad 0 (trace 11277): rearward bound: one stationary suppressing element. Knowledge: actor memory at 240.00s, trace 11096. Next observer evidence: {'until': 244.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501906983212125, 'next_transition': 11338}.
<a id="trace-11338"></a>
<a id="trace-11409"></a>
<a id="trace-11420"></a>
<a id="trace-11437"></a>
<a id="trace-11446"></a>
<a id="trace-11459"></a>
<a id="trace-11468"></a>
<a id="trace-11484"></a>
<a id="trace-11498"></a>
<a id="trace-11508"></a>
<a id="trace-11522"></a>
<a id="trace-11599"></a>
<a id="trace-11607"></a>
<a id="trace-11622"></a>
<a id="trace-11630"></a>
<a id="trace-11642"></a>
<a id="trace-11654"></a>
<a id="trace-11664"></a>
<a id="trace-11669"></a>
<a id="trace-11683"></a>
<a id="trace-11692"></a>
<a id="trace-11765"></a>
<a id="trace-11776"></a>
<a id="trace-11797"></a>
<a id="trace-11805"></a>
- 244.80s–256.80s (×25), actor 5, squad 0 (trace 11338): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 242.10s, trace 11213. Next observer evidence: {'until': 245.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450135028472979, 'next_transition': 11409}.
<a id="trace-11815"></a>
- 257.10s–257.10s (×1), actor 1, squad 0 (trace 11815): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 255.00s, trace 11697. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149800311130865, 'next_transition': 11874}.
<a id="trace-11816"></a>
- 257.10s–257.10s (×1), actor 1, squad 0 (trace 11816): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 255.00s, trace 11697. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149800311130865, 'next_transition': 11874}.
<a id="trace-11874"></a>
<a id="trace-11881"></a>
<a id="trace-11899"></a>
<a id="trace-11914"></a>
<a id="trace-11926"></a>
<a id="trace-11932"></a>
<a id="trace-12011"></a>
<a id="trace-12021"></a>
<a id="trace-12035"></a>
<a id="trace-12045"></a>
<a id="trace-12058"></a>
<a id="trace-12067"></a>
<a id="trace-12081"></a>
<a id="trace-12090"></a>
<a id="trace-12103"></a>
<a id="trace-12112"></a>
<a id="trace-12189"></a>
<a id="trace-12196"></a>
<a id="trace-12212"></a>
<a id="trace-12221"></a>
<a id="trace-12231"></a>
<a id="trace-12238"></a>
<a id="trace-12253"></a>
<a id="trace-12262"></a>
<a id="trace-12277"></a>
<a id="trace-12285"></a>
<a id="trace-12363"></a>
<a id="trace-12370"></a>
<a id="trace-12381"></a>
<a id="trace-12388"></a>
<a id="trace-12404"></a>
<a id="trace-12414"></a>
- 257.30s–272.80s (×32), actor 5, squad 0 (trace 11874): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 255.00s, trace 11699. Next observer evidence: {'until': 257.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450378193490396, 'next_transition': 11881}.
<a id="trace-12427"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 12427): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 270.00s, trace 12289. Next observer evidence: None.
<a id="trace-12428"></a>
- 273.25s–273.25s (×1), actor 1, squad 0 (trace 12428): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 270.00s, trace 12289. Next observer evidence: None.
<a id="trace-12477"></a>
<a id="trace-12482"></a>
<a id="trace-12504"></a>
<a id="trace-12513"></a>
<a id="trace-12584"></a>
<a id="trace-12595"></a>
<a id="trace-12611"></a>
<a id="trace-12622"></a>
<a id="trace-12635"></a>
<a id="trace-12642"></a>
<a id="trace-12661"></a>
<a id="trace-12668"></a>
<a id="trace-12681"></a>
<a id="trace-12690"></a>
<a id="trace-12765"></a>
<a id="trace-12774"></a>
<a id="trace-12789"></a>
<a id="trace-12796"></a>
- 273.30s–281.80s (×18), actor 5, squad 0 (trace 12477): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 270.00s, trace 12291. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449916051207807, 'next_transition': 12482}.
<a id="trace-12804"></a>
- 282.25s–282.25s (×1), actor 1, squad 0 (trace 12804): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 280.00s, trace 12693. Next observer evidence: None.
<a id="trace-12805"></a>
- 282.25s–282.25s (×1), actor 1, squad 0 (trace 12805): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 280.00s, trace 12693. Next observer evidence: None.
<a id="trace-12862"></a>
<a id="trace-12871"></a>
<a id="trace-12887"></a>
<a id="trace-12896"></a>
<a id="trace-12914"></a>
<a id="trace-12926"></a>
<a id="trace-13005"></a>
<a id="trace-13012"></a>
<a id="trace-13026"></a>
<a id="trace-13033"></a>
<a id="trace-13045"></a>
<a id="trace-13052"></a>
<a id="trace-13065"></a>
<a id="trace-13075"></a>
<a id="trace-13090"></a>
<a id="trace-13096"></a>
<a id="trace-13171"></a>
<a id="trace-13186"></a>
<a id="trace-13195"></a>
<a id="trace-13202"></a>
<a id="trace-13218"></a>
<a id="trace-13225"></a>
<a id="trace-13240"></a>
<a id="trace-13249"></a>
<a id="trace-13266"></a>
<a id="trace-13276"></a>
<a id="trace-13347"></a>
<a id="trace-13357"></a>
<a id="trace-13371"></a>
<a id="trace-13381"></a>
<a id="trace-13397"></a>
<a id="trace-13404"></a>
<a id="trace-13423"></a>
- 282.30s–298.30s (×33), actor 5, squad 0 (trace 12862): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 280.00s, trace 12695. Next observer evidence: {'until': 282.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450355277711764, 'next_transition': 12871}.
<a id="trace-13427"></a>
- 298.50s–298.50s (×1), actor 1, squad 0 (trace 13427): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 295.00s, trace 13280. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13476}.
<a id="trace-13428"></a>
- 298.50s–298.50s (×1), actor 1, squad 0 (trace 13428): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 295.00s, trace 13280. Next observer evidence: {'until': 298.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13476}.
<a id="trace-13476"></a>
<a id="trace-13490"></a>
<a id="trace-13501"></a>
<a id="trace-13572"></a>
- 298.80s–300.30s (×4), actor 5, squad 0 (trace 13476): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 295.00s, trace 13282. Next observer evidence: {'until': 299.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13490}.
<a id="trace-13581"></a>
- 300.70s–300.70s (×1), actor 1, squad 0 (trace 13581): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 300.00s, trace 13506. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13629}.
<a id="trace-13582"></a>
- 300.70s–300.70s (×1), actor 1, squad 0 (trace 13582): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 300.00s, trace 13506. Next observer evidence: {'until': 300.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13629}.
<a id="trace-13629"></a>
<a id="trace-13645"></a>
<a id="trace-13657"></a>
<a id="trace-13670"></a>
- 300.80s–302.30s (×4), actor 5, squad 0 (trace 13629): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 13508. Next observer evidence: {'until': 301.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13645}.
<a id="trace-2038"></a>
- 302.70s–302.70s (×1), actor 5, squad 0 (events line 2038): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13675"></a>
- 302.70s–302.70s (×1), actor 5, squad 0 (trace 13675): renew committed intent (75 s lifetime). Knowledge: actor memory at 302.70s, trace 13675. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11340844600381202, 'next_transition': 13679}.
<a id="trace-13679"></a>
<a id="trace-13693"></a>
- 302.80s–303.30s (×2), actor 5, squad 0 (trace 13679): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.70s, trace 13675. Next observer evidence: {'until': 303.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679071023743685, 'next_transition': 13693}.
<a id="trace-13699"></a>
- 303.45s–303.45s (×1), actor 1, squad 0 (trace 13699): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 300.00s, trace 13506. Next observer evidence: {'until': 303.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22679192142799318, 'next_transition': 13709}.
<a id="trace-13709"></a>
<a id="trace-13728"></a>
<a id="trace-13739"></a>
<a id="trace-13813"></a>
<a id="trace-13825"></a>
<a id="trace-13842"></a>
<a id="trace-13850"></a>
<a id="trace-13862"></a>
<a id="trace-13867"></a>
<a id="trace-13882"></a>
<a id="trace-13893"></a>
<a id="trace-13910"></a>
<a id="trace-13916"></a>
<a id="trace-13993"></a>
<a id="trace-14000"></a>
<a id="trace-14008"></a>
- 303.80s–311.30s (×16), actor 5, squad 0 (trace 13709): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.70s, trace 13675. Next observer evidence: {'until': 304.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2267907102374333, 'next_transition': 13728}.
<a id="trace-2106"></a>
- 311.45s–311.45s (×1), actor 5, squad 0 (events line 2106): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14012"></a>
- 311.45s–311.45s (×1), actor 5, squad 0 (trace 14012): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.852253 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 311.45s, trace 14012. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14017}.
<a id="trace-14013"></a>
- 311.45s–311.45s (×1), actor 5, squad 0 (trace 14013): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=1.852253 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 311.45s, trace 14013. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14017}.
<a id="trace-14017"></a>
<a id="trace-14025"></a>
- 311.80s–312.30s (×2), actor 5, squad 0 (trace 14017): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 311.45s, trace 14013. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14025}.
<a id="trace-2112"></a>
- 312.70s–312.70s (×1), actor 5, squad 0 (events line 2112): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14030"></a>
- 312.70s–312.70s (×1), actor 5, squad 0 (trace 14030): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.70s, trace 14030. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14034}.
<a id="trace-14031"></a>
- 312.70s–312.70s (×1), actor 5, squad 0 (trace 14031): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 312.70s, trace 14031. Next observer evidence: {'until': 312.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14034}.
<a id="trace-14034"></a>
<a id="trace-14043"></a>
- 312.80s–313.30s (×2), actor 5, squad 0 (trace 14034): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.70s, trace 14031. Next observer evidence: {'until': 313.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14043}.
<a id="trace-14047"></a>
- 313.55s–313.55s (×1), actor 1, squad 0 (trace 14047): MoveTactically. Knowledge: actor memory at 310.00s, trace 13921. Next observer evidence: {'until': 313.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14156}.
<a id="trace-14048"></a>
- 313.55s–313.55s (×1), actor 1, squad 0 (trace 14048): traveling. Knowledge: actor memory at 310.00s, trace 13921. Next observer evidence: {'until': 313.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14156}.
<a id="trace-14049"></a>
- 313.55s–313.55s (×1), actor 1, squad 0 (trace 14049): received platoon directive. Knowledge: actor memory at 310.00s, trace 13921. Next observer evidence: {'until': 313.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14156}.
<a id="trace-14156"></a>
<a id="trace-14172"></a>
- 313.80s–314.30s (×2), actor 5, squad 0 (trace 14156): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.70s, trace 14031. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14172}.
<a id="trace-14177"></a>
- 314.55s–314.55s (×1), actor 1, squad 0 (trace 14177): received platoon directive. Knowledge: actor memory at 310.00s, trace 13921. Next observer evidence: {'until': 314.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31515946459689126, 'next_transition': 14285}.
<a id="trace-14285"></a>
<a id="trace-14361"></a>
<a id="trace-14376"></a>
<a id="trace-14397"></a>
<a id="trace-14408"></a>
<a id="trace-14425"></a>
<a id="trace-14435"></a>
<a id="trace-14453"></a>
<a id="trace-14464"></a>
<a id="trace-14475"></a>
<a id="trace-14483"></a>
<a id="trace-14559"></a>
<a id="trace-14570"></a>
<a id="trace-14586"></a>
<a id="trace-14594"></a>
<a id="trace-14608"></a>
<a id="trace-14614"></a>
<a id="trace-14629"></a>
<a id="trace-14639"></a>
<a id="trace-14658"></a>
<a id="trace-14670"></a>
<a id="trace-14746"></a>
<a id="trace-14753"></a>
- 314.80s–325.80s (×23), actor 5, squad 0 (trace 14285): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 312.70s, trace 14031. Next observer evidence: {'until': 315.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5417123369938905, 'next_transition': 14361}.
<a id="trace-14757"></a>
- 326.05s–326.05s (×1), actor 1, squad 0 (trace 14757): matching received arrivals: traveling stage complete. Knowledge: actor memory at 325.00s, trace 14679. Next observer evidence: {'until': 326.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149888966297098, 'next_transition': 14872}.
<a id="trace-14872"></a>
<a id="trace-14879"></a>
<a id="trace-14888"></a>
<a id="trace-14901"></a>
<a id="trace-14917"></a>
<a id="trace-14928"></a>
<a id="trace-14945"></a>
<a id="trace-14954"></a>
<a id="trace-15036"></a>
<a id="trace-15044"></a>
<a id="trace-15058"></a>
<a id="trace-15068"></a>
<a id="trace-15083"></a>
<a id="trace-15094"></a>
<a id="trace-15109"></a>
<a id="trace-15117"></a>
<a id="trace-15134"></a>
<a id="trace-15141"></a>
<a id="trace-15213"></a>
<a id="trace-15222"></a>
<a id="trace-15235"></a>
<a id="trace-15249"></a>
<a id="trace-15263"></a>
<a id="trace-15274"></a>
<a id="trace-15292"></a>
<a id="trace-15300"></a>
- 326.30s–338.80s (×26), actor 5, squad 0 (trace 14872): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 325.00s, trace 14681. Next observer evidence: {'until': 326.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9843416978256291, 'next_transition': 14879}.
<a id="trace-15303"></a>
- 338.80s–338.80s (×1), actor 1, squad 0 (trace 15303): matching received arrivals: deployment leg complete. Knowledge: actor memory at 335.00s, trace 15146. Next observer evidence: {'until': 339.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300002400793219, 'next_transition': 15314}.
<a id="trace-15314"></a>
<a id="trace-15322"></a>
<a id="trace-15397"></a>
<a id="trace-15406"></a>
<a id="trace-15420"></a>
<a id="trace-15430"></a>
<a id="trace-15441"></a>
- 339.30s–342.30s (×7), actor 5, squad 0 (trace 15314): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 335.00s, trace 15148. Next observer evidence: {'until': 339.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15670007179321976, 'next_transition': 15322}.
<a id="trace-2332"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 2332): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15445"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 15445): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.70s, trace 15445. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15449}.
<a id="trace-15446"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 15446): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 342.70s, trace 15446. Next observer evidence: {'until': 342.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15449}.
<a id="trace-15449"></a>
<a id="trace-15463"></a>
<a id="trace-15469"></a>
<a id="trace-15481"></a>
<a id="trace-15493"></a>
- 342.80s–344.80s (×5), actor 5, squad 0 (trace 15449): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 15446. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15463}.
<a id="trace-15498"></a>
- 344.85s–344.85s (×1), actor 1, squad 0 (trace 15498): Reorganise: completed/failed drill. Knowledge: actor memory at 340.00s, trace 15326. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15674}.
<a id="trace-15501"></a>
- 344.85s–344.85s (×1), actor 1, squad 0 (trace 15501): MoveTactically. Knowledge: actor memory at 340.00s, trace 15326. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15674}.
<a id="trace-15502"></a>
- 344.85s–344.85s (×1), actor 1, squad 0 (trace 15502): Reorganise complete. Knowledge: actor memory at 340.00s, trace 15326. Next observer evidence: {'until': 345.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15674}.
<a id="trace-15674"></a>
<a id="trace-15684"></a>
<a id="trace-15696"></a>
<a id="trace-15704"></a>
<a id="trace-15715"></a>
<a id="trace-15723"></a>
<a id="trace-15737"></a>
<a id="trace-15746"></a>
<a id="trace-15762"></a>
<a id="trace-15769"></a>
<a id="trace-15848"></a>
<a id="trace-15860"></a>
<a id="trace-15876"></a>
<a id="trace-15887"></a>
<a id="trace-15904"></a>
<a id="trace-15913"></a>
<a id="trace-15928"></a>
<a id="trace-15937"></a>
<a id="trace-15951"></a>
<a id="trace-15958"></a>
<a id="trace-16031"></a>
<a id="trace-16037"></a>
<a id="trace-16054"></a>
<a id="trace-16066"></a>
<a id="trace-16081"></a>
<a id="trace-16089"></a>
- 345.30s–357.80s (×26), actor 5, squad 0 (trace 15674): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 15610. Next observer evidence: {'until': 345.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1968750142857141, 'next_transition': 15684}.
<a id="trace-16100"></a>
- 358.25s–358.25s (×1), actor 1, squad 0 (trace 16100): matching received arrivals: traveling stage complete. Knowledge: actor memory at 355.00s, trace 15963. Next observer evidence: None.
<a id="trace-16210"></a>
<a id="trace-16218"></a>
<a id="trace-16239"></a>
<a id="trace-16248"></a>
- 358.30s–359.80s (×4), actor 5, squad 0 (trace 16210): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 355.00s, trace 15965. Next observer evidence: {'until': 358.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7867000143002411, 'next_transition': 16218}.

## Net delivery

250 matched order/radio deliveries; 244 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.191s; maximum 1.800s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1699: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1705: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1706: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 1885: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 22.30s leader 5, trace 1886: estimate 3.95; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.05s leader 5, trace 1913: estimate 7.91; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 2268: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 2269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 2270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 2271: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 2272: estimate 7.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 2273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 2274: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 2275: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 2276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 2277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 2278: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 2279: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 2489: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2492: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2493: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2494: estimate 7.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2495: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2496: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2497: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2498: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2499: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2500: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 2916: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2919: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2920: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2921: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2922: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2923: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2924: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2925: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2926: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 3117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 3118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 3119: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 3120: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 3121: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 3122: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 3123: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 3124: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 3125: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 3126: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3397: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 3398: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 3544: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3546: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3547: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3548: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3549: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3550: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3551: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3552: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3553: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 3768: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3770: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3771: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3772: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3773: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3774: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3775: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3776: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3777: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 3969: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3971: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3972: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3973: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3974: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3975: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3976: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3977: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3978: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 4126: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 4127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 4128: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 4129: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 4130: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 4131: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 4132: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 4133: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 4134: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 4135: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 4365: estimate 7.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 4366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 4367: estimate 6.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 4368: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 4369: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 4370: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 4371: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 4372: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 4373: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 4374: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.05s leader 5, trace 4499: estimate 7.66; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 68.05s leader 5, trace 4500: estimate 7.66; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 4539: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4541: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4542: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4543: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4544: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4545: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4546: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4547: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4548: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 4768: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4770: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4771: estimate 7.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4772: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4773: estimate 3.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 4774: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4775: estimate 3.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4776: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4777: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 4929: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 4930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 4931: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 4932: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 4933: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 4934: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 4935: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 4936: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 4937: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 4938: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 5172: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 5173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5174: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5175: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5176: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5177: estimate 3.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 5178: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5179: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5180: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5181: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 5337: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 5338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5339: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5340: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5341: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5342: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 5343: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5344: estimate 3.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5345: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5346: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 5577: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 5578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5579: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5580: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5581: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5582: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 5583: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5584: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5585: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5586: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 5756: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 5757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5758: estimate 7.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5759: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5760: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5761: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 5762: estimate 3.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5763: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5764: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5765: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 5937: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 5938: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5939: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5940: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5941: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5942: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 5943: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5944: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5945: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5946: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 6181: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 6182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 6183: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 6184: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 6185: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 6186: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 6187: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 6188: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 6189: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 6190: estimate 3.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 6365: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 6366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 6367: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 6368: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 6369: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 6370: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 6371: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 6372: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 6373: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 6374: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 6542: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 6543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 6544: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 6545: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 6546: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 6547: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 6548: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 6549: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 6550: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6551: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 6686: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 6687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6688: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6689: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6690: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6691: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 6692: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6693: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6694: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6695: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 128.05s leader 5, trace 6796: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 6833: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 6834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6835: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6836: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6837: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6838: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 6839: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6840: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6841: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6842: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 6975: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 6976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6977: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6978: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6979: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6980: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 6981: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6982: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6983: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6984: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 7123: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 7124: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 7125: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 7126: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 7127: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 7128: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 7129: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 7130: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 7131: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 7132: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 7269: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 7270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 7271: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 7272: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 7273: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 7274: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 7275: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 7276: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 7277: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 7278: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 7408: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 7409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 7410: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 7411: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 7412: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 7413: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 7414: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 7415: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 7416: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 7417: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 7554: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 7555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 7556: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 7557: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 7558: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 7559: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 7560: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 7561: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 7562: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 7563: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 158.95s leader 5, trace 7686: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 158.95s leader 5, trace 7687: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 7704: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 7705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 7706: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 7707: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 7708: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 7709: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 7710: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 7711: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 7712: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 7713: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 7917: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 7918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 7919: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 7920: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 7921: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 7922: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 7923: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 7924: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 7925: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 7926: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 8088: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 8089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 8090: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 8091: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 8092: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 8093: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 8094: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 8095: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 8096: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 8097: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 172.15s leader 5, trace 8201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 172.15s leader 5, trace 8202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 8387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 8388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 8389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 8390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 8391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 8392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 8393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 8394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 8395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 8396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 8578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 8579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 8580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 8581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 8582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 8583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 8584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 8585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 8586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 8587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 8804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 8805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 8806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 8807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 8808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 8809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 8810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 8811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 8812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 8813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 8978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 8979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 8980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 8981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 8982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 8983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 8984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 8985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 8986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 8987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 9229: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 9230: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 9231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 9232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 9233: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 9234: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 9235: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 9236: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 9237: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 9238: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.10s leader 5, trace 9339: estimate 7.86; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.35s leader 5, trace 9346: estimate 7.86; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 197.35s leader 5, trace 9347: estimate 7.86; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 9503: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 9504: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 9505: estimate 7.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 9506: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 9507: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 9508: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 9509: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 9510: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 9511: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 9512: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 9661: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 9662: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 9663: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 9664: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 9665: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 9666: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 9667: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 9668: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 9669: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 9839: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 9840: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 9841: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 9842: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 9843: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 9844: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 9845: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 9846: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 9847: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 10101: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 10102: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 10103: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 10104: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 10105: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 10106: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 10107: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 10108: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 10109: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 10268: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 10269: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 10270: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 10271: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 10272: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 10273: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 10274: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 10275: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 10276: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 10430: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 10431: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 10432: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 10433: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 10434: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 10435: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 10436: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 10437: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 10438: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 10643: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 10644: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 10645: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 10646: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 10647: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 10648: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 10649: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 10650: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 10651: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 10830: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 10831: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 10832: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 10833: estimate 6.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 10834: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 10835: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 10836: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 10837: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 10838: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 11096: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 11097: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 11098: estimate 6.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 11099: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 11100: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 11101: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 11102: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 11103: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 11104: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 242.10s leader 5, trace 11212: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 242.10s leader 5, trace 11213: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 11342: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 11343: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 11344: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 11345: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 11346: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 11347: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 11348: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 11349: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 11350: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 11528: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 11529: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 11530: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 11531: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 11532: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 11533: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 11534: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 11535: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 11536: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 11697: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 11698: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 11699: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 11700: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 11701: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 11702: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 11703: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 11704: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 11705: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 11939: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 11940: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 11941: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 11942: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 11943: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 11944: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 11945: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 11946: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 11947: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 12121: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 12122: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 12123: estimate 6.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 12124: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 12125: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 12126: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 12127: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 12128: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 12129: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 12289: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 12290: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 12291: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 12292: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 12293: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 12294: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 12295: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 12296: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 12297: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 12517: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 12518: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 12519: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 12520: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 12521: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 12522: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 12523: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 12524: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 12525: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 12693: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 12694: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 12695: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 12696: estimate 5.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 12697: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 12698: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 12699: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 12700: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 12701: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 12933: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 12934: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 12935: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 12936: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 12937: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 12938: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 12939: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 12940: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 12941: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 13099: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 13100: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 13101: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 13102: estimate 5.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 13103: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 13104: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 13105: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 13106: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 13107: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 13280: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 13281: estimate 5.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 13282: estimate 5.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 13283: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 13284: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 13285: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 13286: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 13287: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 13288: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 13506: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 13507: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 13508: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 13509: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 13510: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 13511: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 13512: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 13513: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 13514: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.70s leader 5, trace 13675: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 13747: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 13748: estimate 4.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 13749: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 13750: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 13751: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 13752: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 13753: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 13754: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 13755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 13921: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 13922: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 13923: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 13924: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 13925: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 13926: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 13927: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 13928: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 13929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 311.45s leader 5, trace 14012: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 311.45s leader 5, trace 14013: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.70s leader 5, trace 14030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 312.70s leader 5, trace 14031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 14292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 14293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 14294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 14295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 14296: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 14297: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 14298: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 14299: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 14300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 14488: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 14489: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 14490: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 14491: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 14492: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 14493: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 14494: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 14495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 14496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 14679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 14680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 14681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 14682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 14683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 14684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 14685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 14686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 14687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 14959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 14960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 14961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 14962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 14963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 14964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 14965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 14966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 14967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 15146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 15147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 15148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 15149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 15150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 15151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 15152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 15153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 15154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 15326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 15327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 15328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 15329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 15330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 15331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 15332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 15333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 15334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 15445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 15446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 15608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 15609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 15610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 15611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 15612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 15613: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 15614: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 15615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 15616: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 15774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 15775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 15776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 15777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 15778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 15779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 15780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 15781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 15782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 15963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 15964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 15965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 15966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 15967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 15968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 15969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 15970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 15971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 16250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 16251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 16252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 16253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 16254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 16255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 16256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 16257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 16258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Reed incapacitated
- 1: Vale killed in action
- 1: Bram incapacitated

## Outcome attribution

- 68.05s, evidence 547: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 68.05s, evidence 4499: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.218417 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751000365056175, 'next_transition': 4509}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 68.05s, evidence 4500: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.218417 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 68.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15751000365056175, 'next_transition': 4509}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 128.05s, evidence 927: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 128.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6801}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 242.10s, evidence 1612: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 242.10s, evidence 11212: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245531 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15747288853958016, 'next_transition': 11223}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 242.10s, evidence 11213: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.245531 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 242.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15747288853958016, 'next_transition': 11223}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 302.70s, evidence 2038: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
