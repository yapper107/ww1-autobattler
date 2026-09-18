# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/107/good-ember/battle-107-1789674244130537448`

## Battle summary

**Ember** · 360 s · 185 shots.

### Turning points

- 15.5s, squad 4: contact (events line 170). First recorded contact.
- 19.9s, squad 1: withdrawal ([trace 4104](#trace-4104)). 52.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 34.0s, squad 0: withdrawal ([trace 6824](#trace-6824)). 76.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 37.9s, squad 1: help call ([trace 7736](#trace-7736)). No completion observed before termination.
- 39.7s, squad 0: help call ([trace 7850](#trace-7850)). No completion observed before termination.
- 191.4s, squad 0: assault ([trace 20932](#trace-20932)). 192.4s, squad 0: advanced tactically.
- 203.1s, squad 0: help call ([trace 22003](#trace-22003)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, prepared a base of fire and 3 further drill types; withdrew; 30 shots, 1/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 16 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 124 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 15 shots, 1/2 lost.

### Decisions and attribution

At 111.3s, squad 1 chose took cover and returned fire ([trace 15851](#trace-15851)), followed by 3 shots and 1 own casualties; estimate 8.2 against 0 distinct squad-reported contacts; At 197.9s, squad 0 chose took cover and returned fire ([trace 21598](#trace-21598)), followed by 1 shots and 0 own casualties; estimate 8.7 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1377](#trace-1377)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1397}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1379](#trace-1379)). Following evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.455349048199114, 'next_transition': 1922}.

### Communication

253 matched deliveries (mean 0.62s, max 5.50s); 487 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.50s, squad 4, contact, evidence events line 170: First recorded contact; .
- 19.90s, squad 1, withdrawal, evidence 4104: BreakContact: believed ratio at least two without superiority; 52.9s, squad 1: contact broken or rally reached: Occupy and report strength.
- 34.00s, squad 0, withdrawal, evidence 6824: BreakContact: believed ratio at least two without superiority; 76.6s, squad 0: contact broken or rally reached: Occupy and report strength.
- 37.85s, squad 1, help call, evidence 7736: NeedSupport; No completion observed before termination.
- 39.70s, squad 0, help call, evidence 7850: NeedSupport; No completion observed before termination.
- 191.35s, squad 0, assault, evidence 20932: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 192.4s, squad 0: advanced tactically.
- 203.10s, squad 0, help call, evidence 22003: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945629032239447, 'next_transition': 832}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945629032239447, 'next_transition': 832}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.945629032239447, 'next_transition': 832}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1145}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1145}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1145}.
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
<a id="trace-836"></a>
<a id="trace-838"></a>
<a id="trace-867"></a>
<a id="trace-869"></a>
<a id="trace-898"></a>
<a id="trace-900"></a>
<a id="trace-921"></a>
<a id="trace-923"></a>
<a id="trace-949"></a>
<a id="trace-951"></a>
<a id="trace-980"></a>
<a id="trace-982"></a>
<a id="trace-1007"></a>
<a id="trace-1009"></a>
<a id="trace-1034"></a>
<a id="trace-1036"></a>
<a id="trace-1051"></a>
<a id="trace-1053"></a>
<a id="trace-1142"></a>
<a id="trace-1144"></a>
<a id="trace-1288"></a>
<a id="trace-1290"></a>
<a id="trace-1312"></a>
<a id="trace-1314"></a>
<a id="trace-1336"></a>
<a id="trace-1338"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1401"></a>
<a id="trace-1403"></a>
<a id="trace-1710"></a>
<a id="trace-1712"></a>
<a id="trace-1737"></a>
<a id="trace-1739"></a>
<a id="trace-1773"></a>
<a id="trace-1775"></a>
<a id="trace-1793"></a>
<a id="trace-1795"></a>
<a id="trace-1879"></a>
<a id="trace-1881"></a>
<a id="trace-1919"></a>
<a id="trace-1921"></a>
<a id="trace-2717"></a>
<a id="trace-2719"></a>
<a id="trace-3135"></a>
<a id="trace-3137"></a>
<a id="trace-3183"></a>
<a id="trace-3185"></a>
<a id="trace-3239"></a>
<a id="trace-3241"></a>
<a id="trace-3301"></a>
<a id="trace-3303"></a>
<a id="trace-3345"></a>
<a id="trace-3347"></a>
<a id="trace-3721"></a>
<a id="trace-3723"></a>
<a id="trace-4091"></a>
<a id="trace-4093"></a>
<a id="trace-4374"></a>
<a id="trace-4376"></a>
<a id="trace-4448"></a>
<a id="trace-4450"></a>
<a id="trace-4503"></a>
<a id="trace-4505"></a>
<a id="trace-4557"></a>
<a id="trace-4559"></a>
<a id="trace-4624"></a>
<a id="trace-4626"></a>
<a id="trace-4675"></a>
<a id="trace-4677"></a>
<a id="trace-4739"></a>
<a id="trace-4741"></a>
<a id="trace-4755"></a>
<a id="trace-4757"></a>
<a id="trace-5155"></a>
<a id="trace-5157"></a>
<a id="trace-5200"></a>
<a id="trace-5202"></a>
<a id="trace-5313"></a>
<a id="trace-5315"></a>
<a id="trace-5384"></a>
<a id="trace-5386"></a>
<a id="trace-5450"></a>
<a id="trace-5452"></a>
<a id="trace-5521"></a>
<a id="trace-5523"></a>
<a id="trace-5607"></a>
<a id="trace-5609"></a>
<a id="trace-5656"></a>
<a id="trace-5658"></a>
<a id="trace-5697"></a>
<a id="trace-5699"></a>
<a id="trace-5725"></a>
<a id="trace-5727"></a>
<a id="trace-6096"></a>
<a id="trace-6098"></a>
<a id="trace-6119"></a>
<a id="trace-6121"></a>
<a id="trace-6542"></a>
<a id="trace-6544"></a>
<a id="trace-6573"></a>
<a id="trace-6575"></a>
<a id="trace-6611"></a>
<a id="trace-6613"></a>
<a id="trace-6653"></a>
<a id="trace-6655"></a>
<a id="trace-6695"></a>
<a id="trace-6697"></a>
<a id="trace-6739"></a>
<a id="trace-6741"></a>
<a id="trace-6770"></a>
<a id="trace-6772"></a>
<a id="trace-6807"></a>
<a id="trace-6809"></a>
<a id="trace-7211"></a>
<a id="trace-7213"></a>
<a id="trace-7260"></a>
<a id="trace-7262"></a>
<a id="trace-7391"></a>
<a id="trace-7393"></a>
<a id="trace-7499"></a>
<a id="trace-7501"></a>
<a id="trace-7563"></a>
<a id="trace-7565"></a>
<a id="trace-7634"></a>
<a id="trace-7636"></a>
<a id="trace-7690"></a>
<a id="trace-7692"></a>
<a id="trace-7727"></a>
<a id="trace-7729"></a>
<a id="trace-7763"></a>
<a id="trace-7765"></a>
<a id="trace-7790"></a>
<a id="trace-7792"></a>
<a id="trace-7829"></a>
<a id="trace-7831"></a>
<a id="trace-7861"></a>
<a id="trace-7863"></a>
<a id="trace-7960"></a>
<a id="trace-7962"></a>
<a id="trace-8011"></a>
<a id="trace-8013"></a>
<a id="trace-8037"></a>
<a id="trace-8039"></a>
<a id="trace-8072"></a>
<a id="trace-8074"></a>
<a id="trace-8109"></a>
<a id="trace-8111"></a>
<a id="trace-8143"></a>
<a id="trace-8145"></a>
<a id="trace-8183"></a>
<a id="trace-8185"></a>
<a id="trace-8223"></a>
<a id="trace-8225"></a>
<a id="trace-8272"></a>
<a id="trace-8274"></a>
<a id="trace-8320"></a>
<a id="trace-8322"></a>
<a id="trace-8445"></a>
<a id="trace-8447"></a>
<a id="trace-8504"></a>
<a id="trace-8506"></a>
<a id="trace-8573"></a>
<a id="trace-8575"></a>
<a id="trace-8617"></a>
<a id="trace-8619"></a>
<a id="trace-8663"></a>
<a id="trace-8665"></a>
<a id="trace-8860"></a>
<a id="trace-8862"></a>
<a id="trace-8892"></a>
<a id="trace-8894"></a>
<a id="trace-9014"></a>
<a id="trace-9016"></a>
<a id="trace-9046"></a>
<a id="trace-9048"></a>
<a id="trace-9070"></a>
<a id="trace-9072"></a>
<a id="trace-9199"></a>
<a id="trace-9201"></a>
<a id="trace-9218"></a>
<a id="trace-9220"></a>
<a id="trace-9244"></a>
<a id="trace-9246"></a>
<a id="trace-9260"></a>
<a id="trace-9262"></a>
<a id="trace-9287"></a>
<a id="trace-9289"></a>
<a id="trace-9308"></a>
<a id="trace-9310"></a>
<a id="trace-9420"></a>
<a id="trace-9422"></a>
<a id="trace-9451"></a>
<a id="trace-9453"></a>
<a id="trace-9499"></a>
<a id="trace-9501"></a>
<a id="trace-9525"></a>
<a id="trace-9527"></a>
<a id="trace-9632"></a>
<a id="trace-9634"></a>
<a id="trace-9650"></a>
<a id="trace-9652"></a>
<a id="trace-9677"></a>
<a id="trace-9679"></a>
<a id="trace-9696"></a>
<a id="trace-9698"></a>
<a id="trace-9719"></a>
<a id="trace-9721"></a>
<a id="trace-9733"></a>
<a id="trace-9735"></a>
<a id="trace-9770"></a>
<a id="trace-9772"></a>
<a id="trace-9788"></a>
<a id="trace-9790"></a>
<a id="trace-9816"></a>
<a id="trace-9818"></a>
<a id="trace-9836"></a>
<a id="trace-9838"></a>
<a id="trace-9928"></a>
<a id="trace-9930"></a>
<a id="trace-9943"></a>
<a id="trace-9945"></a>
<a id="trace-10120"></a>
<a id="trace-10122"></a>
<a id="trace-10138"></a>
<a id="trace-10140"></a>
<a id="trace-10184"></a>
<a id="trace-10186"></a>
<a id="trace-10198"></a>
<a id="trace-10200"></a>
<a id="trace-10229"></a>
<a id="trace-10231"></a>
<a id="trace-10266"></a>
<a id="trace-10268"></a>
<a id="trace-10292"></a>
<a id="trace-10294"></a>
<a id="trace-10308"></a>
<a id="trace-10310"></a>
<a id="trace-10464"></a>
<a id="trace-10466"></a>
<a id="trace-10478"></a>
<a id="trace-10480"></a>
<a id="trace-10512"></a>
<a id="trace-10514"></a>
<a id="trace-10527"></a>
<a id="trace-10529"></a>
<a id="trace-10553"></a>
<a id="trace-10555"></a>
<a id="trace-10576"></a>
<a id="trace-10578"></a>
<a id="trace-10602"></a>
<a id="trace-10604"></a>
<a id="trace-10621"></a>
<a id="trace-10623"></a>
<a id="trace-10646"></a>
<a id="trace-10648"></a>
<a id="trace-10663"></a>
<a id="trace-10665"></a>
<a id="trace-10762"></a>
<a id="trace-10764"></a>
<a id="trace-10779"></a>
<a id="trace-10781"></a>
<a id="trace-10803"></a>
<a id="trace-10805"></a>
<a id="trace-10821"></a>
<a id="trace-10823"></a>
<a id="trace-10847"></a>
<a id="trace-10849"></a>
<a id="trace-10913"></a>
<a id="trace-10915"></a>
<a id="trace-10934"></a>
<a id="trace-10936"></a>
<a id="trace-10952"></a>
<a id="trace-10954"></a>
<a id="trace-11140"></a>
<a id="trace-11142"></a>
<a id="trace-11165"></a>
<a id="trace-11167"></a>
<a id="trace-11263"></a>
<a id="trace-11265"></a>
<a id="trace-11295"></a>
<a id="trace-11297"></a>
<a id="trace-11321"></a>
<a id="trace-11323"></a>
<a id="trace-11363"></a>
<a id="trace-11365"></a>
<a id="trace-11407"></a>
<a id="trace-11409"></a>
<a id="trace-11433"></a>
<a id="trace-11435"></a>
<a id="trace-11480"></a>
<a id="trace-11482"></a>
<a id="trace-11504"></a>
<a id="trace-11506"></a>
<a id="trace-11541"></a>
<a id="trace-11543"></a>
<a id="trace-11568"></a>
<a id="trace-11570"></a>
<a id="trace-11755"></a>
<a id="trace-11757"></a>
<a id="trace-11778"></a>
<a id="trace-11780"></a>
<a id="trace-11795"></a>
<a id="trace-11797"></a>
<a id="trace-11814"></a>
<a id="trace-11816"></a>
<a id="trace-11841"></a>
<a id="trace-11843"></a>
<a id="trace-11852"></a>
<a id="trace-11854"></a>
<a id="trace-11875"></a>
<a id="trace-11877"></a>
<a id="trace-11889"></a>
<a id="trace-11891"></a>
<a id="trace-11909"></a>
<a id="trace-11911"></a>
<a id="trace-11917"></a>
<a id="trace-11919"></a>
<a id="trace-11997"></a>
<a id="trace-11999"></a>
<a id="trace-12010"></a>
<a id="trace-12012"></a>
<a id="trace-12027"></a>
<a id="trace-12029"></a>
<a id="trace-12037"></a>
<a id="trace-12039"></a>
<a id="trace-12104"></a>
<a id="trace-12106"></a>
<a id="trace-12120"></a>
<a id="trace-12122"></a>
<a id="trace-12139"></a>
<a id="trace-12141"></a>
<a id="trace-12156"></a>
<a id="trace-12158"></a>
<a id="trace-12171"></a>
<a id="trace-12173"></a>
<a id="trace-12183"></a>
<a id="trace-12185"></a>
<a id="trace-12263"></a>
<a id="trace-12265"></a>
<a id="trace-12281"></a>
<a id="trace-12283"></a>
<a id="trace-12294"></a>
<a id="trace-12296"></a>
<a id="trace-12307"></a>
<a id="trace-12309"></a>
<a id="trace-12320"></a>
<a id="trace-12322"></a>
<a id="trace-12332"></a>
<a id="trace-12334"></a>
<a id="trace-12349"></a>
<a id="trace-12351"></a>
<a id="trace-12359"></a>
<a id="trace-12361"></a>
<a id="trace-12371"></a>
<a id="trace-12373"></a>
<a id="trace-12382"></a>
<a id="trace-12384"></a>
<a id="trace-12461"></a>
<a id="trace-12463"></a>
<a id="trace-12478"></a>
<a id="trace-12480"></a>
<a id="trace-12495"></a>
<a id="trace-12497"></a>
<a id="trace-12628"></a>
<a id="trace-12630"></a>
<a id="trace-12648"></a>
<a id="trace-12650"></a>
<a id="trace-12656"></a>
<a id="trace-12658"></a>
<a id="trace-12683"></a>
<a id="trace-12685"></a>
<a id="trace-12689"></a>
<a id="trace-12691"></a>
<a id="trace-12704"></a>
<a id="trace-12706"></a>
<a id="trace-12860"></a>
<a id="trace-12862"></a>
<a id="trace-12944"></a>
<a id="trace-12946"></a>
<a id="trace-12958"></a>
<a id="trace-12960"></a>
<a id="trace-15192"></a>
<a id="trace-15194"></a>
<a id="trace-15213"></a>
<a id="trace-15215"></a>
<a id="trace-15240"></a>
<a id="trace-15242"></a>
<a id="trace-15253"></a>
<a id="trace-15255"></a>
<a id="trace-15282"></a>
<a id="trace-15284"></a>
<a id="trace-15311"></a>
<a id="trace-15313"></a>
<a id="trace-15335"></a>
<a id="trace-15337"></a>
<a id="trace-15350"></a>
<a id="trace-15352"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15453"></a>
<a id="trace-15455"></a>
<a id="trace-15480"></a>
<a id="trace-15482"></a>
<a id="trace-15490"></a>
<a id="trace-15492"></a>
<a id="trace-15513"></a>
<a id="trace-15515"></a>
<a id="trace-15528"></a>
<a id="trace-15530"></a>
<a id="trace-15549"></a>
<a id="trace-15551"></a>
<a id="trace-15567"></a>
<a id="trace-15569"></a>
<a id="trace-15593"></a>
<a id="trace-15595"></a>
<a id="trace-15603"></a>
<a id="trace-15605"></a>
<a id="trace-15806"></a>
<a id="trace-15808"></a>
<a id="trace-15827"></a>
<a id="trace-15829"></a>
<a id="trace-15848"></a>
<a id="trace-15850"></a>
<a id="trace-16062"></a>
<a id="trace-16064"></a>
<a id="trace-16081"></a>
<a id="trace-16083"></a>
<a id="trace-16098"></a>
<a id="trace-16100"></a>
<a id="trace-16120"></a>
<a id="trace-16122"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16144"></a>
<a id="trace-16146"></a>
<a id="trace-16158"></a>
<a id="trace-16160"></a>
<a id="trace-16238"></a>
<a id="trace-16240"></a>
<a id="trace-16255"></a>
<a id="trace-16257"></a>
<a id="trace-16272"></a>
<a id="trace-16274"></a>
<a id="trace-16282"></a>
<a id="trace-16284"></a>
<a id="trace-16297"></a>
<a id="trace-16299"></a>
<a id="trace-16307"></a>
<a id="trace-16309"></a>
<a id="trace-16328"></a>
<a id="trace-16330"></a>
<a id="trace-16340"></a>
<a id="trace-16342"></a>
<a id="trace-16359"></a>
<a id="trace-16361"></a>
<a id="trace-16374"></a>
<a id="trace-16376"></a>
<a id="trace-16456"></a>
<a id="trace-16458"></a>
<a id="trace-16472"></a>
<a id="trace-16474"></a>
<a id="trace-16488"></a>
<a id="trace-16490"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16516"></a>
<a id="trace-16518"></a>
<a id="trace-16524"></a>
<a id="trace-16526"></a>
<a id="trace-16541"></a>
<a id="trace-16543"></a>
<a id="trace-16550"></a>
<a id="trace-16552"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16574"></a>
<a id="trace-16576"></a>
<a id="trace-16652"></a>
<a id="trace-16654"></a>
<a id="trace-16668"></a>
<a id="trace-16670"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16695"></a>
<a id="trace-16697"></a>
<a id="trace-16711"></a>
<a id="trace-16713"></a>
<a id="trace-16719"></a>
<a id="trace-16721"></a>
<a id="trace-16740"></a>
<a id="trace-16742"></a>
<a id="trace-16748"></a>
<a id="trace-16750"></a>
<a id="trace-16762"></a>
<a id="trace-16764"></a>
<a id="trace-16771"></a>
<a id="trace-16773"></a>
<a id="trace-16848"></a>
<a id="trace-16850"></a>
<a id="trace-16862"></a>
<a id="trace-16864"></a>
<a id="trace-16876"></a>
<a id="trace-16878"></a>
<a id="trace-16886"></a>
<a id="trace-16888"></a>
<a id="trace-16901"></a>
<a id="trace-16903"></a>
<a id="trace-16912"></a>
<a id="trace-16914"></a>
<a id="trace-16939"></a>
<a id="trace-16941"></a>
<a id="trace-16946"></a>
<a id="trace-16948"></a>
<a id="trace-16964"></a>
<a id="trace-16966"></a>
<a id="trace-16972"></a>
<a id="trace-16974"></a>
<a id="trace-17049"></a>
<a id="trace-17051"></a>
<a id="trace-17059"></a>
<a id="trace-17061"></a>
<a id="trace-17074"></a>
<a id="trace-17076"></a>
<a id="trace-17087"></a>
<a id="trace-17089"></a>
<a id="trace-17102"></a>
<a id="trace-17104"></a>
<a id="trace-17114"></a>
<a id="trace-17116"></a>
<a id="trace-17130"></a>
<a id="trace-17132"></a>
<a id="trace-17139"></a>
<a id="trace-17141"></a>
<a id="trace-17154"></a>
<a id="trace-17156"></a>
<a id="trace-17165"></a>
<a id="trace-17167"></a>
<a id="trace-17248"></a>
<a id="trace-17250"></a>
<a id="trace-17261"></a>
<a id="trace-17263"></a>
<a id="trace-17281"></a>
<a id="trace-17283"></a>
<a id="trace-17290"></a>
<a id="trace-17292"></a>
<a id="trace-17305"></a>
<a id="trace-17307"></a>
<a id="trace-17313"></a>
<a id="trace-17315"></a>
<a id="trace-17329"></a>
<a id="trace-17331"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17349"></a>
<a id="trace-17351"></a>
<a id="trace-17358"></a>
<a id="trace-17360"></a>
<a id="trace-17437"></a>
<a id="trace-17439"></a>
<a id="trace-17448"></a>
<a id="trace-17450"></a>
<a id="trace-17464"></a>
<a id="trace-17466"></a>
<a id="trace-17482"></a>
<a id="trace-17484"></a>
<a id="trace-17499"></a>
<a id="trace-17501"></a>
<a id="trace-17513"></a>
<a id="trace-17515"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17554"></a>
<a id="trace-17556"></a>
<a id="trace-17562"></a>
<a id="trace-17564"></a>
<a id="trace-17640"></a>
<a id="trace-17642"></a>
<a id="trace-17654"></a>
<a id="trace-17656"></a>
<a id="trace-17666"></a>
<a id="trace-17668"></a>
<a id="trace-17679"></a>
<a id="trace-17681"></a>
<a id="trace-17697"></a>
<a id="trace-17699"></a>
<a id="trace-17710"></a>
<a id="trace-17712"></a>
<a id="trace-17732"></a>
<a id="trace-17734"></a>
<a id="trace-17744"></a>
<a id="trace-17746"></a>
<a id="trace-17757"></a>
<a id="trace-17759"></a>
<a id="trace-17767"></a>
<a id="trace-17769"></a>
<a id="trace-17847"></a>
<a id="trace-17849"></a>
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17876"></a>
<a id="trace-17878"></a>
<a id="trace-17886"></a>
<a id="trace-17888"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17911"></a>
<a id="trace-17913"></a>
<a id="trace-17928"></a>
<a id="trace-17930"></a>
<a id="trace-17938"></a>
<a id="trace-17940"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17969"></a>
<a id="trace-17971"></a>
<a id="trace-18048"></a>
<a id="trace-18050"></a>
<a id="trace-18060"></a>
<a id="trace-18062"></a>
<a id="trace-18078"></a>
<a id="trace-18080"></a>
<a id="trace-18088"></a>
<a id="trace-18090"></a>
<a id="trace-18107"></a>
<a id="trace-18109"></a>
<a id="trace-18119"></a>
<a id="trace-18121"></a>
<a id="trace-18135"></a>
<a id="trace-18137"></a>
<a id="trace-18143"></a>
<a id="trace-18145"></a>
<a id="trace-18157"></a>
<a id="trace-18159"></a>
<a id="trace-18168"></a>
<a id="trace-18170"></a>
<a id="trace-18246"></a>
<a id="trace-18248"></a>
<a id="trace-18259"></a>
<a id="trace-18261"></a>
<a id="trace-18281"></a>
<a id="trace-18283"></a>
<a id="trace-18291"></a>
<a id="trace-18293"></a>
<a id="trace-18310"></a>
<a id="trace-18312"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18337"></a>
<a id="trace-18339"></a>
<a id="trace-18348"></a>
<a id="trace-18350"></a>
<a id="trace-18363"></a>
<a id="trace-18365"></a>
<a id="trace-18370"></a>
<a id="trace-18372"></a>
<a id="trace-18450"></a>
<a id="trace-18452"></a>
<a id="trace-18518"></a>
<a id="trace-18520"></a>
<a id="trace-18542"></a>
<a id="trace-18544"></a>
<a id="trace-18622"></a>
<a id="trace-18624"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18692"></a>
<a id="trace-18694"></a>
<a id="trace-18744"></a>
<a id="trace-18746"></a>
<a id="trace-18763"></a>
<a id="trace-18765"></a>
<a id="trace-18816"></a>
<a id="trace-18818"></a>
<a id="trace-18827"></a>
<a id="trace-18829"></a>
<a id="trace-18905"></a>
<a id="trace-18907"></a>
<a id="trace-18916"></a>
<a id="trace-18918"></a>
<a id="trace-18937"></a>
<a id="trace-18939"></a>
<a id="trace-18956"></a>
<a id="trace-18958"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-18991"></a>
<a id="trace-18993"></a>
<a id="trace-19021"></a>
<a id="trace-19023"></a>
<a id="trace-19031"></a>
<a id="trace-19033"></a>
<a id="trace-19057"></a>
<a id="trace-19059"></a>
<a id="trace-19072"></a>
<a id="trace-19074"></a>
<a id="trace-19158"></a>
<a id="trace-19160"></a>
<a id="trace-19336"></a>
<a id="trace-19338"></a>
<a id="trace-19359"></a>
<a id="trace-19361"></a>
<a id="trace-19373"></a>
<a id="trace-19375"></a>
<a id="trace-19402"></a>
<a id="trace-19404"></a>
<a id="trace-19424"></a>
<a id="trace-19426"></a>
<a id="trace-19457"></a>
<a id="trace-19459"></a>
<a id="trace-19475"></a>
<a id="trace-19477"></a>
<a id="trace-19502"></a>
<a id="trace-19504"></a>
<a id="trace-19522"></a>
<a id="trace-19524"></a>
<a id="trace-19602"></a>
<a id="trace-19604"></a>
<a id="trace-19620"></a>
<a id="trace-19622"></a>
<a id="trace-19724"></a>
<a id="trace-19726"></a>
<a id="trace-19745"></a>
<a id="trace-19747"></a>
<a id="trace-19779"></a>
<a id="trace-19781"></a>
<a id="trace-19872"></a>
<a id="trace-19874"></a>
<a id="trace-19903"></a>
<a id="trace-19905"></a>
<a id="trace-19969"></a>
<a id="trace-19971"></a>
<a id="trace-20035"></a>
<a id="trace-20037"></a>
<a id="trace-20084"></a>
<a id="trace-20086"></a>
<a id="trace-20201"></a>
<a id="trace-20203"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20289"></a>
<a id="trace-20291"></a>
<a id="trace-21021"></a>
<a id="trace-21023"></a>
<a id="trace-21056"></a>
<a id="trace-21058"></a>
<a id="trace-21175"></a>
<a id="trace-21177"></a>
<a id="trace-21213"></a>
<a id="trace-21215"></a>
<a id="trace-21264"></a>
<a id="trace-21266"></a>
<a id="trace-21333"></a>
<a id="trace-21335"></a>
<a id="trace-21361"></a>
<a id="trace-21363"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21507"></a>
<a id="trace-21509"></a>
<a id="trace-21532"></a>
<a id="trace-21534"></a>
<a id="trace-21555"></a>
<a id="trace-21557"></a>
<a id="trace-21577"></a>
<a id="trace-21579"></a>
<a id="trace-21592"></a>
<a id="trace-21594"></a>
<a id="trace-21696"></a>
<a id="trace-21698"></a>
<a id="trace-21730"></a>
<a id="trace-21732"></a>
<a id="trace-21767"></a>
<a id="trace-21769"></a>
<a id="trace-21788"></a>
<a id="trace-21790"></a>
<a id="trace-21879"></a>
<a id="trace-21881"></a>
<a id="trace-21922"></a>
<a id="trace-21924"></a>
<a id="trace-21943"></a>
<a id="trace-21945"></a>
<a id="trace-21956"></a>
<a id="trace-21958"></a>
<a id="trace-21986"></a>
<a id="trace-21988"></a>
<a id="trace-21996"></a>
<a id="trace-21998"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22112"></a>
<a id="trace-22114"></a>
<a id="trace-22144"></a>
<a id="trace-22146"></a>
<a id="trace-22166"></a>
<a id="trace-22168"></a>
<a id="trace-22250"></a>
<a id="trace-22252"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22311"></a>
<a id="trace-22313"></a>
<a id="trace-22330"></a>
<a id="trace-22332"></a>
<a id="trace-22350"></a>
<a id="trace-22352"></a>
<a id="trace-22366"></a>
<a id="trace-22368"></a>
<a id="trace-22387"></a>
<a id="trace-22389"></a>
<a id="trace-22418"></a>
<a id="trace-22420"></a>
<a id="trace-22454"></a>
<a id="trace-22456"></a>
<a id="trace-22496"></a>
<a id="trace-22498"></a>
<a id="trace-22600"></a>
<a id="trace-22602"></a>
<a id="trace-22632"></a>
<a id="trace-22634"></a>
<a id="trace-22664"></a>
<a id="trace-22666"></a>
<a id="trace-22681"></a>
<a id="trace-22683"></a>
<a id="trace-22701"></a>
<a id="trace-22703"></a>
<a id="trace-22718"></a>
<a id="trace-22720"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22747"></a>
<a id="trace-22749"></a>
<a id="trace-22774"></a>
<a id="trace-22776"></a>
<a id="trace-22787"></a>
<a id="trace-22789"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22879"></a>
<a id="trace-22881"></a>
<a id="trace-22896"></a>
<a id="trace-22898"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22927"></a>
<a id="trace-22929"></a>
<a id="trace-22935"></a>
<a id="trace-22937"></a>
<a id="trace-22951"></a>
<a id="trace-22953"></a>
<a id="trace-22960"></a>
<a id="trace-22962"></a>
<a id="trace-22979"></a>
<a id="trace-22981"></a>
<a id="trace-22993"></a>
<a id="trace-22995"></a>
<a id="trace-23072"></a>
<a id="trace-23074"></a>
<a id="trace-23081"></a>
<a id="trace-23083"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23107"></a>
<a id="trace-23109"></a>
<a id="trace-23119"></a>
<a id="trace-23121"></a>
<a id="trace-23127"></a>
<a id="trace-23129"></a>
<a id="trace-23142"></a>
<a id="trace-23144"></a>
<a id="trace-23148"></a>
<a id="trace-23150"></a>
<a id="trace-23167"></a>
<a id="trace-23169"></a>
<a id="trace-23182"></a>
<a id="trace-23184"></a>
<a id="trace-23265"></a>
<a id="trace-23267"></a>
<a id="trace-23276"></a>
<a id="trace-23278"></a>
<a id="trace-23292"></a>
<a id="trace-23294"></a>
<a id="trace-23299"></a>
<a id="trace-23301"></a>
<a id="trace-23314"></a>
<a id="trace-23316"></a>
<a id="trace-23324"></a>
<a id="trace-23326"></a>
<a id="trace-23338"></a>
<a id="trace-23340"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23360"></a>
<a id="trace-23362"></a>
<a id="trace-23372"></a>
<a id="trace-23374"></a>
<a id="trace-23451"></a>
<a id="trace-23453"></a>
<a id="trace-23463"></a>
<a id="trace-23465"></a>
<a id="trace-23482"></a>
<a id="trace-23484"></a>
<a id="trace-23502"></a>
<a id="trace-23504"></a>
<a id="trace-23520"></a>
<a id="trace-23522"></a>
<a id="trace-23529"></a>
<a id="trace-23531"></a>
<a id="trace-23543"></a>
<a id="trace-23545"></a>
<a id="trace-23554"></a>
<a id="trace-23556"></a>
<a id="trace-23570"></a>
<a id="trace-23572"></a>
<a id="trace-23582"></a>
<a id="trace-23584"></a>
<a id="trace-23660"></a>
<a id="trace-23662"></a>
<a id="trace-23668"></a>
<a id="trace-23670"></a>
<a id="trace-23683"></a>
<a id="trace-23685"></a>
<a id="trace-23696"></a>
<a id="trace-23698"></a>
<a id="trace-23711"></a>
<a id="trace-23713"></a>
<a id="trace-23722"></a>
<a id="trace-23724"></a>
<a id="trace-23746"></a>
<a id="trace-23748"></a>
<a id="trace-23756"></a>
<a id="trace-23758"></a>
<a id="trace-23773"></a>
<a id="trace-23775"></a>
<a id="trace-23785"></a>
<a id="trace-23787"></a>
<a id="trace-23864"></a>
<a id="trace-23866"></a>
<a id="trace-23874"></a>
<a id="trace-23876"></a>
<a id="trace-23889"></a>
<a id="trace-23891"></a>
<a id="trace-23897"></a>
<a id="trace-23899"></a>
<a id="trace-23914"></a>
<a id="trace-23916"></a>
<a id="trace-23922"></a>
<a id="trace-23924"></a>
<a id="trace-23938"></a>
<a id="trace-23940"></a>
<a id="trace-23947"></a>
<a id="trace-23949"></a>
<a id="trace-23966"></a>
<a id="trace-23968"></a>
<a id="trace-23977"></a>
<a id="trace-23979"></a>
<a id="trace-24063"></a>
<a id="trace-24065"></a>
<a id="trace-24073"></a>
<a id="trace-24075"></a>
<a id="trace-24089"></a>
<a id="trace-24091"></a>
<a id="trace-24102"></a>
<a id="trace-24104"></a>
<a id="trace-24115"></a>
<a id="trace-24117"></a>
<a id="trace-24123"></a>
<a id="trace-24125"></a>
<a id="trace-24136"></a>
<a id="trace-24138"></a>
<a id="trace-24145"></a>
<a id="trace-24147"></a>
<a id="trace-24160"></a>
<a id="trace-24162"></a>
<a id="trace-24171"></a>
<a id="trace-24173"></a>
<a id="trace-24252"></a>
<a id="trace-24254"></a>
<a id="trace-24260"></a>
<a id="trace-24262"></a>
<a id="trace-24277"></a>
<a id="trace-24279"></a>
<a id="trace-24294"></a>
<a id="trace-24296"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24337"></a>
<a id="trace-24339"></a>
<a id="trace-24346"></a>
<a id="trace-24348"></a>
<a id="trace-24361"></a>
<a id="trace-24363"></a>
<a id="trace-24372"></a>
<a id="trace-24374"></a>
<a id="trace-24447"></a>
<a id="trace-24449"></a>
<a id="trace-24457"></a>
<a id="trace-24459"></a>
<a id="trace-24475"></a>
<a id="trace-24477"></a>
<a id="trace-24486"></a>
<a id="trace-24488"></a>
<a id="trace-24500"></a>
<a id="trace-24502"></a>
<a id="trace-24510"></a>
<a id="trace-24512"></a>
<a id="trace-24530"></a>
<a id="trace-24532"></a>
<a id="trace-24539"></a>
<a id="trace-24541"></a>
<a id="trace-24557"></a>
<a id="trace-24559"></a>
<a id="trace-24567"></a>
<a id="trace-24569"></a>
<a id="trace-24645"></a>
<a id="trace-24647"></a>
<a id="trace-24658"></a>
<a id="trace-24660"></a>
<a id="trace-24677"></a>
<a id="trace-24679"></a>
<a id="trace-24685"></a>
<a id="trace-24687"></a>
<a id="trace-24699"></a>
<a id="trace-24701"></a>
<a id="trace-24705"></a>
<a id="trace-24707"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24751"></a>
<a id="trace-24753"></a>
<a id="trace-24768"></a>
<a id="trace-24770"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24857"></a>
<a id="trace-24859"></a>
<a id="trace-24875"></a>
<a id="trace-24877"></a>
<a id="trace-24885"></a>
<a id="trace-24887"></a>
<a id="trace-24899"></a>
<a id="trace-24901"></a>
<a id="trace-24912"></a>
<a id="trace-24914"></a>
<a id="trace-24925"></a>
<a id="trace-24927"></a>
<a id="trace-24931"></a>
<a id="trace-24933"></a>
<a id="trace-24947"></a>
<a id="trace-24949"></a>
<a id="trace-24960"></a>
<a id="trace-24962"></a>
<a id="trace-25037"></a>
<a id="trace-25039"></a>
<a id="trace-25053"></a>
<a id="trace-25055"></a>
<a id="trace-25074"></a>
<a id="trace-25076"></a>
<a id="trace-25083"></a>
<a id="trace-25085"></a>
<a id="trace-25097"></a>
<a id="trace-25099"></a>
<a id="trace-25108"></a>
<a id="trace-25110"></a>
<a id="trace-25123"></a>
<a id="trace-25125"></a>
<a id="trace-25132"></a>
<a id="trace-25134"></a>
<a id="trace-25153"></a>
<a id="trace-25155"></a>
<a id="trace-25165"></a>
<a id="trace-25167"></a>
<a id="trace-25242"></a>
<a id="trace-25244"></a>
<a id="trace-25252"></a>
<a id="trace-25254"></a>
<a id="trace-25271"></a>
<a id="trace-25273"></a>
<a id="trace-25280"></a>
<a id="trace-25282"></a>
<a id="trace-25298"></a>
<a id="trace-25300"></a>
<a id="trace-25306"></a>
<a id="trace-25308"></a>
<a id="trace-25327"></a>
<a id="trace-25329"></a>
<a id="trace-25337"></a>
<a id="trace-25339"></a>
<a id="trace-25352"></a>
<a id="trace-25354"></a>
<a id="trace-25362"></a>
<a id="trace-25364"></a>
<a id="trace-25442"></a>
<a id="trace-25444"></a>
<a id="trace-25453"></a>
<a id="trace-25455"></a>
<a id="trace-25470"></a>
<a id="trace-25472"></a>
<a id="trace-25483"></a>
<a id="trace-25485"></a>
<a id="trace-25499"></a>
<a id="trace-25501"></a>
<a id="trace-25507"></a>
<a id="trace-25509"></a>
<a id="trace-25523"></a>
<a id="trace-25525"></a>
<a id="trace-25532"></a>
<a id="trace-25534"></a>
<a id="trace-25550"></a>
<a id="trace-25552"></a>
<a id="trace-25567"></a>
<a id="trace-25569"></a>
<a id="trace-25646"></a>
<a id="trace-25648"></a>
<a id="trace-25658"></a>
<a id="trace-25660"></a>
<a id="trace-25671"></a>
<a id="trace-25673"></a>
<a id="trace-25681"></a>
<a id="trace-25683"></a>
<a id="trace-25700"></a>
<a id="trace-25702"></a>
<a id="trace-25708"></a>
<a id="trace-25710"></a>
<a id="trace-25721"></a>
<a id="trace-25723"></a>
<a id="trace-25739"></a>
<a id="trace-25741"></a>
<a id="trace-25755"></a>
<a id="trace-25757"></a>
<a id="trace-25766"></a>
<a id="trace-25768"></a>
<a id="trace-25843"></a>
<a id="trace-25845"></a>
<a id="trace-25857"></a>
<a id="trace-25859"></a>
<a id="trace-25878"></a>
<a id="trace-25880"></a>
<a id="trace-25888"></a>
<a id="trace-25890"></a>
<a id="trace-25903"></a>
<a id="trace-25905"></a>
<a id="trace-25911"></a>
<a id="trace-25913"></a>
<a id="trace-25925"></a>
<a id="trace-25927"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-25952"></a>
<a id="trace-25954"></a>
<a id="trace-25963"></a>
<a id="trace-25965"></a>
<a id="trace-26041"></a>
<a id="trace-26043"></a>
<a id="trace-26053"></a>
<a id="trace-26055"></a>
<a id="trace-26073"></a>
<a id="trace-26075"></a>
<a id="trace-26083"></a>
<a id="trace-26085"></a>
<a id="trace-26100"></a>
<a id="trace-26102"></a>
<a id="trace-26114"></a>
<a id="trace-26116"></a>
<a id="trace-26128"></a>
<a id="trace-26130"></a>
<a id="trace-26134"></a>
<a id="trace-26136"></a>
<a id="trace-26150"></a>
<a id="trace-26152"></a>
<a id="trace-26161"></a>
<a id="trace-26163"></a>
<a id="trace-26237"></a>
<a id="trace-26239"></a>
<a id="trace-26248"></a>
<a id="trace-26250"></a>
<a id="trace-26266"></a>
<a id="trace-26268"></a>
<a id="trace-26277"></a>
<a id="trace-26279"></a>
<a id="trace-26292"></a>
<a id="trace-26294"></a>
<a id="trace-26306"></a>
<a id="trace-26308"></a>
<a id="trace-26320"></a>
<a id="trace-26322"></a>
<a id="trace-26332"></a>
<a id="trace-26334"></a>
<a id="trace-26353"></a>
<a id="trace-26355"></a>
<a id="trace-26363"></a>
<a id="trace-26365"></a>
<a id="trace-26441"></a>
<a id="trace-26443"></a>
<a id="trace-26449"></a>
<a id="trace-26451"></a>
<a id="trace-26465"></a>
<a id="trace-26467"></a>
<a id="trace-26477"></a>
<a id="trace-26479"></a>
<a id="trace-26492"></a>
<a id="trace-26494"></a>
<a id="trace-26501"></a>
<a id="trace-26503"></a>
<a id="trace-26516"></a>
<a id="trace-26518"></a>
<a id="trace-26525"></a>
<a id="trace-26527"></a>
<a id="trace-26543"></a>
<a id="trace-26545"></a>
<a id="trace-26556"></a>
<a id="trace-26558"></a>
<a id="trace-26638"></a>
<a id="trace-26640"></a>
<a id="trace-26646"></a>
<a id="trace-26648"></a>
<a id="trace-26668"></a>
<a id="trace-26670"></a>
<a id="trace-26678"></a>
<a id="trace-26680"></a>
<a id="trace-26693"></a>
<a id="trace-26695"></a>
<a id="trace-26701"></a>
<a id="trace-26703"></a>
<a id="trace-26715"></a>
<a id="trace-26717"></a>
<a id="trace-26724"></a>
<a id="trace-26726"></a>
<a id="trace-26743"></a>
<a id="trace-26745"></a>
<a id="trace-26755"></a>
<a id="trace-26757"></a>
<a id="trace-26832"></a>
<a id="trace-26834"></a>
<a id="trace-26843"></a>
<a id="trace-26845"></a>
<a id="trace-26871"></a>
<a id="trace-26873"></a>
<a id="trace-26881"></a>
<a id="trace-26883"></a>
<a id="trace-26899"></a>
<a id="trace-26901"></a>
<a id="trace-26915"></a>
<a id="trace-26917"></a>
<a id="trace-26929"></a>
<a id="trace-26931"></a>
<a id="trace-26937"></a>
<a id="trace-26939"></a>
<a id="trace-26953"></a>
<a id="trace-26955"></a>
<a id="trace-26963"></a>
<a id="trace-26965"></a>
<a id="trace-27040"></a>
<a id="trace-27042"></a>
<a id="trace-27050"></a>
<a id="trace-27052"></a>
<a id="trace-27067"></a>
<a id="trace-27069"></a>
<a id="trace-27079"></a>
<a id="trace-27081"></a>
<a id="trace-27096"></a>
<a id="trace-27098"></a>
<a id="trace-27108"></a>
<a id="trace-27110"></a>
<a id="trace-27123"></a>
<a id="trace-27125"></a>
<a id="trace-27136"></a>
<a id="trace-27138"></a>
<a id="trace-27169"></a>
<a id="trace-27171"></a>
<a id="trace-27245"></a>
<a id="trace-27247"></a>
<a id="trace-27253"></a>
<a id="trace-27255"></a>
<a id="trace-27268"></a>
<a id="trace-27270"></a>
<a id="trace-27278"></a>
<a id="trace-27280"></a>
<a id="trace-27292"></a>
<a id="trace-27294"></a>
<a id="trace-27299"></a>
<a id="trace-27301"></a>
<a id="trace-27315"></a>
<a id="trace-27317"></a>
<a id="trace-27325"></a>
<a id="trace-27327"></a>
<a id="trace-27345"></a>
<a id="trace-27347"></a>
<a id="trace-27353"></a>
<a id="trace-27355"></a>
<a id="trace-27434"></a>
<a id="trace-27436"></a>
<a id="trace-27454"></a>
<a id="trace-27456"></a>
<a id="trace-27467"></a>
<a id="trace-27469"></a>
<a id="trace-27477"></a>
<a id="trace-27479"></a>
<a id="trace-27493"></a>
<a id="trace-27495"></a>
<a id="trace-27502"></a>
<a id="trace-27504"></a>
<a id="trace-27515"></a>
<a id="trace-27517"></a>
<a id="trace-27524"></a>
<a id="trace-27526"></a>
<a id="trace-27540"></a>
<a id="trace-27542"></a>
<a id="trace-27548"></a>
<a id="trace-27550"></a>
<a id="trace-27626"></a>
<a id="trace-27628"></a>
<a id="trace-27657"></a>
<a id="trace-27659"></a>
<a id="trace-27670"></a>
<a id="trace-27672"></a>
<a id="trace-27693"></a>
<a id="trace-27695"></a>
<a id="trace-27701"></a>
<a id="trace-27703"></a>
<a id="trace-27714"></a>
<a id="trace-27716"></a>
<a id="trace-27723"></a>
<a id="trace-27725"></a>
<a id="trace-27738"></a>
<a id="trace-27740"></a>
<a id="trace-27747"></a>
<a id="trace-27749"></a>
<a id="trace-27824"></a>
<a id="trace-27826"></a>
<a id="trace-27834"></a>
<a id="trace-27836"></a>
<a id="trace-27850"></a>
<a id="trace-27852"></a>
<a id="trace-27860"></a>
<a id="trace-27862"></a>
<a id="trace-27877"></a>
<a id="trace-27879"></a>
<a id="trace-27889"></a>
<a id="trace-27891"></a>
<a id="trace-27909"></a>
<a id="trace-27911"></a>
<a id="trace-27921"></a>
<a id="trace-27923"></a>
<a id="trace-27943"></a>
<a id="trace-27945"></a>
<a id="trace-27956"></a>
<a id="trace-27958"></a>
<a id="trace-28032"></a>
<a id="trace-28034"></a>
<a id="trace-28058"></a>
<a id="trace-28060"></a>
<a id="trace-28066"></a>
<a id="trace-28068"></a>
<a id="trace-28080"></a>
<a id="trace-28082"></a>
<a id="trace-28088"></a>
<a id="trace-28090"></a>
<a id="trace-28100"></a>
<a id="trace-28102"></a>
<a id="trace-28109"></a>
<a id="trace-28111"></a>
<a id="trace-28127"></a>
<a id="trace-28129"></a>
<a id="trace-28138"></a>
<a id="trace-28140"></a>
<a id="trace-28222"></a>
<a id="trace-28224"></a>
<a id="trace-28239"></a>
<a id="trace-28241"></a>
<a id="trace-28254"></a>
<a id="trace-28256"></a>
<a id="trace-28268"></a>
<a id="trace-28270"></a>
<a id="trace-28282"></a>
<a id="trace-28284"></a>
<a id="trace-28290"></a>
<a id="trace-28292"></a>
<a id="trace-28304"></a>
<a id="trace-28306"></a>
<a id="trace-28314"></a>
<a id="trace-28316"></a>
<a id="trace-28328"></a>
<a id="trace-28330"></a>
<a id="trace-28338"></a>
<a id="trace-28340"></a>
<a id="trace-28416"></a>
<a id="trace-28418"></a>
<a id="trace-28430"></a>
<a id="trace-28432"></a>
<a id="trace-28445"></a>
<a id="trace-28447"></a>
<a id="trace-28460"></a>
<a id="trace-28462"></a>
<a id="trace-28490"></a>
<a id="trace-28492"></a>
<a id="trace-28506"></a>
<a id="trace-28508"></a>
<a id="trace-28515"></a>
<a id="trace-28517"></a>
<a id="trace-28531"></a>
<a id="trace-28533"></a>
<a id="trace-28541"></a>
<a id="trace-28543"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000617284588375, 'next_transition': 607}.
<a id="trace-832"></a>
<a id="trace-834"></a>
<a id="trace-917"></a>
<a id="trace-919"></a>
<a id="trace-945"></a>
<a id="trace-947"></a>
<a id="trace-976"></a>
<a id="trace-978"></a>
<a id="trace-1003"></a>
<a id="trace-1005"></a>
<a id="trace-1047"></a>
<a id="trace-1049"></a>
<a id="trace-1138"></a>
<a id="trace-1140"></a>
<a id="trace-1284"></a>
<a id="trace-1286"></a>
<a id="trace-1308"></a>
<a id="trace-1310"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1370"></a>
<a id="trace-1372"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 832): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.6328311819133905, 'next_transition': 917}.
<a id="trace-1145"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1145): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.3888320016571996, 'next_transition': 134}.
<a id="trace-1146"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1146): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1067. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.3888320016571996, 'next_transition': 134}.
<a id="trace-133"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 133): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1397}.
<a id="trace-134"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 134): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.455349048199114, 'next_transition': 1922}.
<a id="trace-1377"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1377): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1377. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1397}.
<a id="trace-1378"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1378): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1378. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1397}.
<a id="trace-1379"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1379): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1379. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.455349048199114, 'next_transition': 1922}.
<a id="trace-1380"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1380): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1380. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.455349048199114, 'next_transition': 1922}.
<a id="trace-1397"></a>
<a id="trace-1399"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1397): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1380. Next observer evidence: None.
<a id="trace-1406"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1406): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1706}.
<a id="trace-1407"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1407): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1059. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1706}.
<a id="trace-1706"></a>
<a id="trace-1708"></a>
<a id="trace-1733"></a>
<a id="trace-1735"></a>
<a id="trace-1875"></a>
<a id="trace-1877"></a>
<a id="trace-2713"></a>
<a id="trace-2715"></a>
<a id="trace-3235"></a>
<a id="trace-3237"></a>
<a id="trace-3341"></a>
<a id="trace-3343"></a>
- 13.20s–18.75s (×12), actor 5, squad 0 (trace 1706): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1380. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134256994147975, 'next_transition': 1733}.
<a id="trace-1922"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1922): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: None.
<a id="trace-1923"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1923): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: None.
<a id="trace-1924"></a>
<a id="trace-2116"></a>
<a id="trace-2310"></a>
<a id="trace-2508"></a>
<a id="trace-2727"></a>
<a id="trace-2926"></a>
- 15.70s–16.55s (×6), actor 8, squad 1 (trace 1924): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: None.
<a id="trace-3362"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3362): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1803. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13219201872911762, 'next_transition': 3717}.
<a id="trace-3363"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3363): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1803. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13219201872911762, 'next_transition': 3717}.
<a id="trace-3364"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3364): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1803. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.13219201872911762, 'next_transition': 3717}.
<a id="trace-3717"></a>
<a id="trace-3719"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 3717): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1808. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1274227127725391, 'next_transition': 3731}.
<a id="trace-3731"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 3731): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1803. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12534049461523067, 'next_transition': 4087}.
<a id="trace-4087"></a>
<a id="trace-4089"></a>
<a id="trace-4370"></a>
<a id="trace-4372"></a>
<a id="trace-4444"></a>
<a id="trace-4446"></a>
<a id="trace-4553"></a>
<a id="trace-4555"></a>
<a id="trace-4620"></a>
<a id="trace-4622"></a>
<a id="trace-4671"></a>
<a id="trace-4673"></a>
- 19.75s–22.75s (×12), actor 5, squad 0 (trace 4087): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1808. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.29225193445271236, 'next_transition': 4370}.
<a id="trace-4104"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4104): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.12838048310779, 'next_transition': 7396}.
<a id="trace-4105"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4105): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 1811. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 18.12838048310779, 'next_transition': 7396}.
<a id="trace-4712"></a>
- 23.00s–23.00s (×1), actor 0, squad 0 (trace 4712): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4266. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4735}.
<a id="trace-4735"></a>
<a id="trace-4737"></a>
<a id="trace-4751"></a>
<a id="trace-4753"></a>
- 23.25s–23.75s (×4), actor 5, squad 0 (trace 4735): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4271. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4751}.
<a id="trace-4779"></a>
- 24.15s–24.15s (×1), actor 0, squad 0 (trace 4779): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4266. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5151}.
<a id="trace-5151"></a>
<a id="trace-5153"></a>
<a id="trace-5309"></a>
<a id="trace-5311"></a>
<a id="trace-5380"></a>
<a id="trace-5382"></a>
<a id="trace-5446"></a>
<a id="trace-5448"></a>
<a id="trace-5517"></a>
<a id="trace-5519"></a>
<a id="trace-5603"></a>
<a id="trace-5605"></a>
<a id="trace-5652"></a>
<a id="trace-5654"></a>
- 24.25s–27.75s (×14), actor 5, squad 0 (trace 5151): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4271. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4049285849424471, 'next_transition': 5309}.
<a id="trace-5661"></a>
- 27.75s–27.75s (×1), actor 0, squad 0 (trace 5661): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 5220. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21671477271404443, 'next_transition': 5693}.
<a id="trace-5693"></a>
<a id="trace-5695"></a>
<a id="trace-5721"></a>
<a id="trace-5723"></a>
- 28.25s–28.75s (×4), actor 5, squad 0 (trace 5693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5225. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1497890662940723, 'next_transition': 5721}.
<a id="trace-5732"></a>
<a id="trace-6145"></a>
- 29.00s–30.00s (×2), actor 0, squad 0 (trace 5732): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5220. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36296630168352045, 'next_transition': 6145}.
<a id="trace-6538"></a>
<a id="trace-6540"></a>
<a id="trace-6735"></a>
<a id="trace-6737"></a>
<a id="trace-6803"></a>
<a id="trace-6805"></a>
- 30.25s–33.75s (×6), actor 5, squad 0 (trace 6538): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6130. Next observer evidence: {'until': 32.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3172098634999334, 'next_transition': 6735}.
<a id="trace-6824"></a>
- 34.00s–34.00s (×1), actor 0, squad 0 (trace 6824): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 30.00s, trace 6125. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11390606912865786, 'next_transition': 7387}.
<a id="trace-6825"></a>
- 34.00s–34.00s (×1), actor 0, squad 0 (trace 6825): rearward bound: one stationary suppressing element. Knowledge: actor memory at 30.00s, trace 6125. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11390606912865786, 'next_transition': 7387}.
<a id="trace-7387"></a>
<a id="trace-7389"></a>
<a id="trace-7495"></a>
<a id="trace-7497"></a>
<a id="trace-7559"></a>
<a id="trace-7561"></a>
<a id="trace-7630"></a>
<a id="trace-7632"></a>
<a id="trace-7686"></a>
<a id="trace-7688"></a>
<a id="trace-7723"></a>
<a id="trace-7725"></a>
<a id="trace-7786"></a>
<a id="trace-7788"></a>
<a id="trace-7825"></a>
<a id="trace-7827"></a>
- 35.25s–39.25s (×16), actor 5, squad 0 (trace 7387): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7290. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3747299267102029, 'next_transition': 7495}.
<a id="trace-7396"></a>
- 35.25s–35.25s (×1), actor 8, squad 1 (trace 7396): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 7293. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1192512102814618, 'next_transition': 7736}.
<a id="trace-7397"></a>
- 35.25s–35.25s (×1), actor 8, squad 1 (trace 7397): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 7293. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1192512102814618, 'next_transition': 7736}.
<a id="trace-7736"></a>
- 37.85s–37.85s (×1), actor 8, squad 1 (trace 7736): NeedSupport. Knowledge: actor memory at 35.00s, trace 7293. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.174134719108077, 'next_transition': 8915}.
<a id="trace-7850"></a>
- 39.70s–39.70s (×1), actor 0, squad 0 (trace 7850): NeedSupport. Knowledge: actor memory at 35.00s, trace 7285. Next observer evidence: None.
<a id="trace-7857"></a>
<a id="trace-7859"></a>
- 39.75s–39.75s (×2), actor 5, squad 0 (trace 7857): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 7290. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500366836010035, 'next_transition': 759}.
<a id="trace-759"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (events line 759): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-7869"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7869): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.011373 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7869. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4942996660011554, 'next_transition': 7956}.
<a id="trace-7870"></a>
- 39.85s–39.85s (×1), actor 5, squad 0 (trace 7870): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.011373 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 7870. Next observer evidence: {'until': 40.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4942996660011554, 'next_transition': 7956}.
<a id="trace-7956"></a>
<a id="trace-7958"></a>
<a id="trace-8007"></a>
<a id="trace-8009"></a>
<a id="trace-8033"></a>
<a id="trace-8035"></a>
<a id="trace-8105"></a>
<a id="trace-8107"></a>
<a id="trace-8139"></a>
<a id="trace-8141"></a>
<a id="trace-8179"></a>
<a id="trace-8181"></a>
<a id="trace-8316"></a>
<a id="trace-8318"></a>
<a id="trace-8441"></a>
<a id="trace-8443"></a>
<a id="trace-8500"></a>
<a id="trace-8502"></a>
<a id="trace-8569"></a>
<a id="trace-8571"></a>
<a id="trace-8613"></a>
<a id="trace-8615"></a>
<a id="trace-8659"></a>
<a id="trace-8661"></a>
- 40.25s–47.25s (×24), actor 5, squad 0 (trace 7956): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 7880. Next observer evidence: {'until': 40.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.4725171756119573, 'next_transition': 8007}.
<a id="trace-8671"></a>
- 47.30s–47.30s (×1), actor 0, squad 0 (trace 8671): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 8346. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8867929419080961, 'next_transition': 9010}.
<a id="trace-8672"></a>
- 47.30s–47.30s (×1), actor 0, squad 0 (trace 8672): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 8346. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.8867929419080961, 'next_transition': 9010}.
<a id="trace-8915"></a>
- 48.60s–48.60s (×1), actor 8, squad 1 (trace 8915): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 45.00s, trace 8354. Next observer evidence: {'until': 52.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.961260207689174, 'next_transition': 9314}.
<a id="trace-8942"></a>
- 48.60s–48.60s (×1), actor 8, squad 1 (trace 8942): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 45.00s, trace 8354. Next observer evidence: {'until': 52.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.961260207689174, 'next_transition': 9314}.
<a id="trace-9010"></a>
<a id="trace-9012"></a>
<a id="trace-9042"></a>
<a id="trace-9044"></a>
<a id="trace-9066"></a>
<a id="trace-9068"></a>
<a id="trace-9195"></a>
<a id="trace-9197"></a>
<a id="trace-9214"></a>
<a id="trace-9216"></a>
<a id="trace-9240"></a>
<a id="trace-9242"></a>
<a id="trace-9256"></a>
<a id="trace-9258"></a>
<a id="trace-9283"></a>
<a id="trace-9285"></a>
<a id="trace-9304"></a>
<a id="trace-9306"></a>
<a id="trace-9416"></a>
<a id="trace-9418"></a>
<a id="trace-9495"></a>
<a id="trace-9497"></a>
<a id="trace-9521"></a>
<a id="trace-9523"></a>
<a id="trace-9628"></a>
<a id="trace-9630"></a>
<a id="trace-9646"></a>
<a id="trace-9648"></a>
<a id="trace-9673"></a>
<a id="trace-9675"></a>
<a id="trace-9715"></a>
<a id="trace-9717"></a>
<a id="trace-9729"></a>
<a id="trace-9731"></a>
<a id="trace-9766"></a>
<a id="trace-9768"></a>
<a id="trace-9784"></a>
<a id="trace-9786"></a>
<a id="trace-9832"></a>
<a id="trace-9834"></a>
<a id="trace-9924"></a>
<a id="trace-9926"></a>
- 48.75s–60.25s (×42), actor 5, squad 0 (trace 9010): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 8351. Next observer evidence: {'until': 49.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2264029624765604, 'next_transition': 9042}.
<a id="trace-9314"></a>
- 52.85s–52.85s (×1), actor 8, squad 1 (trace 9314): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 50.00s, trace 9100. Next observer evidence: None.
<a id="trace-9320"></a>
- 52.90s–52.90s (×1), actor 8, squad 1 (trace 9320): MoveTactically. Knowledge: actor memory at 50.00s, trace 9100. Next observer evidence: None.
<a id="trace-9321"></a>
- 52.90s–52.90s (×1), actor 8, squad 1 (trace 9321): received platoon directive. Knowledge: actor memory at 50.00s, trace 9100. Next observer evidence: None.
<a id="trace-9352"></a>
- 52.95s–52.95s (×1), actor 8, squad 1 (trace 9352): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 9100. Next observer evidence: {'until': 64.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 13.724605865528526, 'next_transition': 10316}.
<a id="trace-9946"></a>
- 60.75s–60.75s (×1), actor 0, squad 0 (trace 9946): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 60.00s, trace 9844. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331183477122622, 'next_transition': 10116}.
<a id="trace-9947"></a>
- 60.75s–60.75s (×1), actor 0, squad 0 (trace 9947): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 60.00s, trace 9844. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331183477122622, 'next_transition': 10116}.
<a id="trace-10116"></a>
<a id="trace-10118"></a>
<a id="trace-10134"></a>
<a id="trace-10136"></a>
<a id="trace-10180"></a>
<a id="trace-10182"></a>
<a id="trace-10194"></a>
<a id="trace-10196"></a>
<a id="trace-10225"></a>
<a id="trace-10227"></a>
<a id="trace-10262"></a>
<a id="trace-10264"></a>
<a id="trace-10288"></a>
<a id="trace-10290"></a>
<a id="trace-10304"></a>
<a id="trace-10306"></a>
<a id="trace-10460"></a>
<a id="trace-10462"></a>
<a id="trace-10474"></a>
<a id="trace-10476"></a>
<a id="trace-10508"></a>
<a id="trace-10510"></a>
<a id="trace-10523"></a>
<a id="trace-10525"></a>
<a id="trace-10549"></a>
<a id="trace-10551"></a>
<a id="trace-10572"></a>
<a id="trace-10574"></a>
<a id="trace-10598"></a>
<a id="trace-10600"></a>
<a id="trace-10617"></a>
<a id="trace-10619"></a>
<a id="trace-10642"></a>
<a id="trace-10644"></a>
<a id="trace-10659"></a>
<a id="trace-10661"></a>
<a id="trace-10758"></a>
<a id="trace-10760"></a>
<a id="trace-10775"></a>
<a id="trace-10777"></a>
<a id="trace-10799"></a>
<a id="trace-10801"></a>
<a id="trace-10817"></a>
<a id="trace-10819"></a>
<a id="trace-10843"></a>
<a id="trace-10845"></a>
<a id="trace-10930"></a>
<a id="trace-10932"></a>
- 61.25s–73.25s (×48), actor 5, squad 0 (trace 10116): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 9849. Next observer evidence: {'until': 61.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500898102276315, 'next_transition': 10134}.
<a id="trace-10316"></a>
- 64.80s–64.80s (×1), actor 8, squad 1 (trace 10316): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 60.00s, trace 9852. Next observer evidence: {'until': 67.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.441264621773928, 'next_transition': 1017}.
<a id="trace-1017"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (events line 1017): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10565"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (trace 10565): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.672098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 10565. Next observer evidence: {'until': 72.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.585029179681842, 'next_transition': 10854}.
<a id="trace-10566"></a>
- 67.45s–67.45s (×1), actor 5, squad 1 (trace 10566): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.672098 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 67.45s, trace 10566. Next observer evidence: {'until': 72.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.585029179681842, 'next_transition': 10854}.
<a id="trace-10854"></a>
- 72.50s–72.50s (×1), actor 8, squad 1 (trace 10854): received platoon directive. Knowledge: actor memory at 70.00s, trace 10677. Next observer evidence: {'until': 79.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 4.351254062270439, 'next_transition': 11573}.
<a id="trace-10966"></a>
- 74.10s–74.10s (×1), actor 0, squad 0 (trace 10966): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 10669. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362527810682878, 'next_transition': 11161}.
<a id="trace-10967"></a>
- 74.10s–74.10s (×1), actor 0, squad 0 (trace 10967): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 10669. Next observer evidence: {'until': 74.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362527810682878, 'next_transition': 11161}.
<a id="trace-11161"></a>
<a id="trace-11163"></a>
<a id="trace-11259"></a>
<a id="trace-11261"></a>
<a id="trace-11317"></a>
<a id="trace-11319"></a>
- 74.75s–76.25s (×6), actor 5, squad 0 (trace 11161): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 10674. Next observer evidence: {'until': 75.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4331131478947998, 'next_transition': 11259}.
<a id="trace-11334"></a>
- 76.60s–76.60s (×1), actor 0, squad 0 (trace 11334): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 75.00s, trace 11179. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150059538866573, 'next_transition': 11359}.
<a id="trace-11359"></a>
<a id="trace-11361"></a>
<a id="trace-11403"></a>
<a id="trace-11405"></a>
<a id="trace-11429"></a>
<a id="trace-11431"></a>
<a id="trace-11476"></a>
<a id="trace-11478"></a>
<a id="trace-11500"></a>
<a id="trace-11502"></a>
<a id="trace-11537"></a>
<a id="trace-11539"></a>
<a id="trace-11564"></a>
<a id="trace-11566"></a>
<a id="trace-11751"></a>
<a id="trace-11753"></a>
<a id="trace-11774"></a>
<a id="trace-11776"></a>
<a id="trace-11810"></a>
<a id="trace-11812"></a>
<a id="trace-11837"></a>
<a id="trace-11839"></a>
<a id="trace-11848"></a>
<a id="trace-11850"></a>
<a id="trace-11905"></a>
<a id="trace-11907"></a>
<a id="trace-11913"></a>
<a id="trace-11915"></a>
<a id="trace-11993"></a>
<a id="trace-11995"></a>
<a id="trace-12006"></a>
<a id="trace-12008"></a>
<a id="trace-12023"></a>
<a id="trace-12025"></a>
<a id="trace-12100"></a>
<a id="trace-12102"></a>
<a id="trace-12116"></a>
<a id="trace-12118"></a>
<a id="trace-12135"></a>
<a id="trace-12137"></a>
<a id="trace-12152"></a>
<a id="trace-12154"></a>
<a id="trace-12167"></a>
<a id="trace-12169"></a>
<a id="trace-12179"></a>
<a id="trace-12181"></a>
<a id="trace-12259"></a>
<a id="trace-12261"></a>
<a id="trace-12277"></a>
<a id="trace-12279"></a>
<a id="trace-12290"></a>
<a id="trace-12292"></a>
<a id="trace-12303"></a>
<a id="trace-12305"></a>
<a id="trace-12316"></a>
<a id="trace-12318"></a>
<a id="trace-12328"></a>
<a id="trace-12330"></a>
<a id="trace-12345"></a>
<a id="trace-12347"></a>
<a id="trace-12378"></a>
<a id="trace-12380"></a>
- 76.75s–94.75s (×62), actor 5, squad 0 (trace 11359): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11184. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3387296978672873, 'next_transition': 11403}.
<a id="trace-11573"></a>
- 79.80s–79.80s (×1), actor 8, squad 1 (trace 11573): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 75.00s, trace 11187. Next observer evidence: {'until': 87, 'shots': 2, 'casualties': 0, 'mean_displacement': 7.658689586020901, 'next_transition': 12043}.
<a id="trace-12043"></a>
- 87.00s–87.00s (×1), actor 8, squad 1 (trace 12043): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 11929. Next observer evidence: {'until': 96.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.999984867558167, 'next_transition': 12505}.
<a id="trace-1194"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (events line 1194): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12407"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 12407): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.757639 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 12407. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12474}.
<a id="trace-12408"></a>
- 95.15s–95.15s (×1), actor 5, squad 0 (trace 12408): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.757639 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 95.15s, trace 12408. Next observer evidence: {'until': 95.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12474}.
<a id="trace-12474"></a>
<a id="trace-12476"></a>
<a id="trace-12491"></a>
<a id="trace-12493"></a>
<a id="trace-12624"></a>
<a id="trace-12626"></a>
<a id="trace-12644"></a>
<a id="trace-12646"></a>
<a id="trace-12679"></a>
<a id="trace-12681"></a>
<a id="trace-12700"></a>
<a id="trace-12702"></a>
<a id="trace-12856"></a>
<a id="trace-12858"></a>
<a id="trace-12940"></a>
<a id="trace-12942"></a>
- 95.75s–100.25s (×16), actor 5, squad 0 (trace 12474): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.15s, trace 12408. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12491}.
<a id="trace-12505"></a>
- 96.60s–96.60s (×1), actor 8, squad 1 (trace 12505): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 95.00s, trace 12393. Next observer evidence: {'until': 99.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.7799991147936796, 'next_transition': 12707}.
<a id="trace-12707"></a>
- 99.50s–99.50s (×1), actor 8, squad 1 (trace 12707): slot invalidated by geometry or known threat uncertainty. Knowledge: actor memory at 95.00s, trace 12393. Next observer evidence: None.
<a id="trace-12802"></a>
- 99.55s–99.55s (×1), actor 8, squad 1 (trace 12802): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 95.00s, trace 12393. Next observer evidence: {'until': 109.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 11.900753453844093, 'next_transition': 15607}.
<a id="trace-12962"></a>
- 100.85s–100.85s (×1), actor 0, squad 0 (trace 12962): SupportByFire: received threat-area order; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 100.00s, trace 12867. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15188}.
<a id="trace-12963"></a>
- 100.85s–100.85s (×1), actor 0, squad 0 (trace 12963): occupy protected firing positions; wait for element delivered rounds. Knowledge: actor memory at 100.00s, trace 12867. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15188}.
<a id="trace-15188"></a>
<a id="trace-15190"></a>
<a id="trace-15236"></a>
<a id="trace-15238"></a>
<a id="trace-15249"></a>
<a id="trace-15251"></a>
<a id="trace-15280"></a>
<a id="trace-15307"></a>
<a id="trace-15309"></a>
<a id="trace-15331"></a>
<a id="trace-15333"></a>
<a id="trace-15346"></a>
<a id="trace-15348"></a>
<a id="trace-15431"></a>
<a id="trace-15433"></a>
<a id="trace-15449"></a>
<a id="trace-15451"></a>
<a id="trace-15476"></a>
<a id="trace-15478"></a>
<a id="trace-15486"></a>
<a id="trace-15488"></a>
<a id="trace-15509"></a>
<a id="trace-15511"></a>
<a id="trace-15524"></a>
<a id="trace-15526"></a>
<a id="trace-15545"></a>
<a id="trace-15547"></a>
<a id="trace-15563"></a>
<a id="trace-15565"></a>
- 101.25s–108.75s (×29), actor 5, squad 0 (trace 15188): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 12872. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3740664331495494, 'next_transition': 15236}.
<a id="trace-1300"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1300): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149971676459968, 'next_transition': 15589}.
<a id="trace-15576"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 15576): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850143 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 15576. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149971676459968, 'next_transition': 15589}.
<a id="trace-15577"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 15577): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.850143 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 15577. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3149971676459968, 'next_transition': 15589}.
<a id="trace-15589"></a>
<a id="trace-15591"></a>
<a id="trace-15599"></a>
<a id="trace-15601"></a>
<a id="trace-15802"></a>
<a id="trace-15804"></a>
<a id="trace-15823"></a>
<a id="trace-15825"></a>
<a id="trace-15844"></a>
<a id="trace-15846"></a>
<a id="trace-16058"></a>
<a id="trace-16060"></a>
<a id="trace-16077"></a>
<a id="trace-16079"></a>
<a id="trace-16094"></a>
<a id="trace-16096"></a>
<a id="trace-16116"></a>
<a id="trace-16118"></a>
<a id="trace-16127"></a>
<a id="trace-16129"></a>
<a id="trace-16140"></a>
<a id="trace-16142"></a>
<a id="trace-16154"></a>
<a id="trace-16156"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-16251"></a>
<a id="trace-16253"></a>
<a id="trace-16268"></a>
<a id="trace-16270"></a>
<a id="trace-16293"></a>
<a id="trace-16295"></a>
<a id="trace-16324"></a>
<a id="trace-16326"></a>
<a id="trace-16336"></a>
<a id="trace-16338"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16370"></a>
<a id="trace-16372"></a>
<a id="trace-16452"></a>
<a id="trace-16454"></a>
<a id="trace-16468"></a>
<a id="trace-16470"></a>
<a id="trace-16484"></a>
<a id="trace-16486"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16512"></a>
<a id="trace-16514"></a>
<a id="trace-16520"></a>
<a id="trace-16522"></a>
<a id="trace-16546"></a>
<a id="trace-16548"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16664"></a>
<a id="trace-16666"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16707"></a>
<a id="trace-16709"></a>
<a id="trace-16715"></a>
<a id="trace-16717"></a>
<a id="trace-16736"></a>
<a id="trace-16738"></a>
<a id="trace-16744"></a>
<a id="trace-16746"></a>
<a id="trace-16758"></a>
<a id="trace-16760"></a>
<a id="trace-16767"></a>
<a id="trace-16769"></a>
<a id="trace-16844"></a>
<a id="trace-16846"></a>
<a id="trace-16858"></a>
<a id="trace-16860"></a>
<a id="trace-16882"></a>
<a id="trace-16884"></a>
<a id="trace-16897"></a>
<a id="trace-16899"></a>
<a id="trace-16908"></a>
<a id="trace-16910"></a>
<a id="trace-16935"></a>
<a id="trace-16937"></a>
<a id="trace-17045"></a>
<a id="trace-17047"></a>
<a id="trace-17055"></a>
<a id="trace-17057"></a>
<a id="trace-17070"></a>
<a id="trace-17072"></a>
<a id="trace-17083"></a>
<a id="trace-17085"></a>
<a id="trace-17098"></a>
<a id="trace-17100"></a>
<a id="trace-17110"></a>
<a id="trace-17112"></a>
<a id="trace-17135"></a>
<a id="trace-17137"></a>
<a id="trace-17161"></a>
<a id="trace-17163"></a>
<a id="trace-17257"></a>
<a id="trace-17259"></a>
<a id="trace-17277"></a>
<a id="trace-17279"></a>
<a id="trace-17301"></a>
<a id="trace-17303"></a>
<a id="trace-17325"></a>
<a id="trace-17327"></a>
<a id="trace-17345"></a>
<a id="trace-17347"></a>
<a id="trace-17444"></a>
<a id="trace-17446"></a>
<a id="trace-17478"></a>
<a id="trace-17480"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17527"></a>
<a id="trace-17529"></a>
<a id="trace-17535"></a>
<a id="trace-17537"></a>
<a id="trace-17550"></a>
<a id="trace-17552"></a>
<a id="trace-17558"></a>
<a id="trace-17560"></a>
<a id="trace-17636"></a>
<a id="trace-17638"></a>
- 109.25s–150.30s (×130), actor 5, squad 0 (trace 15589): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 15577. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500826378049224, 'next_transition': 15599}.
<a id="trace-15607"></a>
- 109.80s–109.80s (×1), actor 8, squad 1 (trace 15607): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 105.00s, trace 15366. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.693809748219928, 'next_transition': 15851}.
<a id="trace-15851"></a>
- 111.30s–111.30s (×1), actor 8, squad 1 (trace 15851): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 15732. Next observer evidence: {'until': 114.6, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.06560152456307726, 'next_transition': 16150}.
<a id="trace-15852"></a>
- 111.30s–111.30s (×1), actor 8, squad 1 (trace 15852): new contact inside 100 m. Knowledge: actor memory at 110.00s, trace 15732. Next observer evidence: {'until': 114.6, 'shots': 3, 'casualties': 1, 'mean_displacement': 0.06560152456307726, 'next_transition': 16150}.
<a id="trace-16150"></a>
- 114.65s–114.65s (×1), actor 8, squad 1 (trace 16150): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 110.00s, trace 15732. Next observer evidence: {'until': 136.6, 'shots': 5, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1445}.
<a id="trace-1445"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (events line 1445): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17078"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (trace 17078): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.508389 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 17078. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17293}.
<a id="trace-17079"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (trace 17079): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.508389 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 17079. Next observer evidence: {'until': 141.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17293}.
<a id="trace-17293"></a>
- 141.80s–141.80s (×1), actor 8, squad 1 (trace 17293): received platoon directive; retain contact cover stage. Knowledge: actor memory at 140.00s, trace 17186. Next observer evidence: {'until': 150.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1491}.
<a id="trace-1490"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (events line 1490): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1491"></a>
- 150.40s–150.40s (×1), actor 5, squad 1 (events line 1491): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-17643"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (trace 17643): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.498993 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 17643. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17675}.
<a id="trace-17644"></a>
- 150.40s–150.40s (×1), actor 5, squad 0 (trace 17644): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.498993 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 17644. Next observer evidence: {'until': 151.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17675}.
<a id="trace-17645"></a>
- 150.40s–150.40s (×1), actor 5, squad 1 (trace 17645): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.498993 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 17645. Next observer evidence: {'until': 155.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17854}.
<a id="trace-17646"></a>
- 150.40s–150.40s (×1), actor 5, squad 1 (trace 17646): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.498993 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.40s, trace 17646. Next observer evidence: {'until': 155.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17854}.
<a id="trace-17675"></a>
<a id="trace-17677"></a>
<a id="trace-17693"></a>
<a id="trace-17695"></a>
<a id="trace-17706"></a>
<a id="trace-17708"></a>
<a id="trace-17728"></a>
<a id="trace-17730"></a>
<a id="trace-17740"></a>
<a id="trace-17742"></a>
<a id="trace-17763"></a>
<a id="trace-17765"></a>
<a id="trace-17843"></a>
<a id="trace-17845"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17872"></a>
<a id="trace-17874"></a>
<a id="trace-17882"></a>
<a id="trace-17884"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17907"></a>
<a id="trace-17909"></a>
<a id="trace-17924"></a>
<a id="trace-17926"></a>
<a id="trace-17934"></a>
<a id="trace-17936"></a>
<a id="trace-17965"></a>
<a id="trace-17967"></a>
<a id="trace-18044"></a>
<a id="trace-18046"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18084"></a>
<a id="trace-18086"></a>
<a id="trace-18103"></a>
<a id="trace-18105"></a>
<a id="trace-18115"></a>
<a id="trace-18117"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18139"></a>
<a id="trace-18141"></a>
<a id="trace-18153"></a>
<a id="trace-18155"></a>
<a id="trace-18164"></a>
<a id="trace-18166"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18255"></a>
<a id="trace-18257"></a>
<a id="trace-18277"></a>
<a id="trace-18279"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18306"></a>
<a id="trace-18308"></a>
<a id="trace-18333"></a>
<a id="trace-18335"></a>
<a id="trace-18344"></a>
<a id="trace-18346"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18446"></a>
<a id="trace-18448"></a>
- 151.80s–170.30s (×68), actor 5, squad 0 (trace 17675): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.40s, trace 17646. Next observer evidence: {'until': 152.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17693}.
<a id="trace-17854"></a>
- 155.60s–155.60s (×1), actor 8, squad 1 (trace 17854): received platoon directive; retain contact cover stage. Knowledge: actor memory at 155.00s, trace 17782. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18625}.
<a id="trace-18453"></a>
- 170.35s–170.35s (×1), actor 0, squad 0 (trace 18453): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 170.00s, trace 18377. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18514}.
<a id="trace-18454"></a>
- 170.35s–170.35s (×1), actor 0, squad 0 (trace 18454): MoveTactically. Knowledge: actor memory at 170.00s, trace 18377. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18514}.
<a id="trace-18455"></a>
- 170.35s–170.35s (×1), actor 0, squad 0 (trace 18455): . Knowledge: actor memory at 170.00s, trace 18377. Next observer evidence: {'until': 170.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18514}.
<a id="trace-18514"></a>
<a id="trace-18516"></a>
<a id="trace-18538"></a>
<a id="trace-18540"></a>
- 170.80s–171.30s (×4), actor 5, squad 0 (trace 18514): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 18382. Next observer evidence: {'until': 171.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18538}.
<a id="trace-18546"></a>
- 171.35s–171.35s (×1), actor 0, squad 0 (trace 18546): received platoon directive. Knowledge: actor memory at 170.00s, trace 18377. Next observer evidence: {'until': 171.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.05905973273940568, 'next_transition': 18618}.
<a id="trace-18618"></a>
<a id="trace-18620"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18688"></a>
<a id="trace-18690"></a>
<a id="trace-18740"></a>
<a id="trace-18742"></a>
<a id="trace-18759"></a>
<a id="trace-18761"></a>
<a id="trace-18823"></a>
<a id="trace-18825"></a>
<a id="trace-18901"></a>
<a id="trace-18903"></a>
<a id="trace-18912"></a>
<a id="trace-18914"></a>
<a id="trace-18933"></a>
<a id="trace-18935"></a>
<a id="trace-18952"></a>
<a id="trace-18954"></a>
<a id="trace-18971"></a>
<a id="trace-18973"></a>
<a id="trace-19017"></a>
<a id="trace-19019"></a>
<a id="trace-19027"></a>
<a id="trace-19029"></a>
<a id="trace-19053"></a>
<a id="trace-19055"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19154"></a>
<a id="trace-19156"></a>
- 171.80s–180.30s (×32), actor 5, squad 0 (trace 18618): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 18382. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750250642846908, 'next_transition': 18654}.
<a id="trace-18625"></a>
- 171.80s–171.80s (×1), actor 8, squad 1 (trace 18625): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 170.00s, trace 18385. Next observer evidence: {'until': 178, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1630}.
<a id="trace-1630"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (events line 1630): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19447}.
<a id="trace-18999"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (trace 18999): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.769482 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 18999. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19447}.
<a id="trace-19000"></a>
- 178.05s–178.05s (×1), actor 5, squad 1 (trace 19000): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.769482 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.05s, trace 19000. Next observer evidence: {'until': 183.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19447}.
<a id="trace-19164"></a>
- 180.50s–180.50s (×1), actor 0, squad 0 (trace 19164): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 180.00s, trace 19077. Next observer evidence: {'until': 180.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0787546241112405, 'next_transition': 19332}.
<a id="trace-19332"></a>
<a id="trace-19334"></a>
<a id="trace-19355"></a>
<a id="trace-19357"></a>
<a id="trace-19369"></a>
<a id="trace-19371"></a>
<a id="trace-19420"></a>
<a id="trace-19422"></a>
<a id="trace-19453"></a>
<a id="trace-19455"></a>
<a id="trace-19471"></a>
<a id="trace-19473"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19598"></a>
<a id="trace-19600"></a>
<a id="trace-19616"></a>
<a id="trace-19618"></a>
- 180.80s–185.80s (×18), actor 5, squad 0 (trace 19332): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 180.00s, trace 19082. Next observer evidence: {'until': 181.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3092959593954892, 'next_transition': 19355}.
<a id="trace-19447"></a>
- 183.25s–183.25s (×1), actor 8, squad 1 (trace 19447): received platoon directive; retain contact cover stage. Knowledge: actor memory at 180.00s, trace 19085. Next observer evidence: {'until': 205.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1984}.
<a id="trace-19631"></a>
- 186.10s–186.10s (×1), actor 0, squad 0 (trace 19631): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 19527. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750757119975572, 'next_transition': 19720}.
<a id="trace-19632"></a>
- 186.10s–186.10s (×1), actor 0, squad 0 (trace 19632): new contact inside 100 m. Knowledge: actor memory at 185.00s, trace 19527. Next observer evidence: {'until': 186.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750757119975572, 'next_transition': 19720}.
<a id="trace-19720"></a>
<a id="trace-19722"></a>
<a id="trace-19741"></a>
<a id="trace-19743"></a>
<a id="trace-19775"></a>
<a id="trace-19777"></a>
- 186.30s–187.30s (×6), actor 5, squad 0 (trace 19720): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 19532. Next observer evidence: {'until': 186.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.39374849073548535, 'next_transition': 19741}.
<a id="trace-19794"></a>
- 187.75s–187.75s (×1), actor 0, squad 0 (trace 19794): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 185.00s, trace 19527. Next observer evidence: {'until': 188.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.723979452242946, 'next_transition': 19965}.
<a id="trace-19965"></a>
<a id="trace-19967"></a>
<a id="trace-20031"></a>
<a id="trace-20033"></a>
<a id="trace-20080"></a>
<a id="trace-20082"></a>
<a id="trace-20197"></a>
<a id="trace-20199"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20285"></a>
<a id="trace-20287"></a>
- 188.80s–191.30s (×12), actor 5, squad 0 (trace 19965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 19532. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35465032318646217, 'next_transition': 20031}.
<a id="trace-20296"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20296): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-20298"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20298): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-20932"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20932): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-20933"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20933): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-20995"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20995): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-20996"></a>
- 191.35s–191.35s (×1), actor 0, squad 0 (trace 20996): Assaulting. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1266250000000002, 'next_transition': 21052}.
<a id="trace-21052"></a>
<a id="trace-21054"></a>
- 192.30s–192.30s (×2), actor 5, squad 0 (trace 21052): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 20104. Next observer evidence: None.
<a id="trace-21061"></a>
- 192.35s–192.35s (×1), actor 0, squad 0 (trace 21061): Reorganise: completed/failed drill. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03650000002140386, 'next_transition': 21171}.
<a id="trace-21068"></a>
- 192.35s–192.35s (×1), actor 0, squad 0 (trace 21068): MoveTactically. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03650000002140386, 'next_transition': 21171}.
<a id="trace-21069"></a>
- 192.35s–192.35s (×1), actor 0, squad 0 (trace 21069): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 190.00s, trace 20099. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03650000002140386, 'next_transition': 21171}.
<a id="trace-21171"></a>
<a id="trace-21173"></a>
<a id="trace-21209"></a>
<a id="trace-21211"></a>
<a id="trace-21260"></a>
<a id="trace-21262"></a>
<a id="trace-21477"></a>
<a id="trace-21479"></a>
<a id="trace-21503"></a>
<a id="trace-21505"></a>
<a id="trace-21528"></a>
<a id="trace-21530"></a>
<a id="trace-21551"></a>
<a id="trace-21553"></a>
<a id="trace-21588"></a>
<a id="trace-21590"></a>
- 192.80s–197.80s (×16), actor 5, squad 0 (trace 21171): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 20104. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.015300000000000313, 'next_transition': 21209}.
<a id="trace-21598"></a>
- 197.85s–197.85s (×1), actor 0, squad 0 (trace 21598): ReactToContact: cover and return fire. Knowledge: actor memory at 195.00s, trace 21386. Next observer evidence: {'until': 198.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1325263866709662, 'next_transition': 21726}.
<a id="trace-21599"></a>
- 197.85s–197.85s (×1), actor 0, squad 0 (trace 21599): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 21386. Next observer evidence: {'until': 198.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.1325263866709662, 'next_transition': 21726}.
<a id="trace-21726"></a>
<a id="trace-21728"></a>
<a id="trace-21763"></a>
<a id="trace-21765"></a>
<a id="trace-21875"></a>
<a id="trace-21877"></a>
<a id="trace-21918"></a>
<a id="trace-21920"></a>
<a id="trace-21952"></a>
<a id="trace-21954"></a>
- 198.80s–201.80s (×10), actor 5, squad 0 (trace 21726): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 195.00s, trace 21391. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11107616509207774, 'next_transition': 21763}.
<a id="trace-21965"></a>
- 202.10s–202.10s (×1), actor 0, squad 0 (trace 21965): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 200.00s, trace 21802. Next observer evidence: {'until': 202.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0326208073362022, 'next_transition': 21982}.
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-21992"></a>
<a id="trace-21994"></a>
- 202.30s–202.80s (×4), actor 5, squad 0 (trace 21982): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 21807. Next observer evidence: {'until': 202.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10245244897336826, 'next_transition': 21992}.
<a id="trace-22003"></a>
- 203.10s–203.10s (×1), actor 0, squad 0 (trace 22003): NeedSupport. Knowledge: actor memory at 200.00s, trace 21802. Next observer evidence: {'until': 203.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0318586939664827, 'next_transition': 22017}.
<a id="trace-22017"></a>
<a id="trace-22019"></a>
- 203.30s–203.30s (×2), actor 5, squad 0 (trace 22017): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 21807. Next observer evidence: {'until': 203.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.008074293796518538, 'next_transition': 22031}.
<a id="trace-22031"></a>
- 203.55s–203.55s (×1), actor 0, squad 0 (trace 22031): new contact inside 100 m. Knowledge: actor memory at 200.00s, trace 21802. Next observer evidence: {'until': 203.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22108}.
<a id="trace-22108"></a>
<a id="trace-22110"></a>
<a id="trace-22140"></a>
<a id="trace-22142"></a>
<a id="trace-22162"></a>
<a id="trace-22164"></a>
<a id="trace-22246"></a>
<a id="trace-22248"></a>
<a id="trace-22307"></a>
<a id="trace-22309"></a>
<a id="trace-22326"></a>
<a id="trace-22328"></a>
- 203.80s–206.80s (×12), actor 5, squad 0 (trace 22108): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 21807. Next observer evidence: {'until': 204.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22140}.
<a id="trace-1984"></a>
- 205.65s–205.65s (×1), actor 5, squad 1 (events line 1984): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-22262"></a>
- 205.65s–205.65s (×1), actor 5, squad 1 (trace 22262): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.095976 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 22262. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22640}.
<a id="trace-22263"></a>
- 205.65s–205.65s (×1), actor 5, squad 1 (trace 22263): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=2.095976 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 205.65s, trace 22263. Next observer evidence: {'until': 210.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22640}.
<a id="trace-22337"></a>
- 207.15s–207.15s (×1), actor 0, squad 0 (trace 22337): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 205.00s, trace 22173. Next observer evidence: {'until': 207.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22346}.
<a id="trace-22346"></a>
<a id="trace-22348"></a>
<a id="trace-22362"></a>
<a id="trace-22364"></a>
<a id="trace-22383"></a>
<a id="trace-22385"></a>
<a id="trace-22414"></a>
<a id="trace-22416"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22596"></a>
<a id="trace-22598"></a>
<a id="trace-22660"></a>
<a id="trace-22662"></a>
<a id="trace-22677"></a>
<a id="trace-22679"></a>
<a id="trace-22697"></a>
<a id="trace-22699"></a>
<a id="trace-22714"></a>
<a id="trace-22716"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22770"></a>
<a id="trace-22772"></a>
<a id="trace-22783"></a>
<a id="trace-22785"></a>
<a id="trace-22862"></a>
<a id="trace-22864"></a>
<a id="trace-22892"></a>
<a id="trace-22894"></a>
- 207.30s–216.30s (×32), actor 5, squad 0 (trace 22346): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 205.65s, trace 22263. Next observer evidence: {'until': 207.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22362}.
<a id="trace-22640"></a>
- 210.85s–210.85s (×1), actor 8, squad 1 (trace 22640): received platoon directive; retain contact cover stage. Knowledge: actor memory at 210.00s, trace 22517. Next observer evidence: {'until': 233.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2080}.
<a id="trace-22905"></a>
- 216.75s–216.75s (×1), actor 0, squad 0 (trace 22905): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 215.00s, trace 22793. Next observer evidence: {'until': 217.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22923}.
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22947"></a>
<a id="trace-22949"></a>
<a id="trace-22975"></a>
<a id="trace-22977"></a>
- 217.30s–219.30s (×6), actor 5, squad 0 (trace 22923): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 215.00s, trace 22797. Next observer evidence: {'until': 218.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22947}.
<a id="trace-2041"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (events line 2041): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22989}.
<a id="trace-22982"></a>
- 219.50s–219.50s (×1), actor 5, squad 0 (trace 22982): renew committed intent (75 s lifetime). Knowledge: actor memory at 219.50s, trace 22982. Next observer evidence: {'until': 219.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 22989}.
<a id="trace-22989"></a>
<a id="trace-22991"></a>
<a id="trace-23068"></a>
<a id="trace-23070"></a>
<a id="trace-23093"></a>
<a id="trace-23095"></a>
<a id="trace-23103"></a>
<a id="trace-23105"></a>
<a id="trace-23123"></a>
<a id="trace-23125"></a>
<a id="trace-23138"></a>
<a id="trace-23140"></a>
<a id="trace-23163"></a>
<a id="trace-23165"></a>
<a id="trace-23178"></a>
<a id="trace-23180"></a>
<a id="trace-23261"></a>
<a id="trace-23263"></a>
<a id="trace-23272"></a>
<a id="trace-23274"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
<a id="trace-23310"></a>
<a id="trace-23312"></a>
<a id="trace-23320"></a>
<a id="trace-23322"></a>
<a id="trace-23334"></a>
<a id="trace-23336"></a>
<a id="trace-23356"></a>
<a id="trace-23358"></a>
<a id="trace-23368"></a>
<a id="trace-23370"></a>
<a id="trace-23447"></a>
<a id="trace-23449"></a>
<a id="trace-23459"></a>
<a id="trace-23461"></a>
<a id="trace-23478"></a>
<a id="trace-23480"></a>
<a id="trace-23498"></a>
<a id="trace-23500"></a>
<a id="trace-23516"></a>
<a id="trace-23518"></a>
<a id="trace-23525"></a>
<a id="trace-23527"></a>
<a id="trace-23539"></a>
<a id="trace-23541"></a>
<a id="trace-23550"></a>
<a id="trace-23552"></a>
<a id="trace-23566"></a>
<a id="trace-23568"></a>
<a id="trace-23578"></a>
<a id="trace-23580"></a>
<a id="trace-23656"></a>
<a id="trace-23658"></a>
<a id="trace-23679"></a>
<a id="trace-23681"></a>
<a id="trace-23692"></a>
<a id="trace-23694"></a>
<a id="trace-23707"></a>
<a id="trace-23709"></a>
<a id="trace-23742"></a>
<a id="trace-23744"></a>
<a id="trace-23752"></a>
<a id="trace-23754"></a>
<a id="trace-23769"></a>
<a id="trace-23771"></a>
<a id="trace-23781"></a>
<a id="trace-23783"></a>
<a id="trace-23860"></a>
<a id="trace-23862"></a>
<a id="trace-23870"></a>
<a id="trace-23872"></a>
<a id="trace-23885"></a>
<a id="trace-23887"></a>
<a id="trace-23910"></a>
<a id="trace-23912"></a>
<a id="trace-23918"></a>
<a id="trace-23920"></a>
<a id="trace-23934"></a>
<a id="trace-23936"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23962"></a>
<a id="trace-23964"></a>
<a id="trace-23973"></a>
<a id="trace-23975"></a>
<a id="trace-24085"></a>
<a id="trace-24087"></a>
<a id="trace-24098"></a>
<a id="trace-24100"></a>
<a id="trace-24119"></a>
<a id="trace-24121"></a>
<a id="trace-24132"></a>
<a id="trace-24134"></a>
<a id="trace-24141"></a>
<a id="trace-24143"></a>
<a id="trace-24167"></a>
<a id="trace-24169"></a>
<a id="trace-24248"></a>
<a id="trace-24250"></a>
<a id="trace-24290"></a>
<a id="trace-24292"></a>
<a id="trace-24316"></a>
<a id="trace-24318"></a>
<a id="trace-24333"></a>
<a id="trace-24335"></a>
<a id="trace-24342"></a>
<a id="trace-24344"></a>
<a id="trace-24357"></a>
<a id="trace-24359"></a>
<a id="trace-24368"></a>
<a id="trace-24370"></a>
<a id="trace-24453"></a>
<a id="trace-24455"></a>
<a id="trace-24471"></a>
<a id="trace-24473"></a>
<a id="trace-24496"></a>
<a id="trace-24498"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24535"></a>
<a id="trace-24537"></a>
<a id="trace-24553"></a>
<a id="trace-24555"></a>
<a id="trace-24654"></a>
<a id="trace-24656"></a>
<a id="trace-24673"></a>
<a id="trace-24675"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24718"></a>
<a id="trace-24720"></a>
<a id="trace-24728"></a>
<a id="trace-24730"></a>
<a id="trace-24747"></a>
<a id="trace-24749"></a>
<a id="trace-24764"></a>
<a id="trace-24766"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24853"></a>
<a id="trace-24855"></a>
<a id="trace-24881"></a>
<a id="trace-24883"></a>
<a id="trace-24908"></a>
<a id="trace-24910"></a>
<a id="trace-24921"></a>
<a id="trace-24923"></a>
<a id="trace-24943"></a>
<a id="trace-24945"></a>
<a id="trace-24956"></a>
<a id="trace-24958"></a>
<a id="trace-25033"></a>
<a id="trace-25035"></a>
<a id="trace-25049"></a>
<a id="trace-25051"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25093"></a>
<a id="trace-25095"></a>
<a id="trace-25104"></a>
<a id="trace-25106"></a>
<a id="trace-25119"></a>
<a id="trace-25121"></a>
<a id="trace-25128"></a>
<a id="trace-25130"></a>
<a id="trace-25149"></a>
<a id="trace-25151"></a>
<a id="trace-25161"></a>
<a id="trace-25163"></a>
<a id="trace-25238"></a>
<a id="trace-25240"></a>
<a id="trace-25248"></a>
<a id="trace-25250"></a>
<a id="trace-25267"></a>
<a id="trace-25269"></a>
<a id="trace-25276"></a>
<a id="trace-25278"></a>
<a id="trace-25294"></a>
<a id="trace-25296"></a>
<a id="trace-25302"></a>
<a id="trace-25304"></a>
<a id="trace-25323"></a>
<a id="trace-25325"></a>
<a id="trace-25333"></a>
<a id="trace-25335"></a>
<a id="trace-25348"></a>
<a id="trace-25350"></a>
<a id="trace-25438"></a>
<a id="trace-25440"></a>
<a id="trace-25449"></a>
<a id="trace-25451"></a>
<a id="trace-25466"></a>
<a id="trace-25468"></a>
<a id="trace-25479"></a>
<a id="trace-25481"></a>
<a id="trace-25495"></a>
<a id="trace-25497"></a>
<a id="trace-25503"></a>
<a id="trace-25505"></a>
<a id="trace-25519"></a>
<a id="trace-25521"></a>
<a id="trace-25528"></a>
<a id="trace-25530"></a>
<a id="trace-25546"></a>
<a id="trace-25548"></a>
<a id="trace-25563"></a>
<a id="trace-25565"></a>
<a id="trace-25642"></a>
<a id="trace-25644"></a>
<a id="trace-25654"></a>
<a id="trace-25656"></a>
<a id="trace-25677"></a>
<a id="trace-25679"></a>
<a id="trace-25696"></a>
<a id="trace-25698"></a>
<a id="trace-25704"></a>
<a id="trace-25706"></a>
<a id="trace-25717"></a>
<a id="trace-25719"></a>
- 219.80s–288.30s (×220), actor 5, squad 0 (trace 22989): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 219.50s, trace 22982. Next observer evidence: {'until': 220.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23068}.
<a id="trace-2080"></a>
- 233.30s–233.30s (×1), actor 5, squad 1 (events line 2080): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 238.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23750}.
<a id="trace-23546"></a>
- 233.30s–233.30s (×1), actor 5, squad 1 (trace 23546): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.380741 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.30s, trace 23546. Next observer evidence: {'until': 238.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23750}.
<a id="trace-23547"></a>
- 233.30s–233.30s (×1), actor 5, squad 1 (trace 23547): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.380741 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.30s, trace 23547. Next observer evidence: {'until': 238.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23750}.
<a id="trace-23750"></a>
- 238.50s–238.50s (×1), actor 8, squad 1 (trace 23750): received platoon directive; retain contact cover stage. Knowledge: actor memory at 235.00s, trace 23593. Next observer evidence: {'until': 260.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24662}.
<a id="trace-24662"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (trace 24662): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.524443 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 24662. Next observer evidence: None.
<a id="trace-24663"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (trace 24663): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.524443 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 260.90s, trace 24663. Next observer evidence: None.
<a id="trace-2166"></a>
- 260.90s–260.90s (×1), actor 5, squad 1 (events line 2166): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 266, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24863}.
<a id="trace-24863"></a>
- 266.10s–266.10s (×1), actor 8, squad 1 (trace 24863): received platoon directive; retain contact cover stage. Knowledge: actor memory at 265.00s, trace 24779. Next observer evidence: {'until': 288.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2250}.
<a id="trace-2249"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (events line 2249): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25751}.
<a id="trace-2250"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (events line 2250): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 293.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25929}.
<a id="trace-25725"></a>
- 288.50s–288.50s (×1), actor 5, squad 0 (trace 25725): renew committed intent (75 s lifetime). Knowledge: actor memory at 288.50s, trace 25725. Next observer evidence: {'until': 289.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25751}.
<a id="trace-25726"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (trace 25726): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.701531 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 25726. Next observer evidence: {'until': 293.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25929}.
<a id="trace-25727"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (trace 25727): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.701531 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 288.50s, trace 25727. Next observer evidence: {'until': 293.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25929}.
<a id="trace-25751"></a>
<a id="trace-25753"></a>
<a id="trace-25839"></a>
<a id="trace-25841"></a>
<a id="trace-25853"></a>
<a id="trace-25855"></a>
<a id="trace-25874"></a>
<a id="trace-25876"></a>
<a id="trace-25884"></a>
<a id="trace-25886"></a>
<a id="trace-25907"></a>
<a id="trace-25909"></a>
<a id="trace-25921"></a>
<a id="trace-25923"></a>
<a id="trace-25932"></a>
<a id="trace-25934"></a>
<a id="trace-25959"></a>
<a id="trace-25961"></a>
<a id="trace-26049"></a>
<a id="trace-26051"></a>
<a id="trace-26069"></a>
<a id="trace-26071"></a>
<a id="trace-26079"></a>
<a id="trace-26081"></a>
<a id="trace-26096"></a>
<a id="trace-26098"></a>
<a id="trace-26110"></a>
<a id="trace-26112"></a>
<a id="trace-26124"></a>
<a id="trace-26126"></a>
<a id="trace-26146"></a>
<a id="trace-26148"></a>
<a id="trace-26244"></a>
<a id="trace-26246"></a>
<a id="trace-26262"></a>
<a id="trace-26264"></a>
<a id="trace-26273"></a>
<a id="trace-26275"></a>
<a id="trace-26288"></a>
<a id="trace-26290"></a>
<a id="trace-26302"></a>
<a id="trace-26304"></a>
<a id="trace-26328"></a>
<a id="trace-26330"></a>
<a id="trace-26349"></a>
<a id="trace-26351"></a>
<a id="trace-26359"></a>
<a id="trace-26361"></a>
<a id="trace-26437"></a>
<a id="trace-26439"></a>
<a id="trace-26461"></a>
<a id="trace-26463"></a>
<a id="trace-26473"></a>
<a id="trace-26475"></a>
<a id="trace-26488"></a>
<a id="trace-26490"></a>
<a id="trace-26497"></a>
<a id="trace-26499"></a>
<a id="trace-26521"></a>
<a id="trace-26523"></a>
<a id="trace-26539"></a>
<a id="trace-26541"></a>
<a id="trace-26634"></a>
<a id="trace-26636"></a>
<a id="trace-26664"></a>
<a id="trace-26666"></a>
- 289.30s–311.30s (×66), actor 5, squad 0 (trace 25751): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 288.50s, trace 25727. Next observer evidence: {'until': 290.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 25839}.
<a id="trace-25929"></a>
- 293.70s–293.70s (×1), actor 8, squad 1 (trace 25929): received platoon directive; retain contact cover stage. Knowledge: actor memory at 290.00s, trace 25777. Next observer evidence: {'until': 314.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26733}.
<a id="trace-26672"></a>
- 311.75s–311.75s (×1), actor 0, squad 0 (trace 26672): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 310.00s, trace 26560. Next observer evidence: {'until': 311.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26674}.
<a id="trace-26674"></a>
<a id="trace-26676"></a>
<a id="trace-26689"></a>
<a id="trace-26691"></a>
<a id="trace-26697"></a>
<a id="trace-26699"></a>
<a id="trace-26711"></a>
<a id="trace-26713"></a>
<a id="trace-26720"></a>
<a id="trace-26722"></a>
<a id="trace-26739"></a>
<a id="trace-26741"></a>
<a id="trace-26751"></a>
<a id="trace-26753"></a>
<a id="trace-26839"></a>
<a id="trace-26841"></a>
- 311.80s–315.80s (×16), actor 5, squad 0 (trace 26674): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 310.00s, trace 26564. Next observer evidence: {'until': 312.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26689}.
<a id="trace-26733"></a>
- 314.25s–314.25s (×1), actor 8, squad 1 (trace 26733): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 310.00s, trace 26567. Next observer evidence: {'until': 316, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2340}.
<a id="trace-2339"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (events line 2339): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2340"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (events line 2340): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-26852"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 26852): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 26852. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26867}.
<a id="trace-26853"></a>
- 316.10s–316.10s (×1), actor 5, squad 0 (trace 26853): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 26853. Next observer evidence: {'until': 316.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26867}.
<a id="trace-26854"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (trace 26854): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 26854. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27070}.
<a id="trace-26855"></a>
- 316.10s–316.10s (×1), actor 5, squad 1 (trace 26855): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 316.10s, trace 26855. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27070}.
<a id="trace-26867"></a>
<a id="trace-26869"></a>
<a id="trace-26877"></a>
<a id="trace-26879"></a>
<a id="trace-26895"></a>
<a id="trace-26897"></a>
<a id="trace-26911"></a>
<a id="trace-26913"></a>
<a id="trace-26925"></a>
<a id="trace-26927"></a>
<a id="trace-26933"></a>
<a id="trace-26935"></a>
<a id="trace-26949"></a>
<a id="trace-26951"></a>
<a id="trace-26959"></a>
<a id="trace-26961"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27063"></a>
<a id="trace-27065"></a>
<a id="trace-27075"></a>
<a id="trace-27077"></a>
<a id="trace-27092"></a>
<a id="trace-27094"></a>
<a id="trace-27104"></a>
<a id="trace-27106"></a>
<a id="trace-27119"></a>
<a id="trace-27121"></a>
<a id="trace-27132"></a>
<a id="trace-27134"></a>
<a id="trace-27155"></a>
<a id="trace-27157"></a>
<a id="trace-27165"></a>
<a id="trace-27167"></a>
<a id="trace-27264"></a>
<a id="trace-27266"></a>
<a id="trace-27274"></a>
<a id="trace-27276"></a>
<a id="trace-27288"></a>
<a id="trace-27290"></a>
<a id="trace-27311"></a>
<a id="trace-27313"></a>
<a id="trace-27321"></a>
<a id="trace-27323"></a>
<a id="trace-27430"></a>
<a id="trace-27432"></a>
<a id="trace-27450"></a>
<a id="trace-27452"></a>
<a id="trace-27473"></a>
<a id="trace-27475"></a>
<a id="trace-27489"></a>
<a id="trace-27491"></a>
<a id="trace-27498"></a>
<a id="trace-27500"></a>
<a id="trace-27511"></a>
<a id="trace-27513"></a>
<a id="trace-27520"></a>
<a id="trace-27522"></a>
<a id="trace-27536"></a>
<a id="trace-27538"></a>
<a id="trace-27622"></a>
<a id="trace-27624"></a>
<a id="trace-27653"></a>
<a id="trace-27655"></a>
<a id="trace-27666"></a>
<a id="trace-27668"></a>
<a id="trace-27689"></a>
<a id="trace-27691"></a>
<a id="trace-27710"></a>
<a id="trace-27712"></a>
<a id="trace-27719"></a>
<a id="trace-27721"></a>
<a id="trace-27820"></a>
<a id="trace-27822"></a>
<a id="trace-27830"></a>
<a id="trace-27832"></a>
<a id="trace-27846"></a>
<a id="trace-27848"></a>
<a id="trace-27856"></a>
<a id="trace-27858"></a>
<a id="trace-27873"></a>
<a id="trace-27875"></a>
<a id="trace-27885"></a>
<a id="trace-27887"></a>
<a id="trace-27905"></a>
<a id="trace-27907"></a>
<a id="trace-27917"></a>
<a id="trace-27919"></a>
<a id="trace-27939"></a>
<a id="trace-27941"></a>
<a id="trace-27952"></a>
<a id="trace-27954"></a>
<a id="trace-28038"></a>
<a id="trace-28040"></a>
<a id="trace-28054"></a>
<a id="trace-28056"></a>
<a id="trace-28076"></a>
<a id="trace-28078"></a>
<a id="trace-28084"></a>
<a id="trace-28086"></a>
<a id="trace-28105"></a>
<a id="trace-28107"></a>
<a id="trace-28134"></a>
<a id="trace-28136"></a>
<a id="trace-28235"></a>
<a id="trace-28237"></a>
<a id="trace-28250"></a>
<a id="trace-28252"></a>
<a id="trace-28264"></a>
<a id="trace-28266"></a>
<a id="trace-28278"></a>
<a id="trace-28280"></a>
<a id="trace-28286"></a>
<a id="trace-28288"></a>
<a id="trace-28300"></a>
<a id="trace-28302"></a>
<a id="trace-28310"></a>
<a id="trace-28312"></a>
<a id="trace-28334"></a>
<a id="trace-28336"></a>
<a id="trace-28412"></a>
<a id="trace-28414"></a>
<a id="trace-28426"></a>
<a id="trace-28428"></a>
<a id="trace-28441"></a>
<a id="trace-28443"></a>
<a id="trace-28456"></a>
<a id="trace-28458"></a>
<a id="trace-28486"></a>
<a id="trace-28488"></a>
<a id="trace-28502"></a>
<a id="trace-28504"></a>
<a id="trace-28511"></a>
<a id="trace-28513"></a>
<a id="trace-28527"></a>
<a id="trace-28529"></a>
<a id="trace-28537"></a>
<a id="trace-28539"></a>
- 316.30s–359.80s (×138), actor 5, squad 0 (trace 26867): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.10s, trace 26855. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 26877}.
<a id="trace-27070"></a>
- 321.30s–321.30s (×1), actor 8, squad 1 (trace 27070): received platoon directive; retain contact cover stage. Knowledge: actor memory at 320.00s, trace 26974. Next observer evidence: {'until': 343.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2429}.
<a id="trace-2429"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (events line 2429): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27913"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (trace 27913): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 27913. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28115}.
<a id="trace-27914"></a>
- 343.70s–343.70s (×1), actor 5, squad 1 (trace 27914): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 27914. Next observer evidence: {'until': 348.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 28115}.
<a id="trace-28115"></a>
- 348.90s–348.90s (×1), actor 8, squad 1 (trace 28115): received platoon directive; retain contact cover stage. Knowledge: actor memory at 345.00s, trace 27967. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

253 matched order/radio deliveries; 487 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.622s; maximum 5.500s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 1059: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1060: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1814: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4266: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4269: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4274: estimate 8.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4276: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4277: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4278: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4279: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4281: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4282: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4283: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4284: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4285: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5220: estimate 9.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5221: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5223: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5226: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5227: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 5228: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5230: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5231: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5232: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5233: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5235: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5236: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5237: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5238: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5239: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 6125: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6126: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6128: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6130: estimate 11.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6131: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 6133: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6135: estimate 5.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6136: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6137: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6138: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6139: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6140: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6141: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6142: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6143: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6144: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 7285: estimate 12.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 7286: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 7287: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 7288: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 7289: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 7290: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 7291: estimate 9.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 7292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 7293: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 7294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 7295: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 7296: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 7297: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 7298: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 7299: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 7300: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 7301: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 7302: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 7303: estimate 5.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 7304: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7869: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 7870: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 7875: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 7876: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 7877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 7878: estimate 8.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 7879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 7880: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 7881: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 7882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 7883: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 7884: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 7885: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 7886: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 7887: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 7888: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 7889: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 7890: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 7891: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 7892: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 7893: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 7894: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 8346: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 8347: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 8348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 8349: estimate 8.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 8350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 8351: estimate 12.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 8352: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 8353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 8354: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 8355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 8356: estimate 5.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 8357: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 8358: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 8359: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 8360: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 8361: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 8362: estimate 5.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 8363: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 8364: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 8365: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 9092: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9093: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 9094: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 9095: estimate 7.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9096: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9097: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9098: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9099: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 9100: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9102: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9103: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9104: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9105: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9106: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9107: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9108: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9109: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9110: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 9111: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 9536: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 9537: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 9538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 9539: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 9540: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 9541: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 9542: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 9543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 9544: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 9545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 9546: estimate 5.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 9547: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 9548: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 9549: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 9550: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 9551: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 9552: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 9553: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 9554: estimate 5.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 9555: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 9844: estimate 11.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 9845: estimate 7.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 9846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 9847: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 9848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 9849: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 9850: estimate 11.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 9851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 9852: estimate 8.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 9853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 9854: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 9855: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 9856: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 9857: estimate 3.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 9858: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 9859: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 9860: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 9861: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 9862: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 9863: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 10388: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10389: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 10390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 3, trace 10391: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10393: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10394: estimate 11.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 10396: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 10397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10398: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10399: estimate 3.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10400: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10401: estimate 3.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10402: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10403: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10404: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10405: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 10406: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 10407: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 10565: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 67.45s leader 5, trace 10566: estimate 11.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 10669: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 10670: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 10671: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 3, trace 10672: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 10673: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 10674: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 10675: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 10676: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 10677: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 10678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 10679: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 10680: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 10681: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 10682: estimate 3.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 10683: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 10684: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 10685: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 10686: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 10687: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 10688: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 11179: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 11180: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 11181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 3, trace 11182: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11184: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11185: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 11186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 11187: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11188: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11189: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11190: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11191: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11192: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11193: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11194: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11195: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11196: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11197: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 11198: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 11679: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 11680: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 11681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 3, trace 11682: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11684: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11685: estimate 10.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 11686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 11687: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 11688: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11689: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11690: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11691: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11692: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11693: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11694: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11695: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11696: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 11697: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 11698: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 11921: estimate 10.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 11922: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 11923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 3, trace 11924: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 11925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 11926: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 11927: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 11928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 11929: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 11930: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 11931: estimate 4.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 11932: estimate 4.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 11933: estimate 3.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 11934: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 11935: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 11936: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 11937: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 11938: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 11939: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 11940: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 12186: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 12187: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 12188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 3, trace 12189: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12191: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12192: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 12193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 12194: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12195: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12196: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12197: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12198: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12199: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12200: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12201: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12202: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12203: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12204: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 12205: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 12385: estimate 10.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 12386: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 12387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 3, trace 12388: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12390: estimate 11.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12391: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 12392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 12393: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12394: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12395: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12396: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12397: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12398: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12399: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12400: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12401: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12402: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12403: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 12404: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 12407: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.15s leader 5, trace 12408: estimate 11.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 12867: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 12868: estimate 6.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 12869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 3, trace 12870: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12872: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12873: estimate 10.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 12874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 12875: estimate 8.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12876: estimate 4.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12877: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12878: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12879: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12880: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12881: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12882: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12883: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12884: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12885: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 12886: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 15358: estimate 9.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 15359: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 15360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 3, trace 15361: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 15362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15363: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15364: estimate 10.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 15366: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15367: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15368: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15369: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15370: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15371: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15372: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15373: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15374: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15375: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15376: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15377: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 15576: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 15577: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 0, trace 15724: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 15725: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 15726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 3, trace 15727: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 15728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15729: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15730: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 15732: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15733: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15734: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15735: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15736: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15737: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15738: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15739: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15740: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15741: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15742: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15743: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 0, trace 16165: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 16166: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 16167: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 3, trace 16168: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 16169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 16170: estimate 10.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 16171: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 16172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 16173: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 16174: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 16175: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 16176: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 16177: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 16178: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 16179: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 16180: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 16181: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 16182: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 16183: estimate 3.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 0, trace 16380: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 16381: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 2, trace 16382: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 3, trace 16383: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 16384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 16385: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 16386: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 16387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 16388: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 16389: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 16390: estimate 4.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 16391: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 16392: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 16393: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 16394: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 16395: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 16396: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 16397: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 0, trace 16579: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 16580: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 2, trace 16581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 3, trace 16582: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 16583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16584: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16585: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 16587: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16588: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16589: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16590: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16591: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16592: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16593: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16594: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16595: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16596: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 0, trace 16776: estimate 7.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 16777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 2, trace 16778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 3, trace 16779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 16780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16781: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 16782: estimate 10.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 16784: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16785: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16786: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16787: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16788: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16789: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16790: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16791: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16792: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16793: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 0, trace 16977: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 16978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 2, trace 16979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 3, trace 16980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 16981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16982: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 16983: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 16984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 16985: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16986: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16987: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16988: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16989: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16990: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16991: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16992: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16993: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16994: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 17078: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 17079: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 0, trace 17178: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 17179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 2, trace 17180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 3, trace 17181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 17182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17183: estimate 8.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17184: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 17185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 17186: estimate 8.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17187: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17188: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17189: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17190: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17191: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17192: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17193: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17194: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17195: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 0, trace 17366: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 17367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 2, trace 17368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 3, trace 17369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 17370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17371: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17372: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 17374: estimate 7.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17375: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17376: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17377: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17378: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17379: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17380: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17381: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17382: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17383: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 0, trace 17567: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 17568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 2, trace 17569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 3, trace 17570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 17571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17572: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 17573: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 17574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 17575: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17576: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17577: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17581: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17582: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17584: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 17643: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 17644: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 17645: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.40s leader 5, trace 17646: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 0, trace 17774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 17775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 2, trace 17776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 3, trace 17777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 17778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17779: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 17780: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 17782: estimate 7.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17791: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 0, trace 17974: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 17975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 2, trace 17976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 3, trace 17977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 17978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 17979: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 17980: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 17981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 17982: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 17983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 17984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 17985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 17986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 17987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 17988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 17989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 17990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 17991: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 0, trace 18173: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 18174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 2, trace 18175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 3, trace 18176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 18177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18178: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18179: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 18181: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18190: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 0, trace 18377: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 18378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 2, trace 18379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 3, trace 18380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 18381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18382: estimate 6.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 18383: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 18385: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18394: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 0, trace 18830: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 18831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 2, trace 18832: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 3, trace 18833: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 18834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18835: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 18836: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 18837: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 18838: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 18839: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 18840: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 18841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 18842: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 18843: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 18844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 18845: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 18846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 18847: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 18999: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 19000: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 0, trace 19077: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 19078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 2, trace 19079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 3, trace 19080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 19081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19082: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19083: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 19084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 8, trace 19085: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19086: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 19088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19089: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19090: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19091: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19092: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19093: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19094: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 0, trace 19527: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 19528: estimate 8.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 2, trace 19529: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 3, trace 19530: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 19531: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 19532: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 19533: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 19534: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 8, trace 19535: estimate 5.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19536: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19537: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19538: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19539: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19540: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19541: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19542: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19543: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19544: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 0, trace 20099: estimate 8.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 20100: estimate 8.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 2, trace 20101: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 3, trace 20102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 20103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 20104: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 20105: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 20106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 8, trace 20107: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 20108: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 20109: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 20110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 20111: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 20112: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 20113: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 20114: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 20115: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 20116: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 0, trace 21386: estimate 8.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 21387: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 2, trace 21388: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 3, trace 21389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 21390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 21391: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 21392: estimate 8.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 21393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 8, trace 21394: estimate 5.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 21395: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 21396: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 21397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 21398: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 21399: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 21400: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 21401: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 21402: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 21403: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 0, trace 21802: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 21803: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 2, trace 21804: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 3, trace 21805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 21806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21807: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21808: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 8, trace 21810: estimate 5.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21811: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21812: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21814: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21815: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21816: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21817: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21818: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21819: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 0, trace 22173: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 22174: estimate 10.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 2, trace 22175: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 3, trace 22176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 22177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 22178: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 22179: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 22180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 8, trace 22181: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 22182: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 22183: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 22184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 22185: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 22186: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 22187: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 22188: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 22189: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 22190: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 22262: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.65s leader 5, trace 22263: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 0, trace 22509: estimate 10.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 22510: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 2, trace 22511: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 3, trace 22512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 22513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22514: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22515: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 8, trace 22517: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22518: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22519: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22521: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22522: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22523: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22524: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22525: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22526: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 0, trace 22793: estimate 10.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 22794: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 3, trace 22795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 22796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22797: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22798: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 8, trace 22800: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22801: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22802: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22804: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22805: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22806: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22807: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22808: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22809: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 22982: estimate 11.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 0, trace 22997: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 22998: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 3, trace 22999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 23000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 23001: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 23002: estimate 10.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 23003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 8, trace 23004: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 23005: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 23006: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 23007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 23008: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 23009: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 23010: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 23011: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 23012: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 23013: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 0, trace 23186: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 23187: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 3, trace 23188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 23189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 23190: estimate 11.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 23191: estimate 10.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 23192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 8, trace 23193: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 23194: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 23195: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 23196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 23197: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 23198: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 23199: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 23200: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 23201: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 23202: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 0, trace 23376: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 23377: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 3, trace 23378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 23379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 23380: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 23381: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 23382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 8, trace 23383: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 23384: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 23385: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 23386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 23387: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 23388: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 23389: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 23390: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 23391: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 23392: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 5, trace 23546: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 5, trace 23547: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 0, trace 23586: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 23587: estimate 9.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 3, trace 23588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 23589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 23590: estimate 10.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 23591: estimate 9.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 23592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 8, trace 23593: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 23594: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 23595: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 23596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 23597: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 23598: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 23599: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 23600: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 23601: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 23602: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 0, trace 23789: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 23790: estimate 9.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 3, trace 23791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 23792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23793: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23794: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 23795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 8, trace 23796: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23797: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23798: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23800: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23801: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23802: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23803: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23804: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23805: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 0, trace 23989: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 23990: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 3, trace 23991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 23992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23993: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23994: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23995: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 8, trace 23996: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23997: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23998: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 24000: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 24001: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 24002: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 24003: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 24004: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 24005: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 0, trace 24178: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 24179: estimate 8.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 3, trace 24180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 24181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 24182: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 24183: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 24184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 8, trace 24185: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 24186: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 24187: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 24188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 24189: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 24190: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 24191: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 24192: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 24193: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 24194: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 0, trace 24376: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 24377: estimate 8.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 3, trace 24378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 24379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 24380: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 24381: estimate 9.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 24382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 8, trace 24383: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 24384: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 24385: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 24386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 24387: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 24388: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 24389: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 24390: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 24391: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 24392: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 0, trace 24574: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 24575: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 3, trace 24576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 24577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 24578: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 24579: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 24580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 8, trace 24581: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 24582: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 24583: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 24584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 24585: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 24586: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 24587: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 24588: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 24589: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 24590: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 24662: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.90s leader 5, trace 24663: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 0, trace 24772: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 24773: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 3, trace 24774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 24775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24776: estimate 9.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24777: estimate 8.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 24778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 8, trace 24779: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24780: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24781: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24783: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24784: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24785: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24786: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24787: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24788: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 0, trace 24964: estimate 8.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 24965: estimate 8.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 3, trace 24966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 24967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24968: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24969: estimate 8.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 8, trace 24971: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24972: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24973: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24975: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24976: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24977: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24978: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24979: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24980: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 0, trace 25169: estimate 8.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 25170: estimate 7.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 3, trace 25171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 25172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 25173: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 25174: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 25175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 8, trace 25176: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 25177: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 25178: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 25179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 25180: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 25181: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 25182: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 25183: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 25184: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 25185: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 0, trace 25366: estimate 8.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 25367: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 3, trace 25368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 25369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 25370: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 25371: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 25372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 8, trace 25373: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 25374: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 25375: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 25376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 25377: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 25378: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 25379: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 25380: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 25381: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 25382: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 0, trace 25571: estimate 8.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 25572: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 3, trace 25573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 25574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 25575: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 25576: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 25577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 8, trace 25578: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 25579: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 25580: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 25581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 25582: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 25583: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 25584: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 25585: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 25586: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 25587: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 25725: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 25726: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 25727: estimate 8.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 0, trace 25770: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 25771: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 3, trace 25772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 25773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25774: estimate 8.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25775: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 25776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 8, trace 25777: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25778: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25779: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25781: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25782: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25783: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25784: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25785: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25786: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 0, trace 25968: estimate 7.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 25969: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 3, trace 25970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 25971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25972: estimate 8.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25973: estimate 7.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 25974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 8, trace 25975: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25976: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25977: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25979: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25980: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25981: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25982: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25983: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25984: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 0, trace 26166: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 26167: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 3, trace 26168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 26169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 26170: estimate 8.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 26171: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 26172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 8, trace 26173: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 26174: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 26175: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 26176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 26177: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 26178: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 26179: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 26180: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 26181: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 26182: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 0, trace 26368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 26369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 3, trace 26370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 26371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 26372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 26373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 26374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 8, trace 26375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 26376: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 26377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 26378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 26379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 26380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 26381: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 26382: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 26383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 26384: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 0, trace 26560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 26561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 3, trace 26562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 26563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 26564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 26565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 26566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 8, trace 26567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 26568: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 26569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 26570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 26571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 26572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 26573: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 26574: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 26575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 26576: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 0, trace 26759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 26760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 3, trace 26761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 26762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 26763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 26764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 26765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 8, trace 26766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 26767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 26768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 26769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 26770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 26771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 26772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 26773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 26774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 26775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 26852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 26853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 26854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.10s leader 5, trace 26855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 0, trace 26967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 26968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 3, trace 26969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 26970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 26972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 26973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 8, trace 26974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26981: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 0, trace 27173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 27174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 3, trace 27175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 27176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 27177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 27178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 27179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 8, trace 27180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 27181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 27182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 27183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 27184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 27185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 27186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 27187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 27188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 27189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 0, trace 27357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 27358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 3, trace 27359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 27360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 27361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 27362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 27363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 8, trace 27364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 27365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 27366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 27367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 27368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 27369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 27370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 27371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 27372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 27373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 0, trace 27553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 27554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 3, trace 27555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 27556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 27557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 27558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 27559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 8, trace 27560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 27561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 27562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 27563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 27564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 27565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 27566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 27567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 27568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 27569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 0, trace 27751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 27752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 3, trace 27753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 27754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 27755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 27756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 27757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 8, trace 27758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 27759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 27760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 27761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 27762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 27763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 27764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 27765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 27766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 27767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 27913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 27914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 0, trace 27960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 27961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 3, trace 27962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 27963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 27966: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 8, trace 27967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 0, trace 28149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 28150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 3, trace 28151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 28152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 28153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 28154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 28155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 8, trace 28156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 28157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 28158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 28159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 28160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 28161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 28162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 28163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 28164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 28165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 0, trace 28342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 28343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 3, trace 28344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 28345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 28346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 28347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 28348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 8, trace 28349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 28350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 28351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 28352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 28353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 28354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 28355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 28356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 28357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 28358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 0, trace 28545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 28546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 3, trace 28547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 28548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 28549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 28550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 28551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 8, trace 28552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 28553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 28554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 28555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 28556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 28557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 28558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 28559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 28560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 28561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Cole killed in action
- 1: Renn incapacitated
- 1: Soren killed in action

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
