# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/10/107/good-ember/battle-107-1789673842610051399`

## Battle summary

**Ember** · 360 s · 214 shots.

### Turning points

- 17.4s, squad 5: contact (events line 193). First recorded contact.
- 24.9s, squad 0: withdrawal ([trace 3841](#trace-3841)). 64.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 39.2s, squad 1: help call ([trace 5544](#trace-5544)). No completion observed before termination.
- 43.5s, squad 0: help call ([trace 6022](#trace-6022)). No completion observed before termination.
- 87.2s, squad 0: help answer ([trace 8548](#trace-8548)). 111.5s, squad 0: took cover and returned fire.
- 110.5s, squad 0: help call ([trace 11458](#trace-11458)). No completion observed before termination.
- 115.3s, squad 0: withdrawal ([trace 11855](#trace-11855)). 135.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 126.2s, squad 0: help call ([trace 12484](#trace-12484)). No completion observed before termination.
- 192.4s, squad 0: withdrawal ([trace 16011](#trace-16011)). 214.1s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose broke contact, answered a neighbour with support by fire and 2 further drill types; withdrew; 8 shots, 3/8 lost.
- **1** — FightHere; chose advanced tactically, took cover and returned fire; no completed objective recorded; 2 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 156 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 48 shots, 0/2 lost.

### Decisions and attribution

At 19.8s, squad 0 chose took cover and returned fire ([trace 2657](#trace-2657)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 333](#trace-333)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1336](#trace-1336)). Following evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1356}.
- 12.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1338](#trace-1338)). Following evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.698346332192745, 'next_transition': 1913}.

### Communication

241 matched deliveries (mean 0.50s, max 5.35s); 472 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 17.40s, squad 5, contact, evidence events line 193: First recorded contact; .
- 24.90s, squad 0, withdrawal, evidence 3841: BreakContact: believed ratio at least two without superiority; 64.0s, squad 0: contact broken or rally reached: Occupy and report strength.
- 39.15s, squad 1, help call, evidence 5544: NeedSupport; No completion observed before termination.
- 43.45s, squad 0, help call, evidence 6022: NeedSupport; No completion observed before termination.
- 87.15s, squad 0, help answer, evidence 8548: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 111.5s, squad 0: took cover and returned fire.
- 110.45s, squad 0, help call, evidence 11458: NeedSupport; No completion observed before termination.
- 115.30s, squad 0, withdrawal, evidence 11855: BreakContact: believed ratio at least two without superiority; 135.7s, squad 0: contact broken or rally reached: Occupy and report strength.
- 126.25s, squad 0, help call, evidence 12484: NeedSupport; No completion observed before termination.
- 192.40s, squad 0, withdrawal, evidence 16011: BreakContact: believed ratio at least two without superiority; 214.1s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94854899167364, 'next_transition': 833}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94854899167364, 'next_transition': 833}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.94854899167364, 'next_transition': 833}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1147}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1147}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.158723150140798, 'next_transition': 1147}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-639"></a>
<a id="trace-641"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-683"></a>
<a id="trace-685"></a>
<a id="trace-707"></a>
<a id="trace-709"></a>
<a id="trace-733"></a>
<a id="trace-735"></a>
<a id="trace-837"></a>
<a id="trace-839"></a>
<a id="trace-868"></a>
<a id="trace-870"></a>
<a id="trace-899"></a>
<a id="trace-901"></a>
<a id="trace-922"></a>
<a id="trace-924"></a>
<a id="trace-951"></a>
<a id="trace-953"></a>
<a id="trace-982"></a>
<a id="trace-984"></a>
<a id="trace-1009"></a>
<a id="trace-1011"></a>
<a id="trace-1036"></a>
<a id="trace-1038"></a>
<a id="trace-1053"></a>
<a id="trace-1055"></a>
<a id="trace-1144"></a>
<a id="trace-1146"></a>
<a id="trace-1249"></a>
<a id="trace-1251"></a>
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1295"></a>
<a id="trace-1297"></a>
<a id="trace-1333"></a>
<a id="trace-1335"></a>
<a id="trace-1360"></a>
<a id="trace-1362"></a>
<a id="trace-1643"></a>
<a id="trace-1645"></a>
<a id="trace-1665"></a>
<a id="trace-1667"></a>
<a id="trace-1701"></a>
<a id="trace-1703"></a>
<a id="trace-1718"></a>
<a id="trace-1720"></a>
<a id="trace-1802"></a>
<a id="trace-1804"></a>
<a id="trace-1836"></a>
<a id="trace-1838"></a>
<a id="trace-1869"></a>
<a id="trace-1871"></a>
<a id="trace-1892"></a>
<a id="trace-1894"></a>
<a id="trace-1909"></a>
<a id="trace-1911"></a>
<a id="trace-2360"></a>
<a id="trace-2362"></a>
<a id="trace-2549"></a>
<a id="trace-2551"></a>
<a id="trace-2586"></a>
<a id="trace-2588"></a>
<a id="trace-2626"></a>
<a id="trace-2628"></a>
<a id="trace-2654"></a>
<a id="trace-2656"></a>
<a id="trace-3081"></a>
<a id="trace-3083"></a>
<a id="trace-3118"></a>
<a id="trace-3120"></a>
<a id="trace-3155"></a>
<a id="trace-3157"></a>
<a id="trace-3496"></a>
<a id="trace-3498"></a>
<a id="trace-3538"></a>
<a id="trace-3540"></a>
<a id="trace-3595"></a>
<a id="trace-3597"></a>
<a id="trace-3616"></a>
<a id="trace-3618"></a>
<a id="trace-3632"></a>
<a id="trace-3634"></a>
<a id="trace-3801"></a>
<a id="trace-3803"></a>
<a id="trace-3827"></a>
<a id="trace-3829"></a>
<a id="trace-4401"></a>
<a id="trace-4403"></a>
<a id="trace-4424"></a>
<a id="trace-4426"></a>
<a id="trace-4466"></a>
<a id="trace-4468"></a>
<a id="trace-4495"></a>
<a id="trace-4497"></a>
<a id="trace-4530"></a>
<a id="trace-4532"></a>
<a id="trace-4563"></a>
<a id="trace-4565"></a>
<a id="trace-4596"></a>
<a id="trace-4598"></a>
<a id="trace-4638"></a>
<a id="trace-4640"></a>
<a id="trace-4665"></a>
<a id="trace-4667"></a>
<a id="trace-4685"></a>
<a id="trace-4687"></a>
<a id="trace-4781"></a>
<a id="trace-4783"></a>
<a id="trace-4805"></a>
<a id="trace-4807"></a>
<a id="trace-4837"></a>
<a id="trace-4839"></a>
<a id="trace-4858"></a>
<a id="trace-4860"></a>
<a id="trace-4882"></a>
<a id="trace-4884"></a>
<a id="trace-4904"></a>
<a id="trace-4906"></a>
<a id="trace-4927"></a>
<a id="trace-4929"></a>
<a id="trace-4949"></a>
<a id="trace-4951"></a>
<a id="trace-4978"></a>
<a id="trace-4980"></a>
<a id="trace-5003"></a>
<a id="trace-5005"></a>
<a id="trace-5108"></a>
<a id="trace-5110"></a>
<a id="trace-5152"></a>
<a id="trace-5154"></a>
<a id="trace-5207"></a>
<a id="trace-5209"></a>
<a id="trace-5280"></a>
<a id="trace-5282"></a>
<a id="trace-5355"></a>
<a id="trace-5357"></a>
<a id="trace-5403"></a>
<a id="trace-5405"></a>
<a id="trace-5465"></a>
<a id="trace-5467"></a>
<a id="trace-5527"></a>
<a id="trace-5529"></a>
<a id="trace-5562"></a>
<a id="trace-5564"></a>
<a id="trace-5578"></a>
<a id="trace-5580"></a>
<a id="trace-5685"></a>
<a id="trace-5687"></a>
<a id="trace-5867"></a>
<a id="trace-5869"></a>
<a id="trace-5893"></a>
<a id="trace-5895"></a>
<a id="trace-5923"></a>
<a id="trace-5925"></a>
<a id="trace-5962"></a>
<a id="trace-5964"></a>
<a id="trace-5981"></a>
<a id="trace-5983"></a>
<a id="trace-6013"></a>
<a id="trace-6015"></a>
<a id="trace-6047"></a>
<a id="trace-6049"></a>
<a id="trace-6076"></a>
<a id="trace-6078"></a>
<a id="trace-6098"></a>
<a id="trace-6100"></a>
<a id="trace-6185"></a>
<a id="trace-6187"></a>
<a id="trace-6203"></a>
<a id="trace-6205"></a>
<a id="trace-6228"></a>
<a id="trace-6230"></a>
<a id="trace-6243"></a>
<a id="trace-6245"></a>
<a id="trace-6265"></a>
<a id="trace-6267"></a>
<a id="trace-6281"></a>
<a id="trace-6283"></a>
<a id="trace-6306"></a>
<a id="trace-6308"></a>
<a id="trace-6329"></a>
<a id="trace-6331"></a>
<a id="trace-6349"></a>
<a id="trace-6351"></a>
<a id="trace-6363"></a>
<a id="trace-6365"></a>
<a id="trace-6455"></a>
<a id="trace-6457"></a>
<a id="trace-6473"></a>
<a id="trace-6475"></a>
<a id="trace-6490"></a>
<a id="trace-6492"></a>
<a id="trace-6507"></a>
<a id="trace-6509"></a>
<a id="trace-6532"></a>
<a id="trace-6534"></a>
<a id="trace-6551"></a>
<a id="trace-6553"></a>
<a id="trace-6568"></a>
<a id="trace-6570"></a>
<a id="trace-6580"></a>
<a id="trace-6582"></a>
<a id="trace-6606"></a>
<a id="trace-6608"></a>
<a id="trace-6618"></a>
<a id="trace-6620"></a>
<a id="trace-6696"></a>
<a id="trace-6698"></a>
<a id="trace-6712"></a>
<a id="trace-6714"></a>
<a id="trace-6887"></a>
<a id="trace-6889"></a>
<a id="trace-6913"></a>
<a id="trace-6915"></a>
<a id="trace-6948"></a>
<a id="trace-6950"></a>
<a id="trace-6968"></a>
<a id="trace-6970"></a>
<a id="trace-6998"></a>
<a id="trace-7000"></a>
<a id="trace-7036"></a>
<a id="trace-7038"></a>
<a id="trace-7059"></a>
<a id="trace-7061"></a>
<a id="trace-7077"></a>
<a id="trace-7079"></a>
<a id="trace-7163"></a>
<a id="trace-7165"></a>
<a id="trace-7186"></a>
<a id="trace-7188"></a>
<a id="trace-7203"></a>
<a id="trace-7205"></a>
<a id="trace-7217"></a>
<a id="trace-7219"></a>
<a id="trace-7244"></a>
<a id="trace-7246"></a>
<a id="trace-7264"></a>
<a id="trace-7266"></a>
<a id="trace-7284"></a>
<a id="trace-7286"></a>
<a id="trace-7303"></a>
<a id="trace-7305"></a>
<a id="trace-7340"></a>
<a id="trace-7342"></a>
<a id="trace-7363"></a>
<a id="trace-7365"></a>
<a id="trace-7461"></a>
<a id="trace-7463"></a>
<a id="trace-7489"></a>
<a id="trace-7491"></a>
<a id="trace-7519"></a>
<a id="trace-7521"></a>
<a id="trace-7557"></a>
<a id="trace-7559"></a>
<a id="trace-7590"></a>
<a id="trace-7592"></a>
<a id="trace-7606"></a>
<a id="trace-7608"></a>
<a id="trace-7628"></a>
<a id="trace-7630"></a>
<a id="trace-7658"></a>
<a id="trace-7660"></a>
<a id="trace-7682"></a>
<a id="trace-7684"></a>
<a id="trace-7702"></a>
<a id="trace-7704"></a>
<a id="trace-7794"></a>
<a id="trace-7796"></a>
<a id="trace-7813"></a>
<a id="trace-7815"></a>
<a id="trace-7835"></a>
<a id="trace-7837"></a>
<a id="trace-7845"></a>
<a id="trace-7847"></a>
<a id="trace-7876"></a>
<a id="trace-7878"></a>
<a id="trace-7893"></a>
<a id="trace-7895"></a>
<a id="trace-7909"></a>
<a id="trace-7911"></a>
<a id="trace-7920"></a>
<a id="trace-7922"></a>
<a id="trace-7934"></a>
<a id="trace-7936"></a>
<a id="trace-7950"></a>
<a id="trace-7952"></a>
<a id="trace-8027"></a>
<a id="trace-8029"></a>
<a id="trace-8040"></a>
<a id="trace-8042"></a>
<a id="trace-8057"></a>
<a id="trace-8059"></a>
<a id="trace-8067"></a>
<a id="trace-8069"></a>
<a id="trace-8086"></a>
<a id="trace-8088"></a>
<a id="trace-8102"></a>
<a id="trace-8104"></a>
<a id="trace-8123"></a>
<a id="trace-8125"></a>
<a id="trace-8146"></a>
<a id="trace-8148"></a>
<a id="trace-8168"></a>
<a id="trace-8170"></a>
<a id="trace-8184"></a>
<a id="trace-8186"></a>
<a id="trace-8264"></a>
<a id="trace-8266"></a>
<a id="trace-8281"></a>
<a id="trace-8283"></a>
<a id="trace-8293"></a>
<a id="trace-8295"></a>
<a id="trace-8308"></a>
<a id="trace-8310"></a>
<a id="trace-8324"></a>
<a id="trace-8326"></a>
<a id="trace-8334"></a>
<a id="trace-8336"></a>
<a id="trace-8349"></a>
<a id="trace-8351"></a>
<a id="trace-8361"></a>
<a id="trace-8363"></a>
<a id="trace-8383"></a>
<a id="trace-8385"></a>
<a id="trace-8402"></a>
<a id="trace-8404"></a>
<a id="trace-8489"></a>
<a id="trace-8491"></a>
<a id="trace-8507"></a>
<a id="trace-8509"></a>
<a id="trace-8528"></a>
<a id="trace-8530"></a>
<a id="trace-8542"></a>
<a id="trace-8544"></a>
<a id="trace-10268"></a>
<a id="trace-10270"></a>
<a id="trace-10283"></a>
<a id="trace-10285"></a>
<a id="trace-10309"></a>
<a id="trace-10311"></a>
<a id="trace-10327"></a>
<a id="trace-10329"></a>
<a id="trace-10350"></a>
<a id="trace-10352"></a>
<a id="trace-10367"></a>
<a id="trace-10369"></a>
<a id="trace-10457"></a>
<a id="trace-10459"></a>
<a id="trace-10477"></a>
<a id="trace-10479"></a>
<a id="trace-10498"></a>
<a id="trace-10500"></a>
<a id="trace-10509"></a>
<a id="trace-10511"></a>
<a id="trace-10539"></a>
<a id="trace-10541"></a>
<a id="trace-10563"></a>
<a id="trace-10565"></a>
<a id="trace-10584"></a>
<a id="trace-10586"></a>
<a id="trace-10600"></a>
<a id="trace-10602"></a>
<a id="trace-10623"></a>
<a id="trace-10625"></a>
<a id="trace-10638"></a>
<a id="trace-10640"></a>
<a id="trace-10716"></a>
<a id="trace-10718"></a>
<a id="trace-10730"></a>
<a id="trace-10732"></a>
<a id="trace-10752"></a>
<a id="trace-10754"></a>
<a id="trace-10764"></a>
<a id="trace-10766"></a>
<a id="trace-10787"></a>
<a id="trace-10789"></a>
<a id="trace-10798"></a>
<a id="trace-10800"></a>
<a id="trace-10822"></a>
<a id="trace-10824"></a>
<a id="trace-10851"></a>
<a id="trace-10853"></a>
<a id="trace-10877"></a>
<a id="trace-10879"></a>
<a id="trace-10896"></a>
<a id="trace-10898"></a>
<a id="trace-10979"></a>
<a id="trace-10981"></a>
<a id="trace-10992"></a>
<a id="trace-10994"></a>
<a id="trace-11015"></a>
<a id="trace-11017"></a>
<a id="trace-11023"></a>
<a id="trace-11025"></a>
<a id="trace-11045"></a>
<a id="trace-11047"></a>
<a id="trace-11059"></a>
<a id="trace-11061"></a>
<a id="trace-11071"></a>
<a id="trace-11073"></a>
<a id="trace-11090"></a>
<a id="trace-11092"></a>
<a id="trace-11113"></a>
<a id="trace-11115"></a>
<a id="trace-11126"></a>
<a id="trace-11128"></a>
<a id="trace-11208"></a>
<a id="trace-11210"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11247"></a>
<a id="trace-11249"></a>
<a id="trace-11261"></a>
<a id="trace-11263"></a>
<a id="trace-11280"></a>
<a id="trace-11282"></a>
<a id="trace-11295"></a>
<a id="trace-11297"></a>
<a id="trace-11312"></a>
<a id="trace-11314"></a>
<a id="trace-11328"></a>
<a id="trace-11330"></a>
<a id="trace-11358"></a>
<a id="trace-11360"></a>
<a id="trace-11370"></a>
<a id="trace-11372"></a>
<a id="trace-11450"></a>
<a id="trace-11452"></a>
<a id="trace-11471"></a>
<a id="trace-11473"></a>
<a id="trace-11487"></a>
<a id="trace-11489"></a>
<a id="trace-11641"></a>
<a id="trace-11643"></a>
<a id="trace-11669"></a>
<a id="trace-11671"></a>
<a id="trace-11690"></a>
<a id="trace-11692"></a>
<a id="trace-11709"></a>
<a id="trace-11711"></a>
<a id="trace-11724"></a>
<a id="trace-11726"></a>
<a id="trace-11761"></a>
<a id="trace-11763"></a>
<a id="trace-11773"></a>
<a id="trace-11775"></a>
<a id="trace-11846"></a>
<a id="trace-11848"></a>
<a id="trace-12002"></a>
<a id="trace-12004"></a>
<a id="trace-12026"></a>
<a id="trace-12028"></a>
<a id="trace-12045"></a>
<a id="trace-12047"></a>
<a id="trace-12067"></a>
<a id="trace-12069"></a>
<a id="trace-12080"></a>
<a id="trace-12082"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12123"></a>
<a id="trace-12125"></a>
<a id="trace-12142"></a>
<a id="trace-12144"></a>
<a id="trace-12157"></a>
<a id="trace-12159"></a>
<a id="trace-12238"></a>
<a id="trace-12240"></a>
<a id="trace-12254"></a>
<a id="trace-12256"></a>
<a id="trace-12274"></a>
<a id="trace-12276"></a>
<a id="trace-12288"></a>
<a id="trace-12290"></a>
<a id="trace-12307"></a>
<a id="trace-12309"></a>
<a id="trace-12318"></a>
<a id="trace-12320"></a>
<a id="trace-12332"></a>
<a id="trace-12334"></a>
<a id="trace-12343"></a>
<a id="trace-12345"></a>
<a id="trace-12362"></a>
<a id="trace-12364"></a>
<a id="trace-12372"></a>
<a id="trace-12374"></a>
<a id="trace-12447"></a>
<a id="trace-12449"></a>
<a id="trace-12461"></a>
<a id="trace-12463"></a>
<a id="trace-12479"></a>
<a id="trace-12481"></a>
<a id="trace-12498"></a>
<a id="trace-12500"></a>
<a id="trace-12517"></a>
<a id="trace-12519"></a>
<a id="trace-12528"></a>
<a id="trace-12530"></a>
<a id="trace-12546"></a>
<a id="trace-12548"></a>
<a id="trace-12559"></a>
<a id="trace-12561"></a>
<a id="trace-12578"></a>
<a id="trace-12580"></a>
<a id="trace-12588"></a>
<a id="trace-12590"></a>
<a id="trace-12662"></a>
<a id="trace-12664"></a>
<a id="trace-12673"></a>
<a id="trace-12675"></a>
<a id="trace-12687"></a>
<a id="trace-12689"></a>
<a id="trace-12702"></a>
<a id="trace-12704"></a>
<a id="trace-12723"></a>
<a id="trace-12725"></a>
<a id="trace-12734"></a>
<a id="trace-12736"></a>
<a id="trace-12752"></a>
<a id="trace-12754"></a>
<a id="trace-12761"></a>
<a id="trace-12763"></a>
<a id="trace-12777"></a>
<a id="trace-12779"></a>
<a id="trace-12800"></a>
<a id="trace-12802"></a>
<a id="trace-12875"></a>
<a id="trace-12877"></a>
<a id="trace-12898"></a>
<a id="trace-12900"></a>
<a id="trace-12919"></a>
<a id="trace-12921"></a>
<a id="trace-12945"></a>
<a id="trace-12947"></a>
<a id="trace-12967"></a>
<a id="trace-12969"></a>
<a id="trace-12978"></a>
<a id="trace-12980"></a>
<a id="trace-13007"></a>
<a id="trace-13009"></a>
<a id="trace-13021"></a>
<a id="trace-13023"></a>
<a id="trace-13038"></a>
<a id="trace-13040"></a>
<a id="trace-13050"></a>
<a id="trace-13052"></a>
<a id="trace-13129"></a>
<a id="trace-13131"></a>
<a id="trace-13153"></a>
<a id="trace-13155"></a>
<a id="trace-13168"></a>
<a id="trace-13170"></a>
<a id="trace-13186"></a>
<a id="trace-13188"></a>
<a id="trace-13209"></a>
<a id="trace-13211"></a>
<a id="trace-13218"></a>
<a id="trace-13220"></a>
<a id="trace-13240"></a>
<a id="trace-13242"></a>
<a id="trace-13249"></a>
<a id="trace-13251"></a>
<a id="trace-13270"></a>
<a id="trace-13272"></a>
<a id="trace-13280"></a>
<a id="trace-13282"></a>
<a id="trace-13363"></a>
<a id="trace-13365"></a>
<a id="trace-13378"></a>
<a id="trace-13380"></a>
<a id="trace-13392"></a>
<a id="trace-13394"></a>
<a id="trace-13411"></a>
<a id="trace-13413"></a>
<a id="trace-13442"></a>
<a id="trace-13444"></a>
<a id="trace-13458"></a>
<a id="trace-13460"></a>
<a id="trace-13474"></a>
<a id="trace-13476"></a>
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13517"></a>
<a id="trace-13519"></a>
<a id="trace-13597"></a>
<a id="trace-13599"></a>
<a id="trace-13607"></a>
<a id="trace-13609"></a>
<a id="trace-13624"></a>
<a id="trace-13626"></a>
<a id="trace-13637"></a>
<a id="trace-13639"></a>
<a id="trace-13663"></a>
<a id="trace-13665"></a>
<a id="trace-13680"></a>
<a id="trace-13682"></a>
<a id="trace-13699"></a>
<a id="trace-13701"></a>
<a id="trace-13724"></a>
<a id="trace-13726"></a>
<a id="trace-13740"></a>
<a id="trace-13742"></a>
<a id="trace-13751"></a>
<a id="trace-13753"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13840"></a>
<a id="trace-13842"></a>
<a id="trace-13862"></a>
<a id="trace-13864"></a>
<a id="trace-13873"></a>
<a id="trace-13875"></a>
<a id="trace-13908"></a>
<a id="trace-13910"></a>
<a id="trace-13919"></a>
<a id="trace-13921"></a>
<a id="trace-13997"></a>
<a id="trace-13999"></a>
<a id="trace-14023"></a>
<a id="trace-14025"></a>
<a id="trace-14046"></a>
<a id="trace-14048"></a>
<a id="trace-14068"></a>
<a id="trace-14070"></a>
<a id="trace-14163"></a>
<a id="trace-14165"></a>
<a id="trace-14183"></a>
<a id="trace-14185"></a>
<a id="trace-14204"></a>
<a id="trace-14206"></a>
<a id="trace-14216"></a>
<a id="trace-14218"></a>
<a id="trace-14242"></a>
<a id="trace-14244"></a>
<a id="trace-14256"></a>
<a id="trace-14258"></a>
<a id="trace-14275"></a>
<a id="trace-14277"></a>
<a id="trace-14289"></a>
<a id="trace-14291"></a>
<a id="trace-14315"></a>
<a id="trace-14317"></a>
<a id="trace-14340"></a>
<a id="trace-14342"></a>
<a id="trace-14419"></a>
<a id="trace-14421"></a>
<a id="trace-14436"></a>
<a id="trace-14438"></a>
<a id="trace-14467"></a>
<a id="trace-14469"></a>
<a id="trace-14481"></a>
<a id="trace-14483"></a>
<a id="trace-14507"></a>
<a id="trace-14509"></a>
<a id="trace-14520"></a>
<a id="trace-14522"></a>
<a id="trace-14548"></a>
<a id="trace-14550"></a>
<a id="trace-14569"></a>
<a id="trace-14571"></a>
<a id="trace-14596"></a>
<a id="trace-14598"></a>
<a id="trace-14610"></a>
<a id="trace-14612"></a>
<a id="trace-14692"></a>
<a id="trace-14694"></a>
<a id="trace-14715"></a>
<a id="trace-14717"></a>
<a id="trace-14734"></a>
<a id="trace-14736"></a>
<a id="trace-14750"></a>
<a id="trace-14752"></a>
<a id="trace-14777"></a>
<a id="trace-14779"></a>
<a id="trace-14798"></a>
<a id="trace-14800"></a>
<a id="trace-14926"></a>
<a id="trace-14928"></a>
<a id="trace-14954"></a>
<a id="trace-14956"></a>
<a id="trace-14988"></a>
<a id="trace-14990"></a>
<a id="trace-15002"></a>
<a id="trace-15004"></a>
<a id="trace-15085"></a>
<a id="trace-15087"></a>
<a id="trace-15101"></a>
<a id="trace-15103"></a>
<a id="trace-15124"></a>
<a id="trace-15126"></a>
<a id="trace-15146"></a>
<a id="trace-15148"></a>
<a id="trace-15163"></a>
<a id="trace-15165"></a>
<a id="trace-15181"></a>
<a id="trace-15183"></a>
<a id="trace-15208"></a>
<a id="trace-15210"></a>
<a id="trace-15224"></a>
<a id="trace-15226"></a>
<a id="trace-15247"></a>
<a id="trace-15249"></a>
<a id="trace-15266"></a>
<a id="trace-15268"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15381"></a>
<a id="trace-15383"></a>
<a id="trace-15401"></a>
<a id="trace-15403"></a>
<a id="trace-15414"></a>
<a id="trace-15416"></a>
<a id="trace-15435"></a>
<a id="trace-15437"></a>
<a id="trace-15457"></a>
<a id="trace-15459"></a>
<a id="trace-15475"></a>
<a id="trace-15477"></a>
<a id="trace-15495"></a>
<a id="trace-15497"></a>
<a id="trace-15521"></a>
<a id="trace-15523"></a>
<a id="trace-15541"></a>
<a id="trace-15543"></a>
<a id="trace-15622"></a>
<a id="trace-15624"></a>
<a id="trace-15637"></a>
<a id="trace-15639"></a>
<a id="trace-15665"></a>
<a id="trace-15667"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15706"></a>
<a id="trace-15708"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15744"></a>
<a id="trace-15746"></a>
<a id="trace-15792"></a>
<a id="trace-15794"></a>
<a id="trace-15815"></a>
<a id="trace-15817"></a>
<a id="trace-15840"></a>
<a id="trace-15842"></a>
<a id="trace-15934"></a>
<a id="trace-15936"></a>
<a id="trace-15944"></a>
<a id="trace-15946"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15984"></a>
<a id="trace-15986"></a>
<a id="trace-16008"></a>
<a id="trace-16010"></a>
<a id="trace-16085"></a>
<a id="trace-16087"></a>
<a id="trace-16114"></a>
<a id="trace-16116"></a>
<a id="trace-16135"></a>
<a id="trace-16137"></a>
<a id="trace-16155"></a>
<a id="trace-16157"></a>
<a id="trace-16172"></a>
<a id="trace-16174"></a>
<a id="trace-16257"></a>
<a id="trace-16259"></a>
<a id="trace-16278"></a>
<a id="trace-16280"></a>
<a id="trace-16299"></a>
<a id="trace-16301"></a>
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16332"></a>
<a id="trace-16334"></a>
<a id="trace-16351"></a>
<a id="trace-16353"></a>
<a id="trace-16375"></a>
<a id="trace-16377"></a>
<a id="trace-16391"></a>
<a id="trace-16393"></a>
<a id="trace-16415"></a>
<a id="trace-16417"></a>
<a id="trace-16426"></a>
<a id="trace-16428"></a>
<a id="trace-16513"></a>
<a id="trace-16515"></a>
<a id="trace-16536"></a>
<a id="trace-16538"></a>
<a id="trace-16550"></a>
<a id="trace-16552"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16594"></a>
<a id="trace-16596"></a>
<a id="trace-16608"></a>
<a id="trace-16610"></a>
<a id="trace-16629"></a>
<a id="trace-16631"></a>
<a id="trace-16647"></a>
<a id="trace-16649"></a>
<a id="trace-16780"></a>
<a id="trace-16782"></a>
<a id="trace-16797"></a>
<a id="trace-16799"></a>
<a id="trace-16884"></a>
<a id="trace-16886"></a>
<a id="trace-16900"></a>
<a id="trace-16902"></a>
<a id="trace-16927"></a>
<a id="trace-16929"></a>
<a id="trace-16953"></a>
<a id="trace-16955"></a>
<a id="trace-16976"></a>
<a id="trace-16978"></a>
<a id="trace-16993"></a>
<a id="trace-16995"></a>
<a id="trace-17015"></a>
<a id="trace-17017"></a>
<a id="trace-17035"></a>
<a id="trace-17037"></a>
<a id="trace-17056"></a>
<a id="trace-17058"></a>
<a id="trace-17071"></a>
<a id="trace-17073"></a>
<a id="trace-17163"></a>
<a id="trace-17165"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17200"></a>
<a id="trace-17202"></a>
<a id="trace-17215"></a>
<a id="trace-17217"></a>
<a id="trace-17238"></a>
<a id="trace-17240"></a>
<a id="trace-17265"></a>
<a id="trace-17267"></a>
<a id="trace-17288"></a>
<a id="trace-17290"></a>
<a id="trace-17306"></a>
<a id="trace-17308"></a>
<a id="trace-17335"></a>
<a id="trace-17337"></a>
<a id="trace-17351"></a>
<a id="trace-17353"></a>
<a id="trace-17443"></a>
<a id="trace-17445"></a>
<a id="trace-17459"></a>
<a id="trace-17461"></a>
<a id="trace-17488"></a>
<a id="trace-17490"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17553"></a>
<a id="trace-17555"></a>
<a id="trace-17580"></a>
<a id="trace-17582"></a>
<a id="trace-17596"></a>
<a id="trace-17598"></a>
<a id="trace-17618"></a>
<a id="trace-17620"></a>
<a id="trace-17643"></a>
<a id="trace-17645"></a>
<a id="trace-17724"></a>
<a id="trace-17726"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17755"></a>
<a id="trace-17757"></a>
<a id="trace-17770"></a>
<a id="trace-17772"></a>
<a id="trace-17796"></a>
<a id="trace-17798"></a>
<a id="trace-17807"></a>
<a id="trace-17809"></a>
<a id="trace-17827"></a>
<a id="trace-17829"></a>
<a id="trace-17838"></a>
<a id="trace-17840"></a>
<a id="trace-17861"></a>
<a id="trace-17863"></a>
<a id="trace-17880"></a>
<a id="trace-17882"></a>
<a id="trace-17958"></a>
<a id="trace-17960"></a>
<a id="trace-17976"></a>
<a id="trace-17978"></a>
<a id="trace-17997"></a>
<a id="trace-17999"></a>
<a id="trace-18008"></a>
<a id="trace-18010"></a>
<a id="trace-18026"></a>
<a id="trace-18028"></a>
<a id="trace-18037"></a>
<a id="trace-18039"></a>
<a id="trace-18057"></a>
<a id="trace-18059"></a>
<a id="trace-18068"></a>
<a id="trace-18070"></a>
<a id="trace-18087"></a>
<a id="trace-18089"></a>
<a id="trace-18099"></a>
<a id="trace-18101"></a>
<a id="trace-18176"></a>
<a id="trace-18178"></a>
<a id="trace-18194"></a>
<a id="trace-18196"></a>
<a id="trace-18216"></a>
<a id="trace-18218"></a>
<a id="trace-18235"></a>
<a id="trace-18237"></a>
<a id="trace-18254"></a>
<a id="trace-18256"></a>
<a id="trace-18266"></a>
<a id="trace-18268"></a>
<a id="trace-18290"></a>
<a id="trace-18292"></a>
<a id="trace-18305"></a>
<a id="trace-18307"></a>
<a id="trace-18324"></a>
<a id="trace-18326"></a>
<a id="trace-18336"></a>
<a id="trace-18338"></a>
<a id="trace-18416"></a>
<a id="trace-18418"></a>
<a id="trace-18425"></a>
<a id="trace-18427"></a>
<a id="trace-18440"></a>
<a id="trace-18442"></a>
<a id="trace-18458"></a>
<a id="trace-18460"></a>
<a id="trace-18476"></a>
<a id="trace-18478"></a>
<a id="trace-18492"></a>
<a id="trace-18494"></a>
<a id="trace-18515"></a>
<a id="trace-18517"></a>
<a id="trace-18527"></a>
<a id="trace-18529"></a>
<a id="trace-18549"></a>
<a id="trace-18551"></a>
<a id="trace-18567"></a>
<a id="trace-18569"></a>
<a id="trace-18648"></a>
<a id="trace-18650"></a>
<a id="trace-18658"></a>
<a id="trace-18660"></a>
<a id="trace-18675"></a>
<a id="trace-18677"></a>
<a id="trace-18685"></a>
<a id="trace-18687"></a>
<a id="trace-18703"></a>
<a id="trace-18705"></a>
<a id="trace-18718"></a>
<a id="trace-18720"></a>
<a id="trace-18735"></a>
<a id="trace-18737"></a>
<a id="trace-18753"></a>
<a id="trace-18755"></a>
<a id="trace-18769"></a>
<a id="trace-18771"></a>
<a id="trace-18784"></a>
<a id="trace-18786"></a>
<a id="trace-18864"></a>
<a id="trace-18866"></a>
<a id="trace-18879"></a>
<a id="trace-18881"></a>
<a id="trace-18905"></a>
<a id="trace-18907"></a>
<a id="trace-18918"></a>
<a id="trace-18920"></a>
<a id="trace-18934"></a>
<a id="trace-18936"></a>
<a id="trace-18945"></a>
<a id="trace-18947"></a>
<a id="trace-18961"></a>
<a id="trace-18963"></a>
<a id="trace-18979"></a>
<a id="trace-18981"></a>
<a id="trace-18992"></a>
<a id="trace-18994"></a>
<a id="trace-19008"></a>
<a id="trace-19010"></a>
<a id="trace-19086"></a>
<a id="trace-19088"></a>
<a id="trace-19096"></a>
<a id="trace-19098"></a>
<a id="trace-19113"></a>
<a id="trace-19115"></a>
<a id="trace-19127"></a>
<a id="trace-19129"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19173"></a>
<a id="trace-19175"></a>
<a id="trace-19192"></a>
<a id="trace-19194"></a>
<a id="trace-19204"></a>
<a id="trace-19206"></a>
<a id="trace-19219"></a>
<a id="trace-19221"></a>
<a id="trace-19235"></a>
<a id="trace-19237"></a>
<a id="trace-19312"></a>
<a id="trace-19314"></a>
<a id="trace-19326"></a>
<a id="trace-19328"></a>
<a id="trace-19341"></a>
<a id="trace-19343"></a>
<a id="trace-19351"></a>
<a id="trace-19353"></a>
<a id="trace-19372"></a>
<a id="trace-19374"></a>
<a id="trace-19383"></a>
<a id="trace-19385"></a>
<a id="trace-19405"></a>
<a id="trace-19407"></a>
<a id="trace-19423"></a>
<a id="trace-19425"></a>
<a id="trace-19449"></a>
<a id="trace-19451"></a>
<a id="trace-19459"></a>
<a id="trace-19461"></a>
<a id="trace-19536"></a>
<a id="trace-19538"></a>
<a id="trace-19551"></a>
<a id="trace-19553"></a>
<a id="trace-19566"></a>
<a id="trace-19568"></a>
<a id="trace-19582"></a>
<a id="trace-19584"></a>
<a id="trace-19598"></a>
<a id="trace-19600"></a>
<a id="trace-19607"></a>
<a id="trace-19609"></a>
<a id="trace-19625"></a>
<a id="trace-19627"></a>
<a id="trace-19639"></a>
<a id="trace-19641"></a>
<a id="trace-19661"></a>
<a id="trace-19663"></a>
<a id="trace-19674"></a>
<a id="trace-19676"></a>
<a id="trace-19756"></a>
<a id="trace-19758"></a>
<a id="trace-19769"></a>
<a id="trace-19771"></a>
<a id="trace-19790"></a>
<a id="trace-19792"></a>
<a id="trace-19809"></a>
<a id="trace-19811"></a>
<a id="trace-19824"></a>
<a id="trace-19826"></a>
<a id="trace-19841"></a>
<a id="trace-19843"></a>
<a id="trace-19858"></a>
<a id="trace-19860"></a>
<a id="trace-19868"></a>
<a id="trace-19870"></a>
<a id="trace-19885"></a>
<a id="trace-19887"></a>
<a id="trace-19897"></a>
<a id="trace-19899"></a>
<a id="trace-19980"></a>
<a id="trace-19982"></a>
<a id="trace-19990"></a>
<a id="trace-19992"></a>
<a id="trace-20008"></a>
<a id="trace-20010"></a>
<a id="trace-20021"></a>
<a id="trace-20023"></a>
<a id="trace-20041"></a>
<a id="trace-20043"></a>
<a id="trace-20064"></a>
<a id="trace-20066"></a>
<a id="trace-20084"></a>
<a id="trace-20086"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20118"></a>
<a id="trace-20120"></a>
<a id="trace-20129"></a>
<a id="trace-20131"></a>
<a id="trace-20211"></a>
<a id="trace-20213"></a>
<a id="trace-20221"></a>
<a id="trace-20223"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20254"></a>
<a id="trace-20256"></a>
<a id="trace-20272"></a>
<a id="trace-20274"></a>
<a id="trace-20286"></a>
<a id="trace-20288"></a>
<a id="trace-20303"></a>
<a id="trace-20305"></a>
<a id="trace-20322"></a>
<a id="trace-20324"></a>
<a id="trace-20344"></a>
<a id="trace-20346"></a>
<a id="trace-20361"></a>
<a id="trace-20363"></a>
<a id="trace-20440"></a>
<a id="trace-20442"></a>
<a id="trace-20450"></a>
<a id="trace-20452"></a>
<a id="trace-20468"></a>
<a id="trace-20470"></a>
<a id="trace-20485"></a>
<a id="trace-20487"></a>
<a id="trace-20505"></a>
<a id="trace-20507"></a>
<a id="trace-20517"></a>
<a id="trace-20519"></a>
<a id="trace-20536"></a>
<a id="trace-20538"></a>
<a id="trace-20548"></a>
<a id="trace-20550"></a>
<a id="trace-20565"></a>
<a id="trace-20567"></a>
<a id="trace-20582"></a>
<a id="trace-20584"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20684"></a>
<a id="trace-20686"></a>
<a id="trace-20697"></a>
<a id="trace-20699"></a>
<a id="trace-20711"></a>
<a id="trace-20713"></a>
<a id="trace-20731"></a>
<a id="trace-20733"></a>
<a id="trace-20744"></a>
<a id="trace-20746"></a>
<a id="trace-20767"></a>
<a id="trace-20769"></a>
<a id="trace-20780"></a>
<a id="trace-20782"></a>
<a id="trace-20799"></a>
<a id="trace-20801"></a>
<a id="trace-20808"></a>
<a id="trace-20810"></a>
<a id="trace-20887"></a>
<a id="trace-20889"></a>
<a id="trace-20903"></a>
<a id="trace-20905"></a>
<a id="trace-20919"></a>
<a id="trace-20921"></a>
<a id="trace-20939"></a>
<a id="trace-20941"></a>
<a id="trace-20959"></a>
<a id="trace-20961"></a>
<a id="trace-20972"></a>
<a id="trace-20974"></a>
<a id="trace-20990"></a>
<a id="trace-20992"></a>
<a id="trace-21001"></a>
<a id="trace-21003"></a>
<a id="trace-21024"></a>
<a id="trace-21026"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21114"></a>
<a id="trace-21116"></a>
<a id="trace-21125"></a>
<a id="trace-21127"></a>
<a id="trace-21143"></a>
<a id="trace-21145"></a>
<a id="trace-21162"></a>
<a id="trace-21164"></a>
<a id="trace-21179"></a>
<a id="trace-21181"></a>
<a id="trace-21196"></a>
<a id="trace-21198"></a>
<a id="trace-21215"></a>
<a id="trace-21217"></a>
<a id="trace-21225"></a>
<a id="trace-21227"></a>
<a id="trace-21250"></a>
<a id="trace-21252"></a>
<a id="trace-21260"></a>
<a id="trace-21262"></a>
<a id="trace-21338"></a>
<a id="trace-21340"></a>
<a id="trace-21352"></a>
<a id="trace-21354"></a>
<a id="trace-21372"></a>
<a id="trace-21374"></a>
<a id="trace-21385"></a>
<a id="trace-21387"></a>
<a id="trace-21400"></a>
<a id="trace-21402"></a>
<a id="trace-21419"></a>
<a id="trace-21421"></a>
<a id="trace-21437"></a>
<a id="trace-21439"></a>
<a id="trace-21453"></a>
<a id="trace-21455"></a>
<a id="trace-21472"></a>
<a id="trace-21474"></a>
<a id="trace-21483"></a>
<a id="trace-21485"></a>
<a id="trace-21566"></a>
<a id="trace-21568"></a>
<a id="trace-21581"></a>
<a id="trace-21583"></a>
<a id="trace-21601"></a>
<a id="trace-21603"></a>
<a id="trace-21613"></a>
<a id="trace-21615"></a>
<a id="trace-21631"></a>
<a id="trace-21633"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21825"></a>
<a id="trace-21827"></a>
<a id="trace-21850"></a>
<a id="trace-21852"></a>
<a id="trace-21878"></a>
<a id="trace-21880"></a>
<a id="trace-21894"></a>
<a id="trace-21896"></a>
<a id="trace-21982"></a>
<a id="trace-21984"></a>
<a id="trace-22001"></a>
<a id="trace-22003"></a>
<a id="trace-22021"></a>
<a id="trace-22023"></a>
<a id="trace-22038"></a>
<a id="trace-22040"></a>
<a id="trace-22070"></a>
<a id="trace-22072"></a>
<a id="trace-22087"></a>
<a id="trace-22089"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22127"></a>
<a id="trace-22129"></a>
<a id="trace-22152"></a>
<a id="trace-22154"></a>
<a id="trace-22173"></a>
<a id="trace-22175"></a>
<a id="trace-22255"></a>
<a id="trace-22257"></a>
<a id="trace-22273"></a>
<a id="trace-22275"></a>
<a id="trace-22300"></a>
<a id="trace-22302"></a>
<a id="trace-22316"></a>
<a id="trace-22318"></a>
<a id="trace-22341"></a>
<a id="trace-22343"></a>
<a id="trace-22360"></a>
<a id="trace-22362"></a>
<a id="trace-22389"></a>
<a id="trace-22391"></a>
<a id="trace-22411"></a>
<a id="trace-22413"></a>
<a id="trace-22433"></a>
<a id="trace-22435"></a>
<a id="trace-22447"></a>
<a id="trace-22449"></a>
<a id="trace-22529"></a>
<a id="trace-22531"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22723"></a>
<a id="trace-22725"></a>
<a id="trace-22747"></a>
<a id="trace-22749"></a>
<a id="trace-22777"></a>
<a id="trace-22779"></a>
<a id="trace-22789"></a>
<a id="trace-22791"></a>
<a id="trace-22817"></a>
<a id="trace-22819"></a>
<a id="trace-22833"></a>
<a id="trace-22835"></a>
<a id="trace-22882"></a>
<a id="trace-22884"></a>
<a id="trace-22974"></a>
<a id="trace-22976"></a>
<a id="trace-22984"></a>
<a id="trace-22986"></a>
<a id="trace-23008"></a>
<a id="trace-23010"></a>
<a id="trace-23024"></a>
<a id="trace-23026"></a>
<a id="trace-23047"></a>
<a id="trace-23049"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23091"></a>
<a id="trace-23093"></a>
<a id="trace-23106"></a>
<a id="trace-23108"></a>
<a id="trace-23135"></a>
<a id="trace-23137"></a>
<a id="trace-23149"></a>
<a id="trace-23151"></a>
<a id="trace-23242"></a>
<a id="trace-23244"></a>
<a id="trace-23258"></a>
<a id="trace-23260"></a>
<a id="trace-23280"></a>
<a id="trace-23282"></a>
<a id="trace-23292"></a>
<a id="trace-23294"></a>
<a id="trace-23323"></a>
<a id="trace-23325"></a>
<a id="trace-23344"></a>
<a id="trace-23346"></a>
<a id="trace-23363"></a>
<a id="trace-23365"></a>
<a id="trace-23379"></a>
<a id="trace-23381"></a>
<a id="trace-23403"></a>
<a id="trace-23405"></a>
<a id="trace-23414"></a>
<a id="trace-23416"></a>
<a id="trace-23497"></a>
<a id="trace-23499"></a>
<a id="trace-23534"></a>
<a id="trace-23536"></a>
<a id="trace-23544"></a>
<a id="trace-23546"></a>
<a id="trace-23565"></a>
<a id="trace-23567"></a>
<a id="trace-23575"></a>
<a id="trace-23577"></a>
<a id="trace-23595"></a>
<a id="trace-23597"></a>
<a id="trace-23618"></a>
<a id="trace-23620"></a>
<a id="trace-23635"></a>
<a id="trace-23637"></a>
<a id="trace-23649"></a>
<a id="trace-23651"></a>
<a id="trace-23729"></a>
<a id="trace-23731"></a>
<a id="trace-23741"></a>
<a id="trace-23743"></a>
<a id="trace-23762"></a>
<a id="trace-23764"></a>
<a id="trace-23772"></a>
<a id="trace-23774"></a>
<a id="trace-23792"></a>
<a id="trace-23794"></a>
<a id="trace-23808"></a>
<a id="trace-23810"></a>
<a id="trace-23827"></a>
<a id="trace-23829"></a>
<a id="trace-23844"></a>
<a id="trace-23846"></a>
<a id="trace-23861"></a>
<a id="trace-23863"></a>
<a id="trace-23881"></a>
<a id="trace-23883"></a>
<a id="trace-23965"></a>
<a id="trace-23967"></a>
<a id="trace-23999"></a>
<a id="trace-24001"></a>
<a id="trace-24007"></a>
<a id="trace-24009"></a>
<a id="trace-24026"></a>
<a id="trace-24028"></a>
<a id="trace-24040"></a>
<a id="trace-24042"></a>
<a id="trace-24058"></a>
<a id="trace-24060"></a>
<a id="trace-24070"></a>
<a id="trace-24072"></a>
<a id="trace-24320"></a>
<a id="trace-24322"></a>
<a id="trace-24333"></a>
<a id="trace-24335"></a>
<a id="trace-24417"></a>
<a id="trace-24419"></a>
<a id="trace-24440"></a>
<a id="trace-24442"></a>
<a id="trace-24459"></a>
<a id="trace-24461"></a>
<a id="trace-24484"></a>
<a id="trace-24486"></a>
<a id="trace-24509"></a>
<a id="trace-24511"></a>
<a id="trace-24526"></a>
<a id="trace-24528"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24567"></a>
<a id="trace-24569"></a>
<a id="trace-24597"></a>
<a id="trace-24599"></a>
<a id="trace-24613"></a>
<a id="trace-24615"></a>
<a id="trace-24695"></a>
<a id="trace-24697"></a>
<a id="trace-24713"></a>
<a id="trace-24715"></a>
<a id="trace-24740"></a>
<a id="trace-24742"></a>
<a id="trace-24763"></a>
<a id="trace-24765"></a>
<a id="trace-24810"></a>
<a id="trace-24812"></a>
<a id="trace-24834"></a>
<a id="trace-24836"></a>
<a id="trace-24845"></a>
<a id="trace-24847"></a>
<a id="trace-24864"></a>
<a id="trace-24866"></a>
<a id="trace-24878"></a>
<a id="trace-24880"></a>
- 1.60s–359.80s (×1424), actor 37, squad 4 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5000606011602764, 'next_transition': 608}.
<a id="trace-833"></a>
<a id="trace-835"></a>
<a id="trace-918"></a>
<a id="trace-920"></a>
<a id="trace-947"></a>
<a id="trace-949"></a>
<a id="trace-978"></a>
<a id="trace-980"></a>
<a id="trace-1005"></a>
<a id="trace-1007"></a>
<a id="trace-1049"></a>
<a id="trace-1051"></a>
<a id="trace-1140"></a>
<a id="trace-1142"></a>
<a id="trace-1245"></a>
<a id="trace-1247"></a>
<a id="trace-1268"></a>
<a id="trace-1270"></a>
<a id="trace-1291"></a>
<a id="trace-1293"></a>
<a id="trace-1329"></a>
<a id="trace-1331"></a>
- 5.70s–12.20s (×22), actor 5, squad 0 (trace 833): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 747. Next observer evidence: {'until': 7.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.6693495182361975, 'next_transition': 918}.
<a id="trace-1147"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1147): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3061854060624647, 'next_transition': 139}.
<a id="trace-1148"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1148): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1069. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.3061854060624647, 'next_transition': 139}.
<a id="trace-138"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (events line 138): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1356}.
<a id="trace-139"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (events line 139): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.698346332192745, 'next_transition': 1913}.
<a id="trace-1336"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1336): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1336. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1356}.
<a id="trace-1337"></a>
- 12.25s–12.25s (×1), actor 5, squad 0 (trace 1337): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1337. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1356}.
<a id="trace-1338"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1338): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1338. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.698346332192745, 'next_transition': 1913}.
<a id="trace-1339"></a>
- 12.25s–12.25s (×1), actor 5, squad 1 (trace 1339): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.25s, trace 1339. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.698346332192745, 'next_transition': 1913}.
<a id="trace-1356"></a>
<a id="trace-1358"></a>
- 12.70s–12.70s (×2), actor 5, squad 0 (trace 1356): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1339. Next observer evidence: None.
<a id="trace-1366"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1366): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1639}.
<a id="trace-1367"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1367): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1061. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725012009934033, 'next_transition': 1639}.
<a id="trace-1639"></a>
<a id="trace-1641"></a>
<a id="trace-1661"></a>
<a id="trace-1663"></a>
<a id="trace-1798"></a>
<a id="trace-1800"></a>
<a id="trace-1865"></a>
<a id="trace-1867"></a>
<a id="trace-2356"></a>
<a id="trace-2358"></a>
<a id="trace-2582"></a>
<a id="trace-2584"></a>
<a id="trace-2622"></a>
<a id="trace-2624"></a>
<a id="trace-2650"></a>
<a id="trace-2652"></a>
- 13.20s–19.75s (×16), actor 5, squad 0 (trace 1639): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.25s, trace 1339. Next observer evidence: {'until': 13.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4134452017076428, 'next_transition': 1661}.
<a id="trace-1913"></a>
- 17.30s–17.30s (×1), actor 8, squad 1 (trace 1913): received platoon directive. Knowledge: actor memory at 15.00s, trace 1736. Next observer evidence: {'until': 17.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2063}.
<a id="trace-2063"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2063): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1736. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2209}.
<a id="trace-2064"></a>
- 17.55s–17.55s (×1), actor 8, squad 1 (trace 2064): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1736. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2209}.
<a id="trace-2065"></a>
<a id="trace-2209"></a>
<a id="trace-2363"></a>
- 17.55s–17.75s (×3), actor 8, squad 1 (trace 2065): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1736. Next observer evidence: {'until': 17.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2209}.
<a id="trace-2657"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2657): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1728. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3077}.
<a id="trace-2658"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2658): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1728. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3077}.
<a id="trace-2659"></a>
- 19.75s–19.75s (×1), actor 0, squad 0 (trace 2659): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1728. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2362470352194921, 'next_transition': 3077}.
<a id="trace-3077"></a>
<a id="trace-3079"></a>
<a id="trace-3114"></a>
<a id="trace-3116"></a>
- 20.25s–20.75s (×4), actor 5, squad 0 (trace 3077): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3000. Next observer evidence: {'until': 20.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749727402898897, 'next_transition': 3114}.
<a id="trace-3140"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3140): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3003. Next observer evidence: {'until': 24, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2362784739383423, 'next_transition': 3662}.
<a id="trace-3142"></a>
- 21.10s–21.10s (×1), actor 8, squad 1 (trace 3142): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 3003. Next observer evidence: {'until': 24, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.2362784739383423, 'next_transition': 3662}.
<a id="trace-3159"></a>
- 21.25s–21.25s (×1), actor 0, squad 0 (trace 3159): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2995. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43312473082748737, 'next_transition': 3492}.
<a id="trace-3492"></a>
<a id="trace-3494"></a>
<a id="trace-3534"></a>
<a id="trace-3536"></a>
<a id="trace-3591"></a>
<a id="trace-3593"></a>
<a id="trace-3612"></a>
<a id="trace-3614"></a>
<a id="trace-3628"></a>
<a id="trace-3630"></a>
<a id="trace-3797"></a>
<a id="trace-3799"></a>
- 21.75s–24.25s (×12), actor 5, squad 0 (trace 3492): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3000. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22463435784017025, 'next_transition': 3534}.
<a id="trace-3662"></a>
- 24.15s–24.15s (×1), actor 8, squad 1 (trace 3662): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 20.00s, trace 3003. Next observer evidence: {'until': 27.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0127140850827543, 'next_transition': 4546}.
<a id="trace-3841"></a>
- 24.90s–24.90s (×1), actor 0, squad 0 (trace 3841): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2995. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48964457399340255, 'next_transition': 4397}.
<a id="trace-3842"></a>
- 24.90s–24.90s (×1), actor 0, squad 0 (trace 3842): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2995. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48964457399340255, 'next_transition': 4397}.
<a id="trace-4397"></a>
<a id="trace-4399"></a>
<a id="trace-4420"></a>
<a id="trace-4422"></a>
<a id="trace-4462"></a>
<a id="trace-4464"></a>
<a id="trace-4491"></a>
<a id="trace-4493"></a>
<a id="trace-4526"></a>
<a id="trace-4528"></a>
<a id="trace-4559"></a>
<a id="trace-4561"></a>
<a id="trace-4592"></a>
<a id="trace-4594"></a>
<a id="trace-4634"></a>
<a id="trace-4636"></a>
<a id="trace-4777"></a>
<a id="trace-4779"></a>
<a id="trace-4900"></a>
<a id="trace-4902"></a>
<a id="trace-4945"></a>
<a id="trace-4947"></a>
<a id="trace-5104"></a>
<a id="trace-5106"></a>
<a id="trace-5148"></a>
<a id="trace-5150"></a>
<a id="trace-5203"></a>
<a id="trace-5205"></a>
<a id="trace-5276"></a>
<a id="trace-5278"></a>
<a id="trace-5351"></a>
<a id="trace-5353"></a>
<a id="trace-5399"></a>
<a id="trace-5401"></a>
<a id="trace-5523"></a>
<a id="trace-5525"></a>
<a id="trace-5558"></a>
<a id="trace-5560"></a>
<a id="trace-5574"></a>
<a id="trace-5576"></a>
<a id="trace-5681"></a>
<a id="trace-5683"></a>
- 25.25s–40.25s (×42), actor 5, squad 0 (trace 4397): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4315. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2231229984456671, 'next_transition': 4420}.
<a id="trace-4546"></a>
- 27.50s–27.50s (×1), actor 8, squad 1 (trace 4546): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 25.00s, trace 4318. Next observer evidence: {'until': 30.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.7962442952691022, 'next_transition': 4793}.
<a id="trace-4793"></a>
- 30.45s–30.45s (×1), actor 8, squad 1 (trace 4793): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 4702. Next observer evidence: {'until': 39, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.01696901293534766, 'next_transition': 5544}.
<a id="trace-5544"></a>
- 39.15s–39.15s (×1), actor 8, squad 1 (trace 5544): NeedSupport. Knowledge: actor memory at 35.00s, trace 5036. Next observer evidence: {'until': 39.8, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 797}.
<a id="trace-797"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (events line 797): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5585"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5585): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.558656 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5585. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6294}.
<a id="trace-5586"></a>
- 39.85s–39.85s (×1), actor 5, squad 1 (trace 5586): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.558656 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 39.85s, trace 5586. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6294}.
<a id="trace-5695"></a>
- 40.35s–40.35s (×1), actor 0, squad 0 (trace 5695): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 40.00s, trace 5597. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07595606815167905, 'next_transition': 5863}.
<a id="trace-5696"></a>
- 40.35s–40.35s (×1), actor 0, squad 0 (trace 5696): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 40.00s, trace 5597. Next observer evidence: {'until': 40.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.07595606815167905, 'next_transition': 5863}.
<a id="trace-5863"></a>
<a id="trace-5865"></a>
<a id="trace-5889"></a>
<a id="trace-5891"></a>
<a id="trace-5958"></a>
<a id="trace-5960"></a>
<a id="trace-5977"></a>
<a id="trace-5979"></a>
<a id="trace-6009"></a>
<a id="trace-6011"></a>
- 40.75s–43.25s (×10), actor 5, squad 0 (trace 5863): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5602. Next observer evidence: {'until': 41.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3756230674036234, 'next_transition': 5889}.
<a id="trace-6022"></a>
- 43.45s–43.45s (×1), actor 0, squad 0 (trace 6022): NeedSupport. Knowledge: actor memory at 40.00s, trace 5597. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7798096822476972, 'next_transition': 6094}.
<a id="trace-6094"></a>
<a id="trace-6096"></a>
<a id="trace-6181"></a>
<a id="trace-6183"></a>
<a id="trace-6199"></a>
<a id="trace-6201"></a>
<a id="trace-6226"></a>
<a id="trace-6241"></a>
<a id="trace-6263"></a>
<a id="trace-6325"></a>
<a id="trace-6327"></a>
<a id="trace-6345"></a>
<a id="trace-6347"></a>
<a id="trace-6359"></a>
<a id="trace-6361"></a>
<a id="trace-6451"></a>
<a id="trace-6453"></a>
<a id="trace-6469"></a>
<a id="trace-6471"></a>
<a id="trace-6486"></a>
<a id="trace-6488"></a>
<a id="trace-6503"></a>
<a id="trace-6505"></a>
<a id="trace-6528"></a>
<a id="trace-6530"></a>
<a id="trace-6547"></a>
<a id="trace-6549"></a>
<a id="trace-6564"></a>
<a id="trace-6566"></a>
<a id="trace-6602"></a>
<a id="trace-6604"></a>
<a id="trace-6614"></a>
<a id="trace-6616"></a>
<a id="trace-6692"></a>
<a id="trace-6694"></a>
<a id="trace-6708"></a>
<a id="trace-6710"></a>
- 44.75s–55.75s (×37), actor 5, squad 0 (trace 6094): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 5602. Next observer evidence: {'until': 45.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7365462271614277, 'next_transition': 6181}.
<a id="trace-6294"></a>
- 48.20s–48.20s (×1), actor 9, squad 1 (trace 6294): MoveTactically. Knowledge: actor memory at 45.00s, trace 6115. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10271}.
<a id="trace-6295"></a>
- 48.20s–48.20s (×1), actor 9, squad 1 (trace 6295): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 45.00s, trace 6115. Next observer evidence: {'until': 78.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10271}.
<a id="trace-6717"></a>
- 55.75s–55.75s (×1), actor 0, squad 0 (trace 6717): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 6623. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5020519492038952, 'next_transition': 6883}.
<a id="trace-6718"></a>
- 55.75s–55.75s (×1), actor 0, squad 0 (trace 6718): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 6623. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5020519492038952, 'next_transition': 6883}.
<a id="trace-6883"></a>
<a id="trace-6885"></a>
<a id="trace-6944"></a>
<a id="trace-6946"></a>
<a id="trace-6964"></a>
<a id="trace-6966"></a>
<a id="trace-6994"></a>
<a id="trace-6996"></a>
<a id="trace-7032"></a>
<a id="trace-7034"></a>
<a id="trace-7073"></a>
<a id="trace-7075"></a>
<a id="trace-7159"></a>
<a id="trace-7161"></a>
<a id="trace-7199"></a>
<a id="trace-7201"></a>
<a id="trace-7213"></a>
<a id="trace-7215"></a>
<a id="trace-7240"></a>
<a id="trace-7242"></a>
<a id="trace-7260"></a>
<a id="trace-7262"></a>
<a id="trace-7280"></a>
<a id="trace-7282"></a>
<a id="trace-7299"></a>
<a id="trace-7301"></a>
- 56.25s–63.75s (×26), actor 5, squad 0 (trace 6883): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 6627. Next observer evidence: {'until': 57.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7946855446743698, 'next_transition': 6944}.
<a id="trace-7315"></a>
- 63.95s–63.95s (×1), actor 0, squad 0 (trace 7315): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 60.00s, trace 7085. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5400041535771286, 'next_transition': 7336}.
<a id="trace-7336"></a>
<a id="trace-7338"></a>
<a id="trace-7359"></a>
<a id="trace-7361"></a>
<a id="trace-7457"></a>
<a id="trace-7459"></a>
<a id="trace-7485"></a>
<a id="trace-7487"></a>
<a id="trace-7515"></a>
<a id="trace-7517"></a>
<a id="trace-7553"></a>
<a id="trace-7555"></a>
<a id="trace-7586"></a>
<a id="trace-7588"></a>
<a id="trace-7602"></a>
<a id="trace-7604"></a>
<a id="trace-7624"></a>
<a id="trace-7626"></a>
<a id="trace-7654"></a>
<a id="trace-7656"></a>
<a id="trace-7678"></a>
<a id="trace-7680"></a>
<a id="trace-7698"></a>
<a id="trace-7700"></a>
<a id="trace-7790"></a>
<a id="trace-7792"></a>
<a id="trace-7809"></a>
<a id="trace-7811"></a>
<a id="trace-7831"></a>
<a id="trace-7833"></a>
<a id="trace-7841"></a>
<a id="trace-7843"></a>
<a id="trace-7872"></a>
<a id="trace-7874"></a>
<a id="trace-7905"></a>
<a id="trace-7907"></a>
<a id="trace-7946"></a>
<a id="trace-7948"></a>
<a id="trace-8023"></a>
<a id="trace-8025"></a>
<a id="trace-8053"></a>
<a id="trace-8055"></a>
<a id="trace-8063"></a>
<a id="trace-8065"></a>
<a id="trace-8082"></a>
<a id="trace-8084"></a>
<a id="trace-8098"></a>
<a id="trace-8100"></a>
<a id="trace-8119"></a>
<a id="trace-8121"></a>
<a id="trace-8142"></a>
<a id="trace-8144"></a>
<a id="trace-8164"></a>
<a id="trace-8166"></a>
<a id="trace-8180"></a>
<a id="trace-8182"></a>
<a id="trace-8260"></a>
<a id="trace-8262"></a>
<a id="trace-8277"></a>
<a id="trace-8279"></a>
- 64.25s–80.75s (×60), actor 5, squad 0 (trace 7336): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 7089. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5399889763745905, 'next_transition': 7359}.
<a id="trace-1250"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (events line 1250): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-8296"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 8296): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.339436 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 8296. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8304}.
<a id="trace-8297"></a>
- 81.30s–81.30s (×1), actor 5, squad 0 (trace 8297): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.339436 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 81.30s, trace 8297. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8304}.
<a id="trace-8304"></a>
<a id="trace-8306"></a>
<a id="trace-8320"></a>
<a id="trace-8322"></a>
<a id="trace-8330"></a>
<a id="trace-8332"></a>
<a id="trace-8379"></a>
<a id="trace-8381"></a>
<a id="trace-8398"></a>
<a id="trace-8400"></a>
<a id="trace-8485"></a>
<a id="trace-8487"></a>
<a id="trace-8503"></a>
<a id="trace-8505"></a>
<a id="trace-8524"></a>
<a id="trace-8526"></a>
- 81.75s–86.25s (×16), actor 5, squad 0 (trace 8304): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 81.30s, trace 8297. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8320}.
<a id="trace-8548"></a>
- 87.15s–87.15s (×1), actor 0, squad 0 (trace 8548): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 85.00s, trace 8408. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10264}.
<a id="trace-8549"></a>
- 87.15s–87.15s (×1), actor 0, squad 0 (trace 8549): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 85.00s, trace 8408. Next observer evidence: {'until': 87.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10264}.
<a id="trace-10264"></a>
<a id="trace-10266"></a>
<a id="trace-10279"></a>
<a id="trace-10281"></a>
<a id="trace-10305"></a>
<a id="trace-10307"></a>
<a id="trace-10323"></a>
<a id="trace-10325"></a>
<a id="trace-10346"></a>
<a id="trace-10348"></a>
<a id="trace-10363"></a>
<a id="trace-10365"></a>
<a id="trace-10453"></a>
<a id="trace-10455"></a>
<a id="trace-10473"></a>
<a id="trace-10475"></a>
<a id="trace-10494"></a>
<a id="trace-10496"></a>
<a id="trace-10505"></a>
<a id="trace-10507"></a>
<a id="trace-10535"></a>
<a id="trace-10537"></a>
<a id="trace-10559"></a>
<a id="trace-10561"></a>
<a id="trace-10580"></a>
<a id="trace-10582"></a>
<a id="trace-10634"></a>
<a id="trace-10636"></a>
<a id="trace-10726"></a>
<a id="trace-10728"></a>
<a id="trace-10748"></a>
<a id="trace-10750"></a>
<a id="trace-10760"></a>
<a id="trace-10762"></a>
<a id="trace-10783"></a>
<a id="trace-10785"></a>
<a id="trace-10818"></a>
<a id="trace-10820"></a>
<a id="trace-10873"></a>
<a id="trace-10875"></a>
<a id="trace-10892"></a>
<a id="trace-10894"></a>
<a id="trace-10975"></a>
<a id="trace-10977"></a>
<a id="trace-11011"></a>
<a id="trace-11013"></a>
<a id="trace-11041"></a>
<a id="trace-11043"></a>
<a id="trace-11055"></a>
<a id="trace-11057"></a>
<a id="trace-11067"></a>
<a id="trace-11069"></a>
<a id="trace-11086"></a>
<a id="trace-11088"></a>
<a id="trace-11109"></a>
<a id="trace-11111"></a>
<a id="trace-11122"></a>
<a id="trace-11124"></a>
<a id="trace-11204"></a>
<a id="trace-11206"></a>
<a id="trace-11223"></a>
<a id="trace-11225"></a>
<a id="trace-11243"></a>
<a id="trace-11245"></a>
<a id="trace-11257"></a>
<a id="trace-11259"></a>
<a id="trace-11276"></a>
<a id="trace-11278"></a>
<a id="trace-11291"></a>
<a id="trace-11293"></a>
<a id="trace-11308"></a>
<a id="trace-11310"></a>
<a id="trace-11324"></a>
<a id="trace-11326"></a>
- 87.25s–108.75s (×74), actor 5, squad 0 (trace 10264): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 8412. Next observer evidence: {'until': 87.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 10279}.
<a id="trace-10271"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 10271): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 85.00s, trace 8415. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1601}.
<a id="trace-10272"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 10272): MoveTactically. Knowledge: actor memory at 85.00s, trace 8415. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1601}.
<a id="trace-10273"></a>
- 87.25s–87.25s (×1), actor 9, squad 1 (trace 10273): . Knowledge: actor memory at 85.00s, trace 8415. Next observer evidence: {'until': 108.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1601}.
<a id="trace-1600"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (events line 1600): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200141400327559, 'next_transition': 11354}.
<a id="trace-1601"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (events line 1601): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11729}.
<a id="trace-11340"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 11340): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.491228 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 11340. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200141400327559, 'next_transition': 11354}.
<a id="trace-11341"></a>
- 108.95s–108.95s (×1), actor 5, squad 0 (trace 11341): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.491228 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 108.95s, trace 11341. Next observer evidence: {'until': 109.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4200141400327559, 'next_transition': 11354}.
<a id="trace-11342"></a>
- 108.95s–108.95s (×1), actor 5, squad 1 (trace 11342): renew committed intent (75 s lifetime). Knowledge: actor memory at 108.95s, trace 11342. Next observer evidence: {'until': 113.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11729}.
<a id="trace-11354"></a>
<a id="trace-11356"></a>
<a id="trace-11366"></a>
<a id="trace-11368"></a>
<a id="trace-11446"></a>
<a id="trace-11448"></a>
- 109.25s–110.25s (×6), actor 5, squad 0 (trace 11354): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 108.95s, trace 11342. Next observer evidence: {'until': 109.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4199831036003978, 'next_transition': 11366}.
<a id="trace-11457"></a>
- 110.45s–110.45s (×1), actor 1, squad 0 (trace 11457): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 110.00s, trace 11376. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21002372358027369, 'next_transition': 11467}.
<a id="trace-11458"></a>
- 110.45s–110.45s (×1), actor 1, squad 0 (trace 11458): NeedSupport. Knowledge: actor memory at 110.00s, trace 11376. Next observer evidence: {'until': 110.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21002372358027369, 'next_transition': 11467}.
<a id="trace-11467"></a>
<a id="trace-11469"></a>
<a id="trace-11483"></a>
<a id="trace-11485"></a>
- 110.75s–111.25s (×4), actor 5, squad 0 (trace 11467): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11379. Next observer evidence: {'until': 111.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300049348826481, 'next_transition': 11483}.
<a id="trace-11494"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 11494): Reorganise: completed/failed drill. Knowledge: actor memory at 110.00s, trace 11376. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999060566254557, 'next_transition': 11637}.
<a id="trace-11499"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 11499): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 11376. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999060566254557, 'next_transition': 11637}.
<a id="trace-11500"></a>
- 111.45s–111.45s (×1), actor 1, squad 0 (trace 11500): Reorganise complete: known contact. Knowledge: actor memory at 110.00s, trace 11376. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20999060566254557, 'next_transition': 11637}.
<a id="trace-11637"></a>
<a id="trace-11639"></a>
<a id="trace-11665"></a>
<a id="trace-11667"></a>
<a id="trace-11686"></a>
<a id="trace-11688"></a>
<a id="trace-11705"></a>
<a id="trace-11707"></a>
<a id="trace-11720"></a>
<a id="trace-11722"></a>
<a id="trace-11759"></a>
<a id="trace-11771"></a>
<a id="trace-11844"></a>
- 111.75s–115.25s (×13), actor 5, squad 0 (trace 11637): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 11379. Next observer evidence: {'until': 112.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300041781341801, 'next_transition': 11665}.
<a id="trace-11729"></a>
- 113.90s–113.90s (×1), actor 9, squad 1 (trace 11729): ReactToContact: cover and return fire. Knowledge: actor memory at 110.00s, trace 11382. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12055}.
<a id="trace-11730"></a>
- 113.90s–113.90s (×1), actor 9, squad 1 (trace 11730): new contact inside 100 m. Knowledge: actor memory at 110.00s, trace 11382. Next observer evidence: {'until': 117.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12055}.
<a id="trace-11852"></a>
- 115.30s–115.30s (×1), actor 1, squad 0 (trace 11852): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 11778. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12000}.
<a id="trace-11855"></a>
- 115.30s–115.30s (×1), actor 1, squad 0 (trace 11855): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 115.00s, trace 11778. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12000}.
<a id="trace-11856"></a>
- 115.30s–115.30s (×1), actor 1, squad 0 (trace 11856): rearward bound: one stationary suppressing element. Knowledge: actor memory at 115.00s, trace 11778. Next observer evidence: {'until': 115.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12000}.
<a id="trace-12000"></a>
<a id="trace-12024"></a>
<a id="trace-12063"></a>
<a id="trace-12065"></a>
<a id="trace-12106"></a>
<a id="trace-12108"></a>
<a id="trace-12119"></a>
<a id="trace-12121"></a>
<a id="trace-12138"></a>
<a id="trace-12140"></a>
<a id="trace-12153"></a>
<a id="trace-12155"></a>
<a id="trace-12234"></a>
<a id="trace-12236"></a>
<a id="trace-12250"></a>
<a id="trace-12252"></a>
<a id="trace-12270"></a>
<a id="trace-12272"></a>
<a id="trace-12284"></a>
<a id="trace-12286"></a>
<a id="trace-12303"></a>
<a id="trace-12305"></a>
<a id="trace-12314"></a>
<a id="trace-12316"></a>
<a id="trace-12339"></a>
<a id="trace-12341"></a>
<a id="trace-12358"></a>
<a id="trace-12360"></a>
<a id="trace-12443"></a>
<a id="trace-12445"></a>
<a id="trace-12457"></a>
<a id="trace-12459"></a>
<a id="trace-12475"></a>
<a id="trace-12477"></a>
- 115.75s–126.25s (×34), actor 5, squad 0 (trace 12000): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 115.00s, trace 11781. Next observer evidence: {'until': 116.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12024}.
<a id="trace-12055"></a>
- 117.20s–117.20s (×1), actor 9, squad 1 (trace 12055): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 115.00s, trace 11784. Next observer evidence: {'until': 134.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12782}.
<a id="trace-12057"></a>
- 117.20s–117.20s (×1), actor 9, squad 1 (trace 12057): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 115.00s, trace 11784. Next observer evidence: {'until': 134.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12782}.
<a id="trace-12484"></a>
- 126.25s–126.25s (×1), actor 1, squad 0 (trace 12484): NeedSupport. Knowledge: actor memory at 125.00s, trace 12377. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1969809088000196, 'next_transition': 12513}.
<a id="trace-12513"></a>
<a id="trace-12515"></a>
<a id="trace-12524"></a>
<a id="trace-12526"></a>
<a id="trace-12542"></a>
<a id="trace-12544"></a>
<a id="trace-12555"></a>
<a id="trace-12557"></a>
<a id="trace-12574"></a>
<a id="trace-12576"></a>
<a id="trace-12584"></a>
<a id="trace-12586"></a>
<a id="trace-12658"></a>
<a id="trace-12660"></a>
<a id="trace-12669"></a>
<a id="trace-12671"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12719"></a>
<a id="trace-12721"></a>
<a id="trace-12730"></a>
<a id="trace-12732"></a>
<a id="trace-12748"></a>
<a id="trace-12750"></a>
<a id="trace-12871"></a>
<a id="trace-12873"></a>
- 127.25s–135.30s (×26), actor 5, squad 0 (trace 12513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 12379. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12524}.
<a id="trace-12782"></a>
- 134.40s–134.40s (×1), actor 9, squad 1 (trace 12782): MoveTactically. Knowledge: actor memory at 130.00s, trace 12596. Next observer evidence: None.
<a id="trace-12783"></a>
- 134.40s–134.40s (×1), actor 9, squad 1 (trace 12783): current contact unknown for 10 s. Knowledge: actor memory at 130.00s, trace 12596. Next observer evidence: None.
<a id="trace-12789"></a>
- 134.45s–134.45s (×1), actor 9, squad 1 (trace 12789): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 12596. Next observer evidence: {'until': 136.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2058}.
<a id="trace-12884"></a>
- 135.65s–135.65s (×1), actor 1, squad 0 (trace 12884): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 135.00s, trace 12803. Next observer evidence: {'until': 135.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12894}.
<a id="trace-12894"></a>
<a id="trace-12896"></a>
<a id="trace-12915"></a>
<a id="trace-12917"></a>
<a id="trace-12941"></a>
<a id="trace-12943"></a>
<a id="trace-12963"></a>
<a id="trace-12965"></a>
<a id="trace-12974"></a>
<a id="trace-12976"></a>
<a id="trace-13017"></a>
<a id="trace-13019"></a>
<a id="trace-13046"></a>
<a id="trace-13048"></a>
<a id="trace-13149"></a>
<a id="trace-13151"></a>
<a id="trace-13164"></a>
<a id="trace-13166"></a>
<a id="trace-13205"></a>
<a id="trace-13207"></a>
<a id="trace-13236"></a>
<a id="trace-13238"></a>
<a id="trace-13266"></a>
<a id="trace-13268"></a>
<a id="trace-13374"></a>
<a id="trace-13376"></a>
<a id="trace-13407"></a>
<a id="trace-13409"></a>
<a id="trace-13438"></a>
<a id="trace-13440"></a>
<a id="trace-13454"></a>
<a id="trace-13456"></a>
<a id="trace-13470"></a>
<a id="trace-13472"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13500"></a>
<a id="trace-13502"></a>
<a id="trace-13513"></a>
<a id="trace-13515"></a>
<a id="trace-13593"></a>
<a id="trace-13595"></a>
<a id="trace-13633"></a>
<a id="trace-13635"></a>
<a id="trace-13659"></a>
<a id="trace-13661"></a>
<a id="trace-13676"></a>
<a id="trace-13678"></a>
<a id="trace-13695"></a>
<a id="trace-13697"></a>
<a id="trace-13720"></a>
<a id="trace-13722"></a>
<a id="trace-13747"></a>
<a id="trace-13749"></a>
<a id="trace-13825"></a>
<a id="trace-13827"></a>
<a id="trace-13836"></a>
<a id="trace-13838"></a>
<a id="trace-13858"></a>
<a id="trace-13860"></a>
<a id="trace-13869"></a>
<a id="trace-13871"></a>
- 135.80s–156.80s (×62), actor 5, squad 0 (trace 12894): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 135.00s, trace 12805. Next observer evidence: {'until': 136.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12915}.
<a id="trace-2058"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (events line 2058): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12931"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (trace 12931): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.891632 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 12931. Next observer evidence: {'until': 141.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13174}.
<a id="trace-12932"></a>
- 136.60s–136.60s (×1), actor 5, squad 1 (trace 12932): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.891632 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 136.60s, trace 12932. Next observer evidence: {'until': 141.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13174}.
<a id="trace-13174"></a>
- 141.55s–141.55s (×1), actor 9, squad 1 (trace 13174): ReactToContact: cover and return fire. Knowledge: actor memory at 140.00s, trace 13062. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}.
<a id="trace-13175"></a>
- 141.55s–141.55s (×1), actor 9, squad 1 (trace 13175): new contact inside 100 m. Knowledge: actor memory at 140.00s, trace 13062. Next observer evidence: {'until': 144.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13283}.
<a id="trace-13283"></a>
- 144.85s–144.85s (×1), actor 9, squad 1 (trace 13283): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 140.00s, trace 13062. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2750}.
<a id="trace-13285"></a>
- 144.85s–144.85s (×1), actor 9, squad 1 (trace 13285): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 140.00s, trace 13062. Next observer evidence: {'until': 164.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2750}.
<a id="trace-13885"></a>
- 157.25s–157.25s (×1), actor 1, squad 0 (trace 13885): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 13758. Next observer evidence: None.
<a id="trace-13886"></a>
- 157.25s–157.25s (×1), actor 1, squad 0 (trace 13886): MoveTactically. Knowledge: actor memory at 155.00s, trace 13758. Next observer evidence: None.
<a id="trace-13887"></a>
- 157.25s–157.25s (×1), actor 1, squad 0 (trace 13887): traveling overwatch. Knowledge: actor memory at 155.00s, trace 13758. Next observer evidence: None.
<a id="trace-13888"></a>
- 157.25s–157.25s (×1), actor 1, squad 0 (trace 13888): . Knowledge: actor memory at 155.00s, trace 13758. Next observer evidence: None.
<a id="trace-13904"></a>
<a id="trace-13906"></a>
<a id="trace-13915"></a>
<a id="trace-13917"></a>
- 157.30s–157.80s (×4), actor 5, squad 0 (trace 13904): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 13760. Next observer evidence: {'until': 157.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13915}.
<a id="trace-13934"></a>
- 158.25s–158.25s (×1), actor 1, squad 0 (trace 13934): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 155.00s, trace 13758. Next observer evidence: None.
<a id="trace-13993"></a>
<a id="trace-13995"></a>
<a id="trace-14019"></a>
<a id="trace-14021"></a>
<a id="trace-14064"></a>
<a id="trace-14066"></a>
<a id="trace-14159"></a>
<a id="trace-14161"></a>
<a id="trace-14179"></a>
<a id="trace-14181"></a>
<a id="trace-14200"></a>
<a id="trace-14202"></a>
<a id="trace-14212"></a>
<a id="trace-14214"></a>
<a id="trace-14238"></a>
<a id="trace-14240"></a>
<a id="trace-14252"></a>
<a id="trace-14254"></a>
<a id="trace-14271"></a>
<a id="trace-14273"></a>
<a id="trace-14285"></a>
<a id="trace-14287"></a>
<a id="trace-14310"></a>
<a id="trace-14312"></a>
<a id="trace-14336"></a>
<a id="trace-14338"></a>
<a id="trace-14415"></a>
<a id="trace-14417"></a>
<a id="trace-14432"></a>
<a id="trace-14434"></a>
<a id="trace-14463"></a>
<a id="trace-14465"></a>
<a id="trace-14477"></a>
<a id="trace-14479"></a>
<a id="trace-14503"></a>
<a id="trace-14505"></a>
<a id="trace-14544"></a>
<a id="trace-14546"></a>
<a id="trace-14565"></a>
<a id="trace-14567"></a>
<a id="trace-14592"></a>
<a id="trace-14594"></a>
<a id="trace-14688"></a>
<a id="trace-14690"></a>
<a id="trace-14711"></a>
<a id="trace-14713"></a>
<a id="trace-14730"></a>
<a id="trace-14732"></a>
<a id="trace-14746"></a>
<a id="trace-14748"></a>
- 158.30s–171.80s (×50), actor 5, squad 0 (trace 13993): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 13760. Next observer evidence: {'until': 158.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14019}.
<a id="trace-2750"></a>
- 164.25s–164.25s (×1), actor 5, squad 1 (events line 2750): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14577}.
<a id="trace-14303"></a>
- 164.25s–164.25s (×1), actor 5, squad 1 (trace 14303): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.992509 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 14303. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14577}.
<a id="trace-14304"></a>
- 164.25s–164.25s (×1), actor 5, squad 1 (trace 14304): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.992509 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 164.25s, trace 14304. Next observer evidence: {'until': 169.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14577}.
<a id="trace-14577"></a>
- 169.20s–169.20s (×1), actor 9, squad 1 (trace 14577): MoveTactically. Knowledge: actor memory at 165.00s, trace 14348. Next observer evidence: None.
<a id="trace-14578"></a>
- 169.20s–169.20s (×1), actor 9, squad 1 (trace 14578): received platoon directive. Knowledge: actor memory at 165.00s, trace 14348. Next observer evidence: None.
<a id="trace-14585"></a>
- 169.25s–169.25s (×1), actor 9, squad 1 (trace 14585): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 165.00s, trace 14348. Next observer evidence: {'until': 199.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17542}.
<a id="trace-14754"></a>
- 171.85s–171.85s (×1), actor 1, squad 0 (trace 14754): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 170.00s, trace 14617. Next observer evidence: {'until': 172.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14773}.
<a id="trace-14773"></a>
<a id="trace-14775"></a>
<a id="trace-14794"></a>
<a id="trace-14796"></a>
- 172.30s–172.80s (×4), actor 5, squad 0 (trace 14773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14619. Next observer evidence: {'until': 172.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12600174185817184, 'next_transition': 14794}.
<a id="trace-14807"></a>
- 172.85s–172.85s (×1), actor 1, squad 0 (trace 14807): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 170.00s, trace 14617. Next observer evidence: {'until': 173.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040131309055098, 'next_transition': 14922}.
<a id="trace-14922"></a>
<a id="trace-14924"></a>
<a id="trace-14950"></a>
<a id="trace-14952"></a>
<a id="trace-14998"></a>
<a id="trace-15000"></a>
<a id="trace-15081"></a>
<a id="trace-15083"></a>
<a id="trace-15097"></a>
<a id="trace-15099"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15142"></a>
<a id="trace-15144"></a>
<a id="trace-15159"></a>
<a id="trace-15161"></a>
- 173.30s–177.30s (×16), actor 5, squad 0 (trace 14922): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 170.00s, trace 14619. Next observer evidence: {'until': 173.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18898463093045687, 'next_transition': 14950}.
<a id="trace-3040"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (events line 3040): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40579853724837, 'next_transition': 15204}.
<a id="trace-15187"></a>
- 178.05s–178.05s (×1), actor 5, squad 0 (trace 15187): renew committed intent (75 s lifetime). Knowledge: actor memory at 178.05s, trace 15187. Next observer evidence: {'until': 178.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.40579853724837, 'next_transition': 15204}.
<a id="trace-15204"></a>
<a id="trace-15206"></a>
<a id="trace-15220"></a>
<a id="trace-15222"></a>
<a id="trace-15243"></a>
<a id="trace-15245"></a>
<a id="trace-15262"></a>
<a id="trace-15264"></a>
<a id="trace-15355"></a>
<a id="trace-15357"></a>
<a id="trace-15377"></a>
<a id="trace-15379"></a>
<a id="trace-15397"></a>
<a id="trace-15399"></a>
<a id="trace-15410"></a>
<a id="trace-15412"></a>
<a id="trace-15453"></a>
<a id="trace-15455"></a>
<a id="trace-15471"></a>
<a id="trace-15473"></a>
<a id="trace-15491"></a>
<a id="trace-15493"></a>
<a id="trace-15517"></a>
<a id="trace-15519"></a>
<a id="trace-15618"></a>
<a id="trace-15620"></a>
<a id="trace-15633"></a>
<a id="trace-15635"></a>
<a id="trace-15661"></a>
<a id="trace-15663"></a>
<a id="trace-15680"></a>
<a id="trace-15682"></a>
<a id="trace-15702"></a>
<a id="trace-15704"></a>
- 178.30s–187.30s (×34), actor 5, squad 0 (trace 15204): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.05s, trace 15187. Next observer evidence: {'until': 178.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560011330978847, 'next_transition': 15220}.
<a id="trace-15713"></a>
- 187.45s–187.45s (×1), actor 1, squad 0 (trace 15713): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15752}.
<a id="trace-15752"></a>
- 188.45s–188.45s (×1), actor 1, squad 0 (trace 15752): matching received arrivals: deployment leg complete. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.03150253729463771, 'next_transition': 15767}.
<a id="trace-15767"></a>
- 188.70s–188.70s (×1), actor 1, squad 0 (trace 15767): Reorganise: completed/failed drill. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16828498992252366, 'next_transition': 15788}.
<a id="trace-15771"></a>
- 188.70s–188.70s (×1), actor 1, squad 0 (trace 15771): ReactToContact: cover and return fire. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16828498992252366, 'next_transition': 15788}.
<a id="trace-15772"></a>
- 188.70s–188.70s (×1), actor 1, squad 0 (trace 15772): bounding overwatch. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16828498992252366, 'next_transition': 15788}.
<a id="trace-15773"></a>
- 188.70s–188.70s (×1), actor 1, squad 0 (trace 15773): Reorganise complete: known contact. Knowledge: actor memory at 185.00s, trace 15549. Next observer evidence: {'until': 188.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.16828498992252366, 'next_transition': 15788}.
<a id="trace-15788"></a>
<a id="trace-15790"></a>
<a id="trace-15811"></a>
<a id="trace-15813"></a>
<a id="trace-15836"></a>
<a id="trace-15838"></a>
<a id="trace-15930"></a>
<a id="trace-15932"></a>
<a id="trace-15940"></a>
<a id="trace-15942"></a>
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
- 188.80s–192.30s (×14), actor 5, squad 0 (trace 15788): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 185.00s, trace 15551. Next observer evidence: {'until': 189.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040027557764553, 'next_transition': 15811}.
<a id="trace-16011"></a>
- 192.40s–192.40s (×1), actor 1, squad 0 (trace 16011): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 190.00s, trace 15851. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16081}.
<a id="trace-16012"></a>
- 192.40s–192.40s (×1), actor 1, squad 0 (trace 16012): rearward bound: one stationary suppressing element. Knowledge: actor memory at 190.00s, trace 15851. Next observer evidence: {'until': 192.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16081}.
<a id="trace-16081"></a>
<a id="trace-16083"></a>
<a id="trace-16110"></a>
<a id="trace-16112"></a>
<a id="trace-16131"></a>
<a id="trace-16133"></a>
<a id="trace-16253"></a>
<a id="trace-16255"></a>
<a id="trace-16274"></a>
<a id="trace-16276"></a>
<a id="trace-16295"></a>
<a id="trace-16297"></a>
<a id="trace-16312"></a>
<a id="trace-16314"></a>
<a id="trace-16347"></a>
<a id="trace-16349"></a>
<a id="trace-16387"></a>
<a id="trace-16389"></a>
<a id="trace-16411"></a>
<a id="trace-16413"></a>
<a id="trace-16509"></a>
<a id="trace-16511"></a>
<a id="trace-16532"></a>
<a id="trace-16534"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16590"></a>
<a id="trace-16592"></a>
<a id="trace-16604"></a>
<a id="trace-16606"></a>
<a id="trace-16625"></a>
<a id="trace-16627"></a>
<a id="trace-16643"></a>
<a id="trace-16645"></a>
- 192.80s–203.80s (×34), actor 5, squad 0 (trace 16081): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.00s, trace 15853. Next observer evidence: {'until': 193.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.06301107204293535, 'next_transition': 16110}.
<a id="trace-16664"></a>
- 204.25s–204.25s (×1), actor 1, squad 0 (trace 16664): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 200.00s, trace 16437. Next observer evidence: None.
<a id="trace-16665"></a>
- 204.25s–204.25s (×1), actor 1, squad 0 (trace 16665): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 200.00s, trace 16437. Next observer evidence: None.
<a id="trace-16776"></a>
<a id="trace-16778"></a>
<a id="trace-16793"></a>
<a id="trace-16795"></a>
<a id="trace-16880"></a>
<a id="trace-16882"></a>
<a id="trace-16923"></a>
<a id="trace-16925"></a>
<a id="trace-16949"></a>
<a id="trace-16951"></a>
<a id="trace-16972"></a>
<a id="trace-16974"></a>
<a id="trace-16989"></a>
<a id="trace-16991"></a>
<a id="trace-17011"></a>
<a id="trace-17013"></a>
<a id="trace-17031"></a>
<a id="trace-17033"></a>
<a id="trace-17067"></a>
<a id="trace-17069"></a>
<a id="trace-17159"></a>
<a id="trace-17161"></a>
<a id="trace-17196"></a>
<a id="trace-17198"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17234"></a>
<a id="trace-17236"></a>
<a id="trace-17261"></a>
<a id="trace-17263"></a>
<a id="trace-17284"></a>
<a id="trace-17286"></a>
<a id="trace-17302"></a>
<a id="trace-17304"></a>
- 204.30s–213.80s (×34), actor 5, squad 0 (trace 16776): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 200.00s, trace 16439. Next observer evidence: {'until': 204.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1259831377892176, 'next_transition': 16793}.
<a id="trace-17312"></a>
- 214.05s–214.05s (×1), actor 1, squad 0 (trace 17312): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 210.00s, trace 17080. Next observer evidence: {'until': 214.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3780047158233545, 'next_transition': 17331}.
<a id="trace-17331"></a>
<a id="trace-17333"></a>
<a id="trace-17347"></a>
<a id="trace-17349"></a>
<a id="trace-17439"></a>
<a id="trace-17441"></a>
<a id="trace-17484"></a>
<a id="trace-17486"></a>
<a id="trace-17535"></a>
<a id="trace-17537"></a>
<a id="trace-17576"></a>
<a id="trace-17578"></a>
<a id="trace-17614"></a>
<a id="trace-17616"></a>
<a id="trace-17639"></a>
<a id="trace-17641"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17751"></a>
<a id="trace-17753"></a>
<a id="trace-17766"></a>
<a id="trace-17768"></a>
<a id="trace-17803"></a>
<a id="trace-17805"></a>
<a id="trace-17823"></a>
<a id="trace-17825"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17876"></a>
<a id="trace-17878"></a>
<a id="trace-17954"></a>
<a id="trace-17956"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17993"></a>
<a id="trace-17995"></a>
<a id="trace-18022"></a>
<a id="trace-18024"></a>
<a id="trace-18033"></a>
<a id="trace-18035"></a>
<a id="trace-18053"></a>
<a id="trace-18055"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18095"></a>
<a id="trace-18097"></a>
<a id="trace-18172"></a>
<a id="trace-18174"></a>
<a id="trace-18190"></a>
<a id="trace-18192"></a>
<a id="trace-18212"></a>
<a id="trace-18214"></a>
<a id="trace-18231"></a>
<a id="trace-18233"></a>
<a id="trace-18250"></a>
<a id="trace-18252"></a>
<a id="trace-18262"></a>
<a id="trace-18264"></a>
- 214.30s–232.80s (×58), actor 5, squad 0 (trace 17331): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 210.00s, trace 17082. Next observer evidence: {'until': 214.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1339909852744419, 'next_transition': 17347}.
<a id="trace-17542"></a>
- 217.30s–217.30s (×1), actor 9, squad 1 (trace 17542): traveling overwatch. Knowledge: actor memory at 215.00s, trace 17369. Next observer evidence: {'until': 219.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3599}.
<a id="trace-17543"></a>
- 217.30s–217.30s (×1), actor 9, squad 1 (trace 17543): current contact unknown for 10 s. Knowledge: actor memory at 215.00s, trace 17369. Next observer evidence: {'until': 219.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3599}.
<a id="trace-3599"></a>
- 219.50s–219.50s (×1), actor 5, squad 1 (events line 3599): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 224.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17868}.
<a id="trace-17622"></a>
- 219.50s–219.50s (×1), actor 5, squad 1 (trace 17622): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 219.50s, trace 17622. Next observer evidence: {'until': 224.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17868}.
<a id="trace-17623"></a>
- 219.50s–219.50s (×1), actor 5, squad 1 (trace 17623): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 219.50s, trace 17623. Next observer evidence: {'until': 224.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 17868}.
<a id="trace-17868"></a>
- 224.45s–224.45s (×1), actor 9, squad 1 (trace 17868): received platoon directive. Knowledge: actor memory at 220.00s, trace 17653. Next observer evidence: {'until': 254.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4320}.
<a id="trace-3758"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (events line 3758): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18301}.
<a id="trace-18286"></a>
<a id="trace-18288"></a>
- 233.30s–233.30s (×2), actor 5, squad 0 (trace 18286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 230.00s, trace 18108. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18301}.
<a id="trace-18293"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (trace 18293): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.30s, trace 18293. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18301}.
<a id="trace-18294"></a>
- 233.30s–233.30s (×1), actor 5, squad 0 (trace 18294): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 233.30s, trace 18294. Next observer evidence: {'until': 233.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18301}.
<a id="trace-18301"></a>
<a id="trace-18303"></a>
<a id="trace-18320"></a>
<a id="trace-18322"></a>
<a id="trace-18332"></a>
<a id="trace-18334"></a>
<a id="trace-18412"></a>
<a id="trace-18414"></a>
<a id="trace-18436"></a>
<a id="trace-18438"></a>
<a id="trace-18454"></a>
<a id="trace-18456"></a>
<a id="trace-18472"></a>
<a id="trace-18474"></a>
<a id="trace-18511"></a>
<a id="trace-18513"></a>
<a id="trace-18523"></a>
<a id="trace-18525"></a>
<a id="trace-18545"></a>
<a id="trace-18547"></a>
<a id="trace-18563"></a>
<a id="trace-18565"></a>
<a id="trace-18644"></a>
<a id="trace-18646"></a>
<a id="trace-18654"></a>
<a id="trace-18656"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18699"></a>
<a id="trace-18701"></a>
<a id="trace-18714"></a>
<a id="trace-18716"></a>
<a id="trace-18731"></a>
<a id="trace-18733"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18765"></a>
<a id="trace-18767"></a>
<a id="trace-18780"></a>
<a id="trace-18782"></a>
<a id="trace-18901"></a>
<a id="trace-18903"></a>
<a id="trace-18914"></a>
<a id="trace-18916"></a>
<a id="trace-18941"></a>
<a id="trace-18943"></a>
<a id="trace-18957"></a>
<a id="trace-18959"></a>
<a id="trace-18975"></a>
<a id="trace-18977"></a>
<a id="trace-19004"></a>
<a id="trace-19006"></a>
<a id="trace-19082"></a>
<a id="trace-19084"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19169"></a>
<a id="trace-19171"></a>
<a id="trace-19188"></a>
<a id="trace-19190"></a>
<a id="trace-19200"></a>
<a id="trace-19202"></a>
<a id="trace-19215"></a>
<a id="trace-19217"></a>
<a id="trace-19231"></a>
<a id="trace-19233"></a>
<a id="trace-19322"></a>
<a id="trace-19324"></a>
<a id="trace-19337"></a>
<a id="trace-19339"></a>
<a id="trace-19368"></a>
<a id="trace-19370"></a>
<a id="trace-19401"></a>
<a id="trace-19403"></a>
<a id="trace-19419"></a>
<a id="trace-19421"></a>
<a id="trace-19445"></a>
<a id="trace-19447"></a>
<a id="trace-19547"></a>
<a id="trace-19549"></a>
<a id="trace-19562"></a>
<a id="trace-19564"></a>
<a id="trace-19594"></a>
<a id="trace-19596"></a>
<a id="trace-19621"></a>
<a id="trace-19623"></a>
<a id="trace-19635"></a>
<a id="trace-19637"></a>
<a id="trace-19657"></a>
<a id="trace-19659"></a>
<a id="trace-19670"></a>
<a id="trace-19672"></a>
<a id="trace-19752"></a>
<a id="trace-19754"></a>
<a id="trace-19765"></a>
<a id="trace-19767"></a>
<a id="trace-19805"></a>
<a id="trace-19807"></a>
<a id="trace-19837"></a>
<a id="trace-19839"></a>
<a id="trace-19854"></a>
<a id="trace-19856"></a>
<a id="trace-19881"></a>
<a id="trace-19883"></a>
<a id="trace-19893"></a>
<a id="trace-19895"></a>
<a id="trace-19976"></a>
<a id="trace-19978"></a>
<a id="trace-19986"></a>
<a id="trace-19988"></a>
<a id="trace-20017"></a>
<a id="trace-20019"></a>
<a id="trace-20037"></a>
<a id="trace-20039"></a>
<a id="trace-20060"></a>
<a id="trace-20062"></a>
<a id="trace-20080"></a>
<a id="trace-20082"></a>
<a id="trace-20096"></a>
<a id="trace-20098"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20125"></a>
<a id="trace-20127"></a>
<a id="trace-20207"></a>
<a id="trace-20209"></a>
<a id="trace-20217"></a>
<a id="trace-20219"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20250"></a>
<a id="trace-20252"></a>
<a id="trace-20268"></a>
<a id="trace-20270"></a>
<a id="trace-20282"></a>
<a id="trace-20284"></a>
<a id="trace-20299"></a>
<a id="trace-20301"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20340"></a>
<a id="trace-20342"></a>
<a id="trace-20436"></a>
<a id="trace-20438"></a>
<a id="trace-20446"></a>
<a id="trace-20448"></a>
<a id="trace-20464"></a>
<a id="trace-20466"></a>
<a id="trace-20481"></a>
<a id="trace-20483"></a>
<a id="trace-20501"></a>
<a id="trace-20503"></a>
<a id="trace-20513"></a>
<a id="trace-20515"></a>
<a id="trace-20532"></a>
<a id="trace-20534"></a>
<a id="trace-20544"></a>
<a id="trace-20546"></a>
<a id="trace-20561"></a>
<a id="trace-20563"></a>
<a id="trace-20578"></a>
<a id="trace-20580"></a>
<a id="trace-20659"></a>
<a id="trace-20661"></a>
<a id="trace-20680"></a>
<a id="trace-20682"></a>
<a id="trace-20707"></a>
<a id="trace-20709"></a>
<a id="trace-20727"></a>
<a id="trace-20729"></a>
<a id="trace-20740"></a>
<a id="trace-20742"></a>
<a id="trace-20763"></a>
<a id="trace-20765"></a>
<a id="trace-20795"></a>
<a id="trace-20797"></a>
<a id="trace-20883"></a>
<a id="trace-20885"></a>
<a id="trace-20899"></a>
<a id="trace-20901"></a>
<a id="trace-20915"></a>
<a id="trace-20917"></a>
<a id="trace-20935"></a>
<a id="trace-20937"></a>
<a id="trace-20968"></a>
<a id="trace-20970"></a>
<a id="trace-20986"></a>
<a id="trace-20988"></a>
<a id="trace-20997"></a>
<a id="trace-20999"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21121"></a>
<a id="trace-21123"></a>
<a id="trace-21139"></a>
<a id="trace-21141"></a>
<a id="trace-21158"></a>
<a id="trace-21160"></a>
<a id="trace-21175"></a>
<a id="trace-21177"></a>
<a id="trace-21192"></a>
<a id="trace-21194"></a>
<a id="trace-21211"></a>
<a id="trace-21213"></a>
<a id="trace-21246"></a>
<a id="trace-21248"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21368"></a>
<a id="trace-21370"></a>
<a id="trace-21381"></a>
<a id="trace-21383"></a>
- 233.80s–301.80s (×212), actor 5, squad 0 (trace 18301): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 233.30s, trace 18294. Next observer evidence: {'until': 234.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18320}.
<a id="trace-4320"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (events line 4320): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 318.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5148}.
<a id="trace-20770"></a>
- 288.50s–288.50s (×1), actor 5, squad 1 (trace 20770): renew committed intent (75 s lifetime). Knowledge: actor memory at 288.50s, trace 20770. Next observer evidence: {'until': 318.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5148}.
<a id="trace-4460"></a>
- 302.30s–302.30s (×1), actor 5, squad 0 (events line 4460): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21396"></a>
<a id="trace-21398"></a>
- 302.30s–302.30s (×2), actor 5, squad 0 (trace 21396): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 300.00s, trace 21268. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21415}.
<a id="trace-21403"></a>
- 302.30s–302.30s (×1), actor 5, squad 0 (trace 21403): renew committed intent (75 s lifetime). Knowledge: actor memory at 302.30s, trace 21403. Next observer evidence: {'until': 302.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21415}.
<a id="trace-21415"></a>
<a id="trace-21417"></a>
<a id="trace-21449"></a>
<a id="trace-21451"></a>
<a id="trace-21468"></a>
<a id="trace-21470"></a>
<a id="trace-21479"></a>
<a id="trace-21481"></a>
<a id="trace-21562"></a>
<a id="trace-21564"></a>
<a id="trace-21597"></a>
<a id="trace-21599"></a>
<a id="trace-21609"></a>
<a id="trace-21611"></a>
<a id="trace-21627"></a>
<a id="trace-21629"></a>
<a id="trace-21639"></a>
<a id="trace-21641"></a>
- 302.80s–307.80s (×18), actor 5, squad 0 (trace 21415): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 302.30s, trace 21403. Next observer evidence: {'until': 303.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21449}.
<a id="trace-21651"></a>
- 307.85s–307.85s (×1), actor 1, squad 0 (trace 21651): MoveTactically. Knowledge: actor memory at 305.00s, trace 21495. Next observer evidence: {'until': 308.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749194900057695, 'next_transition': 21846}.
<a id="trace-21652"></a>
- 307.85s–307.85s (×1), actor 1, squad 0 (trace 21652): traveling. Knowledge: actor memory at 305.00s, trace 21495. Next observer evidence: {'until': 308.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749194900057695, 'next_transition': 21846}.
<a id="trace-21653"></a>
- 307.85s–307.85s (×1), actor 1, squad 0 (trace 21653): received platoon directive. Knowledge: actor memory at 305.00s, trace 21495. Next observer evidence: {'until': 308.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15749194900057695, 'next_transition': 21846}.
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21874"></a>
<a id="trace-21876"></a>
<a id="trace-21978"></a>
<a id="trace-21980"></a>
<a id="trace-22017"></a>
<a id="trace-22019"></a>
<a id="trace-22034"></a>
<a id="trace-22036"></a>
<a id="trace-22066"></a>
<a id="trace-22068"></a>
<a id="trace-22083"></a>
<a id="trace-22085"></a>
<a id="trace-22107"></a>
<a id="trace-22109"></a>
<a id="trace-22123"></a>
<a id="trace-22125"></a>
<a id="trace-22148"></a>
<a id="trace-22150"></a>
<a id="trace-22169"></a>
<a id="trace-22171"></a>
<a id="trace-22269"></a>
<a id="trace-22271"></a>
<a id="trace-22296"></a>
<a id="trace-22298"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22337"></a>
<a id="trace-22339"></a>
<a id="trace-22356"></a>
<a id="trace-22358"></a>
<a id="trace-22385"></a>
<a id="trace-22387"></a>
<a id="trace-22407"></a>
<a id="trace-22409"></a>
<a id="trace-22429"></a>
<a id="trace-22431"></a>
<a id="trace-22443"></a>
<a id="trace-22445"></a>
<a id="trace-22525"></a>
<a id="trace-22527"></a>
- 308.80s–320.30s (×42), actor 5, squad 0 (trace 21846): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 305.00s, trace 21497. Next observer evidence: {'until': 309.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5669853050712954, 'next_transition': 21874}.
<a id="trace-22545"></a>
- 320.65s–320.65s (×1), actor 1, squad 0 (trace 22545): matching received arrivals: traveling stage complete. Knowledge: actor memory at 320.00s, trace 22452. Next observer evidence: {'until': 321.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5670107161526995, 'next_transition': 22719}.
<a id="trace-22719"></a>
<a id="trace-22721"></a>
<a id="trace-22743"></a>
<a id="trace-22745"></a>
<a id="trace-22773"></a>
<a id="trace-22775"></a>
<a id="trace-22785"></a>
<a id="trace-22787"></a>
<a id="trace-22813"></a>
<a id="trace-22815"></a>
<a id="trace-22829"></a>
<a id="trace-22831"></a>
<a id="trace-22859"></a>
<a id="trace-22861"></a>
<a id="trace-22878"></a>
<a id="trace-22880"></a>
<a id="trace-23004"></a>
<a id="trace-23006"></a>
<a id="trace-23020"></a>
<a id="trace-23022"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23087"></a>
<a id="trace-23089"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23238"></a>
<a id="trace-23240"></a>
<a id="trace-23254"></a>
<a id="trace-23256"></a>
<a id="trace-23288"></a>
<a id="trace-23290"></a>
- 321.30s–331.80s (×32), actor 5, squad 0 (trace 22719): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 22454. Next observer evidence: {'until': 321.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1025344114816822, 'next_transition': 22743}.
<a id="trace-23307"></a>
- 332.05s–332.05s (×1), actor 1, squad 0 (trace 23307): matching received arrivals: deployment leg complete. Knowledge: actor memory at 330.00s, trace 23157. Next observer evidence: {'until': 332.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2519999999999996, 'next_transition': 23319}.
<a id="trace-23319"></a>
<a id="trace-23321"></a>
<a id="trace-23340"></a>
<a id="trace-23342"></a>
<a id="trace-23359"></a>
<a id="trace-23361"></a>
<a id="trace-23375"></a>
<a id="trace-23377"></a>
<a id="trace-23399"></a>
<a id="trace-23401"></a>
<a id="trace-23493"></a>
<a id="trace-23495"></a>
<a id="trace-23530"></a>
<a id="trace-23532"></a>
<a id="trace-23540"></a>
<a id="trace-23542"></a>
<a id="trace-23561"></a>
<a id="trace-23563"></a>
<a id="trace-23591"></a>
<a id="trace-23593"></a>
<a id="trace-23614"></a>
<a id="trace-23616"></a>
<a id="trace-23725"></a>
<a id="trace-23727"></a>
<a id="trace-23737"></a>
<a id="trace-23739"></a>
<a id="trace-23758"></a>
<a id="trace-23760"></a>
<a id="trace-23768"></a>
<a id="trace-23770"></a>
<a id="trace-23788"></a>
<a id="trace-23790"></a>
<a id="trace-23804"></a>
<a id="trace-23806"></a>
<a id="trace-23823"></a>
<a id="trace-23825"></a>
- 332.30s–343.30s (×36), actor 5, squad 0 (trace 23319): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 330.00s, trace 23159. Next observer evidence: {'until': 332.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7560000000000002, 'next_transition': 23340}.
<a id="trace-4964"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (events line 4964): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-23835"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (trace 23835): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 23835. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23840}.
<a id="trace-23836"></a>
- 343.70s–343.70s (×1), actor 5, squad 0 (trace 23836): renew committed FightHere: completed advance leg, next own-lane objective; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 343.70s, trace 23836. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23840}.
<a id="trace-23840"></a>
<a id="trace-23842"></a>
<a id="trace-23857"></a>
<a id="trace-23859"></a>
<a id="trace-23877"></a>
<a id="trace-23879"></a>
<a id="trace-23979"></a>
<a id="trace-23981"></a>
<a id="trace-23995"></a>
<a id="trace-23997"></a>
<a id="trace-24022"></a>
<a id="trace-24024"></a>
<a id="trace-24036"></a>
<a id="trace-24038"></a>
<a id="trace-24066"></a>
<a id="trace-24068"></a>
- 343.80s–348.80s (×16), actor 5, squad 0 (trace 23840): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 343.70s, trace 23836. Next observer evidence: {'until': 344.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23857}.
<a id="trace-24080"></a>
- 349.25s–349.25s (×1), actor 1, squad 0 (trace 24080): Reorganise: completed/failed drill. Knowledge: actor memory at 345.00s, trace 23887. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24329}.
<a id="trace-24084"></a>
- 349.25s–349.25s (×1), actor 1, squad 0 (trace 24084): MoveTactically. Knowledge: actor memory at 345.00s, trace 23887. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24329}.
<a id="trace-24085"></a>
- 349.25s–349.25s (×1), actor 1, squad 0 (trace 24085): traveling overwatch. Knowledge: actor memory at 345.00s, trace 23887. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24329}.
<a id="trace-24086"></a>
- 349.25s–349.25s (×1), actor 1, squad 0 (trace 24086): Reorganise complete. Knowledge: actor memory at 345.00s, trace 23887. Next observer evidence: {'until': 349.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24329}.
<a id="trace-24329"></a>
<a id="trace-24331"></a>
<a id="trace-24436"></a>
<a id="trace-24438"></a>
<a id="trace-24455"></a>
<a id="trace-24457"></a>
<a id="trace-24480"></a>
<a id="trace-24482"></a>
<a id="trace-24505"></a>
<a id="trace-24507"></a>
<a id="trace-24522"></a>
<a id="trace-24524"></a>
<a id="trace-24546"></a>
<a id="trace-24548"></a>
<a id="trace-24563"></a>
<a id="trace-24565"></a>
<a id="trace-24609"></a>
<a id="trace-24611"></a>
<a id="trace-24691"></a>
<a id="trace-24693"></a>
<a id="trace-24709"></a>
<a id="trace-24711"></a>
<a id="trace-24736"></a>
<a id="trace-24738"></a>
<a id="trace-24759"></a>
<a id="trace-24761"></a>
<a id="trace-24806"></a>
<a id="trace-24808"></a>
<a id="trace-24830"></a>
<a id="trace-24832"></a>
<a id="trace-24841"></a>
<a id="trace-24843"></a>
<a id="trace-24860"></a>
<a id="trace-24862"></a>
<a id="trace-24874"></a>
<a id="trace-24876"></a>
- 349.80s–359.80s (×36), actor 5, squad 0 (trace 24329): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 345.00s, trace 23889. Next observer evidence: {'until': 350.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.1025013834563122, 'next_transition': 24436}.
<a id="trace-5148"></a>
- 357.50s–357.50s (×1), actor 5, squad 1 (events line 5148): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-24794"></a>
- 357.50s–357.50s (×1), actor 5, squad 1 (trace 24794): renew committed intent (75 s lifetime). Knowledge: actor memory at 357.50s, trace 24794. Next observer evidence: {'until': 360, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.

## Net delivery

241 matched order/radio deliveries; 472 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.497s; maximum 5.350s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1062: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1064: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1065: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1068: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1069: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1071: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1072: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1336: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.25s leader 5, trace 1339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1731: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1732: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1733: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1736: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1737: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1738: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1739: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1740: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1741: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2995: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3003: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3005: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3006: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3007: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3008: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3009: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3010: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3011: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3013: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3014: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4310: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4316: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4318: estimate 11.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4320: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4321: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4322: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4323: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4324: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4325: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4326: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4327: estimate 2.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4328: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4329: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 4694: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 4695: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 4696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 4697: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 4698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 4699: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 4700: estimate 12.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 4701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 4702: estimate 11.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 4703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 4704: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 4705: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 4706: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 4707: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 4708: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 4709: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 4710: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 4711: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 4712: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 4713: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5028: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5029: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5031: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5033: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5034: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5035: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5036: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5038: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5039: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5040: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5041: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5042: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5043: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5044: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5045: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5046: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5047: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5585: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 39.85s leader 5, trace 5586: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 5597: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 5598: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 5599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 5600: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 5601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 5602: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 5603: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 5604: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 5605: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 5606: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 5607: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 5608: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 5609: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 5610: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 5611: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 5612: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 5613: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 5614: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 5615: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 6107: estimate 12.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 6108: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 6109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 6110: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 6111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 6112: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 6113: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 6114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 6115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 6116: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 6117: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 6118: estimate 4.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 6119: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 6120: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 6121: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 6122: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 6123: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 6124: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 6125: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 6372: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 6373: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 6374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 6375: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 6376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 6377: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 6378: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 6379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 6380: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 6381: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 6382: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 6383: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 6384: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 6385: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 6386: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 6387: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 6388: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 6389: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 6390: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 6623: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 6624: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 6625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 6626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 6627: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 6628: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 6629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 6630: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 6631: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 6632: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 6633: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 6634: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 6635: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 6636: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 6637: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 6638: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 6639: estimate 4.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 6640: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 7085: estimate 12.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 7086: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 7087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 7088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 7089: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 7090: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 7091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 7092: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 7093: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 7094: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 7095: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 7096: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 7097: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 7098: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 7099: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 7100: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 7101: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 7102: estimate 4.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 0, trace 7381: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 7382: estimate 11.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 2, trace 7383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 7384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 7385: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 7386: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 7387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 7388: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 7389: estimate 4.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 7390: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 7391: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 7392: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 7393: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 7394: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 7395: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 7396: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 7397: estimate 4.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 7398: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 0, trace 7715: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 7716: estimate 10.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 2, trace 7717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 7718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 7719: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 7720: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 7721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 7722: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 7723: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 7724: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 7725: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 7726: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 7727: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 7728: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 7729: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 7730: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 7731: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 7732: estimate 4.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 0, trace 7954: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 7955: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 2, trace 7956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 7957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 7958: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 7959: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 7960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 7961: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 7962: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 7963: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 7964: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 7965: estimate 4.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 7966: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 7967: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 7968: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 7969: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 7970: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 7971: estimate 4.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 0, trace 8193: estimate 11.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 8194: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 2, trace 8195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 8196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 8197: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 8198: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 8199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 8200: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 8201: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 8202: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 8203: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 8204: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 8205: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 8206: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 8207: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 8208: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 8209: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 8210: estimate 4.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 8296: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.30s leader 5, trace 8297: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 0, trace 8408: estimate 11.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 1, trace 8409: estimate 10.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 2, trace 8410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 8411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 8412: estimate 11.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 8413: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 8414: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 8415: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 8416: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 8417: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 8418: estimate 3.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 8419: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 8420: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 8421: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 8422: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 8423: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 8424: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 8425: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 0, trace 10375: estimate 10.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 1, trace 10376: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 2, trace 10377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 10378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 10379: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 10380: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 10381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 10382: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 10383: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 10384: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 10385: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 10386: estimate 3.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 10387: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 10388: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 10389: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 10390: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 10391: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 10392: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 0, trace 10645: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 1, trace 10646: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 2, trace 10647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 10648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 10649: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 10650: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 10651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 10652: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 10653: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 10654: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 10655: estimate 3.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 10656: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 10657: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 10658: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 10659: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 10660: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 10661: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 10662: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 0, trace 10902: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 1, trace 10903: estimate 9.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 2, trace 10904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 10905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 10906: estimate 10.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 10907: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 10908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 10909: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 10910: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 10911: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 10912: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 10913: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 10914: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 10915: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 10916: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 10917: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 10918: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 10919: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 0, trace 11136: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 1, trace 11137: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 2, trace 11138: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 11139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 11140: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 11141: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 11142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 11143: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 11144: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 11145: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 11146: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 11147: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 11148: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 11149: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 11150: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 11151: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 11152: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 11153: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 11340: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 11341: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 108.95s leader 5, trace 11342: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 1, trace 11376: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 2, trace 11377: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 11378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 11379: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 11380: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 11381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 11382: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 11383: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 11384: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 11385: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 11386: estimate 4.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 11387: estimate 4.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 11388: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 11389: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 11390: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 11391: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 11392: estimate 5.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 1, trace 11778: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 2, trace 11779: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 11780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 11781: estimate 9.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 11782: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 11783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 11784: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 11785: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 11786: estimate 4.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 11787: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 11788: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 11789: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 11790: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 11791: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 11792: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 11793: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 11794: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 1, trace 12162: estimate 11.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 12163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 12164: estimate 9.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 12165: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 12166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 12167: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 12168: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 12169: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 12170: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 12171: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 12172: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 12173: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 12174: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 12175: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 12176: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 12177: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 1, trace 12377: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 12378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 12379: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 12380: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 12381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 12382: estimate 2.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 12383: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 12384: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 12385: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 12386: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 12387: estimate 4.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 12388: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 12389: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 12390: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 12391: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 12392: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 1, trace 12591: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 12592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 12593: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 12594: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 12595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 12596: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 12597: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 12598: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 12599: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 12600: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 12601: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 12602: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 12603: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 12604: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 12605: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 12606: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 1, trace 12803: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 12804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 12805: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 12806: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 12807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 12808: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 12809: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 12810: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 12811: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 12812: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 12813: estimate 4.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 12814: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 12815: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 12816: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 12817: estimate 4.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 12818: estimate 4.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 12931: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 136.60s leader 5, trace 12932: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 1, trace 13057: estimate 10.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 13058: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 13059: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 13060: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 13061: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 13062: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 13063: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 13064: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 13065: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 13066: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 13067: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 13068: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 13069: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 13070: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 13071: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 13072: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 1, trace 13287: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 13288: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 13289: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 13290: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 13291: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 13292: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 13293: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 13294: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 13295: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 13296: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 13297: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 13298: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 13299: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 13300: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 13301: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 13302: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 1, trace 13522: estimate 10.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 13523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 13524: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 13525: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 13526: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 13527: estimate 2.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 13528: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 13529: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 13530: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 13531: estimate 3.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 13532: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 13533: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 13534: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 13535: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 13536: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 13537: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 1, trace 13758: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 13759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 13760: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 13761: estimate 10.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 13762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 13763: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 13764: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 13765: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 13766: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 13767: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 13768: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 13769: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 13770: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 13771: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 13772: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 13773: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 1, trace 14077: estimate 9.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 14078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 14079: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 14080: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 14081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 14082: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 14083: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 14084: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 14085: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 14086: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 14087: estimate 2.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 14088: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 14089: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 14090: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 14091: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 14092: estimate 2.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 14303: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 164.25s leader 5, trace 14304: estimate 10.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 1, trace 14343: estimate 9.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 14344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 14345: estimate 10.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 14346: estimate 10.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 14347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 14348: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 14349: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 14350: estimate 2.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 14351: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 14352: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 14353: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 14354: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 14355: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 14356: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 14357: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 14358: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 1, trace 14617: estimate 9.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 14618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 14619: estimate 9.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 14620: estimate 9.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 14621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 14622: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 14623: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 14624: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 14625: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 14626: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 14627: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 14628: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 14629: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 14630: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 14631: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 14632: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 1, trace 15007: estimate 9.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 15008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 15009: estimate 9.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 15010: estimate 9.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 15011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 15012: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 15013: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 15014: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 15015: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 15016: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 15017: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 15018: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 15019: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 15020: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 15021: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 15022: estimate 2.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.05s leader 5, trace 15187: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 1, trace 15272: estimate 8.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 15273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 15274: estimate 9.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 15275: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 15276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 15277: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 15278: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 15279: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 15280: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 15281: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 15282: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 15283: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 15284: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 15285: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 15286: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 15287: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 1, trace 15549: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 15550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 15551: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 15552: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 15553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 15554: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 15555: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 15556: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 15557: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 15558: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 15559: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 15560: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 15561: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 15562: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 15563: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 15564: estimate 2.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 1, trace 15851: estimate 8.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 15852: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 15853: estimate 9.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 15854: estimate 9.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 15855: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 15856: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 15857: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 15858: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 15859: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 15860: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 15861: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 15862: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 15863: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 15864: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 15865: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 15866: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 1, trace 16175: estimate 8.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 16176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 16177: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 16178: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 16179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16180: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 16181: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 16182: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 16183: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 16184: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 16185: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16186: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16187: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 16188: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 16189: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 16190: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 1, trace 16437: estimate 8.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 16438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 16439: estimate 8.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 16440: estimate 8.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 16441: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 16442: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 16443: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 16444: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 16445: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 16446: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 16447: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 16448: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 16449: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 16450: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 16451: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 16452: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 1, trace 16802: estimate 7.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 16803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 16804: estimate 7.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 16805: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 16806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 16807: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 16808: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 16809: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 16810: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 16811: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 16812: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 16813: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 16814: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 16815: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 16816: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 16817: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 1, trace 17080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 17081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 17084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17086: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17087: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 17088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17089: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17090: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17091: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17092: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17093: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 17094: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 17095: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 1, trace 17364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 17365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 17366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 17367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 17368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 17369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 17370: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 17371: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 17372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 17373: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 17374: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17375: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 17376: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 17377: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 17378: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 17379: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 17622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 219.50s leader 5, trace 17623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 1, trace 17648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 17649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 17650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 17651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 17652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 17653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 17654: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 17655: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 17656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 17657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 17658: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17659: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 17660: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 17661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 17662: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 17663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 1, trace 17885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 17886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 17887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 17888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 17889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 17890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 17891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 17892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 17893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 17894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 17895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 17896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 17897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 17898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 17899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 17900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 1, trace 18106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 18107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 18109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 18110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 18111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 18114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 18120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 18121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 5, trace 18293: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 233.30s leader 5, trace 18294: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 1, trace 18340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 18341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 18343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 18344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 18348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 18354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 18355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 1, trace 18573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 18574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 18576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 18577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 18581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 18587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 18588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 1, trace 18796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 18797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 18798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 18799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 18800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 18801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 18802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 18803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 18804: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 18805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 18806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 18807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 18808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 18809: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 18810: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 18811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 1, trace 19012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 19013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 19014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 19015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 19016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 19017: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 19018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 19019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 19020: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 19021: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 19022: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 19023: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 19024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 19025: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 19026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 19027: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 1, trace 19239: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 19240: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 19241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 19242: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 19243: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 19244: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 19245: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 19246: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 19247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 19248: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 19249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 19250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 19251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 19252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 19253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 19254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 1, trace 19467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 19468: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19469: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 19470: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 19471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 19472: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19473: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19474: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 19475: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19476: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19477: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19478: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19479: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19480: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 19481: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 19482: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 1, trace 19678: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 19679: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 19681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 19682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 19683: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 19686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 19692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 19693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 1, trace 19903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 19904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 19905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 19906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 19907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 19908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 19909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 19910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 19911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 19912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 19913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 19914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 19915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 19916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 19917: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 19918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 1, trace 20140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 20141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 20142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 20144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 20145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 20146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 20147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 20148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 20149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 20150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 20151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 20152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 20153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 20154: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 20155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 1, trace 20367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 20368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 20369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 20370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 20371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 20372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 20373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 20374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 20375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 20376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 20377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 20378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 20379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 20380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 20381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 20382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 1, trace 20586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 20587: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 20588: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 20589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 20590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 20591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 20592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 20593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 20594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 20595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 20596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 20597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 20598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 20599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 20600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 20601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 288.50s leader 5, trace 20770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 1, trace 20816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 20817: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 20818: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 20819: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 20820: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 20821: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 20822: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 20823: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 20824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 20825: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 20826: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 20827: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 20828: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 20829: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 20830: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 20831: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 1, trace 21042: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 21043: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 21044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 21045: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 21046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 21047: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 21048: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 21049: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 21050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 21051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 21052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 21053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 21054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 21055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 21056: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 21057: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 1, trace 21266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 21267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 21268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 21269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 21270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 21271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 21272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 21273: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 21274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 21275: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 21276: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 21277: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 21278: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 21279: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 21280: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 21281: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 302.30s leader 5, trace 21403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 1, trace 21495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 21496: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 21497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 21498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 21499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 21500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 21501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 21502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 21503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 21504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 21505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 21506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 21507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 21508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 21509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 21510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 1, trace 21899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 21900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 21901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 21902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 21903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 21904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 21905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 21906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 21907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 21908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 21909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 21910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 21911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 21913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 21914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 1, trace 22177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 22178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 22179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 22180: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 22181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 22182: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 22183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 22184: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 22185: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 22186: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 22187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 22188: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 22189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 22190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 22191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 22192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 1, trace 22452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 22453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 22454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 22455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 22456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 22457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 22458: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 22459: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 22460: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 22461: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 22462: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 22463: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 22464: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 22465: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 22466: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 22467: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 1, trace 22892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 22893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 22894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 22895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 22896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 22897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 22898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 22899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 22900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 22901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 22902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 22903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 22904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 22905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 22906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 22907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 1, trace 23157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 23158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 23159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 23160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 23161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 23162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 23163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 23164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 23165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 23166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 23167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 23168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 23169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 23170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 23171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 23172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 1, trace 23425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 23426: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 23427: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 23428: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 23429: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 23430: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 23431: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 23432: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 23433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 23434: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 23435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 23436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 23437: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 23438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 23439: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 23440: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 1, trace 23654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 23655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 23656: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 23657: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 23658: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 23659: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 23660: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 23661: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 23662: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 23663: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 23664: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 23665: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 23666: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 23667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 23668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 23669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 23835: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 343.70s leader 5, trace 23836: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 1, trace 23887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 23888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 23889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 23890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 23891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 23892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 23893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 23894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 23895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 23896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 23897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 23898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 23899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 23900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 23901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 23902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 1, trace 24342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 24343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 24344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 24345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 24346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 24347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 24348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 24349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 24350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 24351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 24352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 24353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 24354: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 24355: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 24356: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 24357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 1, trace 24618: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 24619: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 24620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 24621: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 24622: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 24623: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 24624: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 24625: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 24626: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 24627: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 24628: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 24629: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 24630: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 24631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 24632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 24633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 357.50s leader 5, trace 24794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 1, trace 24883: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 24884: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 24885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 24886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 24887: estimate 12.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 24888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 24889: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 24890: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 24891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 24892: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 24893: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 24894: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 24895: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 24896: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 24897: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 24898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren killed in action
- 1: Ash killed in action
- 1: Vale killed in action
- 1: Soren incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
