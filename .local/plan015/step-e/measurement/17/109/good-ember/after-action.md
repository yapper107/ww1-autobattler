# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/17/109/good-ember/battle-109-1789674032160897528`

## Battle summary

**Ember** · 360 s · 303 shots.

### Turning points

- 19.8s, squad 4: contact (events line 249). First recorded contact.
- 24.9s, squad 1: withdrawal ([trace 4185](#trace-4185)). 99.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 42.9s, squad 1: help call ([trace 9640](#trace-9640)). No completion observed before termination.
- 43.1s, squad 0: help call ([trace 9658](#trace-9658)). No completion observed before termination.
- 52.7s, squad 0: help call ([trace 10594](#trace-10594)). No completion observed before termination.
- 60.3s, squad 0: assault ([trace 11554](#trace-11554)). 63.4s, squad 0: advanced tactically.
- 101.8s, squad 0: help call ([trace 14876](#trace-14876)). No completion observed before termination.
- 182.0s, squad 1: help call ([trace 19329](#trace-19329)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, prepared a base of fire and 1 further drill types; no completed objective recorded; 10 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 37 shots, 4/4 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 168 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 88 shots, 0/4 lost.

### Decisions and attribution

At 60.3s, squad 0 chose prepared a base of fire ([trace 11142](#trace-11142)), followed by 0 shots and 1 own casualties; estimate 15.3 against 0 distinct squad-reported contacts; At 155.5s, squad 1 chose advanced tactically ([trace 17973](#trace-17973)), followed by 6 shots and 0 own casualties; estimate 4.2 against 0 distinct squad-reported contacts; At 24.9s, squad 1 chose broke contact ([trace 4185](#trace-4185)), followed by 1 shots and 0 own casualties; estimate 2.5 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1378](#trace-1378)). Following evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5628278896654164, 'next_transition': 1407}.
- 11.2s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1380](#trace-1380)). Following evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198104011323594, 'next_transition': 1770}.

### Communication

228 matched deliveries (mean 0.65s, max 5.85s); 408 explicit drops; 5 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 19.75s, squad 4, contact, evidence events line 249: First recorded contact; .
- 24.85s, squad 1, withdrawal, evidence 4185: BreakContact: believed ratio at least two without superiority; 99.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 42.85s, squad 1, help call, evidence 9640: NeedSupport; No completion observed before termination.
- 43.10s, squad 0, help call, evidence 9658: NeedSupport; No completion observed before termination.
- 52.65s, squad 0, help call, evidence 10594: NeedSupport; No completion observed before termination.
- 60.30s, squad 0, assault, evidence 11554: SquadAttack: covered flank sector 40-60 degrees, 20-45 m; 63.4s, squad 0: advanced tactically.
- 101.85s, squad 0, help call, evidence 14876: NeedSupport; No completion observed before termination.
- 182.00s, squad 1, help call, evidence 19329: NeedSupport; No completion observed before termination.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.090701515032816, 'next_transition': 958}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.090701515032816, 'next_transition': 958}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 5.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.090701515032816, 'next_transition': 958}.
<a id="trace-335"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 335): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309526144762362, 'next_transition': 143}.
<a id="trace-336"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 336): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309526144762362, 'next_transition': 143}.
<a id="trace-337"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 337): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 27.309526144762362, 'next_transition': 143}.
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
<a id="trace-844"></a>
<a id="trace-846"></a>
<a id="trace-877"></a>
<a id="trace-879"></a>
<a id="trace-962"></a>
<a id="trace-964"></a>
<a id="trace-995"></a>
<a id="trace-997"></a>
<a id="trace-1026"></a>
<a id="trace-1028"></a>
<a id="trace-1071"></a>
<a id="trace-1073"></a>
<a id="trace-1093"></a>
<a id="trace-1095"></a>
<a id="trace-1129"></a>
<a id="trace-1131"></a>
<a id="trace-1162"></a>
<a id="trace-1164"></a>
<a id="trace-1202"></a>
<a id="trace-1204"></a>
<a id="trace-1222"></a>
<a id="trace-1224"></a>
<a id="trace-1242"></a>
<a id="trace-1244"></a>
<a id="trace-1332"></a>
<a id="trace-1334"></a>
<a id="trace-1354"></a>
<a id="trace-1356"></a>
<a id="trace-1374"></a>
<a id="trace-1376"></a>
<a id="trace-1411"></a>
<a id="trace-1413"></a>
<a id="trace-1444"></a>
<a id="trace-1446"></a>
<a id="trace-1469"></a>
<a id="trace-1471"></a>
<a id="trace-1742"></a>
<a id="trace-1744"></a>
<a id="trace-1766"></a>
<a id="trace-1768"></a>
<a id="trace-2092"></a>
<a id="trace-2094"></a>
<a id="trace-2118"></a>
<a id="trace-2120"></a>
<a id="trace-2209"></a>
<a id="trace-2211"></a>
<a id="trace-2251"></a>
<a id="trace-2253"></a>
<a id="trace-2280"></a>
<a id="trace-2282"></a>
<a id="trace-2307"></a>
<a id="trace-2309"></a>
<a id="trace-2577"></a>
<a id="trace-2579"></a>
<a id="trace-2601"></a>
<a id="trace-2603"></a>
<a id="trace-2640"></a>
<a id="trace-2642"></a>
<a id="trace-2661"></a>
<a id="trace-2663"></a>
<a id="trace-2692"></a>
<a id="trace-2694"></a>
<a id="trace-2732"></a>
<a id="trace-2734"></a>
<a id="trace-3161"></a>
<a id="trace-3163"></a>
<a id="trace-3869"></a>
<a id="trace-3871"></a>
<a id="trace-3914"></a>
<a id="trace-3916"></a>
<a id="trace-3959"></a>
<a id="trace-3961"></a>
<a id="trace-4019"></a>
<a id="trace-4021"></a>
<a id="trace-4059"></a>
<a id="trace-4061"></a>
<a id="trace-4104"></a>
<a id="trace-4106"></a>
<a id="trace-4128"></a>
<a id="trace-4130"></a>
<a id="trace-4155"></a>
<a id="trace-4157"></a>
<a id="trace-4180"></a>
<a id="trace-4182"></a>
<a id="trace-4710"></a>
<a id="trace-4712"></a>
<a id="trace-4739"></a>
<a id="trace-4741"></a>
<a id="trace-4785"></a>
<a id="trace-4787"></a>
<a id="trace-4810"></a>
<a id="trace-4812"></a>
<a id="trace-4851"></a>
<a id="trace-4853"></a>
<a id="trace-4879"></a>
<a id="trace-4881"></a>
<a id="trace-4911"></a>
<a id="trace-4913"></a>
<a id="trace-5090"></a>
<a id="trace-5092"></a>
<a id="trace-5118"></a>
<a id="trace-5120"></a>
<a id="trace-5148"></a>
<a id="trace-5150"></a>
<a id="trace-5249"></a>
<a id="trace-5251"></a>
<a id="trace-5277"></a>
<a id="trace-5279"></a>
<a id="trace-5311"></a>
<a id="trace-5313"></a>
<a id="trace-5328"></a>
<a id="trace-5330"></a>
<a id="trace-5353"></a>
<a id="trace-5355"></a>
<a id="trace-5379"></a>
<a id="trace-5381"></a>
<a id="trace-5403"></a>
<a id="trace-5405"></a>
<a id="trace-5424"></a>
<a id="trace-5426"></a>
<a id="trace-5822"></a>
<a id="trace-5824"></a>
<a id="trace-5846"></a>
<a id="trace-5848"></a>
<a id="trace-5958"></a>
<a id="trace-5960"></a>
<a id="trace-5982"></a>
<a id="trace-5984"></a>
<a id="trace-6012"></a>
<a id="trace-6014"></a>
<a id="trace-6059"></a>
<a id="trace-6061"></a>
<a id="trace-6241"></a>
<a id="trace-6243"></a>
<a id="trace-6633"></a>
<a id="trace-6635"></a>
<a id="trace-6673"></a>
<a id="trace-6675"></a>
<a id="trace-6702"></a>
<a id="trace-6704"></a>
<a id="trace-6745"></a>
<a id="trace-6747"></a>
<a id="trace-6780"></a>
<a id="trace-6782"></a>
<a id="trace-6880"></a>
<a id="trace-6882"></a>
<a id="trace-6918"></a>
<a id="trace-6920"></a>
<a id="trace-6934"></a>
<a id="trace-6936"></a>
<a id="trace-9567"></a>
<a id="trace-9569"></a>
<a id="trace-9603"></a>
<a id="trace-9605"></a>
<a id="trace-9628"></a>
<a id="trace-9630"></a>
<a id="trace-9682"></a>
<a id="trace-9684"></a>
<a id="trace-9846"></a>
<a id="trace-9848"></a>
<a id="trace-10021"></a>
<a id="trace-10023"></a>
<a id="trace-10067"></a>
<a id="trace-10069"></a>
<a id="trace-10157"></a>
<a id="trace-10159"></a>
<a id="trace-10196"></a>
<a id="trace-10198"></a>
<a id="trace-10232"></a>
<a id="trace-10234"></a>
<a id="trace-10261"></a>
<a id="trace-10263"></a>
<a id="trace-10303"></a>
<a id="trace-10305"></a>
<a id="trace-10330"></a>
<a id="trace-10332"></a>
<a id="trace-10360"></a>
<a id="trace-10362"></a>
<a id="trace-10386"></a>
<a id="trace-10388"></a>
<a id="trace-10404"></a>
<a id="trace-10406"></a>
<a id="trace-10420"></a>
<a id="trace-10422"></a>
<a id="trace-10506"></a>
<a id="trace-10508"></a>
<a id="trace-10527"></a>
<a id="trace-10529"></a>
<a id="trace-10544"></a>
<a id="trace-10546"></a>
<a id="trace-10564"></a>
<a id="trace-10566"></a>
<a id="trace-10584"></a>
<a id="trace-10586"></a>
<a id="trace-10614"></a>
<a id="trace-10616"></a>
<a id="trace-10633"></a>
<a id="trace-10635"></a>
<a id="trace-10652"></a>
<a id="trace-10654"></a>
<a id="trace-10678"></a>
<a id="trace-10680"></a>
<a id="trace-10698"></a>
<a id="trace-10700"></a>
<a id="trace-10783"></a>
<a id="trace-10785"></a>
<a id="trace-10798"></a>
<a id="trace-10800"></a>
<a id="trace-10825"></a>
<a id="trace-10827"></a>
<a id="trace-10906"></a>
<a id="trace-10908"></a>
<a id="trace-10929"></a>
<a id="trace-10931"></a>
<a id="trace-10950"></a>
<a id="trace-10952"></a>
<a id="trace-10991"></a>
<a id="trace-10993"></a>
<a id="trace-11014"></a>
<a id="trace-11016"></a>
<a id="trace-11037"></a>
<a id="trace-11039"></a>
<a id="trace-11056"></a>
<a id="trace-11058"></a>
<a id="trace-11136"></a>
<a id="trace-11138"></a>
<a id="trace-11693"></a>
<a id="trace-11695"></a>
<a id="trace-11711"></a>
<a id="trace-11713"></a>
<a id="trace-11725"></a>
<a id="trace-11727"></a>
<a id="trace-11745"></a>
<a id="trace-11747"></a>
<a id="trace-11758"></a>
<a id="trace-11760"></a>
<a id="trace-11771"></a>
<a id="trace-11773"></a>
<a id="trace-11805"></a>
<a id="trace-11807"></a>
<a id="trace-11833"></a>
<a id="trace-11835"></a>
<a id="trace-11969"></a>
<a id="trace-11971"></a>
<a id="trace-12052"></a>
<a id="trace-12054"></a>
<a id="trace-12074"></a>
<a id="trace-12076"></a>
<a id="trace-12100"></a>
<a id="trace-12102"></a>
<a id="trace-12115"></a>
<a id="trace-12117"></a>
<a id="trace-12142"></a>
<a id="trace-12144"></a>
<a id="trace-12168"></a>
<a id="trace-12170"></a>
<a id="trace-12187"></a>
<a id="trace-12189"></a>
<a id="trace-12218"></a>
<a id="trace-12220"></a>
<a id="trace-12244"></a>
<a id="trace-12246"></a>
<a id="trace-12391"></a>
<a id="trace-12393"></a>
<a id="trace-12518"></a>
<a id="trace-12520"></a>
<a id="trace-12548"></a>
<a id="trace-12550"></a>
<a id="trace-12562"></a>
<a id="trace-12564"></a>
<a id="trace-12589"></a>
<a id="trace-12591"></a>
<a id="trace-12613"></a>
<a id="trace-12615"></a>
<a id="trace-12633"></a>
<a id="trace-12635"></a>
<a id="trace-12763"></a>
<a id="trace-12765"></a>
<a id="trace-12784"></a>
<a id="trace-12786"></a>
<a id="trace-12808"></a>
<a id="trace-12810"></a>
<a id="trace-12884"></a>
<a id="trace-12886"></a>
<a id="trace-12903"></a>
<a id="trace-12905"></a>
<a id="trace-12922"></a>
<a id="trace-12924"></a>
<a id="trace-12941"></a>
<a id="trace-12943"></a>
<a id="trace-12966"></a>
<a id="trace-12968"></a>
<a id="trace-12989"></a>
<a id="trace-12991"></a>
<a id="trace-13005"></a>
<a id="trace-13007"></a>
<a id="trace-13022"></a>
<a id="trace-13024"></a>
<a id="trace-13038"></a>
<a id="trace-13040"></a>
<a id="trace-13060"></a>
<a id="trace-13062"></a>
<a id="trace-13142"></a>
<a id="trace-13144"></a>
<a id="trace-13163"></a>
<a id="trace-13165"></a>
<a id="trace-13184"></a>
<a id="trace-13186"></a>
<a id="trace-13307"></a>
<a id="trace-13309"></a>
<a id="trace-13334"></a>
<a id="trace-13336"></a>
<a id="trace-13363"></a>
<a id="trace-13365"></a>
<a id="trace-13376"></a>
<a id="trace-13378"></a>
<a id="trace-13393"></a>
<a id="trace-13395"></a>
<a id="trace-13412"></a>
<a id="trace-13414"></a>
<a id="trace-13428"></a>
<a id="trace-13430"></a>
<a id="trace-13503"></a>
<a id="trace-13505"></a>
<a id="trace-13575"></a>
<a id="trace-13577"></a>
<a id="trace-13594"></a>
<a id="trace-13596"></a>
<a id="trace-13614"></a>
<a id="trace-13616"></a>
<a id="trace-13644"></a>
<a id="trace-13646"></a>
<a id="trace-13668"></a>
<a id="trace-13670"></a>
<a id="trace-13880"></a>
<a id="trace-13882"></a>
<a id="trace-13915"></a>
<a id="trace-13917"></a>
<a id="trace-13937"></a>
<a id="trace-13939"></a>
<a id="trace-13960"></a>
<a id="trace-13962"></a>
<a id="trace-14035"></a>
<a id="trace-14037"></a>
<a id="trace-14051"></a>
<a id="trace-14053"></a>
<a id="trace-14063"></a>
<a id="trace-14065"></a>
<a id="trace-14074"></a>
<a id="trace-14076"></a>
<a id="trace-14092"></a>
<a id="trace-14094"></a>
<a id="trace-14114"></a>
<a id="trace-14116"></a>
<a id="trace-14131"></a>
<a id="trace-14133"></a>
<a id="trace-14150"></a>
<a id="trace-14152"></a>
<a id="trace-14174"></a>
<a id="trace-14176"></a>
<a id="trace-14192"></a>
<a id="trace-14194"></a>
<a id="trace-14267"></a>
<a id="trace-14269"></a>
<a id="trace-14277"></a>
<a id="trace-14279"></a>
<a id="trace-14294"></a>
<a id="trace-14296"></a>
<a id="trace-14308"></a>
<a id="trace-14310"></a>
<a id="trace-14459"></a>
<a id="trace-14461"></a>
<a id="trace-14603"></a>
<a id="trace-14605"></a>
<a id="trace-14622"></a>
<a id="trace-14624"></a>
<a id="trace-14635"></a>
<a id="trace-14637"></a>
<a id="trace-14650"></a>
<a id="trace-14652"></a>
<a id="trace-14661"></a>
<a id="trace-14663"></a>
<a id="trace-14743"></a>
<a id="trace-14745"></a>
<a id="trace-14758"></a>
<a id="trace-14760"></a>
<a id="trace-14789"></a>
<a id="trace-14791"></a>
<a id="trace-14862"></a>
<a id="trace-14864"></a>
<a id="trace-14914"></a>
<a id="trace-14916"></a>
<a id="trace-14951"></a>
<a id="trace-14953"></a>
<a id="trace-14970"></a>
<a id="trace-14972"></a>
<a id="trace-14997"></a>
<a id="trace-14999"></a>
<a id="trace-15015"></a>
<a id="trace-15017"></a>
<a id="trace-15034"></a>
<a id="trace-15036"></a>
<a id="trace-15112"></a>
<a id="trace-15114"></a>
<a id="trace-15126"></a>
<a id="trace-15128"></a>
<a id="trace-15145"></a>
<a id="trace-15147"></a>
<a id="trace-15161"></a>
<a id="trace-15163"></a>
<a id="trace-15178"></a>
<a id="trace-15180"></a>
<a id="trace-15200"></a>
<a id="trace-15202"></a>
<a id="trace-15214"></a>
<a id="trace-15216"></a>
<a id="trace-15227"></a>
<a id="trace-15229"></a>
<a id="trace-15241"></a>
<a id="trace-15243"></a>
<a id="trace-15255"></a>
<a id="trace-15257"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15344"></a>
<a id="trace-15346"></a>
<a id="trace-15360"></a>
<a id="trace-15362"></a>
<a id="trace-15376"></a>
<a id="trace-15378"></a>
<a id="trace-15390"></a>
<a id="trace-15392"></a>
<a id="trace-15517"></a>
<a id="trace-15519"></a>
<a id="trace-15536"></a>
<a id="trace-15538"></a>
<a id="trace-15548"></a>
<a id="trace-15550"></a>
<a id="trace-15582"></a>
<a id="trace-15584"></a>
<a id="trace-15595"></a>
<a id="trace-15597"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15686"></a>
<a id="trace-15688"></a>
<a id="trace-15709"></a>
<a id="trace-15711"></a>
<a id="trace-15725"></a>
<a id="trace-15727"></a>
<a id="trace-15747"></a>
<a id="trace-15749"></a>
<a id="trace-15767"></a>
<a id="trace-15769"></a>
<a id="trace-15791"></a>
<a id="trace-15793"></a>
<a id="trace-15806"></a>
<a id="trace-15808"></a>
<a id="trace-15826"></a>
<a id="trace-15828"></a>
<a id="trace-15848"></a>
<a id="trace-15850"></a>
<a id="trace-15936"></a>
<a id="trace-15938"></a>
<a id="trace-15955"></a>
<a id="trace-15957"></a>
<a id="trace-15981"></a>
<a id="trace-15983"></a>
<a id="trace-16010"></a>
<a id="trace-16012"></a>
<a id="trace-16027"></a>
<a id="trace-16029"></a>
<a id="trace-16094"></a>
<a id="trace-16096"></a>
<a id="trace-16116"></a>
<a id="trace-16118"></a>
<a id="trace-16134"></a>
<a id="trace-16136"></a>
<a id="trace-16151"></a>
<a id="trace-16153"></a>
<a id="trace-16238"></a>
<a id="trace-16240"></a>
<a id="trace-16251"></a>
<a id="trace-16253"></a>
<a id="trace-16275"></a>
<a id="trace-16277"></a>
<a id="trace-16295"></a>
<a id="trace-16297"></a>
<a id="trace-16320"></a>
<a id="trace-16322"></a>
<a id="trace-16337"></a>
<a id="trace-16339"></a>
<a id="trace-16355"></a>
<a id="trace-16357"></a>
<a id="trace-16366"></a>
<a id="trace-16368"></a>
<a id="trace-16384"></a>
<a id="trace-16386"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16472"></a>
<a id="trace-16474"></a>
<a id="trace-16482"></a>
<a id="trace-16484"></a>
<a id="trace-16501"></a>
<a id="trace-16503"></a>
<a id="trace-16522"></a>
<a id="trace-16524"></a>
<a id="trace-16541"></a>
<a id="trace-16543"></a>
<a id="trace-16567"></a>
<a id="trace-16569"></a>
<a id="trace-16590"></a>
<a id="trace-16592"></a>
<a id="trace-16713"></a>
<a id="trace-16715"></a>
<a id="trace-16737"></a>
<a id="trace-16739"></a>
<a id="trace-16752"></a>
<a id="trace-16754"></a>
<a id="trace-16836"></a>
<a id="trace-16838"></a>
<a id="trace-16845"></a>
<a id="trace-16847"></a>
<a id="trace-16863"></a>
<a id="trace-16865"></a>
<a id="trace-16880"></a>
<a id="trace-16882"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16914"></a>
<a id="trace-16916"></a>
<a id="trace-16938"></a>
<a id="trace-16940"></a>
<a id="trace-16948"></a>
<a id="trace-16950"></a>
<a id="trace-16976"></a>
<a id="trace-16978"></a>
<a id="trace-16988"></a>
<a id="trace-16990"></a>
<a id="trace-17078"></a>
<a id="trace-17080"></a>
<a id="trace-17095"></a>
<a id="trace-17097"></a>
<a id="trace-17114"></a>
<a id="trace-17116"></a>
<a id="trace-17132"></a>
<a id="trace-17134"></a>
<a id="trace-17147"></a>
<a id="trace-17149"></a>
<a id="trace-17160"></a>
<a id="trace-17162"></a>
<a id="trace-17175"></a>
<a id="trace-17177"></a>
<a id="trace-17185"></a>
<a id="trace-17187"></a>
<a id="trace-17202"></a>
<a id="trace-17204"></a>
<a id="trace-17211"></a>
<a id="trace-17213"></a>
<a id="trace-17290"></a>
<a id="trace-17292"></a>
<a id="trace-17301"></a>
<a id="trace-17303"></a>
<a id="trace-17323"></a>
<a id="trace-17325"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17494"></a>
<a id="trace-17496"></a>
<a id="trace-17509"></a>
<a id="trace-17511"></a>
<a id="trace-17531"></a>
<a id="trace-17533"></a>
<a id="trace-17539"></a>
<a id="trace-17541"></a>
<a id="trace-17563"></a>
<a id="trace-17565"></a>
<a id="trace-17574"></a>
<a id="trace-17576"></a>
<a id="trace-17650"></a>
<a id="trace-17652"></a>
<a id="trace-17662"></a>
<a id="trace-17664"></a>
<a id="trace-17682"></a>
<a id="trace-17684"></a>
<a id="trace-17702"></a>
<a id="trace-17704"></a>
<a id="trace-17720"></a>
<a id="trace-17722"></a>
<a id="trace-17745"></a>
<a id="trace-17747"></a>
<a id="trace-17826"></a>
<a id="trace-17828"></a>
<a id="trace-17837"></a>
<a id="trace-17839"></a>
<a id="trace-17857"></a>
<a id="trace-17859"></a>
<a id="trace-17877"></a>
<a id="trace-17879"></a>
<a id="trace-17960"></a>
<a id="trace-17962"></a>
<a id="trace-18038"></a>
<a id="trace-18040"></a>
<a id="trace-18054"></a>
<a id="trace-18056"></a>
<a id="trace-18074"></a>
<a id="trace-18076"></a>
<a id="trace-18087"></a>
<a id="trace-18089"></a>
<a id="trace-18106"></a>
<a id="trace-18108"></a>
<a id="trace-18127"></a>
<a id="trace-18129"></a>
<a id="trace-18141"></a>
<a id="trace-18143"></a>
<a id="trace-18161"></a>
<a id="trace-18163"></a>
<a id="trace-18178"></a>
<a id="trace-18180"></a>
<a id="trace-18256"></a>
<a id="trace-18258"></a>
<a id="trace-18269"></a>
<a id="trace-18271"></a>
<a id="trace-18284"></a>
<a id="trace-18286"></a>
<a id="trace-18308"></a>
<a id="trace-18310"></a>
<a id="trace-18325"></a>
<a id="trace-18327"></a>
<a id="trace-18338"></a>
<a id="trace-18340"></a>
<a id="trace-18359"></a>
<a id="trace-18361"></a>
<a id="trace-18439"></a>
<a id="trace-18441"></a>
<a id="trace-18457"></a>
<a id="trace-18459"></a>
<a id="trace-18475"></a>
<a id="trace-18477"></a>
<a id="trace-18552"></a>
<a id="trace-18554"></a>
<a id="trace-18571"></a>
<a id="trace-18573"></a>
<a id="trace-18589"></a>
<a id="trace-18591"></a>
<a id="trace-18606"></a>
<a id="trace-18608"></a>
<a id="trace-18619"></a>
<a id="trace-18621"></a>
<a id="trace-18635"></a>
<a id="trace-18637"></a>
<a id="trace-18653"></a>
<a id="trace-18655"></a>
<a id="trace-18719"></a>
<a id="trace-18721"></a>
<a id="trace-18733"></a>
<a id="trace-18735"></a>
<a id="trace-18749"></a>
<a id="trace-18751"></a>
<a id="trace-18823"></a>
<a id="trace-18825"></a>
<a id="trace-18840"></a>
<a id="trace-18842"></a>
<a id="trace-18862"></a>
<a id="trace-18864"></a>
<a id="trace-18878"></a>
<a id="trace-18880"></a>
<a id="trace-18898"></a>
<a id="trace-18900"></a>
<a id="trace-18910"></a>
<a id="trace-18912"></a>
<a id="trace-18934"></a>
<a id="trace-18936"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-18968"></a>
<a id="trace-18970"></a>
<a id="trace-18986"></a>
<a id="trace-18988"></a>
<a id="trace-19068"></a>
<a id="trace-19070"></a>
<a id="trace-19081"></a>
<a id="trace-19083"></a>
<a id="trace-19108"></a>
<a id="trace-19110"></a>
<a id="trace-19120"></a>
<a id="trace-19122"></a>
<a id="trace-19139"></a>
<a id="trace-19141"></a>
<a id="trace-19156"></a>
<a id="trace-19158"></a>
<a id="trace-19169"></a>
<a id="trace-19171"></a>
<a id="trace-19178"></a>
<a id="trace-19180"></a>
<a id="trace-19192"></a>
<a id="trace-19194"></a>
<a id="trace-19202"></a>
<a id="trace-19204"></a>
<a id="trace-19271"></a>
<a id="trace-19273"></a>
<a id="trace-19285"></a>
<a id="trace-19287"></a>
<a id="trace-19303"></a>
<a id="trace-19305"></a>
<a id="trace-19318"></a>
<a id="trace-19320"></a>
<a id="trace-19394"></a>
<a id="trace-19396"></a>
<a id="trace-19414"></a>
<a id="trace-19416"></a>
<a id="trace-19437"></a>
<a id="trace-19439"></a>
<a id="trace-19448"></a>
<a id="trace-19450"></a>
<a id="trace-19461"></a>
<a id="trace-19463"></a>
<a id="trace-19474"></a>
<a id="trace-19476"></a>
<a id="trace-19554"></a>
<a id="trace-19556"></a>
<a id="trace-19568"></a>
<a id="trace-19570"></a>
<a id="trace-19582"></a>
<a id="trace-19584"></a>
<a id="trace-19601"></a>
<a id="trace-19603"></a>
<a id="trace-19618"></a>
<a id="trace-19620"></a>
<a id="trace-19636"></a>
<a id="trace-19638"></a>
<a id="trace-19644"></a>
<a id="trace-19646"></a>
<a id="trace-19664"></a>
<a id="trace-19666"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19747"></a>
<a id="trace-19749"></a>
<a id="trace-19886"></a>
<a id="trace-19888"></a>
<a id="trace-19905"></a>
<a id="trace-19907"></a>
<a id="trace-19923"></a>
<a id="trace-19925"></a>
<a id="trace-19940"></a>
<a id="trace-19942"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20104"></a>
<a id="trace-20106"></a>
<a id="trace-20117"></a>
<a id="trace-20119"></a>
<a id="trace-20134"></a>
<a id="trace-20136"></a>
<a id="trace-20145"></a>
<a id="trace-20147"></a>
<a id="trace-20218"></a>
<a id="trace-20220"></a>
<a id="trace-20236"></a>
<a id="trace-20238"></a>
<a id="trace-20251"></a>
<a id="trace-20253"></a>
<a id="trace-21280"></a>
<a id="trace-21282"></a>
<a id="trace-21586"></a>
<a id="trace-21588"></a>
<a id="trace-21608"></a>
<a id="trace-21610"></a>
<a id="trace-21623"></a>
<a id="trace-21625"></a>
<a id="trace-21635"></a>
<a id="trace-21637"></a>
<a id="trace-21651"></a>
<a id="trace-21653"></a>
<a id="trace-21662"></a>
<a id="trace-21664"></a>
<a id="trace-21731"></a>
<a id="trace-21733"></a>
<a id="trace-21746"></a>
<a id="trace-21748"></a>
<a id="trace-21759"></a>
<a id="trace-21761"></a>
<a id="trace-21772"></a>
<a id="trace-21774"></a>
<a id="trace-21789"></a>
<a id="trace-21791"></a>
<a id="trace-21804"></a>
<a id="trace-21806"></a>
<a id="trace-21816"></a>
<a id="trace-21818"></a>
<a id="trace-21824"></a>
<a id="trace-21826"></a>
<a id="trace-21837"></a>
<a id="trace-21839"></a>
<a id="trace-21846"></a>
<a id="trace-21848"></a>
<a id="trace-21913"></a>
<a id="trace-21915"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21936"></a>
<a id="trace-21938"></a>
<a id="trace-21947"></a>
<a id="trace-21949"></a>
<a id="trace-21964"></a>
<a id="trace-21966"></a>
<a id="trace-21977"></a>
<a id="trace-21979"></a>
<a id="trace-21988"></a>
<a id="trace-21990"></a>
<a id="trace-21994"></a>
<a id="trace-21996"></a>
<a id="trace-22005"></a>
<a id="trace-22007"></a>
<a id="trace-22014"></a>
<a id="trace-22016"></a>
<a id="trace-22080"></a>
<a id="trace-22082"></a>
<a id="trace-22093"></a>
<a id="trace-22095"></a>
<a id="trace-22105"></a>
<a id="trace-22107"></a>
<a id="trace-22115"></a>
<a id="trace-22117"></a>
<a id="trace-22130"></a>
<a id="trace-22132"></a>
<a id="trace-22143"></a>
<a id="trace-22145"></a>
<a id="trace-22156"></a>
<a id="trace-22158"></a>
<a id="trace-22163"></a>
<a id="trace-22165"></a>
<a id="trace-22176"></a>
<a id="trace-22178"></a>
<a id="trace-22184"></a>
<a id="trace-22186"></a>
<a id="trace-22251"></a>
<a id="trace-22253"></a>
<a id="trace-22264"></a>
<a id="trace-22266"></a>
<a id="trace-22275"></a>
<a id="trace-22277"></a>
<a id="trace-22286"></a>
<a id="trace-22288"></a>
<a id="trace-22299"></a>
<a id="trace-22301"></a>
<a id="trace-22312"></a>
<a id="trace-22314"></a>
<a id="trace-22325"></a>
<a id="trace-22327"></a>
<a id="trace-22336"></a>
<a id="trace-22338"></a>
<a id="trace-22358"></a>
<a id="trace-22360"></a>
<a id="trace-22379"></a>
<a id="trace-22381"></a>
<a id="trace-22447"></a>
<a id="trace-22449"></a>
<a id="trace-22455"></a>
<a id="trace-22457"></a>
<a id="trace-22467"></a>
<a id="trace-22469"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22487"></a>
<a id="trace-22489"></a>
<a id="trace-22501"></a>
<a id="trace-22503"></a>
<a id="trace-22512"></a>
<a id="trace-22514"></a>
<a id="trace-22519"></a>
<a id="trace-22521"></a>
<a id="trace-22532"></a>
<a id="trace-22534"></a>
<a id="trace-22546"></a>
<a id="trace-22548"></a>
<a id="trace-22620"></a>
<a id="trace-22622"></a>
<a id="trace-22636"></a>
<a id="trace-22638"></a>
<a id="trace-22660"></a>
<a id="trace-22662"></a>
<a id="trace-22671"></a>
<a id="trace-22673"></a>
<a id="trace-22685"></a>
<a id="trace-22687"></a>
<a id="trace-22699"></a>
<a id="trace-22701"></a>
<a id="trace-22708"></a>
<a id="trace-22710"></a>
<a id="trace-22716"></a>
<a id="trace-22718"></a>
<a id="trace-22728"></a>
<a id="trace-22730"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22804"></a>
<a id="trace-22806"></a>
<a id="trace-22813"></a>
<a id="trace-22815"></a>
<a id="trace-22831"></a>
<a id="trace-22833"></a>
<a id="trace-22845"></a>
<a id="trace-22847"></a>
<a id="trace-22866"></a>
<a id="trace-22868"></a>
<a id="trace-22878"></a>
<a id="trace-22880"></a>
<a id="trace-22901"></a>
<a id="trace-22903"></a>
<a id="trace-22910"></a>
<a id="trace-22912"></a>
<a id="trace-22923"></a>
<a id="trace-22925"></a>
<a id="trace-22933"></a>
<a id="trace-22935"></a>
<a id="trace-23000"></a>
<a id="trace-23002"></a>
<a id="trace-23007"></a>
<a id="trace-23009"></a>
<a id="trace-23019"></a>
<a id="trace-23021"></a>
<a id="trace-23029"></a>
<a id="trace-23031"></a>
<a id="trace-23043"></a>
<a id="trace-23045"></a>
<a id="trace-23055"></a>
<a id="trace-23057"></a>
<a id="trace-23073"></a>
<a id="trace-23075"></a>
<a id="trace-23081"></a>
<a id="trace-23083"></a>
<a id="trace-23102"></a>
<a id="trace-23104"></a>
<a id="trace-23125"></a>
<a id="trace-23127"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23200"></a>
<a id="trace-23202"></a>
<a id="trace-23215"></a>
<a id="trace-23217"></a>
<a id="trace-23226"></a>
<a id="trace-23228"></a>
<a id="trace-23237"></a>
<a id="trace-23239"></a>
<a id="trace-23250"></a>
<a id="trace-23252"></a>
<a id="trace-23261"></a>
<a id="trace-23263"></a>
<a id="trace-23268"></a>
<a id="trace-23270"></a>
<a id="trace-23281"></a>
<a id="trace-23283"></a>
<a id="trace-23295"></a>
<a id="trace-23297"></a>
<a id="trace-23362"></a>
<a id="trace-23364"></a>
<a id="trace-23378"></a>
<a id="trace-23380"></a>
<a id="trace-23403"></a>
<a id="trace-23405"></a>
<a id="trace-23416"></a>
<a id="trace-23418"></a>
<a id="trace-23427"></a>
<a id="trace-23429"></a>
<a id="trace-23441"></a>
<a id="trace-23443"></a>
<a id="trace-23454"></a>
<a id="trace-23456"></a>
<a id="trace-23461"></a>
<a id="trace-23463"></a>
<a id="trace-23473"></a>
<a id="trace-23475"></a>
<a id="trace-23481"></a>
<a id="trace-23483"></a>
<a id="trace-23547"></a>
<a id="trace-23549"></a>
<a id="trace-23556"></a>
<a id="trace-23558"></a>
<a id="trace-23573"></a>
<a id="trace-23575"></a>
<a id="trace-23586"></a>
<a id="trace-23588"></a>
<a id="trace-23603"></a>
<a id="trace-23605"></a>
<a id="trace-23633"></a>
<a id="trace-23635"></a>
<a id="trace-23645"></a>
<a id="trace-23647"></a>
<a id="trace-23652"></a>
<a id="trace-23654"></a>
<a id="trace-23664"></a>
<a id="trace-23666"></a>
<a id="trace-23674"></a>
<a id="trace-23676"></a>
<a id="trace-23743"></a>
<a id="trace-23745"></a>
<a id="trace-23751"></a>
<a id="trace-23753"></a>
<a id="trace-23763"></a>
<a id="trace-23765"></a>
<a id="trace-23772"></a>
<a id="trace-23774"></a>
<a id="trace-23783"></a>
<a id="trace-23785"></a>
<a id="trace-23804"></a>
<a id="trace-23806"></a>
<a id="trace-23815"></a>
<a id="trace-23817"></a>
<a id="trace-23831"></a>
<a id="trace-23833"></a>
<a id="trace-23857"></a>
<a id="trace-23859"></a>
<a id="trace-23866"></a>
<a id="trace-23868"></a>
<a id="trace-23936"></a>
<a id="trace-23938"></a>
<a id="trace-23943"></a>
<a id="trace-23945"></a>
<a id="trace-23957"></a>
<a id="trace-23959"></a>
<a id="trace-23969"></a>
<a id="trace-23971"></a>
<a id="trace-23979"></a>
<a id="trace-23981"></a>
<a id="trace-23993"></a>
<a id="trace-23995"></a>
<a id="trace-24004"></a>
<a id="trace-24006"></a>
<a id="trace-24013"></a>
<a id="trace-24015"></a>
<a id="trace-24038"></a>
<a id="trace-24040"></a>
<a id="trace-24112"></a>
<a id="trace-24114"></a>
<a id="trace-24120"></a>
<a id="trace-24122"></a>
<a id="trace-24148"></a>
<a id="trace-24150"></a>
<a id="trace-24160"></a>
<a id="trace-24162"></a>
<a id="trace-24173"></a>
<a id="trace-24175"></a>
<a id="trace-24187"></a>
<a id="trace-24189"></a>
<a id="trace-24202"></a>
<a id="trace-24204"></a>
<a id="trace-24211"></a>
<a id="trace-24213"></a>
<a id="trace-24229"></a>
<a id="trace-24231"></a>
<a id="trace-24238"></a>
<a id="trace-24240"></a>
<a id="trace-24309"></a>
<a id="trace-24311"></a>
<a id="trace-24317"></a>
<a id="trace-24319"></a>
<a id="trace-24336"></a>
<a id="trace-24338"></a>
<a id="trace-24344"></a>
<a id="trace-24346"></a>
<a id="trace-24364"></a>
<a id="trace-24366"></a>
<a id="trace-24389"></a>
<a id="trace-24391"></a>
<a id="trace-24401"></a>
<a id="trace-24403"></a>
<a id="trace-24414"></a>
<a id="trace-24416"></a>
<a id="trace-24430"></a>
<a id="trace-24432"></a>
<a id="trace-24438"></a>
<a id="trace-24440"></a>
<a id="trace-24505"></a>
<a id="trace-24507"></a>
<a id="trace-24518"></a>
<a id="trace-24520"></a>
<a id="trace-24529"></a>
<a id="trace-24531"></a>
<a id="trace-24538"></a>
<a id="trace-24540"></a>
<a id="trace-24550"></a>
<a id="trace-24552"></a>
<a id="trace-24568"></a>
<a id="trace-24570"></a>
<a id="trace-24580"></a>
<a id="trace-24582"></a>
<a id="trace-24596"></a>
<a id="trace-24598"></a>
<a id="trace-24624"></a>
<a id="trace-24626"></a>
<a id="trace-24631"></a>
<a id="trace-24633"></a>
<a id="trace-24700"></a>
<a id="trace-24702"></a>
<a id="trace-24710"></a>
<a id="trace-24712"></a>
<a id="trace-24722"></a>
<a id="trace-24724"></a>
<a id="trace-24732"></a>
<a id="trace-24734"></a>
<a id="trace-24744"></a>
<a id="trace-24746"></a>
<a id="trace-24759"></a>
<a id="trace-24761"></a>
<a id="trace-24770"></a>
<a id="trace-24772"></a>
<a id="trace-24778"></a>
<a id="trace-24780"></a>
<a id="trace-24798"></a>
<a id="trace-24800"></a>
<a id="trace-24807"></a>
<a id="trace-24809"></a>
<a id="trace-24882"></a>
<a id="trace-24884"></a>
<a id="trace-24903"></a>
<a id="trace-24905"></a>
<a id="trace-24915"></a>
<a id="trace-24917"></a>
<a id="trace-24924"></a>
<a id="trace-24926"></a>
<a id="trace-24938"></a>
<a id="trace-24940"></a>
<a id="trace-24953"></a>
<a id="trace-24955"></a>
<a id="trace-24963"></a>
<a id="trace-24965"></a>
<a id="trace-24972"></a>
<a id="trace-24974"></a>
<a id="trace-24988"></a>
<a id="trace-24990"></a>
<a id="trace-24996"></a>
<a id="trace-24998"></a>
<a id="trace-25065"></a>
<a id="trace-25067"></a>
<a id="trace-25079"></a>
<a id="trace-25081"></a>
<a id="trace-25092"></a>
<a id="trace-25094"></a>
<a id="trace-25107"></a>
<a id="trace-25109"></a>
<a id="trace-25131"></a>
<a id="trace-25133"></a>
<a id="trace-25144"></a>
<a id="trace-25146"></a>
<a id="trace-25155"></a>
<a id="trace-25157"></a>
<a id="trace-25164"></a>
<a id="trace-25166"></a>
<a id="trace-25179"></a>
<a id="trace-25181"></a>
<a id="trace-25189"></a>
<a id="trace-25191"></a>
<a id="trace-25256"></a>
<a id="trace-25258"></a>
<a id="trace-25263"></a>
<a id="trace-25265"></a>
<a id="trace-25276"></a>
<a id="trace-25278"></a>
<a id="trace-25288"></a>
<a id="trace-25290"></a>
<a id="trace-25306"></a>
<a id="trace-25308"></a>
<a id="trace-25319"></a>
<a id="trace-25321"></a>
<a id="trace-25338"></a>
<a id="trace-25340"></a>
<a id="trace-25345"></a>
<a id="trace-25347"></a>
<a id="trace-25371"></a>
<a id="trace-25373"></a>
<a id="trace-25381"></a>
<a id="trace-25383"></a>
<a id="trace-25447"></a>
<a id="trace-25449"></a>
<a id="trace-25456"></a>
<a id="trace-25458"></a>
<a id="trace-25471"></a>
<a id="trace-25473"></a>
<a id="trace-25481"></a>
<a id="trace-25483"></a>
<a id="trace-25492"></a>
<a id="trace-25494"></a>
<a id="trace-25505"></a>
<a id="trace-25507"></a>
<a id="trace-25522"></a>
<a id="trace-25524"></a>
<a id="trace-25529"></a>
<a id="trace-25531"></a>
<a id="trace-25550"></a>
<a id="trace-25552"></a>
<a id="trace-25558"></a>
<a id="trace-25560"></a>
<a id="trace-25633"></a>
<a id="trace-25635"></a>
<a id="trace-25653"></a>
<a id="trace-25655"></a>
<a id="trace-25664"></a>
<a id="trace-25666"></a>
<a id="trace-25674"></a>
<a id="trace-25676"></a>
<a id="trace-25684"></a>
<a id="trace-25686"></a>
<a id="trace-25698"></a>
<a id="trace-25700"></a>
<a id="trace-25713"></a>
<a id="trace-25715"></a>
<a id="trace-25719"></a>
<a id="trace-25721"></a>
<a id="trace-25734"></a>
<a id="trace-25736"></a>
<a id="trace-25745"></a>
<a id="trace-25747"></a>
<a id="trace-25813"></a>
<a id="trace-25815"></a>
<a id="trace-25827"></a>
<a id="trace-25829"></a>
<a id="trace-25840"></a>
<a id="trace-25842"></a>
<a id="trace-25857"></a>
<a id="trace-25859"></a>
<a id="trace-25879"></a>
<a id="trace-25881"></a>
<a id="trace-25892"></a>
<a id="trace-25894"></a>
<a id="trace-25904"></a>
<a id="trace-25906"></a>
<a id="trace-25911"></a>
<a id="trace-25913"></a>
<a id="trace-25926"></a>
<a id="trace-25928"></a>
<a id="trace-25936"></a>
<a id="trace-25938"></a>
<a id="trace-26006"></a>
<a id="trace-26008"></a>
<a id="trace-26014"></a>
<a id="trace-26016"></a>
<a id="trace-26025"></a>
<a id="trace-26027"></a>
<a id="trace-26035"></a>
<a id="trace-26037"></a>
<a id="trace-26054"></a>
<a id="trace-26056"></a>
<a id="trace-26070"></a>
<a id="trace-26072"></a>
<a id="trace-26088"></a>
<a id="trace-26090"></a>
<a id="trace-26108"></a>
<a id="trace-26110"></a>
<a id="trace-26122"></a>
<a id="trace-26124"></a>
<a id="trace-26130"></a>
<a id="trace-26132"></a>
<a id="trace-26198"></a>
<a id="trace-26200"></a>
<a id="trace-26206"></a>
<a id="trace-26208"></a>
<a id="trace-26220"></a>
<a id="trace-26222"></a>
<a id="trace-26230"></a>
<a id="trace-26232"></a>
<a id="trace-26241"></a>
<a id="trace-26243"></a>
<a id="trace-26256"></a>
<a id="trace-26258"></a>
<a id="trace-26268"></a>
<a id="trace-26270"></a>
<a id="trace-26281"></a>
<a id="trace-26283"></a>
<a id="trace-26298"></a>
<a id="trace-26300"></a>
<a id="trace-26316"></a>
<a id="trace-26318"></a>
<a id="trace-26395"></a>
<a id="trace-26397"></a>
<a id="trace-26403"></a>
<a id="trace-26405"></a>
<a id="trace-26415"></a>
<a id="trace-26417"></a>
<a id="trace-26423"></a>
<a id="trace-26425"></a>
<a id="trace-26435"></a>
<a id="trace-26437"></a>
<a id="trace-26449"></a>
<a id="trace-26451"></a>
<a id="trace-26460"></a>
<a id="trace-26462"></a>
<a id="trace-26467"></a>
<a id="trace-26469"></a>
<a id="trace-26484"></a>
<a id="trace-26486"></a>
<a id="trace-26495"></a>
<a id="trace-26497"></a>
<a id="trace-26567"></a>
<a id="trace-26569"></a>
<a id="trace-26581"></a>
<a id="trace-26583"></a>
<a id="trace-26600"></a>
<a id="trace-26602"></a>
<a id="trace-26608"></a>
<a id="trace-26610"></a>
<a id="trace-26631"></a>
<a id="trace-26633"></a>
<a id="trace-26644"></a>
<a id="trace-26646"></a>
<a id="trace-26656"></a>
<a id="trace-26658"></a>
<a id="trace-26663"></a>
<a id="trace-26665"></a>
<a id="trace-26678"></a>
<a id="trace-26680"></a>
<a id="trace-26686"></a>
<a id="trace-26688"></a>
<a id="trace-26753"></a>
<a id="trace-26755"></a>
<a id="trace-26767"></a>
<a id="trace-26769"></a>
<a id="trace-26779"></a>
<a id="trace-26781"></a>
<a id="trace-26788"></a>
<a id="trace-26790"></a>
<a id="trace-26809"></a>
<a id="trace-26811"></a>
<a id="trace-26823"></a>
<a id="trace-26825"></a>
<a id="trace-26842"></a>
<a id="trace-26844"></a>
<a id="trace-26861"></a>
<a id="trace-26863"></a>
<a id="trace-26876"></a>
<a id="trace-26878"></a>
<a id="trace-26884"></a>
<a id="trace-26886"></a>
<a id="trace-26951"></a>
<a id="trace-26953"></a>
<a id="trace-26960"></a>
<a id="trace-26962"></a>
<a id="trace-26972"></a>
<a id="trace-26974"></a>
<a id="trace-26982"></a>
<a id="trace-26984"></a>
<a id="trace-26994"></a>
<a id="trace-26996"></a>
<a id="trace-27011"></a>
<a id="trace-27013"></a>
<a id="trace-27023"></a>
<a id="trace-27025"></a>
<a id="trace-27036"></a>
<a id="trace-27038"></a>
<a id="trace-27052"></a>
<a id="trace-27054"></a>
<a id="trace-27070"></a>
<a id="trace-27072"></a>
<a id="trace-27150"></a>
<a id="trace-27152"></a>
<a id="trace-27158"></a>
<a id="trace-27160"></a>
<a id="trace-27170"></a>
<a id="trace-27172"></a>
<a id="trace-27178"></a>
<a id="trace-27180"></a>
<a id="trace-27188"></a>
<a id="trace-27190"></a>
<a id="trace-27203"></a>
<a id="trace-27205"></a>
<a id="trace-27213"></a>
<a id="trace-27215"></a>
<a id="trace-27221"></a>
<a id="trace-27223"></a>
<a id="trace-27237"></a>
<a id="trace-27239"></a>
<a id="trace-27246"></a>
<a id="trace-27248"></a>
<a id="trace-27321"></a>
<a id="trace-27323"></a>
<a id="trace-27330"></a>
<a id="trace-27332"></a>
<a id="trace-27350"></a>
<a id="trace-27352"></a>
<a id="trace-27373"></a>
<a id="trace-27375"></a>
<a id="trace-27385"></a>
<a id="trace-27387"></a>
<a id="trace-27398"></a>
<a id="trace-27400"></a>
<a id="trace-27408"></a>
<a id="trace-27410"></a>
<a id="trace-27416"></a>
<a id="trace-27418"></a>
<a id="trace-27429"></a>
<a id="trace-27431"></a>
<a id="trace-27438"></a>
<a id="trace-27440"></a>
<a id="trace-27506"></a>
<a id="trace-27508"></a>
<a id="trace-27514"></a>
<a id="trace-27516"></a>
<a id="trace-27528"></a>
<a id="trace-27530"></a>
<a id="trace-27545"></a>
<a id="trace-27547"></a>
<a id="trace-27559"></a>
<a id="trace-27561"></a>
<a id="trace-27579"></a>
<a id="trace-27581"></a>
<a id="trace-27604"></a>
<a id="trace-27606"></a>
<a id="trace-27612"></a>
<a id="trace-27614"></a>
<a id="trace-27626"></a>
<a id="trace-27628"></a>
<a id="trace-27635"></a>
<a id="trace-27637"></a>
- 1.60s–359.80s (×1426), actor 37, squad 4 (trace 702): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.46576843548638347, 'next_transition': 731}.
<a id="trace-958"></a>
<a id="trace-960"></a>
<a id="trace-991"></a>
<a id="trace-993"></a>
<a id="trace-1022"></a>
<a id="trace-1024"></a>
<a id="trace-1067"></a>
<a id="trace-1069"></a>
<a id="trace-1089"></a>
<a id="trace-1091"></a>
<a id="trace-1125"></a>
<a id="trace-1127"></a>
<a id="trace-1158"></a>
<a id="trace-1160"></a>
<a id="trace-1198"></a>
<a id="trace-1200"></a>
<a id="trace-1328"></a>
<a id="trace-1330"></a>
<a id="trace-1350"></a>
<a id="trace-1352"></a>
<a id="trace-1370"></a>
<a id="trace-1372"></a>
- 5.20s–11.20s (×22), actor 5, squad 0 (trace 958): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 890. Next observer evidence: {'until': 5.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2599879601569264, 'next_transition': 991}.
<a id="trace-142"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5628278896654164, 'next_transition': 1407}.
<a id="trace-143"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (events line 143): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198104011323594, 'next_transition': 1770}.
<a id="trace-1378"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1378): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1378. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5628278896654164, 'next_transition': 1407}.
<a id="trace-1379"></a>
- 11.25s–11.25s (×1), actor 5, squad 0 (trace 1379): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1379. Next observer evidence: {'until': 11.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5628278896654164, 'next_transition': 1407}.
<a id="trace-1380"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1380): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1380. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198104011323594, 'next_transition': 1770}.
<a id="trace-1381"></a>
- 11.25s–11.25s (×1), actor 5, squad 1 (trace 1381): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 13.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0198104011323594, 'next_transition': 1770}.
<a id="trace-1407"></a>
<a id="trace-1409"></a>
<a id="trace-1440"></a>
<a id="trace-1442"></a>
<a id="trace-1465"></a>
<a id="trace-1467"></a>
- 11.70s–12.70s (×6), actor 5, squad 0 (trace 1407): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 12.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3435260155373131, 'next_transition': 1440}.
<a id="trace-1474"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1474): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250756275651606, 'next_transition': 1738}.
<a id="trace-1475"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1475): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1249. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250756275651606, 'next_transition': 1738}.
<a id="trace-1738"></a>
<a id="trace-1740"></a>
<a id="trace-2088"></a>
<a id="trace-2090"></a>
<a id="trace-2205"></a>
<a id="trace-2207"></a>
<a id="trace-2247"></a>
<a id="trace-2249"></a>
<a id="trace-2276"></a>
<a id="trace-2278"></a>
- 13.20s–16.25s (×10), actor 5, squad 0 (trace 1738): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 11.25s, trace 1381. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.122171637185211, 'next_transition': 2088}.
<a id="trace-1770"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1770): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1257. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.871429420182057, 'next_transition': 2773}.
<a id="trace-1771"></a>
- 13.80s–13.80s (×1), actor 8, squad 1 (trace 1771): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1257. Next observer evidence: {'until': 20, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.871429420182057, 'next_transition': 2773}.
<a id="trace-2310"></a>
- 16.75s–16.75s (×1), actor 0, squad 0 (trace 2310): received platoon directive. Knowledge: actor memory at 15.00s, trace 2129. Next observer evidence: {'until': 17.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5835023633565362, 'next_transition': 2573}.
<a id="trace-2573"></a>
<a id="trace-2575"></a>
<a id="trace-2657"></a>
<a id="trace-2659"></a>
<a id="trace-2688"></a>
<a id="trace-2690"></a>
<a id="trace-3157"></a>
<a id="trace-3159"></a>
<a id="trace-3865"></a>
<a id="trace-3867"></a>
<a id="trace-3910"></a>
<a id="trace-3912"></a>
<a id="trace-3955"></a>
<a id="trace-3957"></a>
<a id="trace-4015"></a>
<a id="trace-4017"></a>
<a id="trace-4124"></a>
<a id="trace-4126"></a>
<a id="trace-4151"></a>
<a id="trace-4153"></a>
<a id="trace-4176"></a>
<a id="trace-4178"></a>
<a id="trace-4735"></a>
<a id="trace-4737"></a>
<a id="trace-4781"></a>
<a id="trace-4783"></a>
<a id="trace-4847"></a>
<a id="trace-4849"></a>
<a id="trace-4875"></a>
<a id="trace-4877"></a>
<a id="trace-4907"></a>
<a id="trace-4909"></a>
- 17.25s–28.25s (×32), actor 5, squad 0 (trace 2573): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 2134. Next observer evidence: {'until': 18.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9427854920954917, 'next_transition': 2657}.
<a id="trace-2773"></a>
- 20.05s–20.05s (×1), actor 8, squad 1 (trace 2773): ReactToContact: cover and return fire. Knowledge: actor memory at 20.00s, trace 2750. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750077321238778, 'next_transition': 3168}.
<a id="trace-2774"></a>
- 20.05s–20.05s (×1), actor 8, squad 1 (trace 2774): bounding overwatch. Knowledge: actor memory at 20.00s, trace 2750. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750077321238778, 'next_transition': 3168}.
<a id="trace-2775"></a>
<a id="trace-3168"></a>
<a id="trace-3528"></a>
- 20.05s–20.70s (×3), actor 8, squad 1 (trace 2775): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 2750. Next observer evidence: {'until': 20.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750077321238778, 'next_transition': 3168}.
<a id="trace-4185"></a>
- 24.85s–24.85s (×1), actor 8, squad 1 (trace 4185): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 20.00s, trace 2750. Next observer evidence: {'until': 37, 'shots': 1, 'casualties': 0, 'mean_displacement': 17.334308405006237, 'next_transition': 6072}.
<a id="trace-4186"></a>
- 24.85s–24.85s (×1), actor 8, squad 1 (trace 4186): rearward bound: one stationary suppressing element. Knowledge: actor memory at 20.00s, trace 2750. Next observer evidence: {'until': 37, 'shots': 1, 'casualties': 0, 'mean_displacement': 17.334308405006237, 'next_transition': 6072}.
<a id="trace-4922"></a>
- 28.55s–28.55s (×1), actor 0, squad 0 (trace 4922): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 4631. Next observer evidence: {'until': 28.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 5086}.
<a id="trace-5086"></a>
<a id="trace-5088"></a>
<a id="trace-5114"></a>
<a id="trace-5116"></a>
<a id="trace-5144"></a>
<a id="trace-5146"></a>
<a id="trace-5245"></a>
<a id="trace-5247"></a>
<a id="trace-5273"></a>
<a id="trace-5275"></a>
<a id="trace-5307"></a>
<a id="trace-5309"></a>
<a id="trace-5324"></a>
<a id="trace-5326"></a>
<a id="trace-5375"></a>
<a id="trace-5377"></a>
<a id="trace-5420"></a>
<a id="trace-5422"></a>
- 28.75s–33.75s (×18), actor 5, squad 0 (trace 5086): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 4636. Next observer evidence: {'until': 29.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.49219281053548103, 'next_transition': 5114}.
<a id="trace-5432"></a>
- 33.95s–33.95s (×1), actor 0, squad 0 (trace 5432): ReactToContact: cover and return fire. Knowledge: actor memory at 30.00s, trace 5161. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21968609485583046, 'next_transition': 5818}.
<a id="trace-5433"></a>
- 33.95s–33.95s (×1), actor 0, squad 0 (trace 5433): bounding overwatch. Knowledge: actor memory at 30.00s, trace 5161. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21968609485583046, 'next_transition': 5818}.
<a id="trace-5434"></a>
- 33.95s–33.95s (×1), actor 0, squad 0 (trace 5434): new contact inside 100 m. Knowledge: actor memory at 30.00s, trace 5161. Next observer evidence: {'until': 34.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.21968609485583046, 'next_transition': 5818}.
<a id="trace-5818"></a>
<a id="trace-5820"></a>
<a id="trace-5978"></a>
<a id="trace-5980"></a>
<a id="trace-6008"></a>
<a id="trace-6010"></a>
<a id="trace-6237"></a>
<a id="trace-6239"></a>
- 34.25s–37.25s (×8), actor 5, squad 0 (trace 5818): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 5166. Next observer evidence: {'until': 35.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.530060115827669, 'next_transition': 5978}.
<a id="trace-6072"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 6072): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 35.00s, trace 5870. Next observer evidence: {'until': 42.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 8.732414876193703, 'next_transition': 9640}.
<a id="trace-6073"></a>
- 37.00s–37.00s (×1), actor 8, squad 1 (trace 6073): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 35.00s, trace 5870. Next observer evidence: {'until': 42.8, 'shots': 3, 'casualties': 0, 'mean_displacement': 8.732414876193703, 'next_transition': 9640}.
<a id="trace-6249"></a>
- 37.35s–37.35s (×1), actor 0, squad 0 (trace 6249): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 5862. Next observer evidence: {'until': 38.2, 'shots': 1, 'casualties': 1, 'mean_displacement': 0.10462094458975295, 'next_transition': 6669}.
<a id="trace-6669"></a>
<a id="trace-6671"></a>
<a id="trace-6698"></a>
<a id="trace-6700"></a>
- 38.25s–38.75s (×4), actor 5, squad 0 (trace 6669): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 5867. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.08184917827121699, 'next_transition': 6698}.
<a id="trace-737"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (events line 737): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-6714"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 6714): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.763817 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 6714. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6741}.
<a id="trace-6715"></a>
- 38.85s–38.85s (×1), actor 5, squad 0 (trace 6715): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=1.763817 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 38.85s, trace 6715. Next observer evidence: {'until': 39.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6741}.
<a id="trace-6741"></a>
<a id="trace-6743"></a>
<a id="trace-6776"></a>
<a id="trace-6778"></a>
<a id="trace-6914"></a>
<a id="trace-6916"></a>
- 39.25s–40.75s (×6), actor 5, squad 0 (trace 6741): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 38.85s, trace 6715. Next observer evidence: {'until': 39.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 6776}.
<a id="trace-6951"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 6951): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-6953"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 6953): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-9216"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 9216): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-9217"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 9217): MoveTactically. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-9218"></a>
- 41.70s–41.70s (×1), actor 0, squad 0 (trace 9218): contact cover complete: assessment resumes closure. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-9563"></a>
<a id="trace-9565"></a>
<a id="trace-9599"></a>
<a id="trace-9601"></a>
<a id="trace-9624"></a>
<a id="trace-9626"></a>
- 41.75s–42.75s (×6), actor 5, squad 0 (trace 9563): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6803. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.33142739408657956, 'next_transition': 9599}.
<a id="trace-9640"></a>
- 42.85s–42.85s (×1), actor 8, squad 1 (trace 9640): NeedSupport. Knowledge: actor memory at 40.00s, trace 6806. Next observer evidence: {'until': 56.2, 'shots': 5, 'casualties': 1, 'mean_displacement': 10.599324252582846, 'next_transition': 10830}.
<a id="trace-9656"></a>
- 43.10s–43.10s (×1), actor 0, squad 0 (trace 9656): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34125235203105436, 'next_transition': 9678}.
<a id="trace-9658"></a>
- 43.10s–43.10s (×1), actor 0, squad 0 (trace 9658): NeedSupport. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.34125235203105436, 'next_transition': 9678}.
<a id="trace-9678"></a>
<a id="trace-9680"></a>
- 43.25s–43.25s (×2), actor 5, squad 0 (trace 9678): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6803. Next observer evidence: None.
<a id="trace-9691"></a>
- 43.35s–43.35s (×1), actor 0, squad 0 (trace 9691): Reorganise: completed/failed drill. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6574994579597585, 'next_transition': 9842}.
<a id="trace-9696"></a>
- 43.35s–43.35s (×1), actor 0, squad 0 (trace 9696): MoveTactically. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6574994579597585, 'next_transition': 9842}.
<a id="trace-9697"></a>
- 43.35s–43.35s (×1), actor 0, squad 0 (trace 9697): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: {'until': 43.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6574994579597585, 'next_transition': 9842}.
<a id="trace-9842"></a>
<a id="trace-9844"></a>
- 43.75s–43.75s (×2), actor 5, squad 0 (trace 9842): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6803. Next observer evidence: {'until': 44.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.9450001331103314, 'next_transition': 9879}.
<a id="trace-9879"></a>
- 44.20s–44.20s (×1), actor 0, squad 0 (trace 9879): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-9880"></a>
- 44.20s–44.20s (×1), actor 0, squad 0 (trace 9880): received platoon directive. Knowledge: actor memory at 40.00s, trace 6799. Next observer evidence: None.
<a id="trace-10017"></a>
<a id="trace-10019"></a>
<a id="trace-10063"></a>
<a id="trace-10065"></a>
<a id="trace-10228"></a>
<a id="trace-10230"></a>
<a id="trace-10257"></a>
<a id="trace-10259"></a>
<a id="trace-10326"></a>
<a id="trace-10328"></a>
- 44.25s–47.75s (×10), actor 5, squad 0 (trace 10017): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 6803. Next observer evidence: {'until': 44.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31501300878633265, 'next_transition': 10063}.
<a id="trace-10335"></a>
- 47.75s–47.75s (×1), actor 0, squad 0 (trace 10335): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 45.00s, trace 10087. Next observer evidence: {'until': 48.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.20614180304128296, 'next_transition': 10356}.
<a id="trace-10356"></a>
<a id="trace-10358"></a>
<a id="trace-10382"></a>
<a id="trace-10384"></a>
<a id="trace-10502"></a>
<a id="trace-10504"></a>
<a id="trace-10560"></a>
<a id="trace-10562"></a>
- 48.25s–51.75s (×8), actor 5, squad 0 (trace 10356): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 10090. Next observer evidence: {'until': 48.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.12459535984315172, 'next_transition': 10382}.
<a id="trace-10594"></a>
- 52.65s–52.65s (×1), actor 0, squad 0 (trace 10594): NeedSupport. Knowledge: actor memory at 50.00s, trace 10431. Next observer evidence: None.
<a id="trace-10610"></a>
<a id="trace-10612"></a>
<a id="trace-10629"></a>
<a id="trace-10631"></a>
<a id="trace-10779"></a>
<a id="trace-10781"></a>
<a id="trace-10794"></a>
<a id="trace-10796"></a>
<a id="trace-10821"></a>
<a id="trace-10823"></a>
<a id="trace-10925"></a>
<a id="trace-10927"></a>
<a id="trace-10987"></a>
<a id="trace-10989"></a>
<a id="trace-11010"></a>
<a id="trace-11012"></a>
<a id="trace-11033"></a>
<a id="trace-11035"></a>
<a id="trace-11052"></a>
<a id="trace-11054"></a>
- 52.75s–59.75s (×20), actor 5, squad 0 (trace 10610): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 10434. Next observer evidence: {'until': 53.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5815270326162962, 'next_transition': 10629}.
<a id="trace-10830"></a>
- 56.25s–56.25s (×1), actor 8, squad 1 (trace 10830): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 55.00s, trace 10711. Next observer evidence: {'until': 70.6, 'shots': 16, 'casualties': 0, 'mean_displacement': 9.36129656380758, 'next_transition': 12406}.
<a id="trace-10831"></a>
- 56.25s–56.25s (×1), actor 8, squad 1 (trace 10831): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 55.00s, trace 10711. Next observer evidence: {'until': 70.6, 'shots': 16, 'casualties': 0, 'mean_displacement': 9.36129656380758, 'next_transition': 12406}.
<a id="trace-11142"></a>
- 60.30s–60.30s (×1), actor 0, squad 0 (trace 11142): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 60.00s, trace 11061. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.032283595077238665, 'next_transition': 11689}.
<a id="trace-11554"></a>
- 60.30s–60.30s (×1), actor 0, squad 0 (trace 11554): SquadAttack: covered flank sector 40-60 degrees, 20-45 m. Knowledge: actor memory at 60.00s, trace 11061. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.032283595077238665, 'next_transition': 11689}.
<a id="trace-11555"></a>
- 60.30s–60.30s (×1), actor 0, squad 0 (trace 11555): prepare element support; assault permission withheld pending delivered rounds. Knowledge: actor memory at 60.00s, trace 11061. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.032283595077238665, 'next_transition': 11689}.
<a id="trace-11667"></a>
- 60.30s–60.30s (×1), actor 0, squad 0 (trace 11667): Blocked/Support: fewer than two protected firing positions; report cause, Reorganise then supported closure. Knowledge: actor memory at 60.00s, trace 11061. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.032283595077238665, 'next_transition': 11689}.
<a id="trace-11668"></a>
- 60.30s–60.30s (×1), actor 0, squad 0 (trace 11668): Assaulting. Knowledge: actor memory at 60.00s, trace 11061. Next observer evidence: {'until': 60.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.032283595077238665, 'next_transition': 11689}.
<a id="trace-11689"></a>
<a id="trace-11691"></a>
<a id="trace-11707"></a>
<a id="trace-11709"></a>
<a id="trace-11741"></a>
<a id="trace-11743"></a>
- 60.75s–62.25s (×6), actor 5, squad 0 (trace 11689): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11064. Next observer evidence: {'until': 61.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5264083783527763, 'next_transition': 11707}.
<a id="trace-11785"></a>
- 63.35s–63.35s (×1), actor 1, squad 0 (trace 11785): Reorganise: completed/failed drill. Knowledge: actor memory at 60.00s, trace 11062. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11801}.
<a id="trace-11789"></a>
- 63.35s–63.35s (×1), actor 1, squad 0 (trace 11789): MoveTactically. Knowledge: actor memory at 60.00s, trace 11062. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11801}.
<a id="trace-11790"></a>
- 63.35s–63.35s (×1), actor 1, squad 0 (trace 11790): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 60.00s, trace 11062. Next observer evidence: {'until': 63.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11801}.
<a id="trace-11801"></a>
<a id="trace-11803"></a>
<a id="trace-11829"></a>
<a id="trace-11831"></a>
- 63.75s–64.25s (×4), actor 5, squad 0 (trace 11801): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11064. Next observer evidence: {'until': 64.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11829}.
<a id="trace-11840"></a>
- 64.35s–64.35s (×1), actor 1, squad 0 (trace 11840): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 60.00s, trace 11062. Next observer evidence: {'until': 64.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 11965}.
<a id="trace-11965"></a>
<a id="trace-11967"></a>
<a id="trace-12070"></a>
<a id="trace-12072"></a>
<a id="trace-12096"></a>
<a id="trace-12098"></a>
<a id="trace-12128"></a>
<a id="trace-12140"></a>
<a id="trace-12166"></a>
<a id="trace-12216"></a>
<a id="trace-12240"></a>
<a id="trace-12242"></a>
- 64.75s–69.75s (×12), actor 5, squad 0 (trace 11965): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 60.00s, trace 11064. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4805087868469968, 'next_transition': 12070}.
<a id="trace-12327"></a>
- 70.20s–70.20s (×1), actor 1, squad 0 (trace 12327): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 70.00s, trace 12253. Next observer evidence: None.
<a id="trace-12387"></a>
<a id="trace-12389"></a>
<a id="trace-12514"></a>
<a id="trace-12516"></a>
<a id="trace-12544"></a>
<a id="trace-12546"></a>
<a id="trace-12558"></a>
<a id="trace-12560"></a>
<a id="trace-12585"></a>
<a id="trace-12587"></a>
- 70.25s–72.25s (×10), actor 5, squad 0 (trace 12387): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12255. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2520011708226768, 'next_transition': 12514}.
<a id="trace-12406"></a>
- 70.70s–70.70s (×1), actor 8, squad 1 (trace 12406): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 70.00s, trace 12258. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 15.264928839836612, 'next_transition': 1070}.
<a id="trace-12407"></a>
- 70.70s–70.70s (×1), actor 8, squad 1 (trace 12407): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 70.00s, trace 12258. Next observer evidence: {'until': 80.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 15.264928839836612, 'next_transition': 1070}.
<a id="trace-12648"></a>
- 73.65s–73.65s (×1), actor 1, squad 0 (trace 12648): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 70.00s, trace 12253. Next observer evidence: None.
<a id="trace-12759"></a>
<a id="trace-12761"></a>
<a id="trace-12780"></a>
<a id="trace-12782"></a>
<a id="trace-12804"></a>
<a id="trace-12806"></a>
<a id="trace-12880"></a>
<a id="trace-12882"></a>
<a id="trace-12899"></a>
<a id="trace-12901"></a>
<a id="trace-12918"></a>
<a id="trace-12920"></a>
<a id="trace-12937"></a>
<a id="trace-12939"></a>
<a id="trace-12962"></a>
<a id="trace-12964"></a>
<a id="trace-12985"></a>
<a id="trace-12987"></a>
<a id="trace-13018"></a>
<a id="trace-13020"></a>
<a id="trace-13034"></a>
<a id="trace-13036"></a>
<a id="trace-13056"></a>
<a id="trace-13058"></a>
<a id="trace-13138"></a>
<a id="trace-13140"></a>
<a id="trace-13159"></a>
<a id="trace-13161"></a>
<a id="trace-13180"></a>
<a id="trace-13182"></a>
- 73.75s–81.25s (×30), actor 5, squad 0 (trace 12759): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 12255. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0775399177413046, 'next_transition': 12780}.
<a id="trace-1070"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (events line 1070): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-13145"></a>
- 80.30s–80.30s (×1), actor 5, squad 1 (trace 13145): renew committed intent (75 s lifetime). Knowledge: actor memory at 80.30s, trace 13145. Next observer evidence: {'until': 85.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.660987138105365, 'next_transition': 13515}.
<a id="trace-13187"></a>
- 81.25s–81.25s (×1), actor 1, squad 0 (trace 13187): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 80.00s, trace 13066. Next observer evidence: {'until': 81.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5040050682284859, 'next_transition': 13303}.
<a id="trace-13303"></a>
<a id="trace-13305"></a>
<a id="trace-13330"></a>
<a id="trace-13332"></a>
<a id="trace-13359"></a>
<a id="trace-13361"></a>
<a id="trace-13372"></a>
<a id="trace-13374"></a>
<a id="trace-13389"></a>
<a id="trace-13391"></a>
<a id="trace-13408"></a>
<a id="trace-13410"></a>
<a id="trace-13499"></a>
<a id="trace-13501"></a>
<a id="trace-13590"></a>
<a id="trace-13592"></a>
<a id="trace-13610"></a>
<a id="trace-13612"></a>
<a id="trace-13640"></a>
<a id="trace-13642"></a>
<a id="trace-13664"></a>
<a id="trace-13666"></a>
- 81.75s–87.75s (×22), actor 5, squad 0 (trace 13303): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.30s, trace 13145. Next observer evidence: {'until': 82.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.35288173429635006, 'next_transition': 13330}.
<a id="trace-13515"></a>
- 85.55s–85.55s (×1), actor 8, squad 1 (trace 13515): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 85.00s, trace 13439. Next observer evidence: {'until': 99.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340188890601808, 'next_transition': 14664}.
<a id="trace-13516"></a>
- 85.55s–85.55s (×1), actor 8, squad 1 (trace 13516): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 85.00s, trace 13439. Next observer evidence: {'until': 99.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.340188890601808, 'next_transition': 14664}.
<a id="trace-13680"></a>
- 88.15s–88.15s (×1), actor 4, squad 0 (trace 13680): ReactToContact: cover and return fire. Knowledge: actor memory at 85.00s, trace 13435. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499327949283296, 'next_transition': 13876}.
<a id="trace-13681"></a>
- 88.15s–88.15s (×1), actor 4, squad 0 (trace 13681): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 85.00s, trace 13435. Next observer evidence: {'until': 88.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31499327949283296, 'next_transition': 13876}.
<a id="trace-13876"></a>
<a id="trace-13878"></a>
<a id="trace-13933"></a>
<a id="trace-13935"></a>
<a id="trace-13956"></a>
<a id="trace-13958"></a>
<a id="trace-14049"></a>
<a id="trace-14072"></a>
<a id="trace-14090"></a>
- 88.25s–92.25s (×9), actor 5, squad 0 (trace 13876): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 85.00s, trace 13436. Next observer evidence: {'until': 89.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.350344329644724, 'next_transition': 13933}.
<a id="trace-14104"></a>
- 92.45s–92.45s (×1), actor 4, squad 0 (trace 14104): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 90.00s, trace 13969. Next observer evidence: {'until': 94.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.189498057712383, 'next_transition': 14170}.
<a id="trace-14170"></a>
<a id="trace-14172"></a>
<a id="trace-14188"></a>
<a id="trace-14190"></a>
- 94.25s–94.75s (×4), actor 5, squad 0 (trace 14170): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 90.00s, trace 13970. Next observer evidence: {'until': 94.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31046430320167245, 'next_transition': 14188}.
<a id="trace-14197"></a>
- 94.75s–94.75s (×1), actor 4, squad 0 (trace 14197): effective incoming fire ended (6 s hysteresis); retain contact cover stage. Knowledge: actor memory at 90.00s, trace 13969. Next observer evidence: {'until': 95.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.47250096392097446, 'next_transition': 14263}.
<a id="trace-14263"></a>
<a id="trace-14265"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14304"></a>
<a id="trace-14306"></a>
- 95.25s–96.75s (×6), actor 5, squad 0 (trace 14263): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14199. Next observer evidence: {'until': 96.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.749141874935082, 'next_transition': 14290}.
<a id="trace-14311"></a>
- 96.75s–96.75s (×1), actor 4, squad 0 (trace 14311): new contact inside 100 m. Knowledge: actor memory at 95.00s, trace 14198. Next observer evidence: {'until': 97.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.7874859826579979, 'next_transition': 14455}.
<a id="trace-14455"></a>
<a id="trace-14457"></a>
- 97.25s–97.25s (×2), actor 5, squad 0 (trace 14455): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14199. Next observer evidence: {'until': 97.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.31497709606023105, 'next_transition': 14467}.
<a id="trace-14467"></a>
- 97.50s–97.50s (×1), actor 4, squad 0 (trace 14467): new contact inside 100 m. Knowledge: actor memory at 95.00s, trace 14198. Next observer evidence: {'until': 97.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3150326327233163, 'next_transition': 14599}.
<a id="trace-14599"></a>
<a id="trace-14601"></a>
<a id="trace-14618"></a>
<a id="trace-14620"></a>
<a id="trace-14631"></a>
<a id="trace-14633"></a>
<a id="trace-14646"></a>
<a id="trace-14648"></a>
<a id="trace-14657"></a>
<a id="trace-14659"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
- 97.75s–100.75s (×14), actor 5, squad 0 (trace 14599): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 95.00s, trace 14199. Next observer evidence: {'until': 98.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.8782365411266748, 'next_transition': 14618}.
<a id="trace-14664"></a>
- 99.80s–99.80s (×1), actor 8, squad 1 (trace 14664): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 14202. Next observer evidence: {'until': 100.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14765}.
<a id="trace-14765"></a>
- 100.80s–100.80s (×1), actor 8, squad 1 (trace 14765): MoveTactically. Knowledge: actor memory at 100.00s, trace 14673. Next observer evidence: {'until': 101.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14802}.
<a id="trace-14766"></a>
- 100.80s–100.80s (×1), actor 8, squad 1 (trace 14766): received platoon directive. Knowledge: actor memory at 100.00s, trace 14673. Next observer evidence: {'until': 101.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14802}.
<a id="trace-14774"></a>
- 100.85s–100.85s (×1), actor 7, squad 0 (trace 14774): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: {'until': 101.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 2.0999871533998573, 'next_transition': 14874}.
<a id="trace-14802"></a>
- 101.45s–101.45s (×1), actor 8, squad 1 (trace 14802): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 14673. Next observer evidence: {'until': 111.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 8.000003272079887, 'next_transition': 15367}.
<a id="trace-14874"></a>
- 101.85s–101.85s (×1), actor 7, squad 0 (trace 14874): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: None.
<a id="trace-14876"></a>
- 101.85s–101.85s (×1), actor 7, squad 0 (trace 14876): NeedSupport. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: None.
<a id="trace-14890"></a>
- 101.90s–101.90s (×1), actor 7, squad 0 (trace 14890): Reorganise: completed/failed drill. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: None.
<a id="trace-14892"></a>
- 101.90s–101.90s (×1), actor 7, squad 0 (trace 14892): MoveTactically. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: None.
<a id="trace-14893"></a>
- 101.90s–101.90s (×1), actor 7, squad 0 (trace 14893): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: None.
<a id="trace-14899"></a>
- 101.95s–101.95s (×1), actor 7, squad 0 (trace 14899): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 100.00s, trace 14672. Next observer evidence: {'until': 102.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8400444882398926, 'next_transition': 14912}.
<a id="trace-14912"></a>
<a id="trace-14949"></a>
<a id="trace-14968"></a>
<a id="trace-14995"></a>
<a id="trace-15013"></a>
<a id="trace-15032"></a>
<a id="trace-15110"></a>
<a id="trace-15124"></a>
<a id="trace-15157"></a>
<a id="trace-15159"></a>
<a id="trace-15196"></a>
<a id="trace-15198"></a>
<a id="trace-15210"></a>
<a id="trace-15212"></a>
<a id="trace-15223"></a>
<a id="trace-15225"></a>
<a id="trace-15237"></a>
<a id="trace-15239"></a>
<a id="trace-15251"></a>
<a id="trace-15253"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15340"></a>
<a id="trace-15342"></a>
- 102.25s–110.75s (×24), actor 5, squad 0 (trace 14912): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 14670. Next observer evidence: {'until': 102.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8399661077818698, 'next_transition': 14949}.
<a id="trace-15347"></a>
- 110.75s–110.75s (×1), actor 7, squad 0 (trace 15347): traveling overwatch. Knowledge: actor memory at 110.00s, trace 15261. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15513}.
<a id="trace-15348"></a>
- 110.75s–110.75s (×1), actor 7, squad 0 (trace 15348): current contact unknown for 10 s. Knowledge: actor memory at 110.00s, trace 15261. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15513}.
<a id="trace-15367"></a>
- 111.60s–111.60s (×1), actor 8, squad 1 (trace 15367): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 110.00s, trace 15262. Next observer evidence: {'until': 112.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15401}.
<a id="trace-15401"></a>
- 112.60s–112.60s (×1), actor 8, squad 1 (trace 15401): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 110.00s, trace 15262. Next observer evidence: {'until': 121.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 11.98479664420938, 'next_transition': 1356}.
<a id="trace-15513"></a>
<a id="trace-15515"></a>
<a id="trace-15532"></a>
<a id="trace-15534"></a>
<a id="trace-15544"></a>
<a id="trace-15546"></a>
- 112.75s–113.75s (×6), actor 5, squad 0 (trace 15513): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15259. Next observer evidence: {'until': 113.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15532}.
<a id="trace-15558"></a>
- 113.90s–113.90s (×1), actor 7, squad 0 (trace 15558): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 110.00s, trace 15261. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15578}.
<a id="trace-15559"></a>
- 113.90s–113.90s (×1), actor 7, squad 0 (trace 15559): MoveTactically. Knowledge: actor memory at 110.00s, trace 15261. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15578}.
<a id="trace-15560"></a>
- 113.90s–113.90s (×1), actor 7, squad 0 (trace 15560): . Knowledge: actor memory at 110.00s, trace 15261. Next observer evidence: {'until': 114.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15578}.
<a id="trace-15578"></a>
<a id="trace-15580"></a>
<a id="trace-15667"></a>
<a id="trace-15669"></a>
<a id="trace-15705"></a>
<a id="trace-15707"></a>
<a id="trace-15721"></a>
<a id="trace-15723"></a>
<a id="trace-15743"></a>
<a id="trace-15745"></a>
<a id="trace-15763"></a>
<a id="trace-15765"></a>
<a id="trace-15787"></a>
<a id="trace-15789"></a>
<a id="trace-15802"></a>
<a id="trace-15804"></a>
<a id="trace-15822"></a>
<a id="trace-15824"></a>
<a id="trace-15951"></a>
<a id="trace-15953"></a>
<a id="trace-15967"></a>
<a id="trace-15969"></a>
<a id="trace-15977"></a>
<a id="trace-15979"></a>
- 114.25s–121.75s (×24), actor 5, squad 0 (trace 15578): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 110.00s, trace 15259. Next observer evidence: {'until': 115.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15667}.
<a id="trace-1355"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (events line 1355): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16023}.
<a id="trace-1356"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (events line 1356): Platoon task-tree directive: HelpSquad. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16030}.
<a id="trace-15988"></a>
- 121.80s–121.80s (×1), actor 5, squad 0 (trace 15988): renew committed intent (75 s lifetime). Knowledge: actor memory at 121.80s, trace 15988. Next observer evidence: {'until': 122.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16023}.
<a id="trace-15989"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 15989): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.788774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 15989. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16030}.
<a id="trace-15990"></a>
- 121.80s–121.80s (×1), actor 5, squad 1 (trace 15990): HelpSquad: received need unanswered for one report round trip; nearest squad with capacity; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.788774 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 121.80s, trace 15990. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16030}.
<a id="trace-15991"></a>
- 121.80s–121.80s (×1), actor 8, squad 1 (trace 15991): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 120.00s, trace 15855. Next observer evidence: {'until': 122.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16030}.
<a id="trace-16023"></a>
<a id="trace-16025"></a>
<a id="trace-16090"></a>
<a id="trace-16092"></a>
<a id="trace-16112"></a>
<a id="trace-16114"></a>
<a id="trace-16147"></a>
<a id="trace-16149"></a>
<a id="trace-16234"></a>
<a id="trace-16236"></a>
<a id="trace-16247"></a>
<a id="trace-16249"></a>
<a id="trace-16271"></a>
<a id="trace-16273"></a>
<a id="trace-16291"></a>
<a id="trace-16293"></a>
- 122.75s–126.75s (×16), actor 5, squad 0 (trace 16023): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 121.80s, trace 15990. Next observer evidence: {'until': 123.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16090}.
<a id="trace-16030"></a>
- 122.80s–122.80s (×1), actor 8, squad 1 (trace 16030): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 120.00s, trace 15855. Next observer evidence: {'until': 132.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 7.999969978899228, 'next_transition': 16550}.
<a id="trace-16301"></a>
- 126.80s–126.80s (×1), actor 7, squad 0 (trace 16301): received platoon directive. Knowledge: actor memory at 125.00s, trace 16160. Next observer evidence: {'until': 127.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16316}.
<a id="trace-16316"></a>
<a id="trace-16318"></a>
<a id="trace-16333"></a>
<a id="trace-16335"></a>
<a id="trace-16351"></a>
<a id="trace-16353"></a>
<a id="trace-16362"></a>
<a id="trace-16364"></a>
<a id="trace-16380"></a>
<a id="trace-16382"></a>
<a id="trace-16391"></a>
<a id="trace-16393"></a>
<a id="trace-16468"></a>
<a id="trace-16470"></a>
<a id="trace-16478"></a>
<a id="trace-16480"></a>
<a id="trace-16497"></a>
<a id="trace-16499"></a>
<a id="trace-16518"></a>
<a id="trace-16520"></a>
<a id="trace-16537"></a>
<a id="trace-16539"></a>
<a id="trace-16563"></a>
<a id="trace-16565"></a>
<a id="trace-16709"></a>
<a id="trace-16711"></a>
<a id="trace-16748"></a>
<a id="trace-16750"></a>
<a id="trace-16859"></a>
<a id="trace-16861"></a>
<a id="trace-16894"></a>
<a id="trace-16896"></a>
<a id="trace-16910"></a>
<a id="trace-16912"></a>
<a id="trace-16934"></a>
<a id="trace-16936"></a>
<a id="trace-16984"></a>
<a id="trace-16986"></a>
<a id="trace-17074"></a>
<a id="trace-17076"></a>
<a id="trace-17091"></a>
<a id="trace-17093"></a>
<a id="trace-17110"></a>
<a id="trace-17112"></a>
<a id="trace-17128"></a>
<a id="trace-17130"></a>
<a id="trace-17143"></a>
<a id="trace-17145"></a>
<a id="trace-17171"></a>
<a id="trace-17173"></a>
<a id="trace-17181"></a>
<a id="trace-17183"></a>
<a id="trace-17198"></a>
<a id="trace-17200"></a>
<a id="trace-17286"></a>
<a id="trace-17288"></a>
<a id="trace-17297"></a>
<a id="trace-17299"></a>
<a id="trace-17319"></a>
<a id="trace-17321"></a>
<a id="trace-17490"></a>
<a id="trace-17492"></a>
<a id="trace-17505"></a>
<a id="trace-17507"></a>
<a id="trace-17559"></a>
<a id="trace-17561"></a>
<a id="trace-17570"></a>
<a id="trace-17572"></a>
<a id="trace-17646"></a>
<a id="trace-17648"></a>
<a id="trace-17658"></a>
<a id="trace-17660"></a>
<a id="trace-17678"></a>
<a id="trace-17680"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17716"></a>
<a id="trace-17718"></a>
<a id="trace-17741"></a>
<a id="trace-17743"></a>
<a id="trace-17822"></a>
<a id="trace-17824"></a>
<a id="trace-17833"></a>
<a id="trace-17835"></a>
<a id="trace-17873"></a>
<a id="trace-17875"></a>
<a id="trace-17956"></a>
<a id="trace-17958"></a>
<a id="trace-18034"></a>
<a id="trace-18036"></a>
<a id="trace-18050"></a>
<a id="trace-18052"></a>
<a id="trace-18070"></a>
<a id="trace-18072"></a>
<a id="trace-18083"></a>
<a id="trace-18085"></a>
<a id="trace-18123"></a>
<a id="trace-18125"></a>
<a id="trace-18137"></a>
<a id="trace-18139"></a>
<a id="trace-18252"></a>
<a id="trace-18254"></a>
<a id="trace-18265"></a>
<a id="trace-18267"></a>
<a id="trace-18280"></a>
<a id="trace-18282"></a>
<a id="trace-18304"></a>
<a id="trace-18306"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18354"></a>
<a id="trace-18356"></a>
<a id="trace-18435"></a>
<a id="trace-18437"></a>
<a id="trace-18453"></a>
<a id="trace-18455"></a>
<a id="trace-18471"></a>
<a id="trace-18473"></a>
<a id="trace-18548"></a>
<a id="trace-18550"></a>
<a id="trace-18585"></a>
<a id="trace-18587"></a>
<a id="trace-18602"></a>
<a id="trace-18604"></a>
<a id="trace-18615"></a>
<a id="trace-18617"></a>
<a id="trace-18631"></a>
<a id="trace-18633"></a>
<a id="trace-18649"></a>
<a id="trace-18651"></a>
<a id="trace-18715"></a>
<a id="trace-18717"></a>
<a id="trace-18745"></a>
<a id="trace-18747"></a>
<a id="trace-18836"></a>
<a id="trace-18838"></a>
<a id="trace-18874"></a>
<a id="trace-18876"></a>
<a id="trace-18894"></a>
<a id="trace-18896"></a>
<a id="trace-18906"></a>
<a id="trace-18908"></a>
<a id="trace-18942"></a>
<a id="trace-18944"></a>
<a id="trace-18982"></a>
<a id="trace-18984"></a>
<a id="trace-19064"></a>
<a id="trace-19066"></a>
<a id="trace-19104"></a>
<a id="trace-19106"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19152"></a>
<a id="trace-19154"></a>
<a id="trace-19165"></a>
<a id="trace-19167"></a>
<a id="trace-19174"></a>
<a id="trace-19176"></a>
<a id="trace-19188"></a>
<a id="trace-19190"></a>
<a id="trace-19198"></a>
<a id="trace-19200"></a>
<a id="trace-19267"></a>
<a id="trace-19269"></a>
<a id="trace-19281"></a>
<a id="trace-19283"></a>
<a id="trace-19299"></a>
<a id="trace-19301"></a>
<a id="trace-19314"></a>
<a id="trace-19316"></a>
<a id="trace-19410"></a>
<a id="trace-19412"></a>
<a id="trace-19433"></a>
<a id="trace-19435"></a>
<a id="trace-19444"></a>
<a id="trace-19446"></a>
<a id="trace-19472"></a>
<a id="trace-19543"></a>
<a id="trace-19552"></a>
<a id="trace-19566"></a>
<a id="trace-19578"></a>
<a id="trace-19580"></a>
<a id="trace-19597"></a>
<a id="trace-19599"></a>
<a id="trace-19632"></a>
<a id="trace-19634"></a>
<a id="trace-19660"></a>
<a id="trace-19662"></a>
<a id="trace-19743"></a>
<a id="trace-19745"></a>
<a id="trace-19882"></a>
<a id="trace-19884"></a>
- 127.25s–190.80s (×192), actor 5, squad 0 (trace 16316): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 16158. Next observer evidence: {'until': 127.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16333}.
<a id="trace-16550"></a>
- 132.60s–132.60s (×1), actor 8, squad 1 (trace 16550): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 130.00s, trace 16404. Next observer evidence: {'until': 133.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16596}.
<a id="trace-16596"></a>
- 133.60s–133.60s (×1), actor 8, squad 1 (trace 16596): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 130.00s, trace 16404. Next observer evidence: {'until': 146.4, 'shots': 1, 'casualties': 0, 'mean_displacement': 15.934951165997022, 'next_transition': 17332}.
<a id="trace-17332"></a>
- 146.45s–146.45s (×1), actor 8, squad 1 (trace 17332): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 145.00s, trace 17222. Next observer evidence: {'until': 153.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.360830942825493, 'next_transition': 17759}.
<a id="trace-17759"></a>
- 153.20s–153.20s (×1), actor 8, squad 1 (trace 17759): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 150.00s, trace 17582. Next observer evidence: {'until': 155.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.746782594605775, 'next_transition': 17972}.
<a id="trace-17972"></a>
- 155.50s–155.50s (×1), actor 8, squad 1 (trace 17972): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 155.00s, trace 17890. Next observer evidence: {'until': 163.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 6.797213600446877, 'next_transition': 1649}.
<a id="trace-17973"></a>
- 155.50s–155.50s (×1), actor 8, squad 1 (trace 17973): MoveTactically. Knowledge: actor memory at 155.00s, trace 17890. Next observer evidence: {'until': 163.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 6.797213600446877, 'next_transition': 1649}.
<a id="trace-17974"></a>
- 155.50s–155.50s (×1), actor 8, squad 1 (trace 17974): . Knowledge: actor memory at 155.00s, trace 17890. Next observer evidence: {'until': 163.2, 'shots': 6, 'casualties': 0, 'mean_displacement': 6.797213600446877, 'next_transition': 1649}.
<a id="trace-1649"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (events line 1649): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18346"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 18346): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=6.876386 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 18346. Next observer evidence: None.
<a id="trace-18347"></a>
- 163.25s–163.25s (×1), actor 5, squad 1 (trace 18347): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=6.876386 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 163.25s, trace 18347. Next observer evidence: None.
<a id="trace-18364"></a>
- 163.30s–163.30s (×1), actor 8, squad 1 (trace 18364): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 160.00s, trace 18188. Next observer evidence: {'until': 168.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 4.462504534273451, 'next_transition': 18661}.
<a id="trace-18661"></a>
- 168.70s–168.70s (×1), actor 8, squad 1 (trace 18661): received platoon directive. Knowledge: actor memory at 165.00s, trace 18484. Next observer evidence: {'until': 182, 'shots': 1, 'casualties': 2, 'mean_displacement': 3.209052480762646, 'next_transition': 19327}.
<a id="trace-19327"></a>
- 182.00s–182.00s (×1), actor 10, squad 1 (trace 19327): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: None.
<a id="trace-19329"></a>
- 182.00s–182.00s (×1), actor 10, squad 1 (trace 19329): NeedSupport. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: None.
<a id="trace-19336"></a>
- 182.05s–182.05s (×1), actor 10, squad 1 (trace 19336): Reorganise: completed/failed drill. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: {'until': 190.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.993473464954125, 'next_transition': 19754}.
<a id="trace-19338"></a>
- 182.05s–182.05s (×1), actor 10, squad 1 (trace 19338): MoveTactically. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: {'until': 190.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.993473464954125, 'next_transition': 19754}.
<a id="trace-19339"></a>
- 182.05s–182.05s (×1), actor 10, squad 1 (trace 19339): traveling overwatch. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: {'until': 190.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.993473464954125, 'next_transition': 19754}.
<a id="trace-19340"></a>
- 182.05s–182.05s (×1), actor 10, squad 1 (trace 19340): Reorganise complete. Knowledge: actor memory at 180.00s, trace 19209. Next observer evidence: {'until': 190.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.993473464954125, 'next_transition': 19754}.
<a id="trace-19754"></a>
- 190.45s–190.45s (×1), actor 10, squad 1 (trace 19754): current contact unknown for 10 s. Knowledge: actor memory at 190.00s, trace 19682. Next observer evidence: {'until': 192.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.178836403210827, 'next_transition': 19953}.
<a id="trace-1789"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (events line 1789): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-19891"></a>
- 190.85s–190.85s (×1), actor 5, squad 0 (trace 19891): renew committed intent (75 s lifetime). Knowledge: actor memory at 190.85s, trace 19891. Next observer evidence: {'until': 191.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19901}.
<a id="trace-19901"></a>
<a id="trace-19903"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-19936"></a>
<a id="trace-19938"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20100"></a>
<a id="trace-20102"></a>
<a id="trace-20130"></a>
<a id="trace-20132"></a>
<a id="trace-20214"></a>
<a id="trace-20216"></a>
<a id="trace-20232"></a>
<a id="trace-20234"></a>
<a id="trace-21582"></a>
<a id="trace-21584"></a>
<a id="trace-21604"></a>
<a id="trace-21606"></a>
<a id="trace-21619"></a>
<a id="trace-21621"></a>
<a id="trace-21631"></a>
<a id="trace-21633"></a>
<a id="trace-21647"></a>
<a id="trace-21649"></a>
<a id="trace-21658"></a>
<a id="trace-21660"></a>
<a id="trace-21727"></a>
<a id="trace-21729"></a>
<a id="trace-21742"></a>
<a id="trace-21744"></a>
<a id="trace-21768"></a>
<a id="trace-21770"></a>
<a id="trace-21785"></a>
<a id="trace-21787"></a>
<a id="trace-21800"></a>
<a id="trace-21802"></a>
<a id="trace-21814"></a>
<a id="trace-21835"></a>
<a id="trace-21844"></a>
<a id="trace-21911"></a>
<a id="trace-21945"></a>
<a id="trace-21962"></a>
<a id="trace-21975"></a>
<a id="trace-21992"></a>
<a id="trace-22003"></a>
<a id="trace-22012"></a>
<a id="trace-22078"></a>
<a id="trace-22091"></a>
<a id="trace-22103"></a>
<a id="trace-22113"></a>
<a id="trace-22128"></a>
<a id="trace-22141"></a>
<a id="trace-22154"></a>
<a id="trace-22161"></a>
<a id="trace-22174"></a>
<a id="trace-22182"></a>
<a id="trace-22249"></a>
<a id="trace-22262"></a>
<a id="trace-22273"></a>
<a id="trace-22284"></a>
<a id="trace-22310"></a>
<a id="trace-22323"></a>
<a id="trace-22334"></a>
<a id="trace-22445"></a>
<a id="trace-22453"></a>
<a id="trace-22465"></a>
<a id="trace-22476"></a>
<a id="trace-22499"></a>
<a id="trace-22510"></a>
<a id="trace-22530"></a>
<a id="trace-22544"></a>
<a id="trace-22618"></a>
<a id="trace-22634"></a>
<a id="trace-22658"></a>
<a id="trace-22669"></a>
<a id="trace-22683"></a>
<a id="trace-22697"></a>
<a id="trace-22714"></a>
<a id="trace-22726"></a>
<a id="trace-22734"></a>
<a id="trace-22802"></a>
<a id="trace-22811"></a>
<a id="trace-22843"></a>
<a id="trace-22864"></a>
<a id="trace-22899"></a>
<a id="trace-22908"></a>
<a id="trace-22921"></a>
<a id="trace-22931"></a>
<a id="trace-22998"></a>
<a id="trace-23017"></a>
<a id="trace-23027"></a>
<a id="trace-23041"></a>
<a id="trace-23071"></a>
<a id="trace-23079"></a>
<a id="trace-23123"></a>
<a id="trace-23189"></a>
<a id="trace-23198"></a>
<a id="trace-23213"></a>
<a id="trace-23224"></a>
<a id="trace-23235"></a>
<a id="trace-23248"></a>
<a id="trace-23266"></a>
<a id="trace-23279"></a>
<a id="trace-23414"></a>
<a id="trace-23425"></a>
<a id="trace-23439"></a>
<a id="trace-23459"></a>
<a id="trace-23479"></a>
<a id="trace-23554"></a>
<a id="trace-23584"></a>
<a id="trace-23631"></a>
<a id="trace-23643"></a>
<a id="trace-23650"></a>
<a id="trace-23672"></a>
<a id="trace-23741"></a>
<a id="trace-23749"></a>
<a id="trace-23761"></a>
<a id="trace-23802"></a>
<a id="trace-23813"></a>
<a id="trace-23829"></a>
<a id="trace-23864"></a>
- 191.30s–259.80s (×123), actor 5, squad 0 (trace 19901): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 190.85s, trace 19891. Next observer evidence: {'until': 191.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19919}.
<a id="trace-19953"></a>
- 192.70s–192.70s (×1), actor 10, squad 1 (trace 19953): ReactToContact: cover and return fire. Knowledge: actor memory at 190.00s, trace 19682. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.438387541030751, 'next_transition': 20242}.
<a id="trace-19954"></a>
- 192.70s–192.70s (×1), actor 10, squad 1 (trace 19954): bounding overwatch. Knowledge: actor memory at 190.00s, trace 19682. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.438387541030751, 'next_transition': 20242}.
<a id="trace-19955"></a>
- 192.70s–192.70s (×1), actor 10, squad 1 (trace 19955): new contact inside 100 m. Knowledge: actor memory at 190.00s, trace 19682. Next observer evidence: {'until': 196.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 6.438387541030751, 'next_transition': 20242}.
<a id="trace-20242"></a>
- 196.25s–196.25s (×1), actor 10, squad 1 (trace 20242): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 195.00s, trace 20152. Next observer evidence: None.
<a id="trace-20255"></a>
<a id="trace-20402"></a>
<a id="trace-20548"></a>
<a id="trace-20693"></a>
<a id="trace-20838"></a>
<a id="trace-20984"></a>
<a id="trace-21129"></a>
<a id="trace-21283"></a>
<a id="trace-21429"></a>
- 196.35s–197.05s (×9), actor 10, squad 1 (trace 20255): new contact inside 100 m. Knowledge: actor memory at 195.00s, trace 20152. Next observer evidence: {'until': 196.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 20402}.
<a id="trace-23871"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (trace 23871): renew committed intent (75 s lifetime). Knowledge: actor memory at 259.90s, trace 23871. Next observer evidence: None.
<a id="trace-2237"></a>
- 259.90s–259.90s (×1), actor 5, squad 0 (events line 2237): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 260.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23934}.
<a id="trace-23934"></a>
<a id="trace-23955"></a>
<a id="trace-23967"></a>
<a id="trace-23991"></a>
<a id="trace-24002"></a>
<a id="trace-24011"></a>
<a id="trace-24036"></a>
<a id="trace-24118"></a>
- 260.30s–265.80s (×8), actor 5, squad 0 (trace 23934): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 260.00s, trace 23873. Next observer evidence: {'until': 261.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 23955}.
<a id="trace-24130"></a>
- 265.85s–265.85s (×1), actor 7, squad 0 (trace 24130): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 265.00s, trace 24044. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24146}.
<a id="trace-24131"></a>
- 265.85s–265.85s (×1), actor 7, squad 0 (trace 24131): MoveTactically. Knowledge: actor memory at 265.00s, trace 24044. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24146}.
<a id="trace-24132"></a>
- 265.85s–265.85s (×1), actor 7, squad 0 (trace 24132): . Knowledge: actor memory at 265.00s, trace 24044. Next observer evidence: {'until': 266.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24146}.
<a id="trace-24146"></a>
<a id="trace-24158"></a>
<a id="trace-24171"></a>
<a id="trace-24185"></a>
<a id="trace-24200"></a>
<a id="trace-24236"></a>
<a id="trace-24307"></a>
<a id="trace-24334"></a>
<a id="trace-24342"></a>
<a id="trace-24362"></a>
<a id="trace-24387"></a>
<a id="trace-24399"></a>
- 266.30s–273.30s (×12), actor 5, squad 0 (trace 24146): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 265.00s, trace 24042. Next observer evidence: {'until': 266.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24158}.
<a id="trace-2341"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (events line 2341): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-24408"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 24408): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 24408. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24412}.
<a id="trace-24409"></a>
- 273.70s–273.70s (×1), actor 5, squad 0 (trace 24409): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 273.70s, trace 24409. Next observer evidence: {'until': 273.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24412}.
<a id="trace-24412"></a>
<a id="trace-24428"></a>
<a id="trace-24436"></a>
<a id="trace-24503"></a>
<a id="trace-24516"></a>
<a id="trace-24527"></a>
<a id="trace-24536"></a>
<a id="trace-24548"></a>
<a id="trace-24578"></a>
- 273.80s–278.30s (×9), actor 5, squad 0 (trace 24412): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 273.70s, trace 24409. Next observer evidence: {'until': 274.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24428}.
<a id="trace-24592"></a>
- 278.70s–278.70s (×1), actor 7, squad 0 (trace 24592): received platoon directive. Knowledge: actor memory at 275.00s, trace 24444. Next observer evidence: {'until': 278.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24594}.
<a id="trace-24594"></a>
<a id="trace-24622"></a>
<a id="trace-24708"></a>
<a id="trace-24720"></a>
<a id="trace-24730"></a>
<a id="trace-24742"></a>
<a id="trace-24757"></a>
<a id="trace-24768"></a>
<a id="trace-24776"></a>
<a id="trace-24796"></a>
<a id="trace-24805"></a>
<a id="trace-24901"></a>
<a id="trace-24913"></a>
<a id="trace-24922"></a>
<a id="trace-24936"></a>
<a id="trace-24951"></a>
<a id="trace-24961"></a>
<a id="trace-24970"></a>
<a id="trace-24986"></a>
<a id="trace-24994"></a>
<a id="trace-25063"></a>
<a id="trace-25077"></a>
<a id="trace-25129"></a>
<a id="trace-25142"></a>
<a id="trace-25153"></a>
<a id="trace-25162"></a>
<a id="trace-25177"></a>
<a id="trace-25187"></a>
<a id="trace-25274"></a>
<a id="trace-25286"></a>
<a id="trace-25304"></a>
<a id="trace-25336"></a>
<a id="trace-25343"></a>
<a id="trace-25369"></a>
<a id="trace-25379"></a>
<a id="trace-25445"></a>
<a id="trace-25454"></a>
<a id="trace-25469"></a>
<a id="trace-25479"></a>
<a id="trace-25490"></a>
<a id="trace-25503"></a>
<a id="trace-25520"></a>
<a id="trace-25527"></a>
<a id="trace-25548"></a>
<a id="trace-25556"></a>
<a id="trace-25631"></a>
<a id="trace-25662"></a>
<a id="trace-25672"></a>
<a id="trace-25696"></a>
<a id="trace-25711"></a>
<a id="trace-25732"></a>
<a id="trace-25743"></a>
<a id="trace-25825"></a>
<a id="trace-25838"></a>
<a id="trace-25855"></a>
<a id="trace-25877"></a>
<a id="trace-25902"></a>
<a id="trace-25909"></a>
<a id="trace-25924"></a>
<a id="trace-25934"></a>
<a id="trace-26004"></a>
<a id="trace-26012"></a>
<a id="trace-26033"></a>
<a id="trace-26052"></a>
<a id="trace-26068"></a>
<a id="trace-26086"></a>
<a id="trace-26106"></a>
<a id="trace-26120"></a>
<a id="trace-26128"></a>
<a id="trace-26196"></a>
<a id="trace-26204"></a>
<a id="trace-26218"></a>
<a id="trace-26228"></a>
<a id="trace-26239"></a>
<a id="trace-26254"></a>
<a id="trace-26266"></a>
<a id="trace-26296"></a>
<a id="trace-26314"></a>
<a id="trace-26393"></a>
<a id="trace-26401"></a>
<a id="trace-26413"></a>
<a id="trace-26421"></a>
<a id="trace-26433"></a>
<a id="trace-26447"></a>
<a id="trace-26458"></a>
<a id="trace-26482"></a>
<a id="trace-26493"></a>
<a id="trace-26565"></a>
<a id="trace-26579"></a>
<a id="trace-26606"></a>
<a id="trace-26629"></a>
<a id="trace-26642"></a>
<a id="trace-26654"></a>
<a id="trace-26661"></a>
<a id="trace-26676"></a>
<a id="trace-26684"></a>
<a id="trace-26751"></a>
<a id="trace-26765"></a>
<a id="trace-26777"></a>
<a id="trace-26786"></a>
<a id="trace-26807"></a>
<a id="trace-26821"></a>
<a id="trace-26840"></a>
<a id="trace-26859"></a>
<a id="trace-26874"></a>
<a id="trace-26882"></a>
<a id="trace-26949"></a>
<a id="trace-26958"></a>
<a id="trace-26970"></a>
<a id="trace-26980"></a>
<a id="trace-26992"></a>
- 278.80s–342.30s (×111), actor 5, squad 0 (trace 24594): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 275.00s, trace 24442. Next observer evidence: {'until': 279.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 24622}.
<a id="trace-2845"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (events line 2845): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-27006"></a>
- 342.70s–342.70s (×1), actor 5, squad 0 (trace 27006): renew committed intent (75 s lifetime). Knowledge: actor memory at 342.70s, trace 27006. Next observer evidence: {'until': 343.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27021}.
<a id="trace-27021"></a>
<a id="trace-27034"></a>
<a id="trace-27050"></a>
<a id="trace-27068"></a>
<a id="trace-27156"></a>
<a id="trace-27168"></a>
<a id="trace-27176"></a>
<a id="trace-27201"></a>
<a id="trace-27211"></a>
<a id="trace-27235"></a>
<a id="trace-27244"></a>
<a id="trace-27319"></a>
<a id="trace-27328"></a>
<a id="trace-27371"></a>
<a id="trace-27383"></a>
<a id="trace-27396"></a>
<a id="trace-27414"></a>
<a id="trace-27427"></a>
<a id="trace-27436"></a>
<a id="trace-27504"></a>
<a id="trace-27512"></a>
<a id="trace-27526"></a>
<a id="trace-27543"></a>
<a id="trace-27557"></a>
<a id="trace-27610"></a>
<a id="trace-27624"></a>
<a id="trace-27633"></a>
- 343.30s–359.80s (×27), actor 5, squad 0 (trace 27021): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 342.70s, trace 27006. Next observer evidence: {'until': 343.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 27034}.

## Net delivery

228 matched order/radio deliveries; 408 explicitly recorded losses; 5 unmatched orders (not classified as lost).
Matched delay: mean 0.649s; maximum 5.850s. Message-level evidence is in the companion JSON.

## Leader picture versus received reports

- 5.00s leader 0, trace 885: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 1, trace 886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 2, trace 887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 3, trace 888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 4, trace 889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 5, trace 890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 6, trace 891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 7, trace 892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 8, trace 893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 9, trace 894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 10, trace 895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 11, trace 896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 32, trace 897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 33, trace 898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 34, trace 899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 35, trace 900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 36, trace 901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 37, trace 902: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 38, trace 903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 39, trace 904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 40, trace 905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 41, trace 906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 42, trace 907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 5.00s leader 43, trace 908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 0, trace 1249: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 1250: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 2, trace 1251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 3, trace 1252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 1253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 1254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 1255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 1256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 8, trace 1257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 9, trace 1258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 10, trace 1259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 11, trace 1260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 1261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 1262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 34, trace 1263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 35, trace 1264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 1265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 1266: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 1267: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 1268: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 40, trace 1269: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 41, trace 1270: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 42, trace 1271: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 43, trace 1272: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 11.25s leader 5, trace 1381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 2129: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 2130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 2131: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 2132: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 2133: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 2134: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 2135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 2136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 2137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 2138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 10, trace 2139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 11, trace 2140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 2141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 2142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 2143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 2144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 2145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 2146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 2147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 2148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 2149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 2150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 42, trace 2151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 43, trace 2152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 2742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 2743: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 2744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 2745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 2746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 2747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 2748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 2749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 2750: estimate 2.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 2751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 10, trace 2752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 11, trace 2753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 2754: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 2755: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 2756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 2757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 2758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 2759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 2760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 2761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 2762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 2763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 42, trace 2764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 43, trace 2765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 4631: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 4632: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 4633: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 4634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 4635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 4636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 4637: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 4638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 8, trace 4639: estimate 13.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 4640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 10, trace 4641: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 11, trace 4642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 4643: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 4644: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 4645: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 4646: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 4647: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 4648: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 4649: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 4650: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 4651: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 4652: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 42, trace 4653: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 43, trace 4654: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 0, trace 5161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 5162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 5163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 5164: estimate 14.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 5165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 5166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 5167: estimate 13.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 5168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 8, trace 5169: estimate 14.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 5170: estimate 13.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 10, trace 5171: estimate 12.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 11, trace 5172: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 5173: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 5174: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 5175: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 5176: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 5177: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 5178: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 5179: estimate 5.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 5180: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 5181: estimate 5.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 5182: estimate 5.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 42, trace 5183: estimate 5.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 43, trace 5184: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 0, trace 5862: estimate 15.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 5863: estimate 15.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 5864: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 5865: estimate 15.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 5866: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 5867: estimate 14.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 5868: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 5869: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 8, trace 5870: estimate 15.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 5871: estimate 13.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 10, trace 5872: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 11, trace 5873: estimate 15.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 5874: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 5875: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 5876: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 5877: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 5878: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 5879: estimate 7.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 5880: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 5881: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 5882: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 5883: estimate 7.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 42, trace 5884: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 43, trace 5885: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 6714: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 38.85s leader 5, trace 6715: estimate 14.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 0, trace 6799: estimate 15.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 6800: estimate 14.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 6801: estimate 14.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 6802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 6803: estimate 14.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 6804: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 6805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 8, trace 6806: estimate 15.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 6807: estimate 13.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 10, trace 6808: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 11, trace 6809: estimate 15.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 6810: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 6811: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 6812: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 6813: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 6814: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 6815: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 6816: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 6817: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 6818: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 6819: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 42, trace 6820: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 43, trace 6821: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 0, trace 10087: estimate 15.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 10088: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 10089: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 10090: estimate 15.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 10091: estimate 14.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 10092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 8, trace 10093: estimate 14.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 10094: estimate 13.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 10, trace 10095: estimate 13.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 11, trace 10096: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 10097: estimate 7.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 10098: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 10099: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 10100: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 10101: estimate 6.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 10102: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 10103: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 10104: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 10105: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 10106: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 42, trace 10107: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 43, trace 10108: estimate 7.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 0, trace 10431: estimate 15.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 10432: estimate 14.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 10433: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 10434: estimate 15.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 10435: estimate 15.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 10436: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 8, trace 10437: estimate 15.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 10438: estimate 13.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 10, trace 10439: estimate 12.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 11, trace 10440: estimate 15.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 10441: estimate 6.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 10442: estimate 6.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 10443: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 10444: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 10445: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 10446: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 10447: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 10448: estimate 7.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 10449: estimate 7.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 41, trace 10450: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 42, trace 10451: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 43, trace 10452: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 0, trace 10705: estimate 15.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10706: estimate 14.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10708: estimate 15.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10709: estimate 15.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 8, trace 10711: estimate 14.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10712: estimate 13.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 10, trace 10713: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 11, trace 10714: estimate 15.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10715: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10716: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10717: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10718: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10719: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10720: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10721: estimate 6.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10722: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10723: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 41, trace 10724: estimate 7.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 42, trace 10725: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 43, trace 10726: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 0, trace 11061: estimate 15.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 11062: estimate 13.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 11063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 11064: estimate 14.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 11065: estimate 14.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 11066: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 8, trace 11067: estimate 15.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 11068: estimate 12.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 10, trace 11069: estimate 12.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 11070: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 11071: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 11072: estimate 7.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 11073: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 11074: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 11075: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 11076: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 11077: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 11078: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 41, trace 11079: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 42, trace 11080: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 43, trace 11081: estimate 7.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 11979: estimate 13.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 11980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 11981: estimate 15.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 11982: estimate 14.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 11983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 8, trace 11984: estimate 14.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 11985: estimate 12.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 10, trace 11986: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 11987: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 11988: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 11989: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 11990: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 11991: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 11992: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 11993: estimate 6.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 11994: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 11995: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 41, trace 11996: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 42, trace 11997: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 43, trace 11998: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 1, trace 12253: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 12254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 12255: estimate 15.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 12256: estimate 14.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 12257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 8, trace 12258: estimate 14.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 12259: estimate 12.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 10, trace 12260: estimate 11.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 12261: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 12262: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 12263: estimate 6.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 12264: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 12265: estimate 5.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 12266: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 12267: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 12268: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 12269: estimate 5.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 41, trace 12270: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 42, trace 12271: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 43, trace 12272: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 1, trace 12811: estimate 13.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 12812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 12813: estimate 15.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 12814: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 7, trace 12815: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 8, trace 12816: estimate 14.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 12817: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 10, trace 12818: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 12819: estimate 5.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 12820: estimate 4.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 12821: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 12822: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 12823: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 12824: estimate 5.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 12825: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 12826: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 12827: estimate 5.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 41, trace 12828: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 42, trace 12829: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 43, trace 12830: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 1, trace 13066: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 13067: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 13068: estimate 14.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 13069: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 7, trace 13070: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 8, trace 13071: estimate 14.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 13072: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 10, trace 13073: estimate 11.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 13074: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 13075: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 13076: estimate 6.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 13077: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 13078: estimate 4.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 13079: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 13080: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 13081: estimate 6.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 13082: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 41, trace 13083: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 42, trace 13084: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 43, trace 13085: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.30s leader 5, trace 13145: estimate 14.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 13435: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 13436: estimate 14.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 13437: estimate 13.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 7, trace 13438: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 8, trace 13439: estimate 13.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 13440: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 10, trace 13441: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 13442: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 13443: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 13444: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 13445: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 13446: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 13447: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 13448: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 13449: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 13450: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 41, trace 13451: estimate 7.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 42, trace 13452: estimate 5.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 43, trace 13453: estimate 6.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 13969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 13970: estimate 14.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 13971: estimate 13.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 7, trace 13972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 8, trace 13973: estimate 13.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 13974: estimate 11.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 10, trace 13975: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 13976: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 13977: estimate 5.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 13978: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 13979: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 13980: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 13981: estimate 5.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 13982: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 13983: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 13984: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 41, trace 13985: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 42, trace 13986: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 43, trace 13987: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 14198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 14199: estimate 14.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 14200: estimate 13.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 7, trace 14201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 8, trace 14202: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 14203: estimate 11.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 10, trace 14204: estimate 10.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 14205: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 14206: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 14207: estimate 7.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 14208: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 14209: estimate 5.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 14210: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 14211: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 14212: estimate 7.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 14213: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 41, trace 14214: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 42, trace 14215: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 43, trace 14216: estimate 6.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 14670: estimate 13.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 14671: estimate 13.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 7, trace 14672: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 8, trace 14673: estimate 13.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 14674: estimate 11.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 10, trace 14675: estimate 10.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 14676: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 14677: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 14678: estimate 8.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 14679: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 14680: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 14681: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 14682: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 14683: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 14684: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 41, trace 14685: estimate 8.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 42, trace 14686: estimate 5.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 43, trace 14687: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 15044: estimate 13.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 15045: estimate 12.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 7, trace 15046: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 8, trace 15047: estimate 12.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 15048: estimate 11.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 10, trace 15049: estimate 10.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 15050: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 15051: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 15052: estimate 7.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 15053: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 15054: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 15055: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 15056: estimate 6.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 15057: estimate 7.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 15058: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 41, trace 15059: estimate 8.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 42, trace 15060: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 43, trace 15061: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 15259: estimate 13.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 15260: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 7, trace 15261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 8, trace 15262: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 15263: estimate 10.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 10, trace 15264: estimate 10.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 15265: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 15266: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 15267: estimate 7.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 15268: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 15269: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 15270: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 15271: estimate 6.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 15272: estimate 7.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 15273: estimate 6.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 41, trace 15274: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 42, trace 15275: estimate 4.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 43, trace 15276: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 15599: estimate 13.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 15600: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 7, trace 15601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 8, trace 15602: estimate 12.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 15603: estimate 10.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 10, trace 15604: estimate 9.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 15605: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 15606: estimate 5.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 15607: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 15608: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 15609: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 15610: estimate 6.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 15611: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 15612: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 15613: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 41, trace 15614: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 42, trace 15615: estimate 4.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 43, trace 15616: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 15852: estimate 12.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 15853: estimate 12.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 7, trace 15854: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 8, trace 15855: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 15856: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 10, trace 15857: estimate 9.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 15858: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 15859: estimate 5.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 15860: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 15861: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 15862: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 15863: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 15864: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 15865: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 15866: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 41, trace 15867: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 42, trace 15868: estimate 4.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 43, trace 15869: estimate 5.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 15988: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 15989: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 121.80s leader 5, trace 15990: estimate 12.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 16158: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 16159: estimate 11.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 7, trace 16160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 8, trace 16161: estimate 11.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 16162: estimate 10.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 10, trace 16163: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 16164: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 16165: estimate 5.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 16166: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 16167: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 16168: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 16169: estimate 6.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 16170: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 16171: estimate 7.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 16172: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 41, trace 16173: estimate 6.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 42, trace 16174: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 43, trace 16175: estimate 5.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 16401: estimate 12.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 16402: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 7, trace 16403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 8, trace 16404: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 16405: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 10, trace 16406: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 16407: estimate 5.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 16408: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 16409: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 16410: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 16411: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 16412: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 16413: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 16414: estimate 5.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 16415: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 41, trace 16416: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 42, trace 16417: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 43, trace 16418: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 16758: estimate 10.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 16759: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 7, trace 16760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 8, trace 16761: estimate 10.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 16762: estimate 1.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 10, trace 16763: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 16764: estimate 5.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 16765: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 16766: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 16767: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 16768: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 16769: estimate 5.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 16770: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 16771: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 16772: estimate 5.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 41, trace 16773: estimate 5.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 42, trace 16774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 43, trace 16775: estimate 5.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 17002: estimate 10.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 17003: estimate 10.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 7, trace 17004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 8, trace 17005: estimate 10.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 17006: estimate 1.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 10, trace 17007: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 17008: estimate 5.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 17009: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 17010: estimate 4.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 17011: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 17012: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 17013: estimate 5.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 17014: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 17015: estimate 4.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 17016: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 41, trace 17017: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 42, trace 17018: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 43, trace 17019: estimate 5.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 17219: estimate 10.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 17220: estimate 10.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 7, trace 17221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 8, trace 17222: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 17223: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 10, trace 17224: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 17225: estimate 4.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 17226: estimate 3.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 17227: estimate 3.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 17228: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 17229: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 17230: estimate 5.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 17231: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 17232: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 17233: estimate 5.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 41, trace 17234: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 42, trace 17235: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 43, trace 17236: estimate 4.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 17579: estimate 11.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 17580: estimate 9.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 7, trace 17581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 8, trace 17582: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 17583: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 10, trace 17584: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 17585: estimate 4.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 17586: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 17587: estimate 3.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 17588: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 17589: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 17590: estimate 5.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 17591: estimate 5.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 17592: estimate 3.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 17593: estimate 5.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 41, trace 17594: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 42, trace 17595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 43, trace 17596: estimate 4.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 17887: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 17888: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 7, trace 17889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 8, trace 17890: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 17891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 10, trace 17892: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 17893: estimate 4.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 17894: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 17895: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 17896: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 17897: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 17898: estimate 5.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 17899: estimate 5.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 17900: estimate 3.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 17901: estimate 5.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 41, trace 17902: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 42, trace 17903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 43, trace 17904: estimate 4.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 18185: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 18186: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 7, trace 18187: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 8, trace 18188: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 18189: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 10, trace 18190: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 18191: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 18192: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 18193: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 18194: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 18195: estimate 1.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 18196: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 18197: estimate 4.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 18198: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 18199: estimate 4.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 41, trace 18200: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 42, trace 18201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 43, trace 18202: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 18346: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 163.25s leader 5, trace 18347: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 18481: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 18482: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 7, trace 18483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 8, trace 18484: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 18485: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 10, trace 18486: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 18487: estimate 4.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 18488: estimate 1.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 18489: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 18490: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 18491: estimate 1.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 18492: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 18493: estimate 4.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 18494: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 18495: estimate 4.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 41, trace 18496: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 42, trace 18497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 43, trace 18498: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 18756: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 18757: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 7, trace 18758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 8, trace 18759: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 18760: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 10, trace 18761: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 18762: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 18763: estimate 1.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 18764: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 18765: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 18766: estimate 1.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 18767: estimate 4.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 18768: estimate 4.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 18769: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 18770: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 41, trace 18771: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 42, trace 18772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 43, trace 18773: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 18995: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 18996: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 7, trace 18997: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 8, trace 18998: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 18999: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 10, trace 19000: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 19001: estimate 4.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 19002: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 19003: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 19004: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 19005: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 19006: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 19007: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 19008: estimate 1.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 19009: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 41, trace 19010: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 42, trace 19011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 43, trace 19012: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 19206: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 19207: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 7, trace 19208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 10, trace 19209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 19210: estimate 4.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 19211: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 19212: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 19213: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 19214: estimate 3.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 19215: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 19216: estimate 4.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 19217: estimate 1.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 19218: estimate 4.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 41, trace 19219: estimate 3.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 42, trace 19220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 43, trace 19221: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 19481: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 19482: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 7, trace 19483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 10, trace 19484: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 19485: estimate 4.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 19486: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 19487: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 19488: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 19489: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 19490: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 19491: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 19492: estimate 1.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 19493: estimate 4.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 41, trace 19494: estimate 3.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 42, trace 19495: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 43, trace 19496: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 19679: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 19680: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 7, trace 19681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 10, trace 19682: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 19683: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 19684: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 19685: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 19686: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 19687: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 19688: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 19689: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 19690: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 19691: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 41, trace 19692: estimate 2.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 42, trace 19693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 43, trace 19694: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.85s leader 5, trace 19891: estimate 1.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 20149: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 20150: estimate 1.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 7, trace 20151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 10, trace 20152: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 20153: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 20154: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 20155: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 20156: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 20157: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 20158: estimate 3.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 20159: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 20160: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 20161: estimate 4.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 41, trace 20162: estimate 2.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 42, trace 20163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 43, trace 20164: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 21667: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 21668: estimate 1.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 7, trace 21669: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 21670: estimate 3.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 21671: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 21672: estimate 2.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 21673: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 21674: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 21675: estimate 3.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 21676: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 21677: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 21678: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 41, trace 21679: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 42, trace 21680: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 43, trace 21681: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 21851: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 21852: estimate 1.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 7, trace 21853: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 21854: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 21855: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 21856: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 21857: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 21858: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 21859: estimate 3.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 21860: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 21861: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 21862: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 41, trace 21863: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 42, trace 21864: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 43, trace 21865: estimate 3.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 22017: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 22018: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 7, trace 22019: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 22020: estimate 3.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 22021: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 22022: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 22023: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 22024: estimate 2.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 22025: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 22026: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 22027: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 22028: estimate 3.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 41, trace 22029: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 42, trace 22030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 43, trace 22031: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 22188: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 22189: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 7, trace 22190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 22191: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 22192: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 22193: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 22194: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 22195: estimate 2.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 22196: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 22197: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 22198: estimate 1.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 22199: estimate 3.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 41, trace 22200: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 42, trace 22201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 43, trace 22202: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 22382: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 22383: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 7, trace 22384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 22385: estimate 3.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 22386: estimate 2.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 22387: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 22388: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 22389: estimate 2.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 22390: estimate 3.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 22391: estimate 3.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 22392: estimate 1.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 22393: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 41, trace 22394: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 42, trace 22395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 43, trace 22396: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 22551: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 22552: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 7, trace 22553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 22554: estimate 3.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 22555: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 22556: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 22557: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 22558: estimate 2.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 22559: estimate 3.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 22560: estimate 3.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 22561: estimate 1.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 22562: estimate 3.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 41, trace 22563: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 42, trace 22564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 43, trace 22565: estimate 3.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 22740: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 22741: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 7, trace 22742: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 22743: estimate 3.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 22744: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 22745: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 22746: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 22747: estimate 2.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 22748: estimate 3.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 22749: estimate 3.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 22750: estimate 1.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 22751: estimate 3.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 41, trace 22752: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 42, trace 22753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 43, trace 22754: estimate 3.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 22937: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 22938: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 7, trace 22939: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 22940: estimate 3.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 22941: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 22942: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 22943: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 22944: estimate 2.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 22945: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 22946: estimate 3.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 22947: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 22948: estimate 3.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 41, trace 22949: estimate 2.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 42, trace 22950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 43, trace 22951: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 23128: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 23129: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 7, trace 23130: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 23131: estimate 3.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 23132: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 23133: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 23134: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 23135: estimate 2.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 23136: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 23137: estimate 3.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 23138: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 23139: estimate 3.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 41, trace 23140: estimate 2.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 42, trace 23141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 43, trace 23142: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 23300: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 23301: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 7, trace 23302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 23303: estimate 3.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 23304: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 23305: estimate 2.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 23306: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 23307: estimate 2.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 23308: estimate 3.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 23309: estimate 3.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 23310: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 23311: estimate 3.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 41, trace 23312: estimate 2.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 42, trace 23313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 43, trace 23314: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 23484: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 23485: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 7, trace 23486: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 23487: estimate 3.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 23488: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 23489: estimate 2.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 23490: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 23491: estimate 2.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 23492: estimate 3.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 23493: estimate 3.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 23494: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 23495: estimate 3.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 41, trace 23496: estimate 2.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 42, trace 23497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 43, trace 23498: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 23679: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 23680: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 7, trace 23681: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 23682: estimate 3.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 23683: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 23684: estimate 1.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 23685: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 23686: estimate 1.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 23687: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 23688: estimate 3.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 23689: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 23690: estimate 3.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 41, trace 23691: estimate 1.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 42, trace 23692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 43, trace 23693: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 259.90s leader 5, trace 23871: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 23873: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 23874: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 7, trace 23875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 23876: estimate 3.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 23877: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 23878: estimate 1.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 23879: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 23880: estimate 1.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 23881: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 23882: estimate 3.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 23883: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 23884: estimate 3.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 41, trace 23885: estimate 1.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 42, trace 23886: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 43, trace 23887: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 24042: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 24043: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 7, trace 24044: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 24045: estimate 3.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 24046: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 24047: estimate 1.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 24048: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 24049: estimate 1.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 24050: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 24051: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 24052: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 24053: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 41, trace 24054: estimate 1.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 42, trace 24055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 43, trace 24056: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 24245: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 24246: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 7, trace 24247: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 24248: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 24249: estimate 1.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 24250: estimate 1.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 24251: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 24252: estimate 1.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 24253: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 24254: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 24255: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 24256: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 41, trace 24257: estimate 1.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 42, trace 24258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 43, trace 24259: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 24408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 273.70s leader 5, trace 24409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 24442: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 24443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 7, trace 24444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 24445: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 24446: estimate 1.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 24447: estimate 1.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 24448: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 24449: estimate 1.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 24450: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 24451: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 24452: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 24453: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 41, trace 24454: estimate 1.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 42, trace 24455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 43, trace 24456: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 24634: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 24635: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 7, trace 24636: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 24637: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 24638: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 24639: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 24640: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 24641: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 24642: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 24643: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 24644: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 24645: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 41, trace 24646: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 42, trace 24647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 43, trace 24648: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 24811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 24812: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 7, trace 24813: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 24814: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 24815: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 24816: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 24817: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 24818: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 24819: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 24820: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 24821: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 24822: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 41, trace 24823: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 42, trace 24824: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 43, trace 24825: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 25001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 25002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 7, trace 25003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 25004: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 25005: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 25006: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 25007: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 25008: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 25009: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 25010: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 25011: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 25012: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 41, trace 25013: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 42, trace 25014: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 43, trace 25015: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 25194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 25195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 7, trace 25196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 25197: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 25198: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 25199: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 25200: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 25201: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 25202: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 25203: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 25204: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 25205: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 41, trace 25206: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 42, trace 25207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 43, trace 25208: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 25384: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 25385: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 7, trace 25386: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 25387: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 25388: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 25389: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 25390: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 25391: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 25392: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 25393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 25394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 25395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 41, trace 25396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 42, trace 25397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 43, trace 25398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 25570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 25571: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 7, trace 25572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 25573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 25574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 25575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 25576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 25577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 25578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 25579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 25580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 25581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 41, trace 25582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 42, trace 25583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 43, trace 25584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 25749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 25750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 7, trace 25751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 25752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 25753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 25754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 25755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 25756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 25757: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 25758: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 25759: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 25760: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 41, trace 25761: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 42, trace 25762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 43, trace 25763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 25941: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 25942: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 7, trace 25943: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 25944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 25945: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 25946: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 25947: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 25948: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 25949: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 25950: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 25951: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 25952: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 41, trace 25953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 42, trace 25954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 43, trace 25955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 26135: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 26136: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 7, trace 26137: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 26138: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 26139: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 26140: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 26141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 26142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 26143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 26144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 26145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 26146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 41, trace 26147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 42, trace 26148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 43, trace 26149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 26320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 26321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 7, trace 26322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 26323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 26324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 26325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 26326: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 26327: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 26328: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 26329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 26330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 26331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 41, trace 26332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 42, trace 26333: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 43, trace 26334: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 26498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 26499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 7, trace 26500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 26501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 26502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 26503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 26504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 26505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 26506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 26507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 26508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 26509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 41, trace 26510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 42, trace 26511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 43, trace 26512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 26690: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 26691: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 7, trace 26692: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 26693: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 26694: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 26695: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 26696: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 26697: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 26698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 26699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 26700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 26701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 41, trace 26702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 42, trace 26703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 43, trace 26704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 26887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 26888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 7, trace 26889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 26890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 26891: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 26892: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 26893: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 26894: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 26895: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 26896: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 26897: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 26898: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 41, trace 26899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 42, trace 26900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 43, trace 26901: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 342.70s leader 5, trace 27006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 27074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 27075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 7, trace 27076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 27077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 27078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 27079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 27080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 27081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 27082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 27083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 27084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 27085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 41, trace 27086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 42, trace 27087: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 43, trace 27088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 27251: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 27252: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 7, trace 27253: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 27254: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 27255: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 27256: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 27257: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 27258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 27259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 27260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 27261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 27262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 41, trace 27263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 42, trace 27264: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 43, trace 27265: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 27443: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 27444: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 7, trace 27445: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 27446: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 27447: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 27448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 27449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 27450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 27451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 27452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 27453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 27454: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 41, trace 27455: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 42, trace 27456: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 43, trace 27457: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 27638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 27639: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 7, trace 27640: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 27641: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 27642: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 27643: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 27644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 27645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 27646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 27647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 27648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 27649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 41, trace 27650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 42, trace 27651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 43, trace 27652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Soren killed in action
- 1: Ash incapacitated
- 1: Ellis incapacitated
- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Tern killed in action
- 1: Cole incapacitated
- 1: Bren killed in action
- 1: Dane incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
