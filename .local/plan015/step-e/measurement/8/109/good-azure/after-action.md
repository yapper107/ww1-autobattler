# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/8/109/good-azure/battle-109-1789673802849739173`

## Battle summary

**Ember** · 360 s · 543 shots.

### Turning points

- 19.2s, squad 5: contact (events line 220). First recorded contact.
- 41.0s, squad 1: help call ([trace 9648](#trace-9648)). No completion observed before termination.
- 45.2s, squad 0: help call ([trace 9924](#trace-9924)). 46.5s, squad 1: answered a neighbour with support by fire.
- 46.5s, squad 1: help answer ([trace 9976](#trace-9976)). 48.6s, squad 1: took cover and returned fire.
- 51.9s, squad 1: withdrawal ([trace 10648](#trace-10648)). 143.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 70.3s, squad 0: withdrawal ([trace 12200](#trace-12200)). 119.8s, squad 0: took cover and returned fire.
- 123.2s, squad 0: withdrawal ([trace 14742](#trace-14742)). No completion observed before termination.
- 149.9s, squad 1: withdrawal ([trace 15637](#trace-15637)). No completion observed before termination.
- 152.9s, squad 0: help call ([trace 15787](#trace-15787)). No completion observed before termination.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; no completed objective recorded; 159 shots, 8/8 lost.
- **1** — FightHere; chose broke contact, Withdraw to received rally and 3 further drill types; withdrew; 38 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 279 shots, 6/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 67 shots, 1/2 lost.

### Decisions and attribution

At 26.0s, squad 1 chose took cover and returned fire ([trace 4484](#trace-4484)), followed by 4 shots and 1 own casualties; estimate 11.8 against 0 distinct squad-reported contacts; At 51.9s, squad 1 chose broke contact ([trace 10648](#trace-10648)), followed by 13 shots and 0 own casualties; estimate 13.0 against 0 distinct squad-reported contacts; At 107.8s, squad 1 chose renewed the existing objective ([trace 13923](#trace-13923)), followed by 4 shots and 0 own casualties; estimate 12.0 against 2 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.9, 0.5, 0.9, 0.9], Ember [0.15, 0.9, 0.2, 0.2].
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 694](#trace-694)). Following evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9303250871918725, 'next_transition': 713}.
- 4.0s: FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated ([trace 696](#trace-696)). Following evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 828}.

### Communication

158 matched deliveries (mean 0.37s, max 1.80s); 338 explicit drops; 1 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.20s, squad 5, contact, evidence events line 220: First recorded contact; .
- 40.95s, squad 1, help call, evidence 9648: NeedSupport; No completion observed before termination.
- 45.25s, squad 0, help call, evidence 9924: NeedSupport; 46.5s, squad 1: answered a neighbour with support by fire.
- 46.45s, squad 1, help answer, evidence 9976: radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map; 48.6s, squad 1: took cover and returned fire.
- 51.90s, squad 1, withdrawal, evidence 10648: BreakContact: believed ratio at least two without superiority; 143.4s, squad 1: contact broken or rally reached: Occupy and report strength.
- 70.30s, squad 0, withdrawal, evidence 12200: BreakContact: believed ratio at least two without superiority; 119.8s, squad 0: took cover and returned fire.
- 123.15s, squad 0, withdrawal, evidence 14742: BreakContact: believed ratio at least two without superiority; No completion observed before termination.
- 149.95s, squad 1, withdrawal, evidence 15637: Withdraw to received rally; No completion observed before termination.
- 152.85s, squad 0, help call, evidence 15787: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.87030836420897, 'next_transition': 580}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.87030836420897, 'next_transition': 580}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 1.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.87030836420897, 'next_transition': 580}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 3.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.528728921962358, 'next_transition': 87}.
<a id="trace-580"></a>
<a id="trace-582"></a>
<a id="trace-608"></a>
<a id="trace-610"></a>
<a id="trace-643"></a>
<a id="trace-645"></a>
<a id="trace-664"></a>
<a id="trace-666"></a>
<a id="trace-685"></a>
<a id="trace-687"></a>
- 1.60s–3.65s (×10), actor 5, squad 0 (trace 580): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599783288097202, 'next_transition': 608}.
<a id="trace-86"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (events line 86): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9303250871918725, 'next_transition': 713}.
<a id="trace-87"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (events line 87): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 828}.
<a id="trace-694"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 694): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 694. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9303250871918725, 'next_transition': 713}.
<a id="trace-695"></a>
- 3.95s–3.95s (×1), actor 5, squad 0 (trace 695): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 695. Next observer evidence: {'until': 4.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9303250871918725, 'next_transition': 713}.
<a id="trace-696"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 696): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 696. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 828}.
<a id="trace-697"></a>
- 3.95s–3.95s (×1), actor 5, squad 1 (trace 697): FightHere: next 60 m leg in own advance lane; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=10.000000 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.409951631393526, 'next_transition': 828}.
<a id="trace-713"></a>
<a id="trace-715"></a>
<a id="trace-741"></a>
<a id="trace-743"></a>
<a id="trace-821"></a>
<a id="trace-823"></a>
<a id="trace-945"></a>
<a id="trace-947"></a>
- 4.20s–5.70s (×8), actor 5, squad 0 (trace 713): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 3.95s, trace 697. Next observer evidence: {'until': 4.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9375014285695646, 'next_transition': 741}.
<a id="trace-828"></a>
- 5.25s–5.25s (×1), actor 8, squad 1 (trace 828): received platoon directive. Knowledge: actor memory at 5.00s, trace 756. Next observer evidence: {'until': 14.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 20.96850102929632, 'next_transition': 1842}.
<a id="trace-949"></a>
<a id="trace-1285"></a>
<a id="trace-1323"></a>
<a id="trace-1325"></a>
<a id="trace-1367"></a>
<a id="trace-1369"></a>
<a id="trace-1434"></a>
<a id="trace-1436"></a>
<a id="trace-1484"></a>
<a id="trace-1486"></a>
<a id="trace-1515"></a>
<a id="trace-1517"></a>
<a id="trace-1542"></a>
<a id="trace-1544"></a>
<a id="trace-1634"></a>
<a id="trace-1636"></a>
<a id="trace-1660"></a>
<a id="trace-1662"></a>
<a id="trace-1683"></a>
<a id="trace-1685"></a>
<a id="trace-1714"></a>
<a id="trace-1716"></a>
<a id="trace-1768"></a>
<a id="trace-1770"></a>
<a id="trace-1792"></a>
<a id="trace-1794"></a>
<a id="trace-1810"></a>
<a id="trace-1812"></a>
<a id="trace-1987"></a>
<a id="trace-1989"></a>
<a id="trace-2075"></a>
<a id="trace-2077"></a>
<a id="trace-2101"></a>
<a id="trace-2103"></a>
<a id="trace-2413"></a>
<a id="trace-2415"></a>
<a id="trace-2451"></a>
<a id="trace-2453"></a>
<a id="trace-2479"></a>
<a id="trace-2481"></a>
<a id="trace-2536"></a>
<a id="trace-2538"></a>
<a id="trace-2565"></a>
<a id="trace-2567"></a>
<a id="trace-3133"></a>
<a id="trace-3135"></a>
<a id="trace-3237"></a>
<a id="trace-3239"></a>
<a id="trace-3278"></a>
<a id="trace-3280"></a>
<a id="trace-3647"></a>
<a id="trace-3649"></a>
<a id="trace-4031"></a>
<a id="trace-4033"></a>
<a id="trace-4097"></a>
<a id="trace-4099"></a>
<a id="trace-4133"></a>
<a id="trace-4135"></a>
<a id="trace-4166"></a>
<a id="trace-4168"></a>
<a id="trace-4220"></a>
<a id="trace-4222"></a>
<a id="trace-4298"></a>
<a id="trace-4300"></a>
<a id="trace-4451"></a>
<a id="trace-4453"></a>
<a id="trace-4474"></a>
<a id="trace-4476"></a>
<a id="trace-4676"></a>
<a id="trace-4678"></a>
<a id="trace-4704"></a>
<a id="trace-4706"></a>
<a id="trace-4743"></a>
<a id="trace-4745"></a>
<a id="trace-4768"></a>
<a id="trace-4770"></a>
<a id="trace-4803"></a>
<a id="trace-4805"></a>
<a id="trace-4845"></a>
<a id="trace-4847"></a>
<a id="trace-5213"></a>
<a id="trace-5215"></a>
<a id="trace-5295"></a>
<a id="trace-5297"></a>
<a id="trace-5318"></a>
<a id="trace-5320"></a>
<a id="trace-5355"></a>
<a id="trace-5357"></a>
<a id="trace-5375"></a>
<a id="trace-5377"></a>
<a id="trace-5410"></a>
<a id="trace-5412"></a>
<a id="trace-5450"></a>
<a id="trace-5452"></a>
<a id="trace-5476"></a>
<a id="trace-5478"></a>
<a id="trace-5490"></a>
<a id="trace-5492"></a>
<a id="trace-5517"></a>
<a id="trace-5519"></a>
<a id="trace-5535"></a>
<a id="trace-5537"></a>
<a id="trace-5617"></a>
<a id="trace-5619"></a>
<a id="trace-5641"></a>
<a id="trace-5643"></a>
<a id="trace-5728"></a>
<a id="trace-5730"></a>
<a id="trace-9392"></a>
<a id="trace-9394"></a>
<a id="trace-9425"></a>
<a id="trace-9427"></a>
<a id="trace-9470"></a>
<a id="trace-9472"></a>
<a id="trace-9488"></a>
<a id="trace-9490"></a>
<a id="trace-9512"></a>
<a id="trace-9514"></a>
<a id="trace-9538"></a>
<a id="trace-9540"></a>
<a id="trace-9624"></a>
<a id="trace-9626"></a>
<a id="trace-9641"></a>
<a id="trace-9643"></a>
<a id="trace-9680"></a>
<a id="trace-9682"></a>
<a id="trace-9695"></a>
<a id="trace-9697"></a>
<a id="trace-9735"></a>
<a id="trace-9737"></a>
<a id="trace-9762"></a>
<a id="trace-9764"></a>
<a id="trace-9787"></a>
<a id="trace-9789"></a>
<a id="trace-9809"></a>
<a id="trace-9811"></a>
<a id="trace-9833"></a>
<a id="trace-9835"></a>
<a id="trace-9921"></a>
<a id="trace-9923"></a>
<a id="trace-9941"></a>
<a id="trace-9943"></a>
<a id="trace-9969"></a>
<a id="trace-9971"></a>
<a id="trace-9994"></a>
<a id="trace-9996"></a>
<a id="trace-10020"></a>
<a id="trace-10022"></a>
<a id="trace-10036"></a>
<a id="trace-10038"></a>
<a id="trace-10067"></a>
<a id="trace-10069"></a>
<a id="trace-10302"></a>
<a id="trace-10304"></a>
<a id="trace-10589"></a>
<a id="trace-10591"></a>
<a id="trace-10619"></a>
<a id="trace-10621"></a>
<a id="trace-10644"></a>
<a id="trace-10646"></a>
<a id="trace-10725"></a>
<a id="trace-10727"></a>
<a id="trace-10767"></a>
<a id="trace-10769"></a>
<a id="trace-10978"></a>
<a id="trace-10980"></a>
<a id="trace-11016"></a>
<a id="trace-11018"></a>
<a id="trace-11093"></a>
<a id="trace-11095"></a>
<a id="trace-11106"></a>
<a id="trace-11108"></a>
<a id="trace-11126"></a>
<a id="trace-11128"></a>
<a id="trace-11155"></a>
<a id="trace-11157"></a>
<a id="trace-11170"></a>
<a id="trace-11172"></a>
<a id="trace-11187"></a>
<a id="trace-11189"></a>
<a id="trace-11201"></a>
<a id="trace-11203"></a>
<a id="trace-11218"></a>
<a id="trace-11220"></a>
<a id="trace-11233"></a>
<a id="trace-11235"></a>
<a id="trace-11311"></a>
<a id="trace-11313"></a>
<a id="trace-11344"></a>
<a id="trace-11346"></a>
<a id="trace-11358"></a>
<a id="trace-11360"></a>
<a id="trace-11373"></a>
<a id="trace-11375"></a>
<a id="trace-11385"></a>
<a id="trace-11387"></a>
<a id="trace-11426"></a>
<a id="trace-11428"></a>
<a id="trace-11459"></a>
<a id="trace-11461"></a>
<a id="trace-11943"></a>
<a id="trace-11945"></a>
<a id="trace-11984"></a>
<a id="trace-11986"></a>
<a id="trace-12007"></a>
<a id="trace-12009"></a>
<a id="trace-12024"></a>
<a id="trace-12026"></a>
<a id="trace-12045"></a>
<a id="trace-12047"></a>
<a id="trace-12078"></a>
<a id="trace-12080"></a>
<a id="trace-12099"></a>
<a id="trace-12101"></a>
<a id="trace-12115"></a>
<a id="trace-12117"></a>
<a id="trace-12388"></a>
<a id="trace-12390"></a>
<a id="trace-12408"></a>
<a id="trace-12410"></a>
<a id="trace-12431"></a>
<a id="trace-12433"></a>
<a id="trace-12450"></a>
<a id="trace-12452"></a>
<a id="trace-12477"></a>
<a id="trace-12479"></a>
<a id="trace-12490"></a>
<a id="trace-12492"></a>
<a id="trace-12514"></a>
<a id="trace-12516"></a>
<a id="trace-12528"></a>
<a id="trace-12530"></a>
<a id="trace-12606"></a>
<a id="trace-12608"></a>
<a id="trace-12624"></a>
<a id="trace-12626"></a>
<a id="trace-12644"></a>
<a id="trace-12646"></a>
<a id="trace-12681"></a>
<a id="trace-12683"></a>
<a id="trace-12702"></a>
<a id="trace-12704"></a>
<a id="trace-12727"></a>
<a id="trace-12729"></a>
<a id="trace-12750"></a>
<a id="trace-12752"></a>
<a id="trace-12829"></a>
<a id="trace-12831"></a>
<a id="trace-12844"></a>
<a id="trace-12846"></a>
<a id="trace-12873"></a>
<a id="trace-12875"></a>
<a id="trace-12892"></a>
<a id="trace-12894"></a>
<a id="trace-12904"></a>
<a id="trace-12906"></a>
<a id="trace-12923"></a>
<a id="trace-12925"></a>
<a id="trace-12935"></a>
<a id="trace-12937"></a>
<a id="trace-13041"></a>
<a id="trace-13043"></a>
<a id="trace-13068"></a>
<a id="trace-13070"></a>
<a id="trace-13094"></a>
<a id="trace-13096"></a>
<a id="trace-13107"></a>
<a id="trace-13109"></a>
<a id="trace-13125"></a>
<a id="trace-13127"></a>
<a id="trace-13142"></a>
<a id="trace-13144"></a>
<a id="trace-13160"></a>
<a id="trace-13162"></a>
<a id="trace-13175"></a>
<a id="trace-13177"></a>
<a id="trace-13245"></a>
<a id="trace-13269"></a>
<a id="trace-13315"></a>
<a id="trace-13317"></a>
<a id="trace-13333"></a>
<a id="trace-13335"></a>
<a id="trace-13355"></a>
<a id="trace-13357"></a>
<a id="trace-13372"></a>
<a id="trace-13374"></a>
<a id="trace-13463"></a>
<a id="trace-13465"></a>
<a id="trace-13474"></a>
<a id="trace-13476"></a>
<a id="trace-13488"></a>
<a id="trace-13496"></a>
<a id="trace-13513"></a>
<a id="trace-13540"></a>
<a id="trace-13619"></a>
<a id="trace-13621"></a>
<a id="trace-13632"></a>
<a id="trace-13634"></a>
<a id="trace-13650"></a>
<a id="trace-13652"></a>
<a id="trace-13661"></a>
<a id="trace-13663"></a>
<a id="trace-13681"></a>
<a id="trace-13683"></a>
<a id="trace-13695"></a>
<a id="trace-13697"></a>
<a id="trace-13713"></a>
<a id="trace-13715"></a>
<a id="trace-13726"></a>
<a id="trace-13728"></a>
<a id="trace-13748"></a>
<a id="trace-13750"></a>
<a id="trace-13767"></a>
<a id="trace-13769"></a>
<a id="trace-13855"></a>
<a id="trace-13857"></a>
<a id="trace-13878"></a>
<a id="trace-13880"></a>
<a id="trace-13892"></a>
<a id="trace-13894"></a>
<a id="trace-13920"></a>
<a id="trace-13922"></a>
<a id="trace-13946"></a>
<a id="trace-13948"></a>
<a id="trace-13963"></a>
<a id="trace-13965"></a>
<a id="trace-13987"></a>
<a id="trace-13989"></a>
<a id="trace-14001"></a>
<a id="trace-14003"></a>
<a id="trace-14074"></a>
<a id="trace-14076"></a>
<a id="trace-14090"></a>
<a id="trace-14092"></a>
<a id="trace-14107"></a>
<a id="trace-14109"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14145"></a>
<a id="trace-14147"></a>
<a id="trace-14157"></a>
<a id="trace-14159"></a>
<a id="trace-14182"></a>
<a id="trace-14184"></a>
<a id="trace-14199"></a>
<a id="trace-14201"></a>
<a id="trace-14218"></a>
<a id="trace-14220"></a>
<a id="trace-14317"></a>
<a id="trace-14319"></a>
<a id="trace-14337"></a>
<a id="trace-14339"></a>
<a id="trace-14356"></a>
<a id="trace-14358"></a>
<a id="trace-14366"></a>
<a id="trace-14368"></a>
<a id="trace-14387"></a>
<a id="trace-14389"></a>
<a id="trace-14438"></a>
<a id="trace-14440"></a>
<a id="trace-14465"></a>
<a id="trace-14467"></a>
<a id="trace-14497"></a>
<a id="trace-14499"></a>
<a id="trace-14650"></a>
<a id="trace-14652"></a>
<a id="trace-14712"></a>
<a id="trace-14714"></a>
<a id="trace-14818"></a>
<a id="trace-14820"></a>
<a id="trace-14834"></a>
<a id="trace-14836"></a>
<a id="trace-14854"></a>
<a id="trace-14856"></a>
<a id="trace-14982"></a>
<a id="trace-14994"></a>
<a id="trace-15005"></a>
<a id="trace-15018"></a>
<a id="trace-15030"></a>
<a id="trace-15052"></a>
<a id="trace-15113"></a>
<a id="trace-15122"></a>
<a id="trace-15135"></a>
<a id="trace-15141"></a>
<a id="trace-15151"></a>
<a id="trace-15160"></a>
<a id="trace-15171"></a>
<a id="trace-15181"></a>
<a id="trace-15193"></a>
<a id="trace-15202"></a>
<a id="trace-15263"></a>
<a id="trace-15272"></a>
<a id="trace-15283"></a>
<a id="trace-15289"></a>
<a id="trace-15301"></a>
<a id="trace-15320"></a>
<a id="trace-15330"></a>
<a id="trace-15342"></a>
<a id="trace-15352"></a>
<a id="trace-15412"></a>
<a id="trace-15421"></a>
<a id="trace-15438"></a>
<a id="trace-15449"></a>
<a id="trace-15456"></a>
<a id="trace-15468"></a>
<a id="trace-15482"></a>
<a id="trace-15497"></a>
<a id="trace-15506"></a>
<a id="trace-15586"></a>
<a id="trace-15591"></a>
<a id="trace-15598"></a>
<a id="trace-15601"></a>
<a id="trace-15612"></a>
<a id="trace-15620"></a>
<a id="trace-15630"></a>
<a id="trace-15636"></a>
<a id="trace-15748"></a>
<a id="trace-15759"></a>
<a id="trace-15775"></a>
<a id="trace-15786"></a>
<a id="trace-15808"></a>
<a id="trace-15820"></a>
<a id="trace-15886"></a>
<a id="trace-15905"></a>
<a id="trace-15910"></a>
<a id="trace-15918"></a>
<a id="trace-15922"></a>
<a id="trace-15932"></a>
<a id="trace-15940"></a>
<a id="trace-16014"></a>
<a id="trace-16027"></a>
<a id="trace-16050"></a>
<a id="trace-16083"></a>
<a id="trace-16091"></a>
<a id="trace-16105"></a>
<a id="trace-16113"></a>
<a id="trace-16177"></a>
<a id="trace-16201"></a>
<a id="trace-16220"></a>
<a id="trace-16224"></a>
<a id="trace-16237"></a>
<a id="trace-16259"></a>
<a id="trace-16266"></a>
<a id="trace-16328"></a>
<a id="trace-16345"></a>
<a id="trace-16348"></a>
<a id="trace-16356"></a>
<a id="trace-16365"></a>
<a id="trace-16371"></a>
<a id="trace-16384"></a>
<a id="trace-16392"></a>
<a id="trace-16451"></a>
<a id="trace-16461"></a>
<a id="trace-16472"></a>
<a id="trace-16478"></a>
<a id="trace-16486"></a>
<a id="trace-16495"></a>
<a id="trace-16501"></a>
<a id="trace-16506"></a>
<a id="trace-16563"></a>
<a id="trace-16570"></a>
<a id="trace-16583"></a>
<a id="trace-16588"></a>
<a id="trace-16596"></a>
<a id="trace-16602"></a>
<a id="trace-16617"></a>
<a id="trace-16626"></a>
<a id="trace-16641"></a>
<a id="trace-16649"></a>
<a id="trace-16728"></a>
<a id="trace-16734"></a>
<a id="trace-16749"></a>
<a id="trace-16764"></a>
<a id="trace-16786"></a>
<a id="trace-16795"></a>
<a id="trace-16855"></a>
<a id="trace-16873"></a>
<a id="trace-16882"></a>
<a id="trace-16895"></a>
<a id="trace-16912"></a>
<a id="trace-16921"></a>
<a id="trace-16991"></a>
<a id="trace-17011"></a>
<a id="trace-17022"></a>
<a id="trace-17027"></a>
<a id="trace-17038"></a>
<a id="trace-17044"></a>
<a id="trace-17101"></a>
<a id="trace-17109"></a>
<a id="trace-17127"></a>
<a id="trace-17137"></a>
<a id="trace-17164"></a>
<a id="trace-17252"></a>
<a id="trace-17264"></a>
<a id="trace-17270"></a>
<a id="trace-17289"></a>
<a id="trace-17302"></a>
<a id="trace-17309"></a>
<a id="trace-17323"></a>
<a id="trace-17331"></a>
<a id="trace-17387"></a>
<a id="trace-17403"></a>
<a id="trace-17407"></a>
<a id="trace-17417"></a>
<a id="trace-17424"></a>
<a id="trace-17436"></a>
<a id="trace-17443"></a>
<a id="trace-17456"></a>
<a id="trace-17464"></a>
<a id="trace-17523"></a>
<a id="trace-17533"></a>
<a id="trace-17547"></a>
<a id="trace-17554"></a>
<a id="trace-17564"></a>
<a id="trace-17570"></a>
<a id="trace-17582"></a>
<a id="trace-17589"></a>
<a id="trace-17671"></a>
<a id="trace-17682"></a>
<a id="trace-17699"></a>
<a id="trace-17709"></a>
<a id="trace-17714"></a>
<a id="trace-17728"></a>
<a id="trace-17735"></a>
<a id="trace-17747"></a>
<a id="trace-17756"></a>
<a id="trace-17816"></a>
<a id="trace-17842"></a>
<a id="trace-17848"></a>
<a id="trace-17858"></a>
<a id="trace-17864"></a>
<a id="trace-17892"></a>
<a id="trace-17950"></a>
<a id="trace-17958"></a>
<a id="trace-17967"></a>
<a id="trace-17970"></a>
<a id="trace-17978"></a>
<a id="trace-17982"></a>
<a id="trace-17995"></a>
<a id="trace-18003"></a>
<a id="trace-18017"></a>
<a id="trace-18028"></a>
<a id="trace-18111"></a>
<a id="trace-18119"></a>
<a id="trace-18130"></a>
<a id="trace-18137"></a>
<a id="trace-18149"></a>
<a id="trace-18157"></a>
<a id="trace-18170"></a>
<a id="trace-18178"></a>
<a id="trace-18237"></a>
<a id="trace-18247"></a>
<a id="trace-18259"></a>
<a id="trace-18265"></a>
<a id="trace-18281"></a>
<a id="trace-18295"></a>
<a id="trace-18303"></a>
<a id="trace-18313"></a>
<a id="trace-18319"></a>
<a id="trace-18386"></a>
<a id="trace-18400"></a>
<a id="trace-18408"></a>
<a id="trace-18419"></a>
<a id="trace-18424"></a>
<a id="trace-18437"></a>
<a id="trace-18446"></a>
<a id="trace-18458"></a>
<a id="trace-18466"></a>
<a id="trace-18525"></a>
<a id="trace-18536"></a>
<a id="trace-18544"></a>
<a id="trace-18547"></a>
<a id="trace-18551"></a>
<a id="trace-18560"></a>
<a id="trace-18569"></a>
<a id="trace-18575"></a>
<a id="trace-18628"></a>
<a id="trace-18635"></a>
<a id="trace-18645"></a>
<a id="trace-18652"></a>
<a id="trace-18660"></a>
<a id="trace-18665"></a>
<a id="trace-18672"></a>
<a id="trace-18678"></a>
<a id="trace-18732"></a>
<a id="trace-18747"></a>
<a id="trace-18750"></a>
<a id="trace-18755"></a>
<a id="trace-18757"></a>
<a id="trace-18764"></a>
<a id="trace-18770"></a>
<a id="trace-18785"></a>
<a id="trace-18839"></a>
<a id="trace-18857"></a>
<a id="trace-18861"></a>
<a id="trace-18869"></a>
<a id="trace-18881"></a>
<a id="trace-18888"></a>
<a id="trace-18966"></a>
<a id="trace-18980"></a>
<a id="trace-18987"></a>
<a id="trace-18993"></a>
<a id="trace-19009"></a>
<a id="trace-19018"></a>
<a id="trace-19098"></a>
<a id="trace-19103"></a>
<a id="trace-19112"></a>
<a id="trace-19114"></a>
<a id="trace-19123"></a>
<a id="trace-19131"></a>
<a id="trace-19202"></a>
<a id="trace-19210"></a>
<a id="trace-19221"></a>
<a id="trace-19234"></a>
<a id="trace-19238"></a>
<a id="trace-19252"></a>
<a id="trace-19261"></a>
<a id="trace-19270"></a>
<a id="trace-19335"></a>
<a id="trace-19345"></a>
<a id="trace-19349"></a>
<a id="trace-19357"></a>
<a id="trace-19371"></a>
<a id="trace-19377"></a>
<a id="trace-19388"></a>
<a id="trace-19447"></a>
<a id="trace-19458"></a>
<a id="trace-19468"></a>
<a id="trace-19475"></a>
<a id="trace-19484"></a>
<a id="trace-19494"></a>
<a id="trace-19500"></a>
<a id="trace-19511"></a>
<a id="trace-19518"></a>
<a id="trace-19575"></a>
<a id="trace-19582"></a>
<a id="trace-19592"></a>
<a id="trace-19599"></a>
<a id="trace-19606"></a>
<a id="trace-19612"></a>
<a id="trace-19621"></a>
<a id="trace-19626"></a>
<a id="trace-19636"></a>
<a id="trace-19643"></a>
<a id="trace-19700"></a>
<a id="trace-19709"></a>
<a id="trace-19721"></a>
<a id="trace-19724"></a>
<a id="trace-19731"></a>
<a id="trace-19737"></a>
<a id="trace-19753"></a>
<a id="trace-19767"></a>
<a id="trace-19831"></a>
<a id="trace-19842"></a>
<a id="trace-19855"></a>
<a id="trace-19857"></a>
<a id="trace-19866"></a>
<a id="trace-19882"></a>
<a id="trace-19891"></a>
<a id="trace-19963"></a>
<a id="trace-19976"></a>
<a id="trace-19980"></a>
<a id="trace-19991"></a>
<a id="trace-19995"></a>
<a id="trace-20012"></a>
<a id="trace-20067"></a>
<a id="trace-20078"></a>
<a id="trace-20088"></a>
<a id="trace-20099"></a>
<a id="trace-20103"></a>
<a id="trace-20114"></a>
<a id="trace-20122"></a>
<a id="trace-20137"></a>
<a id="trace-20192"></a>
<a id="trace-20203"></a>
<a id="trace-20213"></a>
<a id="trace-20228"></a>
<a id="trace-20238"></a>
<a id="trace-20244"></a>
<a id="trace-20261"></a>
<a id="trace-20318"></a>
<a id="trace-20340"></a>
<a id="trace-20346"></a>
<a id="trace-20360"></a>
<a id="trace-20365"></a>
<a id="trace-20375"></a>
<a id="trace-20382"></a>
<a id="trace-20447"></a>
<a id="trace-20459"></a>
<a id="trace-20462"></a>
<a id="trace-20469"></a>
<a id="trace-20475"></a>
<a id="trace-20484"></a>
<a id="trace-20500"></a>
<a id="trace-20506"></a>
<a id="trace-20581"></a>
<a id="trace-20586"></a>
<a id="trace-20595"></a>
<a id="trace-20597"></a>
<a id="trace-20606"></a>
<a id="trace-20614"></a>
<a id="trace-20623"></a>
<a id="trace-20686"></a>
<a id="trace-20694"></a>
<a id="trace-20705"></a>
<a id="trace-20721"></a>
<a id="trace-20732"></a>
<a id="trace-20736"></a>
<a id="trace-20745"></a>
<a id="trace-20754"></a>
<a id="trace-20809"></a>
<a id="trace-20820"></a>
<a id="trace-20830"></a>
<a id="trace-20834"></a>
<a id="trace-20845"></a>
<a id="trace-20861"></a>
<a id="trace-20876"></a>
<a id="trace-20931"></a>
<a id="trace-20942"></a>
<a id="trace-20952"></a>
<a id="trace-20959"></a>
<a id="trace-20966"></a>
<a id="trace-20969"></a>
<a id="trace-20979"></a>
<a id="trace-20985"></a>
<a id="trace-20996"></a>
<a id="trace-21003"></a>
<a id="trace-21060"></a>
<a id="trace-21067"></a>
<a id="trace-21077"></a>
<a id="trace-21090"></a>
<a id="trace-21096"></a>
<a id="trace-21104"></a>
<a id="trace-21109"></a>
<a id="trace-21119"></a>
- 5.70s–359.30s (×735), actor 37, squad 4 (trace 949): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=37. Knowledge: actor memory at 5.00s, trace 763. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362504724995279, 'next_transition': 1285}.
<a id="trace-963"></a>
- 6.00s–6.00s (×1), actor 0, squad 0 (trace 963): received platoon directive. Knowledge: actor memory at 5.00s, trace 748. Next observer evidence: {'until': 6.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300023789273306, 'next_transition': 1281}.
<a id="trace-1281"></a>
<a id="trace-1283"></a>
<a id="trace-1319"></a>
<a id="trace-1321"></a>
<a id="trace-1363"></a>
<a id="trace-1365"></a>
<a id="trace-1400"></a>
<a id="trace-1402"></a>
<a id="trace-1430"></a>
<a id="trace-1432"></a>
<a id="trace-1480"></a>
<a id="trace-1482"></a>
<a id="trace-1511"></a>
<a id="trace-1513"></a>
<a id="trace-1538"></a>
<a id="trace-1540"></a>
<a id="trace-1630"></a>
<a id="trace-1632"></a>
<a id="trace-1656"></a>
<a id="trace-1658"></a>
<a id="trace-1679"></a>
<a id="trace-1681"></a>
<a id="trace-1710"></a>
<a id="trace-1712"></a>
<a id="trace-1740"></a>
<a id="trace-1742"></a>
<a id="trace-1764"></a>
<a id="trace-1766"></a>
<a id="trace-1788"></a>
<a id="trace-1790"></a>
<a id="trace-1806"></a>
<a id="trace-1808"></a>
<a id="trace-1835"></a>
<a id="trace-1837"></a>
<a id="trace-1983"></a>
<a id="trace-1985"></a>
<a id="trace-2071"></a>
<a id="trace-2073"></a>
<a id="trace-2097"></a>
<a id="trace-2099"></a>
- 6.20s–15.70s (×40), actor 5, squad 0 (trace 1281): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 753. Next observer evidence: {'until': 6.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2669905164428683, 'next_transition': 1319}.
<a id="trace-1842"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1842): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1559. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2593}.
<a id="trace-1843"></a>
- 14.40s–14.40s (×1), actor 8, squad 1 (trace 1843): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1559. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.889983417381629, 'next_transition': 2593}.
<a id="trace-2106"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2106): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1996. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4404821787363905, 'next_transition': 2409}.
<a id="trace-2107"></a>
- 15.75s–15.75s (×1), actor 0, squad 0 (trace 2107): matching received arrivals: traveling stage complete. Knowledge: actor memory at 15.00s, trace 1996. Next observer evidence: {'until': 16.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4404821787363905, 'next_transition': 2409}.
<a id="trace-2409"></a>
<a id="trace-2411"></a>
<a id="trace-2447"></a>
<a id="trace-2449"></a>
<a id="trace-2475"></a>
<a id="trace-2477"></a>
<a id="trace-2495"></a>
<a id="trace-2497"></a>
<a id="trace-2532"></a>
<a id="trace-2534"></a>
<a id="trace-2561"></a>
<a id="trace-2563"></a>
<a id="trace-2584"></a>
<a id="trace-2586"></a>
<a id="trace-3129"></a>
<a id="trace-3131"></a>
<a id="trace-3233"></a>
<a id="trace-3235"></a>
<a id="trace-3274"></a>
<a id="trace-3276"></a>
- 16.25s–20.75s (×20), actor 5, squad 0 (trace 2409): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2001. Next observer evidence: {'until': 16.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09843703858622016, 'next_transition': 2447}.
<a id="trace-2593"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2593): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 2004. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2770}.
<a id="trace-2594"></a>
- 19.35s–19.35s (×1), actor 8, squad 1 (trace 2594): bounding overwatch. Knowledge: actor memory at 15.00s, trace 2004. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2770}.
<a id="trace-2595"></a>
<a id="trace-2770"></a>
<a id="trace-2945"></a>
- 19.35s–19.45s (×3), actor 8, squad 1 (trace 2595): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 2004. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.315008083864525, 'next_transition': 2770}.
<a id="trace-3291"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3291): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 3155. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299887063473814, 'next_transition': 3643}.
<a id="trace-3292"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3292): bounding overwatch. Knowledge: actor memory at 20.00s, trace 3155. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299887063473814, 'next_transition': 3643}.
<a id="trace-3293"></a>
- 20.95s–20.95s (×1), actor 0, squad 0 (trace 3293): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3155. Next observer evidence: {'until': 21.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299887063473814, 'next_transition': 3643}.
<a id="trace-3643"></a>
<a id="trace-3645"></a>
- 21.25s–21.25s (×2), actor 5, squad 0 (trace 3643): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3160. Next observer evidence: {'until': 21.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501068192407955, 'next_transition': 3664}.
<a id="trace-3664"></a>
- 21.45s–21.45s (×1), actor 0, squad 0 (trace 3664): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 3155. Next observer evidence: {'until': 21.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31500407633154215, 'next_transition': 4027}.
<a id="trace-4027"></a>
<a id="trace-4029"></a>
<a id="trace-4093"></a>
<a id="trace-4095"></a>
<a id="trace-4129"></a>
<a id="trace-4131"></a>
<a id="trace-4161"></a>
<a id="trace-4163"></a>
- 21.75s–23.25s (×8), actor 5, squad 0 (trace 4027): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 3160. Next observer evidence: {'until': 22.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6168429913929924, 'next_transition': 4093}.
<a id="trace-4136"></a>
- 22.80s–22.80s (×1), actor 8, squad 1 (trace 4136): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 23.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2510218826672481, 'next_transition': 350}.
<a id="trace-349"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (events line 349): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-350"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (events line 350): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-4199"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4199): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675952 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4199. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362396737816151, 'next_transition': 4215}.
<a id="trace-4200"></a>
- 23.55s–23.55s (×1), actor 5, squad 0 (trace 4200): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675952 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4200. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2362396737816151, 'next_transition': 4215}.
<a id="trace-4201"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4201): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675952 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4201. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750288787511173, 'next_transition': 4277}.
<a id="trace-4202"></a>
- 23.55s–23.55s (×1), actor 5, squad 1 (trace 4202): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.675952 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 23.55s, trace 4202. Next observer evidence: {'until': 24.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.5750288787511173, 'next_transition': 4277}.
<a id="trace-4215"></a>
<a id="trace-4217"></a>
<a id="trace-4266"></a>
<a id="trace-4268"></a>
<a id="trace-4292"></a>
<a id="trace-4294"></a>
- 23.75s–24.75s (×6), actor 5, squad 0 (trace 4215): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 23.55s, trace 4202. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.719228614461841, 'next_transition': 4266}.
<a id="trace-4277"></a>
- 24.45s–24.45s (×1), actor 8, squad 1 (trace 4277): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 20.00s, trace 3163. Next observer evidence: {'until': 25, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4441797049854608, 'next_transition': 4331}.
<a id="trace-4307"></a>
- 24.95s–24.95s (×1), actor 0, squad 0 (trace 4307): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 3155. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.49684196876073483, 'next_transition': 4445}.
<a id="trace-4331"></a>
- 25.05s–25.05s (×1), actor 8, squad 1 (trace 4331): MoveTactically. Knowledge: actor memory at 25.00s, trace 4317. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.225475612106181, 'next_transition': 4484}.
<a id="trace-4332"></a>
- 25.05s–25.05s (×1), actor 8, squad 1 (trace 4332): received platoon directive. Knowledge: actor memory at 25.00s, trace 4317. Next observer evidence: {'until': 25.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.225475612106181, 'next_transition': 4484}.
<a id="trace-4445"></a>
<a id="trace-4447"></a>
<a id="trace-4468"></a>
<a id="trace-4470"></a>
<a id="trace-4670"></a>
<a id="trace-4672"></a>
<a id="trace-4698"></a>
<a id="trace-4700"></a>
<a id="trace-4737"></a>
<a id="trace-4739"></a>
<a id="trace-4762"></a>
<a id="trace-4764"></a>
<a id="trace-4797"></a>
<a id="trace-4799"></a>
<a id="trace-4823"></a>
<a id="trace-4825"></a>
- 25.25s–28.75s (×16), actor 5, squad 0 (trace 4445): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4314. Next observer evidence: {'until': 25.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.22207222745250155, 'next_transition': 4468}.
<a id="trace-4484"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4484): ReactToContact: cover and return fire. Knowledge: actor memory at 25.00s, trace 4317. Next observer evidence: {'until': 31.4, 'shots': 4, 'casualties': 1, 'mean_displacement': 3.190471033117401, 'next_transition': 5363}.
<a id="trace-4485"></a>
- 25.95s–25.95s (×1), actor 8, squad 1 (trace 4485): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4317. Next observer evidence: {'until': 31.4, 'shots': 4, 'casualties': 1, 'mean_displacement': 3.190471033117401, 'next_transition': 5363}.
<a id="trace-4829"></a>
- 28.80s–28.80s (×1), actor 0, squad 0 (trace 4829): received platoon directive; retain contact cover stage. Knowledge: actor memory at 25.00s, trace 4309. Next observer evidence: {'until': 29.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.38865832521223176, 'next_transition': 4840}.
<a id="trace-4840"></a>
<a id="trace-4842"></a>
- 29.25s–29.25s (×2), actor 5, squad 0 (trace 4840): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4314. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10651427313178576, 'next_transition': 4858}.
<a id="trace-4858"></a>
- 29.60s–29.60s (×1), actor 0, squad 0 (trace 4858): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 4309. Next observer evidence: None.
<a id="trace-5208"></a>
<a id="trace-5210"></a>
<a id="trace-5290"></a>
<a id="trace-5292"></a>
<a id="trace-5313"></a>
<a id="trace-5315"></a>
<a id="trace-5350"></a>
<a id="trace-5352"></a>
<a id="trace-5368"></a>
<a id="trace-5370"></a>
<a id="trace-5403"></a>
<a id="trace-5405"></a>
<a id="trace-5443"></a>
<a id="trace-5445"></a>
<a id="trace-5472"></a>
<a id="trace-5474"></a>
- 29.75s–33.25s (×16), actor 5, squad 0 (trace 5208): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4314. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.11717679112276513, 'next_transition': 5290}.
<a id="trace-5363"></a>
- 31.55s–31.55s (×1), actor 9, squad 1 (trace 5363): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5224. Next observer evidence: {'until': 35.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.7719999999999985, 'next_transition': 610}.
<a id="trace-5365"></a>
- 31.55s–31.55s (×1), actor 9, squad 1 (trace 5365): assessment holds occupied cover; no replacement orders. Knowledge: actor memory at 30.00s, trace 5224. Next observer evidence: {'until': 35.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 1.7719999999999985, 'next_transition': 610}.
<a id="trace-5480"></a>
- 33.30s–33.30s (×1), actor 0, squad 0 (trace 5480): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 5216. Next observer evidence: {'until': 33.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.17953158229425298, 'next_transition': 5486}.
<a id="trace-5486"></a>
<a id="trace-5488"></a>
<a id="trace-5513"></a>
<a id="trace-5515"></a>
<a id="trace-5531"></a>
<a id="trace-5533"></a>
<a id="trace-5612"></a>
<a id="trace-5614"></a>
<a id="trace-5636"></a>
<a id="trace-5638"></a>
<a id="trace-5687"></a>
<a id="trace-5689"></a>
<a id="trace-5722"></a>
<a id="trace-5724"></a>
- 33.75s–36.75s (×14), actor 5, squad 0 (trace 5486): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5221. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2504088033521107, 'next_transition': 5513}.
<a id="trace-610"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (events line 610): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5651"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (trace 5651): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548911 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 35.85s, trace 5651. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8354999999999997, 'next_transition': 9376}.
<a id="trace-5652"></a>
- 35.85s–35.85s (×1), actor 5, squad 1 (trace 5652): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.548911 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 35.85s, trace 5652. Next observer evidence: {'until': 37.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8354999999999997, 'next_transition': 9376}.
<a id="trace-5738"></a>
- 36.95s–36.95s (×1), actor 0, squad 0 (trace 5738): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 35.00s, trace 5541. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22325308845146238, 'next_transition': 9386}.
<a id="trace-9110"></a>
- 36.95s–36.95s (×1), actor 0, squad 0 (trace 9110): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 35.00s, trace 5541. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22325308845146238, 'next_transition': 9386}.
<a id="trace-9111"></a>
- 36.95s–36.95s (×1), actor 0, squad 0 (trace 9111): MoveTactically. Knowledge: actor memory at 35.00s, trace 5541. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22325308845146238, 'next_transition': 9386}.
<a id="trace-9112"></a>
- 36.95s–36.95s (×1), actor 0, squad 0 (trace 9112): contact cover complete: assessment resumes closure. Knowledge: actor memory at 35.00s, trace 5541. Next observer evidence: {'until': 37.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.22325308845146238, 'next_transition': 9386}.
<a id="trace-9376"></a>
- 37.20s–37.20s (×1), actor 9, squad 1 (trace 9376): received platoon directive; retain held slots. Knowledge: actor memory at 35.00s, trace 5549. Next observer evidence: {'until': 40.8, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.8615999999999993, 'next_transition': 9648}.
<a id="trace-9386"></a>
<a id="trace-9388"></a>
<a id="trace-9419"></a>
<a id="trace-9421"></a>
<a id="trace-9464"></a>
<a id="trace-9466"></a>
<a id="trace-9482"></a>
<a id="trace-9484"></a>
<a id="trace-9506"></a>
<a id="trace-9508"></a>
<a id="trace-9533"></a>
<a id="trace-9535"></a>
<a id="trace-9619"></a>
<a id="trace-9621"></a>
<a id="trace-9636"></a>
<a id="trace-9638"></a>
<a id="trace-9675"></a>
<a id="trace-9677"></a>
<a id="trace-9690"></a>
<a id="trace-9692"></a>
<a id="trace-9717"></a>
<a id="trace-9719"></a>
<a id="trace-9728"></a>
<a id="trace-9730"></a>
<a id="trace-9755"></a>
<a id="trace-9757"></a>
<a id="trace-9780"></a>
<a id="trace-9782"></a>
<a id="trace-9804"></a>
<a id="trace-9806"></a>
<a id="trace-9828"></a>
<a id="trace-9830"></a>
<a id="trace-9916"></a>
<a id="trace-9918"></a>
- 37.25s–45.25s (×34), actor 5, squad 0 (trace 9386): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.85s, trace 5652. Next observer evidence: {'until': 37.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9419}.
<a id="trace-9648"></a>
- 40.95s–40.95s (×1), actor 9, squad 1 (trace 9648): NeedSupport. Knowledge: actor memory at 40.00s, trace 9552. Next observer evidence: {'until': 42, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 852}.
<a id="trace-852"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (events line 852): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9706"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 9706): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.551945 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 9706. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9769}.
<a id="trace-9707"></a>
- 42.10s–42.10s (×1), actor 5, squad 1 (trace 9707): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.551945 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 42.10s, trace 9707. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9769}.
<a id="trace-9769"></a>
- 43.30s–43.30s (×1), actor 9, squad 1 (trace 9769): received platoon directive; retain held slots. Knowledge: actor memory at 40.00s, trace 9552. Next observer evidence: {'until': 46.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 9976}.
<a id="trace-9924"></a>
- 45.25s–45.25s (×1), actor 1, squad 0 (trace 9924): NeedSupport. Knowledge: actor memory at 45.00s, trace 9838. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.097126066972923, 'next_transition': 9936}.
<a id="trace-9936"></a>
<a id="trace-9938"></a>
- 45.75s–45.75s (×2), actor 5, squad 0 (trace 9936): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9842. Next observer evidence: {'until': 45.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5418059256297222, 'next_transition': 986}.
<a id="trace-986"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (events line 986): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-9945"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 9945): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554320 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 9945. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44882498167790524, 'next_transition': 9951}.
<a id="trace-9946"></a>
- 45.85s–45.85s (×1), actor 5, squad 0 (trace 9946): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.554320 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 45.85s, trace 9946. Next observer evidence: {'until': 46, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.44882498167790524, 'next_transition': 9951}.
<a id="trace-9951"></a>
- 46.05s–46.05s (×1), actor 5, squad 0 (trace 9951): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 46.05s, trace 9951. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3550433701445472, 'next_transition': 9964}.
<a id="trace-9964"></a>
<a id="trace-9966"></a>
<a id="trace-9989"></a>
<a id="trace-9991"></a>
<a id="trace-10015"></a>
<a id="trace-10017"></a>
<a id="trace-10031"></a>
<a id="trace-10033"></a>
<a id="trace-10061"></a>
<a id="trace-10063"></a>
<a id="trace-10155"></a>
<a id="trace-10157"></a>
<a id="trace-10181"></a>
<a id="trace-10183"></a>
<a id="trace-10207"></a>
<a id="trace-10209"></a>
<a id="trace-10296"></a>
<a id="trace-10298"></a>
- 46.25s–50.25s (×18), actor 5, squad 0 (trace 9964): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 46.05s, trace 9951. Next observer evidence: {'until': 46.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8342895164150528, 'next_transition': 9989}.
<a id="trace-9976"></a>
- 46.45s–46.45s (×1), actor 9, squad 1 (trace 9976): radio NeedSupport: volunteer support by fire within 100 m; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 45.00s, trace 9845. Next observer evidence: None.
<a id="trace-9977"></a>
- 46.45s–46.45s (×1), actor 9, squad 1 (trace 9977): help: occupy protected slots covering neighbour's group. Knowledge: actor memory at 45.00s, trace 9845. Next observer evidence: None.
<a id="trace-9979"></a>
- 46.50s–46.50s (×1), actor 9, squad 1 (trace 9979): support_position_exhausted: no reachable gun or two rifle firing slots within 60 m. Knowledge: actor memory at 45.00s, trace 9845. Next observer evidence: {'until': 47, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1009}.
<a id="trace-1009"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (events line 1009): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10003"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 10003): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.469228 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 10003. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5223000000000013, 'next_transition': 10076}.
<a id="trace-10004"></a>
- 47.10s–47.10s (×1), actor 5, squad 1 (trace 10004): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.469228 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 47.10s, trace 10004. Next observer evidence: {'until': 48.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5223000000000013, 'next_transition': 10076}.
<a id="trace-10076"></a>
- 48.60s–48.60s (×1), actor 9, squad 1 (trace 10076): ReactToContact: cover and return fire. Knowledge: actor memory at 45.00s, trace 9845. Next observer evidence: {'until': 51.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5193000000000012, 'next_transition': 10648}.
<a id="trace-10077"></a>
- 48.60s–48.60s (×1), actor 9, squad 1 (trace 10077): received platoon directive. Knowledge: actor memory at 45.00s, trace 9845. Next observer evidence: {'until': 51.8, 'shots': 1, 'casualties': 0, 'mean_displacement': 1.5193000000000012, 'next_transition': 10648}.
<a id="trace-10305"></a>
- 50.25s–50.25s (×1), actor 1, squad 0 (trace 10305): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 50.00s, trace 10220. Next observer evidence: {'until': 50.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5239984226968748, 'next_transition': 10583}.
<a id="trace-10583"></a>
<a id="trace-10585"></a>
<a id="trace-10613"></a>
<a id="trace-10615"></a>
<a id="trace-10638"></a>
<a id="trace-10640"></a>
<a id="trace-10719"></a>
<a id="trace-10721"></a>
<a id="trace-10744"></a>
<a id="trace-10746"></a>
<a id="trace-10761"></a>
<a id="trace-10763"></a>
- 50.75s–53.25s (×12), actor 5, squad 0 (trace 10583): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10224. Next observer evidence: {'until': 51.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7091070798622512, 'next_transition': 10613}.
<a id="trace-10648"></a>
- 51.90s–51.90s (×1), actor 9, squad 1 (trace 10648): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 50.00s, trace 10227. Next observer evidence: {'until': 81.8, 'shots': 13, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1696}.
<a id="trace-10649"></a>
- 51.90s–51.90s (×1), actor 9, squad 1 (trace 10649): rearward bound: one stationary suppressing element. Knowledge: actor memory at 50.00s, trace 10227. Next observer evidence: {'until': 81.8, 'shots': 13, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1696}.
<a id="trace-10779"></a>
- 53.35s–53.35s (×1), actor 1, squad 0 (trace 10779): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 50.00s, trace 10220. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3096040297633462, 'next_transition': 10972}.
<a id="trace-10967"></a>
- 53.35s–53.35s (×1), actor 1, squad 0 (trace 10967): effective incoming fire without superiority; no protected bound: hold existing cover. Knowledge: actor memory at 50.00s, trace 10220. Next observer evidence: {'until': 53.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3096040297633462, 'next_transition': 10972}.
<a id="trace-10972"></a>
<a id="trace-10974"></a>
<a id="trace-10990"></a>
<a id="trace-10992"></a>
<a id="trace-11010"></a>
<a id="trace-11012"></a>
<a id="trace-11087"></a>
<a id="trace-11089"></a>
<a id="trace-11100"></a>
<a id="trace-11102"></a>
<a id="trace-11120"></a>
<a id="trace-11122"></a>
<a id="trace-11134"></a>
<a id="trace-11136"></a>
<a id="trace-11149"></a>
<a id="trace-11151"></a>
<a id="trace-11164"></a>
<a id="trace-11166"></a>
<a id="trace-11181"></a>
<a id="trace-11183"></a>
<a id="trace-11195"></a>
<a id="trace-11197"></a>
<a id="trace-11212"></a>
<a id="trace-11214"></a>
<a id="trace-11227"></a>
<a id="trace-11229"></a>
<a id="trace-11305"></a>
<a id="trace-11307"></a>
<a id="trace-11319"></a>
<a id="trace-11321"></a>
<a id="trace-11338"></a>
<a id="trace-11340"></a>
<a id="trace-11352"></a>
<a id="trace-11354"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
<a id="trace-11379"></a>
<a id="trace-11381"></a>
- 53.75s–62.75s (×38), actor 5, squad 0 (trace 10972): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10224. Next observer evidence: {'until': 54.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.30013683490781035, 'next_transition': 10990}.
<a id="trace-11409"></a>
- 63.20s–63.20s (×1), actor 1, squad 0 (trace 11409): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 60.00s, trace 11238. Next observer evidence: None.
<a id="trace-11420"></a>
<a id="trace-11422"></a>
<a id="trace-11453"></a>
<a id="trace-11455"></a>
- 63.25s–63.75s (×4), actor 5, squad 0 (trace 11420): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11242. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.18739651007488775, 'next_transition': 11453}.
<a id="trace-11486"></a>
- 64.20s–64.20s (×1), actor 1, squad 0 (trace 11486): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 11238. Next observer evidence: None.
<a id="trace-11491"></a>
- 64.20s–64.20s (×1), actor 1, squad 0 (trace 11491): MoveTactically. Knowledge: actor memory at 60.00s, trace 11238. Next observer evidence: None.
<a id="trace-11492"></a>
- 64.20s–64.20s (×1), actor 1, squad 0 (trace 11492): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 60.00s, trace 11238. Next observer evidence: None.
<a id="trace-11829"></a>
<a id="trace-11831"></a>
<a id="trace-11843"></a>
<a id="trace-11845"></a>
<a id="trace-11937"></a>
<a id="trace-11939"></a>
<a id="trace-11978"></a>
<a id="trace-11980"></a>
<a id="trace-12002"></a>
<a id="trace-12004"></a>
<a id="trace-12019"></a>
<a id="trace-12021"></a>
<a id="trace-12032"></a>
<a id="trace-12034"></a>
<a id="trace-12040"></a>
<a id="trace-12042"></a>
<a id="trace-12058"></a>
<a id="trace-12060"></a>
<a id="trace-12073"></a>
<a id="trace-12075"></a>
<a id="trace-12092"></a>
<a id="trace-12094"></a>
<a id="trace-12108"></a>
<a id="trace-12110"></a>
<a id="trace-12193"></a>
<a id="trace-12195"></a>
- 64.25s–70.25s (×26), actor 5, squad 0 (trace 11829): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11242. Next observer evidence: {'until': 64.6, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.3744182255559522, 'next_transition': 11843}.
<a id="trace-12200"></a>
- 70.30s–70.30s (×1), actor 4, squad 0 (trace 12200): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 70.00s, trace 12121. Next observer evidence: {'until': 70.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299993023305764, 'next_transition': 12368}.
<a id="trace-12201"></a>
- 70.30s–70.30s (×1), actor 4, squad 0 (trace 12201): rearward bound: one stationary suppressing element. Knowledge: actor memory at 70.00s, trace 12121. Next observer evidence: {'until': 70.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.6299993023305764, 'next_transition': 12368}.
<a id="trace-12368"></a>
<a id="trace-12370"></a>
<a id="trace-12383"></a>
<a id="trace-12385"></a>
<a id="trace-12403"></a>
<a id="trace-12405"></a>
<a id="trace-12426"></a>
<a id="trace-12428"></a>
<a id="trace-12445"></a>
<a id="trace-12447"></a>
- 70.75s–72.75s (×10), actor 5, squad 0 (trace 12368): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12122. Next observer evidence: {'until': 71.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9450001805952036, 'next_transition': 12383}.
<a id="trace-1502"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (events line 1502): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12461"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 12461): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.237394 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 12461. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0030250000000000554, 'next_transition': 12472}.
<a id="trace-12462"></a>
- 72.95s–72.95s (×1), actor 5, squad 0 (trace 12462): FightHere: nearest known group; squad chooses its drill; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.237394 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 72.95s, trace 12462. Next observer evidence: {'until': 73.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0030250000000000554, 'next_transition': 12472}.
<a id="trace-12472"></a>
<a id="trace-12474"></a>
<a id="trace-12485"></a>
<a id="trace-12487"></a>
<a id="trace-12508"></a>
<a id="trace-12510"></a>
<a id="trace-12522"></a>
<a id="trace-12524"></a>
<a id="trace-12600"></a>
<a id="trace-12602"></a>
<a id="trace-12618"></a>
<a id="trace-12620"></a>
<a id="trace-12638"></a>
<a id="trace-12640"></a>
<a id="trace-12651"></a>
<a id="trace-12653"></a>
<a id="trace-12665"></a>
<a id="trace-12667"></a>
<a id="trace-12675"></a>
<a id="trace-12677"></a>
<a id="trace-12696"></a>
<a id="trace-12698"></a>
<a id="trace-12709"></a>
<a id="trace-12711"></a>
<a id="trace-12721"></a>
<a id="trace-12723"></a>
- 73.25s–79.25s (×26), actor 5, squad 0 (trace 12472): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 72.95s, trace 12462. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.002974999999999728, 'next_transition': 12485}.
<a id="trace-12732"></a>
- 79.40s–79.40s (×1), actor 4, squad 0 (trace 12732): support established: element delivered fire on threat area. Knowledge: actor memory at 75.00s, trace 12536. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12744}.
<a id="trace-12733"></a>
- 79.40s–79.40s (×1), actor 4, squad 0 (trace 12733): Fixing. Knowledge: actor memory at 75.00s, trace 12536. Next observer evidence: {'until': 79.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12744}.
<a id="trace-12744"></a>
<a id="trace-12746"></a>
<a id="trace-12823"></a>
<a id="trace-12825"></a>
<a id="trace-12838"></a>
<a id="trace-12840"></a>
<a id="trace-12857"></a>
<a id="trace-12859"></a>
<a id="trace-12867"></a>
<a id="trace-12869"></a>
<a id="trace-12886"></a>
<a id="trace-12888"></a>
<a id="trace-12898"></a>
<a id="trace-12900"></a>
<a id="trace-12917"></a>
<a id="trace-12919"></a>
<a id="trace-12929"></a>
<a id="trace-12931"></a>
<a id="trace-12948"></a>
<a id="trace-12950"></a>
<a id="trace-12965"></a>
<a id="trace-12967"></a>
<a id="trace-13035"></a>
<a id="trace-13037"></a>
<a id="trace-13047"></a>
<a id="trace-13049"></a>
<a id="trace-13062"></a>
<a id="trace-13064"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13088"></a>
<a id="trace-13090"></a>
<a id="trace-13101"></a>
<a id="trace-13103"></a>
<a id="trace-13119"></a>
<a id="trace-13121"></a>
<a id="trace-13136"></a>
<a id="trace-13138"></a>
<a id="trace-13154"></a>
<a id="trace-13156"></a>
<a id="trace-13169"></a>
<a id="trace-13171"></a>
<a id="trace-13239"></a>
<a id="trace-13241"></a>
<a id="trace-13251"></a>
<a id="trace-13253"></a>
<a id="trace-13263"></a>
<a id="trace-13265"></a>
<a id="trace-13271"></a>
<a id="trace-13273"></a>
<a id="trace-13286"></a>
<a id="trace-13288"></a>
<a id="trace-13294"></a>
<a id="trace-13296"></a>
<a id="trace-13309"></a>
<a id="trace-13311"></a>
<a id="trace-13327"></a>
<a id="trace-13329"></a>
<a id="trace-13349"></a>
<a id="trace-13351"></a>
<a id="trace-13366"></a>
<a id="trace-13368"></a>
<a id="trace-13434"></a>
<a id="trace-13436"></a>
<a id="trace-13457"></a>
<a id="trace-13459"></a>
<a id="trace-13468"></a>
<a id="trace-13470"></a>
<a id="trace-13482"></a>
<a id="trace-13484"></a>
<a id="trace-13490"></a>
<a id="trace-13492"></a>
<a id="trace-13507"></a>
<a id="trace-13509"></a>
<a id="trace-13518"></a>
<a id="trace-13520"></a>
- 79.75s–98.75s (×76), actor 5, squad 0 (trace 12744): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 12537. Next observer evidence: {'until': 80.2, 'shots': 2, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12823}.
<a id="trace-13527"></a>
- 99.15s–99.15s (×1), actor 4, squad 0 (trace 13527): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 95.00s, trace 13375. Next observer evidence: {'until': 99.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13534}.
<a id="trace-13534"></a>
<a id="trace-13536"></a>
<a id="trace-13547"></a>
<a id="trace-13549"></a>
<a id="trace-13613"></a>
<a id="trace-13615"></a>
<a id="trace-13626"></a>
<a id="trace-13628"></a>
<a id="trace-13644"></a>
<a id="trace-13646"></a>
<a id="trace-13655"></a>
<a id="trace-13657"></a>
<a id="trace-13675"></a>
<a id="trace-13677"></a>
<a id="trace-13689"></a>
<a id="trace-13691"></a>
<a id="trace-13707"></a>
<a id="trace-13709"></a>
<a id="trace-13720"></a>
<a id="trace-13722"></a>
<a id="trace-13742"></a>
<a id="trace-13744"></a>
<a id="trace-13761"></a>
<a id="trace-13763"></a>
<a id="trace-13839"></a>
<a id="trace-13841"></a>
<a id="trace-13849"></a>
<a id="trace-13851"></a>
<a id="trace-13872"></a>
<a id="trace-13874"></a>
<a id="trace-13886"></a>
<a id="trace-13888"></a>
<a id="trace-13903"></a>
<a id="trace-13905"></a>
<a id="trace-13914"></a>
<a id="trace-13916"></a>
<a id="trace-13940"></a>
<a id="trace-13942"></a>
<a id="trace-13957"></a>
<a id="trace-13959"></a>
<a id="trace-13981"></a>
<a id="trace-13983"></a>
<a id="trace-13995"></a>
<a id="trace-13997"></a>
<a id="trace-14068"></a>
<a id="trace-14070"></a>
<a id="trace-14084"></a>
<a id="trace-14086"></a>
<a id="trace-14101"></a>
<a id="trace-14103"></a>
<a id="trace-14113"></a>
<a id="trace-14115"></a>
<a id="trace-14139"></a>
<a id="trace-14141"></a>
<a id="trace-14151"></a>
<a id="trace-14153"></a>
<a id="trace-14176"></a>
<a id="trace-14178"></a>
<a id="trace-14193"></a>
<a id="trace-14195"></a>
<a id="trace-14212"></a>
<a id="trace-14214"></a>
<a id="trace-14243"></a>
<a id="trace-14245"></a>
<a id="trace-14311"></a>
<a id="trace-14313"></a>
<a id="trace-14332"></a>
<a id="trace-14334"></a>
<a id="trace-14351"></a>
<a id="trace-14353"></a>
<a id="trace-14361"></a>
<a id="trace-14363"></a>
<a id="trace-14382"></a>
<a id="trace-14384"></a>
<a id="trace-14398"></a>
<a id="trace-14400"></a>
<a id="trace-14412"></a>
<a id="trace-14414"></a>
<a id="trace-14431"></a>
<a id="trace-14433"></a>
<a id="trace-14458"></a>
<a id="trace-14460"></a>
<a id="trace-14490"></a>
<a id="trace-14492"></a>
- 99.25s–119.75s (×84), actor 5, squad 0 (trace 13534): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 13376. Next observer evidence: {'until': 99.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13547}.
<a id="trace-1696"></a>
- 107.85s–107.85s (×1), actor 5, squad 1 (events line 1696): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 137.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15470}.
<a id="trace-13923"></a>
- 107.85s–107.85s (×1), actor 5, squad 1 (trace 13923): renew committed intent (75 s lifetime). Knowledge: actor memory at 107.85s, trace 13923. Next observer evidence: {'until': 137.8, 'shots': 4, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15470}.
<a id="trace-14500"></a>
- 119.75s–119.75s (×1), actor 7, squad 0 (trace 14500): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 115.00s, trace 14255. Next observer evidence: {'until': 119.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15120715880284388, 'next_transition': 14502}.
<a id="trace-14502"></a>
- 119.80s–119.80s (×1), actor 7, squad 0 (trace 14502): Reorganise: completed/failed drill. Knowledge: actor memory at 115.00s, trace 14255. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30241098427235485, 'next_transition': 14645}.
<a id="trace-14504"></a>
- 119.80s–119.80s (×1), actor 7, squad 0 (trace 14504): ReactToContact: cover and return fire. Knowledge: actor memory at 115.00s, trace 14255. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30241098427235485, 'next_transition': 14645}.
<a id="trace-14505"></a>
- 119.80s–119.80s (×1), actor 7, squad 0 (trace 14505): Reorganise complete: known contact. Knowledge: actor memory at 115.00s, trace 14255. Next observer evidence: {'until': 120.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30241098427235485, 'next_transition': 14645}.
<a id="trace-14645"></a>
<a id="trace-14647"></a>
<a id="trace-14667"></a>
<a id="trace-14669"></a>
<a id="trace-14692"></a>
<a id="trace-14694"></a>
<a id="trace-14707"></a>
<a id="trace-14709"></a>
<a id="trace-14723"></a>
<a id="trace-14725"></a>
<a id="trace-14734"></a>
<a id="trace-14736"></a>
- 120.25s–122.75s (×12), actor 5, squad 0 (trace 14645): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14576. Next observer evidence: {'until': 120.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.30419801287152715, 'next_transition': 14667}.
<a id="trace-14742"></a>
- 123.15s–123.15s (×1), actor 7, squad 0 (trace 14742): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 120.00s, trace 14578. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08408586358928334, 'next_transition': 14812}.
<a id="trace-14743"></a>
- 123.15s–123.15s (×1), actor 7, squad 0 (trace 14743): rearward bound: one stationary suppressing element. Knowledge: actor memory at 120.00s, trace 14578. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08408586358928334, 'next_transition': 14812}.
<a id="trace-14812"></a>
<a id="trace-14814"></a>
<a id="trace-14828"></a>
<a id="trace-14830"></a>
<a id="trace-14848"></a>
<a id="trace-14850"></a>
- 123.25s–124.25s (×6), actor 5, squad 0 (trace 14812): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 120.00s, trace 14576. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14828}.
<a id="trace-1812"></a>
- 124.65s–124.65s (×1), actor 5, squad 0 (events line 1812): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14861"></a>
- 124.65s–124.65s (×1), actor 5, squad 0 (trace 14861): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.171259 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 124.65s, trace 14861. Next observer evidence: None.
<a id="trace-14862"></a>
- 124.65s–124.65s (×1), actor 5, squad 0 (trace 14862): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.171259 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 124.65s, trace 14862. Next observer evidence: None.
<a id="trace-14866"></a>
<a id="trace-14868"></a>
<a id="trace-14940"></a>
<a id="trace-14942"></a>
<a id="trace-14950"></a>
<a id="trace-14952"></a>
- 124.75s–125.75s (×6), actor 5, squad 0 (trace 14866): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 124.65s, trace 14862. Next observer evidence: {'until': 125.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14940}.
<a id="trace-14958"></a>
- 126.05s–126.05s (×1), actor 7, squad 0 (trace 14958): received Withdraw: retain retirement bound and receipts; extend rally. Knowledge: actor memory at 125.00s, trace 14879. Next observer evidence: {'until': 126.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14966}.
<a id="trace-14966"></a>
<a id="trace-14968"></a>
<a id="trace-14976"></a>
<a id="trace-14978"></a>
<a id="trace-14988"></a>
<a id="trace-14990"></a>
<a id="trace-14999"></a>
<a id="trace-15001"></a>
<a id="trace-15012"></a>
<a id="trace-15014"></a>
<a id="trace-15026"></a>
<a id="trace-15028"></a>
<a id="trace-15040"></a>
<a id="trace-15042"></a>
<a id="trace-15048"></a>
<a id="trace-15050"></a>
<a id="trace-15109"></a>
<a id="trace-15111"></a>
<a id="trace-15118"></a>
<a id="trace-15120"></a>
<a id="trace-15131"></a>
<a id="trace-15133"></a>
<a id="trace-15137"></a>
<a id="trace-15139"></a>
<a id="trace-15147"></a>
<a id="trace-15149"></a>
<a id="trace-15156"></a>
<a id="trace-15158"></a>
<a id="trace-15167"></a>
<a id="trace-15169"></a>
<a id="trace-15177"></a>
<a id="trace-15179"></a>
<a id="trace-15189"></a>
<a id="trace-15191"></a>
<a id="trace-15198"></a>
<a id="trace-15200"></a>
<a id="trace-15259"></a>
<a id="trace-15261"></a>
<a id="trace-15268"></a>
<a id="trace-15270"></a>
<a id="trace-15279"></a>
<a id="trace-15281"></a>
<a id="trace-15285"></a>
<a id="trace-15287"></a>
<a id="trace-15297"></a>
<a id="trace-15299"></a>
<a id="trace-15305"></a>
<a id="trace-15307"></a>
<a id="trace-15316"></a>
<a id="trace-15318"></a>
<a id="trace-15326"></a>
<a id="trace-15328"></a>
<a id="trace-15338"></a>
<a id="trace-15340"></a>
<a id="trace-15348"></a>
<a id="trace-15350"></a>
<a id="trace-15408"></a>
<a id="trace-15410"></a>
<a id="trace-15417"></a>
<a id="trace-15419"></a>
<a id="trace-15429"></a>
<a id="trace-15431"></a>
<a id="trace-15434"></a>
<a id="trace-15436"></a>
<a id="trace-15445"></a>
<a id="trace-15447"></a>
<a id="trace-15452"></a>
<a id="trace-15454"></a>
<a id="trace-15464"></a>
<a id="trace-15466"></a>
<a id="trace-15478"></a>
<a id="trace-15480"></a>
<a id="trace-15493"></a>
<a id="trace-15495"></a>
<a id="trace-15502"></a>
<a id="trace-15504"></a>
<a id="trace-15565"></a>
<a id="trace-15567"></a>
<a id="trace-15581"></a>
<a id="trace-15583"></a>
<a id="trace-15593"></a>
<a id="trace-15595"></a>
<a id="trace-15607"></a>
<a id="trace-15609"></a>
<a id="trace-15625"></a>
<a id="trace-15627"></a>
<a id="trace-15743"></a>
<a id="trace-15745"></a>
<a id="trace-15764"></a>
<a id="trace-15766"></a>
<a id="trace-15778"></a>
<a id="trace-15780"></a>
- 126.25s–152.30s (×92), actor 5, squad 0 (trace 14966): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 14877. Next observer evidence: {'until': 126.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14976}.
<a id="trace-15470"></a>
- 143.40s–143.40s (×1), actor 9, squad 1 (trace 15470): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 140.00s, trace 15356. Next observer evidence: {'until': 148.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1846}.
<a id="trace-1846"></a>
- 148.65s–148.65s (×1), actor 5, squad 1 (events line 1846): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-15615"></a>
- 148.65s–148.65s (×1), actor 5, squad 1 (trace 15615): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187219 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 148.65s, trace 15615. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15637}.
<a id="trace-15616"></a>
- 148.65s–148.65s (×1), actor 5, squad 1 (trace 15616): RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187219 retreat threshold=0.500000 initiative=delegated. Knowledge: actor memory at 148.65s, trace 15616. Next observer evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15637}.
<a id="trace-15637"></a>
- 149.95s–149.95s (×1), actor 9, squad 1 (trace 15637): Withdraw to received rally. Knowledge: actor memory at 145.00s, trace 15510. Next observer evidence: {'until': 165, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 16121}.
<a id="trace-15638"></a>
- 149.95s–149.95s (×1), actor 9, squad 1 (trace 15638): rearward bound: one stationary suppressing element. Knowledge: actor memory at 145.00s, trace 15510. Next observer evidence: {'until': 165, 'shots': 0, 'casualties': 0, 'mean_displacement': 30.0, 'next_transition': 16121}.
<a id="trace-15787"></a>
- 152.85s–152.85s (×1), actor 7, squad 0 (trace 15787): NeedSupport. Knowledge: actor memory at 150.00s, trace 15692. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15797}.
<a id="trace-15797"></a>
<a id="trace-15799"></a>
<a id="trace-15815"></a>
<a id="trace-15817"></a>
<a id="trace-15881"></a>
<a id="trace-15883"></a>
<a id="trace-15900"></a>
<a id="trace-15902"></a>
<a id="trace-15913"></a>
<a id="trace-15915"></a>
<a id="trace-15927"></a>
<a id="trace-15929"></a>
<a id="trace-15944"></a>
<a id="trace-15946"></a>
<a id="trace-16008"></a>
<a id="trace-16010"></a>
<a id="trace-16033"></a>
<a id="trace-16035"></a>
<a id="trace-16056"></a>
<a id="trace-16058"></a>
<a id="trace-16076"></a>
<a id="trace-16078"></a>
<a id="trace-16098"></a>
<a id="trace-16100"></a>
<a id="trace-16170"></a>
<a id="trace-16172"></a>
<a id="trace-16194"></a>
<a id="trace-16196"></a>
<a id="trace-16213"></a>
<a id="trace-16215"></a>
<a id="trace-16230"></a>
<a id="trace-16232"></a>
<a id="trace-16252"></a>
<a id="trace-16254"></a>
<a id="trace-16321"></a>
<a id="trace-16323"></a>
<a id="trace-16340"></a>
<a id="trace-16342"></a>
<a id="trace-16350"></a>
<a id="trace-16352"></a>
<a id="trace-16360"></a>
<a id="trace-16362"></a>
<a id="trace-16379"></a>
<a id="trace-16381"></a>
<a id="trace-16446"></a>
<a id="trace-16448"></a>
<a id="trace-16467"></a>
<a id="trace-16469"></a>
<a id="trace-16481"></a>
<a id="trace-16483"></a>
- 153.30s–177.30s (×50), actor 5, squad 0 (trace 15797): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.00s, trace 15691. Next observer evidence: {'until': 154.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15815}.
<a id="trace-16121"></a>
- 165.00s–165.00s (×1), actor 9, squad 1 (trace 16121): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 165.00s, trace 16116. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1909}.
<a id="trace-16122"></a>
- 165.00s–165.00s (×1), actor 9, squad 1 (trace 16122): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 165.00s, trace 16116. Next observer evidence: {'until': 181.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1909}.
<a id="trace-1909"></a>
- 181.25s–181.25s (×1), actor 7, squad 1 (events line 1909): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1972}.
<a id="trace-16575"></a>
- 181.25s–181.25s (×1), actor 7, squad 1 (trace 16575): renew committed intent (75 s lifetime). Knowledge: actor memory at 181.25s, trace 16575. Next observer evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1972}.
<a id="trace-16577"></a>
<a id="trace-16579"></a>
<a id="trace-16591"></a>
<a id="trace-16593"></a>
<a id="trace-16609"></a>
<a id="trace-16611"></a>
<a id="trace-16615"></a>
<a id="trace-16624"></a>
- 181.30s–183.80s (×8), actor 7, squad 0 (trace 16577): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 181.25s, trace 16575. Next observer evidence: {'until': 182.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.10779999999999745, 'next_transition': 16591}.
<a id="trace-1918"></a>
- 184.05s–184.05s (×1), actor 7, squad 0 (events line 1918): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16633}.
<a id="trace-16629"></a>
- 184.05s–184.05s (×1), actor 7, squad 0 (trace 16629): renew committed intent (75 s lifetime). Knowledge: actor memory at 184.05s, trace 16629. Next observer evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16633}.
<a id="trace-16633"></a>
<a id="trace-16635"></a>
<a id="trace-16639"></a>
<a id="trace-16647"></a>
<a id="trace-16700"></a>
<a id="trace-16702"></a>
<a id="trace-16706"></a>
<a id="trace-16715"></a>
<a id="trace-16720"></a>
<a id="trace-16722"></a>
<a id="trace-16726"></a>
<a id="trace-16732"></a>
<a id="trace-16739"></a>
<a id="trace-16747"></a>
<a id="trace-16756"></a>
<a id="trace-16758"></a>
<a id="trace-16762"></a>
<a id="trace-16771"></a>
<a id="trace-16778"></a>
<a id="trace-16780"></a>
<a id="trace-16784"></a>
<a id="trace-16793"></a>
<a id="trace-16847"></a>
<a id="trace-16849"></a>
<a id="trace-16853"></a>
<a id="trace-16863"></a>
<a id="trace-16868"></a>
<a id="trace-16870"></a>
<a id="trace-16877"></a>
<a id="trace-16879"></a>
<a id="trace-16890"></a>
<a id="trace-16892"></a>
<a id="trace-16907"></a>
<a id="trace-16909"></a>
<a id="trace-16978"></a>
<a id="trace-16980"></a>
<a id="trace-16996"></a>
<a id="trace-16998"></a>
<a id="trace-17006"></a>
<a id="trace-17008"></a>
<a id="trace-17017"></a>
<a id="trace-17019"></a>
<a id="trace-17032"></a>
<a id="trace-17034"></a>
<a id="trace-17095"></a>
<a id="trace-17097"></a>
<a id="trace-17114"></a>
<a id="trace-17116"></a>
<a id="trace-17120"></a>
<a id="trace-17125"></a>
<a id="trace-17129"></a>
<a id="trace-17131"></a>
<a id="trace-17135"></a>
<a id="trace-17141"></a>
<a id="trace-17148"></a>
<a id="trace-17150"></a>
<a id="trace-17154"></a>
<a id="trace-17162"></a>
<a id="trace-17170"></a>
<a id="trace-17172"></a>
<a id="trace-17176"></a>
<a id="trace-17183"></a>
<a id="trace-17235"></a>
<a id="trace-17237"></a>
<a id="trace-17241"></a>
<a id="trace-17250"></a>
<a id="trace-17256"></a>
<a id="trace-17258"></a>
<a id="trace-17262"></a>
<a id="trace-17268"></a>
<a id="trace-17274"></a>
<a id="trace-17276"></a>
<a id="trace-17280"></a>
<a id="trace-17287"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17300"></a>
<a id="trace-17307"></a>
<a id="trace-17315"></a>
<a id="trace-17317"></a>
<a id="trace-17321"></a>
<a id="trace-17329"></a>
<a id="trace-17382"></a>
<a id="trace-17384"></a>
<a id="trace-17397"></a>
<a id="trace-17399"></a>
<a id="trace-17409"></a>
<a id="trace-17411"></a>
<a id="trace-17415"></a>
<a id="trace-17422"></a>
<a id="trace-17428"></a>
<a id="trace-17430"></a>
<a id="trace-17434"></a>
<a id="trace-17441"></a>
<a id="trace-17448"></a>
<a id="trace-17450"></a>
<a id="trace-17454"></a>
<a id="trace-17462"></a>
<a id="trace-17515"></a>
<a id="trace-17517"></a>
<a id="trace-17521"></a>
<a id="trace-17531"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17545"></a>
<a id="trace-17552"></a>
<a id="trace-17556"></a>
<a id="trace-17558"></a>
<a id="trace-17562"></a>
<a id="trace-17568"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17580"></a>
<a id="trace-17587"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17601"></a>
<a id="trace-17608"></a>
<a id="trace-17663"></a>
<a id="trace-17665"></a>
<a id="trace-17669"></a>
<a id="trace-17680"></a>
<a id="trace-17686"></a>
<a id="trace-17688"></a>
<a id="trace-17692"></a>
<a id="trace-17697"></a>
<a id="trace-17701"></a>
<a id="trace-17703"></a>
<a id="trace-17707"></a>
<a id="trace-17712"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17726"></a>
<a id="trace-17733"></a>
<a id="trace-17739"></a>
<a id="trace-17741"></a>
<a id="trace-17745"></a>
<a id="trace-17754"></a>
<a id="trace-17808"></a>
<a id="trace-17810"></a>
<a id="trace-17814"></a>
<a id="trace-17827"></a>
<a id="trace-17834"></a>
<a id="trace-17836"></a>
<a id="trace-17840"></a>
<a id="trace-17846"></a>
<a id="trace-17853"></a>
<a id="trace-17855"></a>
<a id="trace-17869"></a>
<a id="trace-17871"></a>
<a id="trace-17883"></a>
<a id="trace-17885"></a>
<a id="trace-17945"></a>
<a id="trace-17947"></a>
<a id="trace-17962"></a>
<a id="trace-17964"></a>
<a id="trace-17972"></a>
<a id="trace-17974"></a>
<a id="trace-17987"></a>
<a id="trace-17989"></a>
<a id="trace-17993"></a>
<a id="trace-18001"></a>
<a id="trace-18009"></a>
<a id="trace-18011"></a>
<a id="trace-18015"></a>
<a id="trace-18026"></a>
<a id="trace-18082"></a>
<a id="trace-18084"></a>
<a id="trace-18088"></a>
<a id="trace-18097"></a>
<a id="trace-18103"></a>
<a id="trace-18105"></a>
<a id="trace-18109"></a>
<a id="trace-18117"></a>
<a id="trace-18122"></a>
<a id="trace-18124"></a>
<a id="trace-18128"></a>
<a id="trace-18135"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18147"></a>
<a id="trace-18155"></a>
<a id="trace-18162"></a>
<a id="trace-18164"></a>
<a id="trace-18168"></a>
<a id="trace-18176"></a>
<a id="trace-18229"></a>
<a id="trace-18231"></a>
<a id="trace-18235"></a>
<a id="trace-18245"></a>
<a id="trace-18254"></a>
<a id="trace-18263"></a>
<a id="trace-18268"></a>
<a id="trace-18270"></a>
<a id="trace-18274"></a>
<a id="trace-18279"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18293"></a>
<a id="trace-18301"></a>
<a id="trace-18307"></a>
<a id="trace-18309"></a>
<a id="trace-18371"></a>
<a id="trace-18373"></a>
- 184.30s–245.30s (×204), actor 7, squad 0 (trace 16633): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 184.05s, trace 16629. Next observer evidence: {'until': 184.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16647}.
<a id="trace-1972"></a>
- 242.90s–242.90s (×1), actor 7, squad 1 (events line 1972): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18282"></a>
- 242.90s–242.90s (×1), actor 7, squad 1 (trace 18282): renew committed intent (75 s lifetime). Knowledge: actor memory at 242.90s, trace 18282. Next observer evidence: {'until': 254.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18566}.
<a id="trace-1977"></a>
- 245.75s–245.75s (×1), actor 7, squad 0 (events line 1977): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 246.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18392}.
<a id="trace-18382"></a>
- 245.75s–245.75s (×1), actor 7, squad 0 (trace 18382): renew committed intent (75 s lifetime). Knowledge: actor memory at 245.75s, trace 18382. Next observer evidence: {'until': 246.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18392}.
<a id="trace-18392"></a>
<a id="trace-18394"></a>
<a id="trace-18398"></a>
<a id="trace-18406"></a>
<a id="trace-18411"></a>
<a id="trace-18413"></a>
<a id="trace-18417"></a>
<a id="trace-18422"></a>
<a id="trace-18429"></a>
<a id="trace-18431"></a>
<a id="trace-18435"></a>
<a id="trace-18444"></a>
<a id="trace-18450"></a>
<a id="trace-18452"></a>
<a id="trace-18456"></a>
<a id="trace-18464"></a>
<a id="trace-18517"></a>
<a id="trace-18519"></a>
<a id="trace-18523"></a>
<a id="trace-18534"></a>
- 246.30s–250.80s (×20), actor 7, squad 0 (trace 18392): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=7. Knowledge: actor memory at 245.75s, trace 18382. Next observer evidence: {'until': 246.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18406}.
<a id="trace-1991"></a>
- 254.00s–254.00s (×1), actor 9, squad 0 (events line 1991): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 284, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-18562"></a>
- 254.00s–254.00s (×1), actor 9, squad 0 (trace 18562): renew committed intent (75 s lifetime). Knowledge: actor memory at 254.00s, trace 18562. Next observer evidence: {'until': 284, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}.
<a id="trace-18566"></a>
<a id="trace-18625"></a>
<a id="trace-18640"></a>
- 254.30s–256.30s (×3), actor 9, squad 1 (trace 18566): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 254.00s, trace 18562. Next observer evidence: {'until': 255.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18625}.
<a id="trace-1993"></a>
- 256.80s–256.80s (×1), actor 9, squad 1 (events line 1993): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18646"></a>
- 256.80s–256.80s (×1), actor 9, squad 1 (trace 18646): renew committed intent (75 s lifetime). Knowledge: actor memory at 256.80s, trace 18646. Next observer evidence: {'until': 257.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18649}.
<a id="trace-18649"></a>
<a id="trace-18657"></a>
<a id="trace-18669"></a>
<a id="trace-18729"></a>
<a id="trace-18744"></a>
<a id="trace-18752"></a>
<a id="trace-18761"></a>
<a id="trace-18775"></a>
<a id="trace-18836"></a>
<a id="trace-18854"></a>
<a id="trace-18866"></a>
<a id="trace-18878"></a>
<a id="trace-18894"></a>
<a id="trace-18955"></a>
<a id="trace-18975"></a>
<a id="trace-18984"></a>
<a id="trace-18999"></a>
<a id="trace-19015"></a>
<a id="trace-19076"></a>
<a id="trace-19095"></a>
<a id="trace-19109"></a>
<a id="trace-19120"></a>
<a id="trace-19137"></a>
<a id="trace-19199"></a>
<a id="trace-19218"></a>
<a id="trace-19231"></a>
<a id="trace-19246"></a>
<a id="trace-19258"></a>
<a id="trace-19322"></a>
<a id="trace-19342"></a>
<a id="trace-19354"></a>
<a id="trace-19368"></a>
<a id="trace-19385"></a>
<a id="trace-19444"></a>
<a id="trace-19465"></a>
<a id="trace-19479"></a>
<a id="trace-19491"></a>
<a id="trace-19508"></a>
<a id="trace-19572"></a>
<a id="trace-19589"></a>
<a id="trace-19603"></a>
<a id="trace-19618"></a>
<a id="trace-19633"></a>
<a id="trace-19697"></a>
<a id="trace-19718"></a>
<a id="trace-19728"></a>
<a id="trace-19743"></a>
<a id="trace-19759"></a>
<a id="trace-19820"></a>
<a id="trace-19852"></a>
<a id="trace-19863"></a>
<a id="trace-19879"></a>
<a id="trace-19943"></a>
<a id="trace-19960"></a>
<a id="trace-19973"></a>
<a id="trace-19988"></a>
<a id="trace-20001"></a>
<a id="trace-20064"></a>
<a id="trace-20085"></a>
<a id="trace-20096"></a>
<a id="trace-20111"></a>
- 257.30s–318.30s (×61), actor 9, squad 1 (trace 18649): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 256.80s, trace 18646. Next observer evidence: {'until': 258.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18657}.
<a id="trace-20116"></a>
- 318.40s–318.40s (×1), actor 9, squad 1 (trace 20116): renew committed intent (75 s lifetime). Knowledge: actor memory at 318.40s, trace 20116. Next observer evidence: {'until': 318.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2265}.
<a id="trace-2265"></a>
- 318.40s–318.40s (×1), actor 9, squad 1 (events line 2265): Platoon task-tree directive: RetreatThere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20130}.
<a id="trace-20130"></a>
<a id="trace-20189"></a>
<a id="trace-20210"></a>
<a id="trace-20223"></a>
<a id="trace-20235"></a>
<a id="trace-20252"></a>
<a id="trace-20315"></a>
<a id="trace-20331"></a>
<a id="trace-20357"></a>
<a id="trace-20372"></a>
<a id="trace-20436"></a>
<a id="trace-20456"></a>
<a id="trace-20466"></a>
<a id="trace-20481"></a>
<a id="trace-20497"></a>
<a id="trace-20559"></a>
<a id="trace-20578"></a>
<a id="trace-20592"></a>
<a id="trace-20603"></a>
<a id="trace-20620"></a>
<a id="trace-20683"></a>
<a id="trace-20702"></a>
<a id="trace-20715"></a>
<a id="trace-20729"></a>
<a id="trace-20742"></a>
<a id="trace-20806"></a>
<a id="trace-20827"></a>
<a id="trace-20839"></a>
<a id="trace-20853"></a>
<a id="trace-20869"></a>
<a id="trace-20928"></a>
<a id="trace-20949"></a>
<a id="trace-20963"></a>
<a id="trace-20976"></a>
<a id="trace-20993"></a>
<a id="trace-21057"></a>
<a id="trace-21074"></a>
<a id="trace-21087"></a>
<a id="trace-21116"></a>
- 319.30s–359.30s (×39), actor 9, squad 1 (trace 20130): reported positions blurred by 1.620000 m; identities and observation times retained; lieutenant=9. Knowledge: actor memory at 318.40s, trace 20116. Next observer evidence: {'until': 320.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20189}.

## Net delivery

158 matched order/radio deliveries; 338 explicitly recorded losses; 1 unmatched orders (not classified as lost).
Matched delay: mean 0.365s; maximum 1.800s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 3.95s leader 5, trace 694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 3.95s leader 5, trace 697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 0, trace 748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1556: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1557: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1996: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1998: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1999: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2015: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 3155: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 3156: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 3157: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 3158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 3159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 3160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 3161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 3162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 3163: estimate 11.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 3164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 3165: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 3166: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 3167: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 3168: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 3169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 3170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 3171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 3172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 3173: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 3174: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4199: estimate 11.84; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4200: estimate 11.84; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4201: estimate 11.84; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 23.55s leader 5, trace 4202: estimate 11.84; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4309: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4310: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4311: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4312: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4314: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4315: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4317: estimate 11.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4319: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4320: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4321: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4322: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4323: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4324: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4325: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4326: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4327: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4328: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5216: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5217: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5218: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5219: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5221: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5222: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5224: estimate 9.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5225: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5226: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5227: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5228: estimate 6.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5229: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5230: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5231: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5232: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5233: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5234: estimate 4.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5541: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5542: estimate 11.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5544: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5546: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5547: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5549: estimate 13.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5550: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5551: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5552: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5553: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5554: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5555: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5556: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5557: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5558: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5559: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.85s leader 5, trace 5651: estimate 12.75; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.85s leader 5, trace 5652: estimate 12.75; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 9545: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 2, trace 9546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 9547: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 9548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 9549: estimate 12.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 9550: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 9551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 9552: estimate 13.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 9553: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 9554: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 9555: estimate 6.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 9556: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 9557: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 9558: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 9559: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 9560: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 9561: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 9562: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 9706: estimate 12.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 42.10s leader 5, trace 9707: estimate 12.68; 7 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9838: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 2, trace 9839: estimate 7.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 3, trace 9840: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9841: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9842: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9843: estimate 12.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9844: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9845: estimate 13.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9846: estimate 6.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9847: estimate 7.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9848: estimate 7.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9849: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9850: estimate 7.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9851: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9852: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9853: estimate 7.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9854: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9855: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 9945: estimate 12.63; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.85s leader 5, trace 9946: estimate 12.63; 6 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 46.05s leader 5, trace 9951: estimate 12.80; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 10003: estimate 12.79; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 47.10s leader 5, trace 10004: estimate 12.79; 10 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10220: estimate 12.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 2, trace 10221: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 3, trace 10222: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10224: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10225: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10226: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10227: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10228: estimate 7.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10229: estimate 9.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10230: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10231: estimate 9.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10232: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10233: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10234: estimate 9.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10235: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10236: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10237: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 11021: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 2, trace 11022: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 3, trace 11023: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 11024: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 11025: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 11026: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 11027: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 11028: estimate 13.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 11029: estimate 9.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 11030: estimate 9.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 11031: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 11032: estimate 9.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 11033: estimate 9.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 11034: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 11035: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 11036: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 11037: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11238: estimate 12.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 2, trace 11239: estimate 9.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 3, trace 11240: estimate 11.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11242: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11243: estimate 12.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11244: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11245: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11246: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11247: estimate 10.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11248: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11249: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11250: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11251: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11252: estimate 9.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11253: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11868: estimate 12.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11870: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11871: estimate 12.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11872: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11873: estimate 13.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11874: estimate 10.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11875: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11876: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11877: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11878: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11879: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11880: estimate 9.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11881: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12122: estimate 12.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12123: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12124: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12125: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12126: estimate 10.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12127: estimate 9.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12128: estimate 10.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12129: estimate 10.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12130: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12131: estimate 9.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12132: estimate 9.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12133: estimate 5.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 12461: estimate 12.64; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 72.95s leader 5, trace 12462: estimate 12.64; 3 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12536: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12537: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12538: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12539: estimate 10.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12540: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12541: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12542: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12543: estimate 10.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12544: estimate 10.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12545: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12546: estimate 10.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12547: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12548: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 12754: estimate 12.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 12755: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 12756: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 12757: estimate 10.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 12758: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 12759: estimate 11.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 12760: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 12761: estimate 11.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 12762: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 12763: estimate 11.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 12764: estimate 10.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 12765: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12974: estimate 12.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12975: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12976: estimate 12.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 12977: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12978: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12979: estimate 11.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12980: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12981: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12982: estimate 12.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12983: estimate 11.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 12984: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13179: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13180: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13181: estimate 12.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13182: estimate 10.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13183: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13184: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13185: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13186: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13187: estimate 12.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13188: estimate 11.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13189: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 13375: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 13376: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 13377: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 13378: estimate 9.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 13379: estimate 12.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 13380: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 13381: estimate 11.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 13382: estimate 11.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 13383: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 13384: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 13554: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 13555: estimate 12.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 13556: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 13557: estimate 9.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 13558: estimate 12.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 13559: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 13560: estimate 11.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 13561: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 13562: estimate 11.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 13563: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 13774: estimate 12.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 13775: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 13776: estimate 12.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 13777: estimate 9.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 13778: estimate 12.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 13779: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 13780: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 13781: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 13782: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 13783: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 107.85s leader 5, trace 13923: estimate 12.05; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 14005: estimate 11.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 14006: estimate 12.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 14007: estimate 12.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 14008: estimate 8.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 14009: estimate 12.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 14010: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 14011: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 14012: estimate 11.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 14013: estimate 7.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 14252: estimate 12.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 14253: estimate 10.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 14254: estimate 12.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 14255: estimate 8.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 14256: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 14257: estimate 10.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 14258: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 14259: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 14260: estimate 7.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 14576: estimate 11.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 14577: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 14578: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 14579: estimate 12.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 14580: estimate 11.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 14581: estimate 10.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 14582: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 124.65s leader 5, trace 14861: estimate 11.68; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 124.65s leader 5, trace 14862: estimate 11.68; 2 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 14877: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 14878: estimate 11.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 14879: estimate 11.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 14880: estimate 12.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 14881: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 14882: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 14883: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 15053: estimate 11.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 15054: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 15055: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 15056: estimate 11.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 15057: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 15058: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 15059: estimate 4.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 15203: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 15204: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 15205: estimate 11.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 15206: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 15207: estimate 9.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 15208: estimate 9.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 15209: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 15353: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 15354: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 15355: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 15356: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 15357: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 15358: estimate 9.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 15359: estimate 4.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 15507: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 15508: estimate 11.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 15509: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 15510: estimate 11.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 15511: estimate 9.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 15512: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 15513: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 148.65s leader 5, trace 15615: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 148.65s leader 5, trace 15616: estimate 10.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 15691: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 15692: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 15693: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 15694: estimate 9.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 15695: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 15696: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 15829: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 15830: estimate 10.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15831: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15832: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15833: estimate 8.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 15834: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15957: estimate 8.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 15958: estimate 8.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15959: estimate 8.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15960: estimate 9.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15961: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 15962: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 16114: estimate 8.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 16115: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 16116: estimate 8.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 16117: estimate 8.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 16118: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 16119: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 16269: estimate 8.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 16270: estimate 8.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 16271: estimate 8.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 16272: estimate 6.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 16273: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 16274: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 16393: estimate 8.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 16394: estimate 8.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 16395: estimate 8.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 16396: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 16397: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 16398: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 16512: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 16513: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16514: estimate 6.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16515: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 16516: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 181.25s leader 7, trace 16575: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 184.05s leader 7, trace 16629: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 16650: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 16651: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16652: estimate 6.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 16653: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 16654: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 16796: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 16797: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 16798: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 16799: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 16800: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 16922: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16923: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16924: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16925: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 16926: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 17045: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 17046: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 17047: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 17048: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 17049: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 17185: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 17186: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17187: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17188: estimate 5.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 17189: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 17332: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17333: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17334: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17335: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 17336: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 17465: estimate 3.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 17466: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17467: estimate 5.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 17468: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 17469: estimate 1.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 17612: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 17613: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17614: estimate 4.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 17615: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 17616: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 17758: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 17759: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 17760: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 17761: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 17762: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 17895: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 17896: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 17897: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 17898: estimate 2.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 17899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 18029: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18030: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18031: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18032: estimate 2.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 18033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 18179: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18180: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18181: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18182: estimate 2.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 18183: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 242.90s leader 7, trace 18282: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 18320: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 18321: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 18322: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 18323: estimate 2.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 18324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.75s leader 7, trace 18382: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 18467: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 18468: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 18469: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 18470: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 18471: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 254.00s leader 9, trace 18562: estimate 1.51; 1 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 18576: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 18577: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 18578: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 18579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 256.80s leader 9, trace 18646: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 18679: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 18680: estimate 2.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 18681: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 18682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 18786: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 18787: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 18788: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 18789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 18903: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 18904: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 18905: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 18906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 19027: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 19028: estimate 2.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 19029: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 19030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 19148: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 19149: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 19150: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 19151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 19271: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 19272: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 19273: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 19274: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 19395: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 19396: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 19397: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 19398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 19519: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 19520: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 19521: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 19522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 19645: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 19646: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 19647: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 19648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 19771: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 19772: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 19773: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 19774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 19892: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 19893: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 19894: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 19895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 20013: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 20014: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 20015: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 20016: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 318.40s leader 9, trace 20116: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 20140: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 20141: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 20142: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 20143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 20262: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 20263: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 20264: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 20265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 20384: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 20385: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 20386: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 20387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 20510: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 20511: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 20512: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 20513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 20632: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 20633: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 20634: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 20635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 20755: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 20756: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 20757: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 20758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 20879: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 20880: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 20881: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 20882: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 21004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 21005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 21006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 21007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 21127: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 21128: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 21129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 21130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Pike killed in action
- 1: Orin incapacitated
- 1: Soren killed in action
- 1: Ash killed in action
- 1: Rook killed in action
- 1: Flint killed in action
- 1: Quill incapacitated
- 1: Voss killed in action
- 1: Bram incapacitated
- 1: Tern killed in action
- 1: Kest incapacitated
- 1: Moss incapacitated
- 1: Iven incapacitated
- 1: Reed killed in action

## Outcome attribution

- 124.65s, evidence 1812: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 124.65s, evidence 14861: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.171259 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 124.65s, evidence 14862: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.171259 retreat threshold=0.500000 initiative=delegated. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.65s, evidence 1846: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.65s, evidence 15615: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187219 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15637}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 148.65s, evidence 15616: RetreatThere: leader risk threshold crossed without support after 45 s observation; leader judgement=0.900000 risk=0.500000 picture multiplier=1.000000 believed ratio=0.187219 retreat threshold=0.500000 initiative=delegated. Following evidence: {'until': 149.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15637}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 181.25s, evidence 1909: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 211.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1972}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 184.05s, evidence 1918: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 184.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16633}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 242.90s, evidence 1972: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 245.75s, evidence 1977: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 246.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18392}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 254.00s, evidence 1991: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 284, 'shots': 0, 'casualties': 0, 'mean_displacement': 0, 'next_transition': None}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 256.80s, evidence 1993: Platoon task-tree directive: RetreatThere. Following evidence: None. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.
- 318.40s, evidence 2265: Platoon task-tree directive: RetreatThere. Following evidence: {'until': 319.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20130}. Observed sequence; causal contribution is a hypothesis, not a counterfactual result.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
