# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/26/108/good-ember/battle-108-1789674252623723330`

## Battle summary

**Ember** · 360 s · 159 shots.

### Turning points

- 15.5s, squad 4: contact (events line 169). First recorded contact.
- 19.9s, squad 1: withdrawal ([trace 4071](#trace-4071)). 83.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.2s, squad 0: help call ([trace 8669](#trace-8669)). No completion observed before termination.
- 44.2s, squad 0: withdrawal ([trace 9492](#trace-9492)). 75.9s, squad 0: took cover and returned fire.
- 66.1s, squad 0: help call ([trace 10996](#trace-10996)). No completion observed before termination.
- 79.2s, squad 0: withdrawal ([trace 11880](#trace-11880)). 99.3s, squad 0: contact broken or rally reached: Occupy and report strength.

### Squads

- **0** — FightHere; chose prepared a base of fire, broke contact and 2 further drill types; withdrew; 9 shots, 5/8 lost.
- **1** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; withdrew; 8 shots, 1/2 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 120 shots, 0/8 lost.
- **5** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 22 shots, 1/2 lost.

### Decisions and attribution

At 19.9s, squad 1 chose broke contact ([trace 4071](#trace-4071)), followed by 0 shots and 1 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 15](#trace-15)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 0.1s, squad 1 chose advanced tactically ([trace 332](#trace-332)), followed by 0 shots and 0 own casualties; leader picture unavailable. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 12.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1382](#trace-1382)). Following evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.201755683865684, 'next_transition': 1905}.
- 26.6s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 5899](#trace-5899)). Following evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.305258731935759, 'next_transition': 5955}.

### Communication

158 matched deliveries (mean 0.42s, max 5.10s); 506 explicit drops; 0 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 15.50s, squad 4, contact, evidence events line 169: First recorded contact; .
- 19.90s, squad 1, withdrawal, evidence 4071: BreakContact: believed ratio at least two without superiority; 83.8s, squad 1: contact broken or rally reached: Occupy and report strength.
- 38.20s, squad 0, help call, evidence 8669: NeedSupport; No completion observed before termination.
- 44.15s, squad 0, withdrawal, evidence 9492: BreakContact: believed ratio at least two without superiority; 75.9s, squad 0: took cover and returned fire.
- 66.10s, squad 0, help call, evidence 10996: NeedSupport; No completion observed before termination.
- 79.25s, squad 0, withdrawal, evidence 11880: BreakContact: believed ratio at least two without superiority; 99.3s, squad 0: contact broken or rally reached: Occupy and report strength.

## Appendix: command timeline

<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424633102990555, 'next_transition': 935}.
<a id="trace-16"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 16): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424633102990555, 'next_transition': 935}.
<a id="trace-17"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 17): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 7.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 16.424633102990555, 'next_transition': 935}.
<a id="trace-332"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 332): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1133}.
<a id="trace-333"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 333): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1133}.
<a id="trace-334"></a>
- 0.05s–0.05s (×1), actor 8, squad 1 (trace 334): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 10.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 23.004754045303173, 'next_transition': 1133}.
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
<a id="trace-1276"></a>
<a id="trace-1278"></a>
<a id="trace-1300"></a>
<a id="trace-1302"></a>
<a id="trace-1322"></a>
<a id="trace-1324"></a>
<a id="trace-1358"></a>
<a id="trace-1360"></a>
<a id="trace-1377"></a>
<a id="trace-1379"></a>
<a id="trace-1689"></a>
<a id="trace-1691"></a>
<a id="trace-1714"></a>
<a id="trace-1716"></a>
<a id="trace-1752"></a>
<a id="trace-1754"></a>
<a id="trace-1774"></a>
<a id="trace-1776"></a>
<a id="trace-1860"></a>
<a id="trace-1862"></a>
<a id="trace-1902"></a>
<a id="trace-1904"></a>
<a id="trace-2700"></a>
<a id="trace-2702"></a>
<a id="trace-3120"></a>
<a id="trace-3122"></a>
<a id="trace-3170"></a>
<a id="trace-3172"></a>
<a id="trace-3230"></a>
<a id="trace-3232"></a>
<a id="trace-3272"></a>
<a id="trace-3274"></a>
<a id="trace-3317"></a>
<a id="trace-3319"></a>
<a id="trace-3699"></a>
<a id="trace-3701"></a>
<a id="trace-4066"></a>
<a id="trace-4068"></a>
<a id="trace-4329"></a>
<a id="trace-4331"></a>
<a id="trace-4383"></a>
<a id="trace-4385"></a>
<a id="trace-4420"></a>
<a id="trace-4422"></a>
<a id="trace-4462"></a>
<a id="trace-4464"></a>
<a id="trace-4537"></a>
<a id="trace-4539"></a>
<a id="trace-4561"></a>
<a id="trace-4563"></a>
<a id="trace-4585"></a>
<a id="trace-4587"></a>
<a id="trace-4959"></a>
<a id="trace-4961"></a>
<a id="trace-4981"></a>
<a id="trace-4983"></a>
<a id="trace-5006"></a>
<a id="trace-5008"></a>
<a id="trace-5457"></a>
<a id="trace-5459"></a>
<a id="trace-5475"></a>
<a id="trace-5477"></a>
<a id="trace-5844"></a>
<a id="trace-5846"></a>
<a id="trace-5913"></a>
<a id="trace-5915"></a>
<a id="trace-5959"></a>
<a id="trace-5961"></a>
<a id="trace-5987"></a>
<a id="trace-5989"></a>
<a id="trace-6018"></a>
<a id="trace-6020"></a>
<a id="trace-6044"></a>
<a id="trace-6046"></a>
<a id="trace-6064"></a>
<a id="trace-6066"></a>
<a id="trace-6078"></a>
<a id="trace-6080"></a>
<a id="trace-6158"></a>
<a id="trace-6160"></a>
<a id="trace-6170"></a>
<a id="trace-6172"></a>
<a id="trace-6187"></a>
<a id="trace-6189"></a>
<a id="trace-6200"></a>
<a id="trace-6202"></a>
<a id="trace-6223"></a>
<a id="trace-6225"></a>
<a id="trace-6236"></a>
<a id="trace-6238"></a>
<a id="trace-6256"></a>
<a id="trace-6258"></a>
<a id="trace-6273"></a>
<a id="trace-6275"></a>
<a id="trace-6291"></a>
<a id="trace-6293"></a>
<a id="trace-8288"></a>
<a id="trace-8290"></a>
<a id="trace-8377"></a>
<a id="trace-8379"></a>
<a id="trace-8403"></a>
<a id="trace-8405"></a>
<a id="trace-8431"></a>
<a id="trace-8433"></a>
<a id="trace-8454"></a>
<a id="trace-8456"></a>
<a id="trace-8486"></a>
<a id="trace-8488"></a>
<a id="trace-8499"></a>
<a id="trace-8501"></a>
<a id="trace-8682"></a>
<a id="trace-8684"></a>
<a id="trace-8891"></a>
<a id="trace-8893"></a>
<a id="trace-8920"></a>
<a id="trace-8922"></a>
<a id="trace-8942"></a>
<a id="trace-8944"></a>
<a id="trace-9044"></a>
<a id="trace-9046"></a>
<a id="trace-9069"></a>
<a id="trace-9071"></a>
<a id="trace-9100"></a>
<a id="trace-9102"></a>
<a id="trace-9373"></a>
<a id="trace-9375"></a>
<a id="trace-9405"></a>
<a id="trace-9407"></a>
<a id="trace-9429"></a>
<a id="trace-9431"></a>
<a id="trace-9450"></a>
<a id="trace-9452"></a>
<a id="trace-9471"></a>
<a id="trace-9473"></a>
<a id="trace-9600"></a>
<a id="trace-9602"></a>
<a id="trace-9619"></a>
<a id="trace-9621"></a>
<a id="trace-9701"></a>
<a id="trace-9703"></a>
<a id="trace-9730"></a>
<a id="trace-9732"></a>
<a id="trace-9755"></a>
<a id="trace-9757"></a>
<a id="trace-9772"></a>
<a id="trace-9774"></a>
<a id="trace-9793"></a>
<a id="trace-9795"></a>
<a id="trace-9821"></a>
<a id="trace-9823"></a>
<a id="trace-9847"></a>
<a id="trace-9849"></a>
<a id="trace-9865"></a>
<a id="trace-9867"></a>
<a id="trace-9885"></a>
<a id="trace-9887"></a>
<a id="trace-9896"></a>
<a id="trace-9898"></a>
<a id="trace-9973"></a>
<a id="trace-9975"></a>
<a id="trace-9986"></a>
<a id="trace-9988"></a>
<a id="trace-10009"></a>
<a id="trace-10011"></a>
<a id="trace-10022"></a>
<a id="trace-10024"></a>
<a id="trace-10042"></a>
<a id="trace-10044"></a>
<a id="trace-10062"></a>
<a id="trace-10064"></a>
<a id="trace-10084"></a>
<a id="trace-10086"></a>
<a id="trace-10099"></a>
<a id="trace-10101"></a>
<a id="trace-10121"></a>
<a id="trace-10123"></a>
<a id="trace-10132"></a>
<a id="trace-10134"></a>
<a id="trace-10209"></a>
<a id="trace-10211"></a>
<a id="trace-10230"></a>
<a id="trace-10232"></a>
<a id="trace-10265"></a>
<a id="trace-10267"></a>
<a id="trace-10292"></a>
<a id="trace-10294"></a>
<a id="trace-10316"></a>
<a id="trace-10318"></a>
<a id="trace-10336"></a>
<a id="trace-10338"></a>
<a id="trace-10373"></a>
<a id="trace-10375"></a>
<a id="trace-10415"></a>
<a id="trace-10417"></a>
<a id="trace-10448"></a>
<a id="trace-10450"></a>
<a id="trace-10475"></a>
<a id="trace-10477"></a>
<a id="trace-10583"></a>
<a id="trace-10585"></a>
<a id="trace-10626"></a>
<a id="trace-10628"></a>
<a id="trace-10667"></a>
<a id="trace-10669"></a>
<a id="trace-10711"></a>
<a id="trace-10713"></a>
<a id="trace-10750"></a>
<a id="trace-10752"></a>
<a id="trace-10775"></a>
<a id="trace-10777"></a>
<a id="trace-10809"></a>
<a id="trace-10811"></a>
<a id="trace-10831"></a>
<a id="trace-10833"></a>
<a id="trace-10861"></a>
<a id="trace-10863"></a>
<a id="trace-10873"></a>
<a id="trace-10875"></a>
<a id="trace-10956"></a>
<a id="trace-10958"></a>
<a id="trace-11019"></a>
<a id="trace-11021"></a>
<a id="trace-11057"></a>
<a id="trace-11059"></a>
<a id="trace-11096"></a>
<a id="trace-11098"></a>
<a id="trace-11141"></a>
<a id="trace-11143"></a>
<a id="trace-11189"></a>
<a id="trace-11191"></a>
<a id="trace-11205"></a>
<a id="trace-11207"></a>
<a id="trace-11243"></a>
<a id="trace-11245"></a>
<a id="trace-11272"></a>
<a id="trace-11274"></a>
<a id="trace-11346"></a>
<a id="trace-11348"></a>
<a id="trace-11371"></a>
<a id="trace-11373"></a>
<a id="trace-11407"></a>
<a id="trace-11409"></a>
<a id="trace-11435"></a>
<a id="trace-11437"></a>
<a id="trace-11475"></a>
<a id="trace-11477"></a>
<a id="trace-11524"></a>
<a id="trace-11526"></a>
<a id="trace-11576"></a>
<a id="trace-11578"></a>
<a id="trace-11601"></a>
<a id="trace-11603"></a>
<a id="trace-11633"></a>
<a id="trace-11635"></a>
<a id="trace-11654"></a>
<a id="trace-11656"></a>
<a id="trace-11726"></a>
<a id="trace-11728"></a>
<a id="trace-11738"></a>
<a id="trace-11740"></a>
<a id="trace-11775"></a>
<a id="trace-11777"></a>
<a id="trace-11793"></a>
<a id="trace-11795"></a>
<a id="trace-11813"></a>
<a id="trace-11815"></a>
<a id="trace-11829"></a>
<a id="trace-11831"></a>
<a id="trace-11850"></a>
<a id="trace-11852"></a>
<a id="trace-11862"></a>
<a id="trace-11864"></a>
<a id="trace-11875"></a>
<a id="trace-11877"></a>
<a id="trace-11899"></a>
<a id="trace-11901"></a>
<a id="trace-11975"></a>
<a id="trace-11977"></a>
<a id="trace-11986"></a>
<a id="trace-11988"></a>
<a id="trace-12012"></a>
<a id="trace-12014"></a>
<a id="trace-12024"></a>
<a id="trace-12026"></a>
<a id="trace-12046"></a>
<a id="trace-12048"></a>
<a id="trace-12060"></a>
<a id="trace-12062"></a>
<a id="trace-12076"></a>
<a id="trace-12078"></a>
<a id="trace-12087"></a>
<a id="trace-12089"></a>
<a id="trace-12110"></a>
<a id="trace-12112"></a>
<a id="trace-12126"></a>
<a id="trace-12128"></a>
<a id="trace-12203"></a>
<a id="trace-12205"></a>
<a id="trace-12213"></a>
<a id="trace-12215"></a>
<a id="trace-12229"></a>
<a id="trace-12231"></a>
<a id="trace-12240"></a>
<a id="trace-12242"></a>
<a id="trace-12262"></a>
<a id="trace-12264"></a>
<a id="trace-12276"></a>
<a id="trace-12278"></a>
<a id="trace-12295"></a>
<a id="trace-12297"></a>
<a id="trace-12304"></a>
<a id="trace-12306"></a>
<a id="trace-12319"></a>
<a id="trace-12321"></a>
<a id="trace-12334"></a>
<a id="trace-12336"></a>
<a id="trace-12405"></a>
<a id="trace-12407"></a>
<a id="trace-12415"></a>
<a id="trace-12417"></a>
<a id="trace-12431"></a>
<a id="trace-12433"></a>
<a id="trace-12442"></a>
<a id="trace-12444"></a>
<a id="trace-12457"></a>
<a id="trace-12459"></a>
<a id="trace-12469"></a>
<a id="trace-12471"></a>
<a id="trace-12486"></a>
<a id="trace-12488"></a>
<a id="trace-12497"></a>
<a id="trace-12499"></a>
<a id="trace-12510"></a>
<a id="trace-12512"></a>
<a id="trace-12525"></a>
<a id="trace-12527"></a>
<a id="trace-12598"></a>
<a id="trace-12600"></a>
<a id="trace-12608"></a>
<a id="trace-12610"></a>
<a id="trace-12625"></a>
<a id="trace-12627"></a>
<a id="trace-12649"></a>
<a id="trace-12651"></a>
<a id="trace-12664"></a>
<a id="trace-12666"></a>
<a id="trace-12676"></a>
<a id="trace-12678"></a>
<a id="trace-12692"></a>
<a id="trace-12694"></a>
<a id="trace-12702"></a>
<a id="trace-12704"></a>
<a id="trace-12718"></a>
<a id="trace-12720"></a>
<a id="trace-12735"></a>
<a id="trace-12737"></a>
<a id="trace-12806"></a>
<a id="trace-12808"></a>
<a id="trace-12813"></a>
<a id="trace-12815"></a>
<a id="trace-12830"></a>
<a id="trace-12832"></a>
<a id="trace-12846"></a>
<a id="trace-12848"></a>
<a id="trace-12863"></a>
<a id="trace-12865"></a>
<a id="trace-12880"></a>
<a id="trace-12882"></a>
<a id="trace-12898"></a>
<a id="trace-12900"></a>
<a id="trace-12912"></a>
<a id="trace-12914"></a>
<a id="trace-12932"></a>
<a id="trace-12934"></a>
<a id="trace-12943"></a>
<a id="trace-12945"></a>
<a id="trace-13014"></a>
<a id="trace-13016"></a>
<a id="trace-13021"></a>
<a id="trace-13023"></a>
<a id="trace-13036"></a>
<a id="trace-13038"></a>
<a id="trace-13044"></a>
<a id="trace-13046"></a>
<a id="trace-13058"></a>
<a id="trace-13060"></a>
<a id="trace-13072"></a>
<a id="trace-13074"></a>
<a id="trace-13087"></a>
<a id="trace-13089"></a>
<a id="trace-13100"></a>
<a id="trace-13102"></a>
<a id="trace-13120"></a>
<a id="trace-13122"></a>
<a id="trace-13138"></a>
<a id="trace-13140"></a>
<a id="trace-13213"></a>
<a id="trace-13215"></a>
<a id="trace-13223"></a>
<a id="trace-13225"></a>
<a id="trace-13245"></a>
<a id="trace-13247"></a>
<a id="trace-13255"></a>
<a id="trace-13257"></a>
<a id="trace-13269"></a>
<a id="trace-13271"></a>
<a id="trace-13280"></a>
<a id="trace-13282"></a>
<a id="trace-13295"></a>
<a id="trace-13297"></a>
<a id="trace-13307"></a>
<a id="trace-13309"></a>
<a id="trace-13321"></a>
<a id="trace-13323"></a>
<a id="trace-13335"></a>
<a id="trace-13337"></a>
<a id="trace-13409"></a>
<a id="trace-13411"></a>
<a id="trace-13418"></a>
<a id="trace-13420"></a>
<a id="trace-13438"></a>
<a id="trace-13440"></a>
<a id="trace-13454"></a>
<a id="trace-13456"></a>
<a id="trace-13472"></a>
<a id="trace-13474"></a>
<a id="trace-13485"></a>
<a id="trace-13487"></a>
<a id="trace-13504"></a>
<a id="trace-13506"></a>
<a id="trace-13516"></a>
<a id="trace-13518"></a>
<a id="trace-13528"></a>
<a id="trace-13530"></a>
<a id="trace-13542"></a>
<a id="trace-13544"></a>
<a id="trace-13613"></a>
<a id="trace-13615"></a>
<a id="trace-13624"></a>
<a id="trace-13626"></a>
<a id="trace-13638"></a>
<a id="trace-13640"></a>
<a id="trace-13651"></a>
<a id="trace-13653"></a>
<a id="trace-13667"></a>
<a id="trace-13669"></a>
<a id="trace-13679"></a>
<a id="trace-13681"></a>
<a id="trace-13701"></a>
<a id="trace-13703"></a>
<a id="trace-13718"></a>
<a id="trace-13720"></a>
<a id="trace-13734"></a>
<a id="trace-13736"></a>
<a id="trace-13747"></a>
<a id="trace-13749"></a>
<a id="trace-13819"></a>
<a id="trace-13821"></a>
<a id="trace-13833"></a>
<a id="trace-13835"></a>
<a id="trace-13848"></a>
<a id="trace-13850"></a>
<a id="trace-13860"></a>
<a id="trace-13862"></a>
<a id="trace-13874"></a>
<a id="trace-13876"></a>
<a id="trace-13885"></a>
<a id="trace-13887"></a>
<a id="trace-13902"></a>
<a id="trace-13904"></a>
<a id="trace-13927"></a>
<a id="trace-13929"></a>
<a id="trace-13947"></a>
<a id="trace-13949"></a>
<a id="trace-13965"></a>
<a id="trace-13967"></a>
<a id="trace-14041"></a>
<a id="trace-14043"></a>
<a id="trace-14048"></a>
<a id="trace-14050"></a>
<a id="trace-14065"></a>
<a id="trace-14067"></a>
<a id="trace-14079"></a>
<a id="trace-14081"></a>
<a id="trace-14099"></a>
<a id="trace-14101"></a>
<a id="trace-14119"></a>
<a id="trace-14121"></a>
<a id="trace-14136"></a>
<a id="trace-14138"></a>
<a id="trace-14147"></a>
<a id="trace-14149"></a>
<a id="trace-14164"></a>
<a id="trace-14166"></a>
<a id="trace-14178"></a>
<a id="trace-14180"></a>
<a id="trace-14248"></a>
<a id="trace-14250"></a>
<a id="trace-14260"></a>
<a id="trace-14262"></a>
<a id="trace-14280"></a>
<a id="trace-14282"></a>
<a id="trace-14290"></a>
<a id="trace-14292"></a>
<a id="trace-14302"></a>
<a id="trace-14304"></a>
<a id="trace-14320"></a>
<a id="trace-14322"></a>
<a id="trace-14337"></a>
<a id="trace-14339"></a>
<a id="trace-14351"></a>
<a id="trace-14353"></a>
<a id="trace-14370"></a>
<a id="trace-14372"></a>
<a id="trace-14382"></a>
<a id="trace-14384"></a>
<a id="trace-14456"></a>
<a id="trace-14458"></a>
<a id="trace-14465"></a>
<a id="trace-14467"></a>
<a id="trace-14483"></a>
<a id="trace-14485"></a>
<a id="trace-14493"></a>
<a id="trace-14495"></a>
<a id="trace-14510"></a>
<a id="trace-14512"></a>
<a id="trace-14522"></a>
<a id="trace-14524"></a>
<a id="trace-14543"></a>
<a id="trace-14545"></a>
<a id="trace-14557"></a>
<a id="trace-14559"></a>
<a id="trace-14569"></a>
<a id="trace-14571"></a>
<a id="trace-14584"></a>
<a id="trace-14586"></a>
<a id="trace-14657"></a>
<a id="trace-14659"></a>
<a id="trace-14665"></a>
<a id="trace-14667"></a>
<a id="trace-14684"></a>
<a id="trace-14686"></a>
<a id="trace-14694"></a>
<a id="trace-14696"></a>
<a id="trace-14712"></a>
<a id="trace-14714"></a>
<a id="trace-14724"></a>
<a id="trace-14726"></a>
<a id="trace-14743"></a>
<a id="trace-14745"></a>
<a id="trace-14754"></a>
<a id="trace-14756"></a>
<a id="trace-14769"></a>
<a id="trace-14771"></a>
<a id="trace-14787"></a>
<a id="trace-14789"></a>
<a id="trace-14857"></a>
<a id="trace-14859"></a>
<a id="trace-14868"></a>
<a id="trace-14870"></a>
<a id="trace-14890"></a>
<a id="trace-14892"></a>
<a id="trace-14897"></a>
<a id="trace-14899"></a>
<a id="trace-14911"></a>
<a id="trace-14913"></a>
<a id="trace-14928"></a>
<a id="trace-14930"></a>
<a id="trace-14948"></a>
<a id="trace-14950"></a>
<a id="trace-14960"></a>
<a id="trace-14962"></a>
<a id="trace-14978"></a>
<a id="trace-14980"></a>
<a id="trace-14993"></a>
<a id="trace-14995"></a>
<a id="trace-15063"></a>
<a id="trace-15065"></a>
<a id="trace-15077"></a>
<a id="trace-15079"></a>
<a id="trace-15099"></a>
<a id="trace-15101"></a>
<a id="trace-15110"></a>
<a id="trace-15112"></a>
<a id="trace-15124"></a>
<a id="trace-15126"></a>
<a id="trace-15135"></a>
<a id="trace-15137"></a>
<a id="trace-15152"></a>
<a id="trace-15154"></a>
<a id="trace-15164"></a>
<a id="trace-15166"></a>
<a id="trace-15181"></a>
<a id="trace-15183"></a>
<a id="trace-15195"></a>
<a id="trace-15197"></a>
<a id="trace-15270"></a>
<a id="trace-15272"></a>
<a id="trace-15281"></a>
<a id="trace-15283"></a>
<a id="trace-15299"></a>
<a id="trace-15301"></a>
<a id="trace-15310"></a>
<a id="trace-15312"></a>
<a id="trace-15328"></a>
<a id="trace-15330"></a>
<a id="trace-15348"></a>
<a id="trace-15350"></a>
<a id="trace-15363"></a>
<a id="trace-15365"></a>
<a id="trace-15372"></a>
<a id="trace-15374"></a>
<a id="trace-15387"></a>
<a id="trace-15389"></a>
<a id="trace-15396"></a>
<a id="trace-15398"></a>
<a id="trace-15469"></a>
<a id="trace-15471"></a>
<a id="trace-15479"></a>
<a id="trace-15481"></a>
<a id="trace-15492"></a>
<a id="trace-15494"></a>
<a id="trace-15501"></a>
<a id="trace-15503"></a>
<a id="trace-15522"></a>
<a id="trace-15524"></a>
<a id="trace-15540"></a>
<a id="trace-15542"></a>
<a id="trace-15556"></a>
<a id="trace-15558"></a>
<a id="trace-15574"></a>
<a id="trace-15576"></a>
<a id="trace-15592"></a>
<a id="trace-15594"></a>
<a id="trace-15604"></a>
<a id="trace-15606"></a>
<a id="trace-15675"></a>
<a id="trace-15677"></a>
<a id="trace-15684"></a>
<a id="trace-15686"></a>
<a id="trace-15698"></a>
<a id="trace-15700"></a>
<a id="trace-15707"></a>
<a id="trace-15709"></a>
<a id="trace-15724"></a>
<a id="trace-15726"></a>
<a id="trace-15737"></a>
<a id="trace-15739"></a>
<a id="trace-15752"></a>
<a id="trace-15754"></a>
<a id="trace-15765"></a>
<a id="trace-15767"></a>
<a id="trace-15786"></a>
<a id="trace-15788"></a>
<a id="trace-15802"></a>
<a id="trace-15804"></a>
<a id="trace-15875"></a>
<a id="trace-15877"></a>
<a id="trace-15885"></a>
<a id="trace-15887"></a>
<a id="trace-15908"></a>
<a id="trace-15910"></a>
<a id="trace-15974"></a>
<a id="trace-15976"></a>
<a id="trace-15991"></a>
<a id="trace-15993"></a>
<a id="trace-16004"></a>
<a id="trace-16006"></a>
<a id="trace-16024"></a>
<a id="trace-16026"></a>
<a id="trace-16039"></a>
<a id="trace-16041"></a>
<a id="trace-16055"></a>
<a id="trace-16057"></a>
<a id="trace-16070"></a>
<a id="trace-16072"></a>
<a id="trace-16142"></a>
<a id="trace-16144"></a>
<a id="trace-16153"></a>
<a id="trace-16155"></a>
<a id="trace-16179"></a>
<a id="trace-16181"></a>
<a id="trace-16190"></a>
<a id="trace-16192"></a>
<a id="trace-16211"></a>
<a id="trace-16213"></a>
<a id="trace-16231"></a>
<a id="trace-16233"></a>
<a id="trace-16253"></a>
<a id="trace-16255"></a>
<a id="trace-16265"></a>
<a id="trace-16267"></a>
<a id="trace-16280"></a>
<a id="trace-16282"></a>
<a id="trace-16291"></a>
<a id="trace-16293"></a>
<a id="trace-16361"></a>
<a id="trace-16363"></a>
<a id="trace-16372"></a>
<a id="trace-16374"></a>
<a id="trace-16386"></a>
<a id="trace-16388"></a>
<a id="trace-16399"></a>
<a id="trace-16401"></a>
<a id="trace-16413"></a>
<a id="trace-16415"></a>
<a id="trace-16428"></a>
<a id="trace-16430"></a>
<a id="trace-16448"></a>
<a id="trace-16450"></a>
<a id="trace-16465"></a>
<a id="trace-16467"></a>
<a id="trace-16487"></a>
<a id="trace-16489"></a>
<a id="trace-16499"></a>
<a id="trace-16501"></a>
<a id="trace-16572"></a>
<a id="trace-16574"></a>
<a id="trace-16581"></a>
<a id="trace-16583"></a>
<a id="trace-16596"></a>
<a id="trace-16598"></a>
<a id="trace-16607"></a>
<a id="trace-16609"></a>
<a id="trace-16621"></a>
<a id="trace-16623"></a>
<a id="trace-16636"></a>
<a id="trace-16638"></a>
<a id="trace-16652"></a>
<a id="trace-16654"></a>
<a id="trace-16663"></a>
<a id="trace-16665"></a>
<a id="trace-16682"></a>
<a id="trace-16684"></a>
<a id="trace-16694"></a>
<a id="trace-16696"></a>
<a id="trace-16771"></a>
<a id="trace-16773"></a>
<a id="trace-16790"></a>
<a id="trace-16792"></a>
<a id="trace-16807"></a>
<a id="trace-16809"></a>
<a id="trace-16816"></a>
<a id="trace-16818"></a>
<a id="trace-16828"></a>
<a id="trace-16830"></a>
<a id="trace-16845"></a>
<a id="trace-16847"></a>
<a id="trace-16860"></a>
<a id="trace-16862"></a>
<a id="trace-16873"></a>
<a id="trace-16875"></a>
<a id="trace-16887"></a>
<a id="trace-16889"></a>
<a id="trace-16898"></a>
<a id="trace-16900"></a>
<a id="trace-16967"></a>
<a id="trace-16969"></a>
<a id="trace-16980"></a>
<a id="trace-16982"></a>
<a id="trace-16997"></a>
<a id="trace-16999"></a>
<a id="trace-17009"></a>
<a id="trace-17011"></a>
<a id="trace-17033"></a>
<a id="trace-17035"></a>
<a id="trace-17048"></a>
<a id="trace-17050"></a>
<a id="trace-17065"></a>
<a id="trace-17067"></a>
<a id="trace-17080"></a>
<a id="trace-17082"></a>
<a id="trace-17093"></a>
<a id="trace-17095"></a>
<a id="trace-17108"></a>
<a id="trace-17110"></a>
<a id="trace-17179"></a>
<a id="trace-17181"></a>
<a id="trace-17188"></a>
<a id="trace-17190"></a>
<a id="trace-17203"></a>
<a id="trace-17205"></a>
<a id="trace-17212"></a>
<a id="trace-17214"></a>
<a id="trace-17230"></a>
<a id="trace-17232"></a>
<a id="trace-17245"></a>
<a id="trace-17247"></a>
<a id="trace-17263"></a>
<a id="trace-17265"></a>
<a id="trace-17275"></a>
<a id="trace-17277"></a>
<a id="trace-17298"></a>
<a id="trace-17300"></a>
<a id="trace-17310"></a>
<a id="trace-17312"></a>
<a id="trace-17383"></a>
<a id="trace-17385"></a>
<a id="trace-17395"></a>
<a id="trace-17397"></a>
<a id="trace-17409"></a>
<a id="trace-17411"></a>
<a id="trace-17419"></a>
<a id="trace-17421"></a>
<a id="trace-17436"></a>
<a id="trace-17438"></a>
<a id="trace-17450"></a>
<a id="trace-17452"></a>
<a id="trace-17465"></a>
<a id="trace-17467"></a>
<a id="trace-17476"></a>
<a id="trace-17478"></a>
<a id="trace-17495"></a>
<a id="trace-17497"></a>
<a id="trace-17506"></a>
<a id="trace-17508"></a>
<a id="trace-17579"></a>
<a id="trace-17581"></a>
<a id="trace-17595"></a>
<a id="trace-17597"></a>
<a id="trace-17609"></a>
<a id="trace-17611"></a>
<a id="trace-17622"></a>
<a id="trace-17624"></a>
<a id="trace-17638"></a>
<a id="trace-17640"></a>
<a id="trace-17652"></a>
<a id="trace-17654"></a>
<a id="trace-17669"></a>
<a id="trace-17671"></a>
<a id="trace-17678"></a>
<a id="trace-17680"></a>
<a id="trace-17698"></a>
<a id="trace-17700"></a>
<a id="trace-17709"></a>
<a id="trace-17711"></a>
<a id="trace-17780"></a>
<a id="trace-17782"></a>
<a id="trace-17792"></a>
<a id="trace-17794"></a>
<a id="trace-17804"></a>
<a id="trace-17806"></a>
<a id="trace-17819"></a>
<a id="trace-17821"></a>
<a id="trace-17837"></a>
<a id="trace-17839"></a>
<a id="trace-17852"></a>
<a id="trace-17854"></a>
<a id="trace-17871"></a>
<a id="trace-17873"></a>
<a id="trace-17883"></a>
<a id="trace-17885"></a>
<a id="trace-17900"></a>
<a id="trace-17902"></a>
<a id="trace-17913"></a>
<a id="trace-17915"></a>
<a id="trace-17986"></a>
<a id="trace-17988"></a>
<a id="trace-17997"></a>
<a id="trace-17999"></a>
<a id="trace-18020"></a>
<a id="trace-18022"></a>
<a id="trace-18028"></a>
<a id="trace-18030"></a>
<a id="trace-18045"></a>
<a id="trace-18047"></a>
<a id="trace-18060"></a>
<a id="trace-18062"></a>
<a id="trace-18082"></a>
<a id="trace-18084"></a>
<a id="trace-18104"></a>
<a id="trace-18106"></a>
<a id="trace-18119"></a>
<a id="trace-18121"></a>
<a id="trace-18131"></a>
<a id="trace-18133"></a>
<a id="trace-18208"></a>
<a id="trace-18210"></a>
<a id="trace-18217"></a>
<a id="trace-18219"></a>
<a id="trace-18234"></a>
<a id="trace-18236"></a>
<a id="trace-18246"></a>
<a id="trace-18248"></a>
<a id="trace-18262"></a>
<a id="trace-18264"></a>
<a id="trace-18274"></a>
<a id="trace-18276"></a>
<a id="trace-18287"></a>
<a id="trace-18289"></a>
<a id="trace-18306"></a>
<a id="trace-18308"></a>
<a id="trace-18322"></a>
<a id="trace-18324"></a>
<a id="trace-18338"></a>
<a id="trace-18340"></a>
<a id="trace-18415"></a>
<a id="trace-18417"></a>
<a id="trace-18422"></a>
<a id="trace-18424"></a>
<a id="trace-18437"></a>
<a id="trace-18439"></a>
<a id="trace-18447"></a>
<a id="trace-18449"></a>
<a id="trace-18466"></a>
<a id="trace-18468"></a>
<a id="trace-18479"></a>
<a id="trace-18481"></a>
<a id="trace-18494"></a>
<a id="trace-18496"></a>
<a id="trace-18507"></a>
<a id="trace-18509"></a>
<a id="trace-18526"></a>
<a id="trace-18528"></a>
<a id="trace-18539"></a>
<a id="trace-18541"></a>
<a id="trace-18612"></a>
<a id="trace-18614"></a>
<a id="trace-18627"></a>
<a id="trace-18629"></a>
<a id="trace-18642"></a>
<a id="trace-18644"></a>
<a id="trace-18651"></a>
<a id="trace-18653"></a>
<a id="trace-18671"></a>
<a id="trace-18673"></a>
<a id="trace-18682"></a>
<a id="trace-18684"></a>
<a id="trace-18696"></a>
<a id="trace-18698"></a>
<a id="trace-18708"></a>
<a id="trace-18710"></a>
<a id="trace-18728"></a>
<a id="trace-18730"></a>
<a id="trace-18740"></a>
<a id="trace-18742"></a>
<a id="trace-18810"></a>
<a id="trace-18812"></a>
<a id="trace-18823"></a>
<a id="trace-18825"></a>
<a id="trace-18839"></a>
<a id="trace-18841"></a>
<a id="trace-18849"></a>
<a id="trace-18851"></a>
<a id="trace-18868"></a>
<a id="trace-18870"></a>
<a id="trace-18882"></a>
<a id="trace-18884"></a>
<a id="trace-18903"></a>
<a id="trace-18905"></a>
<a id="trace-18921"></a>
<a id="trace-18923"></a>
<a id="trace-18938"></a>
<a id="trace-18940"></a>
<a id="trace-18950"></a>
<a id="trace-18952"></a>
<a id="trace-19021"></a>
<a id="trace-19023"></a>
<a id="trace-19031"></a>
<a id="trace-19033"></a>
<a id="trace-19048"></a>
<a id="trace-19050"></a>
<a id="trace-19060"></a>
<a id="trace-19062"></a>
<a id="trace-19074"></a>
<a id="trace-19076"></a>
<a id="trace-19089"></a>
<a id="trace-19091"></a>
<a id="trace-19107"></a>
<a id="trace-19109"></a>
<a id="trace-19123"></a>
<a id="trace-19125"></a>
<a id="trace-19139"></a>
<a id="trace-19141"></a>
<a id="trace-19154"></a>
<a id="trace-19156"></a>
<a id="trace-19233"></a>
<a id="trace-19235"></a>
<a id="trace-19243"></a>
<a id="trace-19245"></a>
<a id="trace-19257"></a>
<a id="trace-19259"></a>
<a id="trace-19266"></a>
<a id="trace-19268"></a>
<a id="trace-19280"></a>
<a id="trace-19282"></a>
<a id="trace-19295"></a>
<a id="trace-19297"></a>
<a id="trace-19311"></a>
<a id="trace-19313"></a>
<a id="trace-19327"></a>
<a id="trace-19329"></a>
<a id="trace-19340"></a>
<a id="trace-19342"></a>
<a id="trace-19351"></a>
<a id="trace-19353"></a>
<a id="trace-19424"></a>
<a id="trace-19426"></a>
<a id="trace-19436"></a>
<a id="trace-19438"></a>
<a id="trace-19456"></a>
<a id="trace-19458"></a>
<a id="trace-19469"></a>
<a id="trace-19471"></a>
<a id="trace-19485"></a>
<a id="trace-19487"></a>
<a id="trace-19498"></a>
<a id="trace-19500"></a>
<a id="trace-19512"></a>
<a id="trace-19514"></a>
<a id="trace-19527"></a>
<a id="trace-19529"></a>
<a id="trace-19542"></a>
<a id="trace-19544"></a>
<a id="trace-19555"></a>
<a id="trace-19557"></a>
<a id="trace-19626"></a>
<a id="trace-19628"></a>
<a id="trace-19634"></a>
<a id="trace-19636"></a>
<a id="trace-19650"></a>
<a id="trace-19652"></a>
<a id="trace-19662"></a>
<a id="trace-19664"></a>
<a id="trace-19676"></a>
<a id="trace-19678"></a>
<a id="trace-19695"></a>
<a id="trace-19697"></a>
<a id="trace-19714"></a>
<a id="trace-19716"></a>
<a id="trace-19727"></a>
<a id="trace-19729"></a>
<a id="trace-19743"></a>
<a id="trace-19745"></a>
<a id="trace-19758"></a>
<a id="trace-19760"></a>
<a id="trace-19827"></a>
<a id="trace-19829"></a>
<a id="trace-19839"></a>
<a id="trace-19841"></a>
<a id="trace-19851"></a>
<a id="trace-19853"></a>
<a id="trace-19861"></a>
<a id="trace-19863"></a>
<a id="trace-19879"></a>
<a id="trace-19881"></a>
<a id="trace-19891"></a>
<a id="trace-19893"></a>
<a id="trace-19910"></a>
<a id="trace-19912"></a>
<a id="trace-19923"></a>
<a id="trace-19925"></a>
<a id="trace-19942"></a>
<a id="trace-19944"></a>
<a id="trace-19954"></a>
<a id="trace-19956"></a>
<a id="trace-20033"></a>
<a id="trace-20035"></a>
<a id="trace-20043"></a>
<a id="trace-20045"></a>
<a id="trace-20058"></a>
<a id="trace-20060"></a>
<a id="trace-20071"></a>
<a id="trace-20073"></a>
<a id="trace-20086"></a>
<a id="trace-20088"></a>
<a id="trace-20099"></a>
<a id="trace-20101"></a>
<a id="trace-20114"></a>
<a id="trace-20116"></a>
<a id="trace-20127"></a>
<a id="trace-20129"></a>
<a id="trace-20146"></a>
<a id="trace-20148"></a>
<a id="trace-20158"></a>
<a id="trace-20160"></a>
<a id="trace-20232"></a>
<a id="trace-20234"></a>
<a id="trace-20240"></a>
<a id="trace-20242"></a>
<a id="trace-20257"></a>
<a id="trace-20259"></a>
<a id="trace-20272"></a>
<a id="trace-20274"></a>
<a id="trace-20288"></a>
<a id="trace-20290"></a>
<a id="trace-20304"></a>
<a id="trace-20306"></a>
<a id="trace-20318"></a>
<a id="trace-20320"></a>
<a id="trace-20331"></a>
<a id="trace-20333"></a>
<a id="trace-20350"></a>
<a id="trace-20352"></a>
<a id="trace-20362"></a>
<a id="trace-20364"></a>
<a id="trace-20434"></a>
<a id="trace-20436"></a>
<a id="trace-20443"></a>
<a id="trace-20445"></a>
<a id="trace-20461"></a>
<a id="trace-20463"></a>
<a id="trace-20474"></a>
<a id="trace-20476"></a>
<a id="trace-20504"></a>
<a id="trace-20506"></a>
<a id="trace-20524"></a>
<a id="trace-20526"></a>
<a id="trace-20539"></a>
<a id="trace-20541"></a>
<a id="trace-20557"></a>
<a id="trace-20559"></a>
<a id="trace-20568"></a>
<a id="trace-20570"></a>
<a id="trace-20641"></a>
<a id="trace-20643"></a>
<a id="trace-20649"></a>
<a id="trace-20651"></a>
<a id="trace-20667"></a>
<a id="trace-20669"></a>
<a id="trace-20678"></a>
<a id="trace-20680"></a>
<a id="trace-20693"></a>
<a id="trace-20695"></a>
<a id="trace-20706"></a>
<a id="trace-20708"></a>
<a id="trace-20724"></a>
<a id="trace-20726"></a>
<a id="trace-20736"></a>
<a id="trace-20738"></a>
<a id="trace-20752"></a>
<a id="trace-20754"></a>
<a id="trace-20770"></a>
<a id="trace-20772"></a>
<a id="trace-20839"></a>
<a id="trace-20841"></a>
<a id="trace-20848"></a>
<a id="trace-20850"></a>
<a id="trace-20864"></a>
<a id="trace-20866"></a>
<a id="trace-20876"></a>
<a id="trace-20878"></a>
<a id="trace-20893"></a>
<a id="trace-20895"></a>
<a id="trace-20904"></a>
<a id="trace-20906"></a>
<a id="trace-20922"></a>
<a id="trace-20924"></a>
<a id="trace-20934"></a>
<a id="trace-20936"></a>
<a id="trace-20950"></a>
<a id="trace-20952"></a>
<a id="trace-20965"></a>
<a id="trace-20967"></a>
<a id="trace-21037"></a>
<a id="trace-21039"></a>
<a id="trace-21052"></a>
<a id="trace-21054"></a>
<a id="trace-21072"></a>
<a id="trace-21074"></a>
<a id="trace-21079"></a>
<a id="trace-21081"></a>
<a id="trace-21095"></a>
<a id="trace-21097"></a>
<a id="trace-21107"></a>
<a id="trace-21109"></a>
<a id="trace-21124"></a>
<a id="trace-21126"></a>
<a id="trace-21136"></a>
<a id="trace-21138"></a>
<a id="trace-21152"></a>
<a id="trace-21154"></a>
<a id="trace-21163"></a>
<a id="trace-21165"></a>
<a id="trace-21233"></a>
<a id="trace-21235"></a>
<a id="trace-21249"></a>
<a id="trace-21251"></a>
<a id="trace-21264"></a>
<a id="trace-21266"></a>
<a id="trace-21273"></a>
<a id="trace-21275"></a>
<a id="trace-21293"></a>
<a id="trace-21295"></a>
<a id="trace-21304"></a>
<a id="trace-21306"></a>
<a id="trace-21322"></a>
<a id="trace-21324"></a>
<a id="trace-21332"></a>
<a id="trace-21334"></a>
<a id="trace-21348"></a>
<a id="trace-21350"></a>
<a id="trace-21359"></a>
<a id="trace-21361"></a>
<a id="trace-21430"></a>
<a id="trace-21432"></a>
<a id="trace-21441"></a>
<a id="trace-21443"></a>
<a id="trace-21458"></a>
<a id="trace-21460"></a>
<a id="trace-21470"></a>
<a id="trace-21472"></a>
<a id="trace-21485"></a>
<a id="trace-21487"></a>
<a id="trace-21500"></a>
<a id="trace-21502"></a>
<a id="trace-21518"></a>
<a id="trace-21520"></a>
<a id="trace-21529"></a>
<a id="trace-21531"></a>
<a id="trace-21551"></a>
<a id="trace-21553"></a>
<a id="trace-21568"></a>
<a id="trace-21570"></a>
<a id="trace-21638"></a>
<a id="trace-21640"></a>
<a id="trace-21647"></a>
<a id="trace-21649"></a>
<a id="trace-21663"></a>
<a id="trace-21665"></a>
<a id="trace-21676"></a>
<a id="trace-21678"></a>
<a id="trace-21690"></a>
<a id="trace-21692"></a>
<a id="trace-21703"></a>
<a id="trace-21705"></a>
<a id="trace-21718"></a>
<a id="trace-21720"></a>
<a id="trace-21731"></a>
<a id="trace-21733"></a>
<a id="trace-21747"></a>
<a id="trace-21749"></a>
<a id="trace-21762"></a>
<a id="trace-21764"></a>
<a id="trace-21833"></a>
<a id="trace-21835"></a>
<a id="trace-21847"></a>
<a id="trace-21849"></a>
<a id="trace-21870"></a>
<a id="trace-21872"></a>
<a id="trace-21881"></a>
<a id="trace-21883"></a>
<a id="trace-21896"></a>
<a id="trace-21898"></a>
<a id="trace-21911"></a>
<a id="trace-21913"></a>
<a id="trace-21925"></a>
<a id="trace-21927"></a>
<a id="trace-21940"></a>
<a id="trace-21942"></a>
<a id="trace-21959"></a>
<a id="trace-21961"></a>
<a id="trace-21973"></a>
<a id="trace-21975"></a>
<a id="trace-22051"></a>
<a id="trace-22053"></a>
<a id="trace-22062"></a>
<a id="trace-22064"></a>
<a id="trace-22082"></a>
<a id="trace-22084"></a>
<a id="trace-22092"></a>
<a id="trace-22094"></a>
<a id="trace-22115"></a>
<a id="trace-22117"></a>
<a id="trace-22133"></a>
<a id="trace-22135"></a>
<a id="trace-22151"></a>
<a id="trace-22153"></a>
<a id="trace-22161"></a>
<a id="trace-22163"></a>
<a id="trace-22175"></a>
<a id="trace-22177"></a>
<a id="trace-22186"></a>
<a id="trace-22188"></a>
<a id="trace-22258"></a>
<a id="trace-22260"></a>
<a id="trace-22270"></a>
<a id="trace-22272"></a>
<a id="trace-22284"></a>
<a id="trace-22286"></a>
<a id="trace-22291"></a>
<a id="trace-22293"></a>
<a id="trace-22308"></a>
<a id="trace-22310"></a>
<a id="trace-22325"></a>
<a id="trace-22327"></a>
<a id="trace-22340"></a>
<a id="trace-22342"></a>
<a id="trace-22357"></a>
<a id="trace-22359"></a>
<a id="trace-22379"></a>
<a id="trace-22381"></a>
<a id="trace-22392"></a>
<a id="trace-22394"></a>
<a id="trace-22467"></a>
<a id="trace-22469"></a>
<a id="trace-22478"></a>
<a id="trace-22480"></a>
<a id="trace-22492"></a>
<a id="trace-22494"></a>
<a id="trace-22503"></a>
<a id="trace-22505"></a>
<a id="trace-22515"></a>
<a id="trace-22517"></a>
<a id="trace-22527"></a>
<a id="trace-22529"></a>
<a id="trace-22541"></a>
<a id="trace-22543"></a>
<a id="trace-22552"></a>
<a id="trace-22554"></a>
<a id="trace-22568"></a>
<a id="trace-22570"></a>
<a id="trace-22584"></a>
<a id="trace-22586"></a>
<a id="trace-22661"></a>
<a id="trace-22663"></a>
<a id="trace-22671"></a>
<a id="trace-22673"></a>
<a id="trace-22692"></a>
<a id="trace-22694"></a>
<a id="trace-22706"></a>
<a id="trace-22708"></a>
<a id="trace-22721"></a>
<a id="trace-22723"></a>
<a id="trace-22736"></a>
<a id="trace-22738"></a>
<a id="trace-22748"></a>
<a id="trace-22750"></a>
<a id="trace-22759"></a>
<a id="trace-22761"></a>
<a id="trace-22774"></a>
<a id="trace-22776"></a>
<a id="trace-22783"></a>
<a id="trace-22785"></a>
<a id="trace-22858"></a>
<a id="trace-22860"></a>
<a id="trace-22865"></a>
<a id="trace-22867"></a>
<a id="trace-22884"></a>
<a id="trace-22886"></a>
<a id="trace-22893"></a>
<a id="trace-22895"></a>
<a id="trace-22913"></a>
<a id="trace-22915"></a>
<a id="trace-22934"></a>
<a id="trace-22936"></a>
<a id="trace-22948"></a>
<a id="trace-22950"></a>
<a id="trace-22965"></a>
<a id="trace-22967"></a>
<a id="trace-22982"></a>
<a id="trace-22984"></a>
<a id="trace-22994"></a>
<a id="trace-22996"></a>
<a id="trace-23067"></a>
<a id="trace-23069"></a>
<a id="trace-23076"></a>
<a id="trace-23078"></a>
<a id="trace-23092"></a>
<a id="trace-23094"></a>
<a id="trace-23101"></a>
<a id="trace-23103"></a>
<a id="trace-23116"></a>
<a id="trace-23118"></a>
<a id="trace-23130"></a>
<a id="trace-23132"></a>
<a id="trace-23144"></a>
<a id="trace-23146"></a>
<a id="trace-23160"></a>
<a id="trace-23162"></a>
<a id="trace-23180"></a>
<a id="trace-23182"></a>
<a id="trace-23195"></a>
<a id="trace-23197"></a>
<a id="trace-23267"></a>
<a id="trace-23269"></a>
<a id="trace-23275"></a>
<a id="trace-23277"></a>
<a id="trace-23296"></a>
<a id="trace-23298"></a>
<a id="trace-23303"></a>
<a id="trace-23305"></a>
<a id="trace-23319"></a>
<a id="trace-23321"></a>
<a id="trace-23331"></a>
<a id="trace-23333"></a>
<a id="trace-23346"></a>
<a id="trace-23348"></a>
<a id="trace-23357"></a>
<a id="trace-23359"></a>
<a id="trace-23374"></a>
<a id="trace-23376"></a>
<a id="trace-23388"></a>
<a id="trace-23390"></a>
- 1.60s–359.80s (×1430), actor 37, squad 4 (trace 579): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5079367284588374, 'next_transition': 607}.
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
<a id="trace-1272"></a>
<a id="trace-1274"></a>
<a id="trace-1296"></a>
<a id="trace-1298"></a>
- 7.70s–11.20s (×14), actor 5, squad 0 (trace 935): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 746. Next observer evidence: {'until': 8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5114658461587076, 'next_transition': 964}.
<a id="trace-1133"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1133): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1055. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.6409061069900694, 'next_transition': 137}.
<a id="trace-1134"></a>
- 10.25s–10.25s (×1), actor 8, squad 1 (trace 1134): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1055. Next observer evidence: {'until': 12.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 5.6409061069900694, 'next_transition': 137}.
<a id="trace-137"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (events line 137): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.201755683865684, 'next_transition': 1905}.
<a id="trace-1382"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1382): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1382. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.201755683865684, 'next_transition': 1905}.
<a id="trace-1383"></a>
- 12.75s–12.75s (×1), actor 5, squad 1 (trace 1383): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 12.75s, trace 1383. Next observer evidence: {'until': 15.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 9.201755683865684, 'next_transition': 1905}.
<a id="trace-1384"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1384): traveling overwatch. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1685}.
<a id="trace-1385"></a>
- 12.75s–12.75s (×1), actor 0, squad 0 (trace 1385): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 1047. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.4725134541047533, 'next_transition': 1685}.
<a id="trace-1685"></a>
<a id="trace-1687"></a>
<a id="trace-1748"></a>
<a id="trace-1750"></a>
<a id="trace-1770"></a>
<a id="trace-1772"></a>
<a id="trace-1856"></a>
<a id="trace-1858"></a>
<a id="trace-1898"></a>
<a id="trace-1900"></a>
<a id="trace-2696"></a>
<a id="trace-2698"></a>
<a id="trace-3116"></a>
<a id="trace-3118"></a>
<a id="trace-3166"></a>
<a id="trace-3168"></a>
<a id="trace-3226"></a>
<a id="trace-3228"></a>
<a id="trace-3313"></a>
<a id="trace-3315"></a>
- 13.20s–18.75s (×20), actor 5, squad 0 (trace 1685): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 12.75s, trace 1383. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.220607996336504, 'next_transition': 1748}.
<a id="trace-1905"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1905): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1792. Next observer evidence: None.
<a id="trace-1906"></a>
- 15.70s–15.70s (×1), actor 8, squad 1 (trace 1906): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1792. Next observer evidence: None.
<a id="trace-1907"></a>
<a id="trace-2099"></a>
<a id="trace-2293"></a>
<a id="trace-2491"></a>
<a id="trace-2710"></a>
<a id="trace-2909"></a>
- 15.70s–16.55s (×6), actor 8, squad 1 (trace 1907): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1792. Next observer evidence: None.
<a id="trace-3338"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3338): ReactToContact: cover and return fire. Knowledge: actor memory at 15.00s, trace 1784. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1390284865947207, 'next_transition': 3695}.
<a id="trace-3339"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3339): bounding overwatch. Knowledge: actor memory at 15.00s, trace 1784. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1390284865947207, 'next_transition': 3695}.
<a id="trace-3340"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 3340): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1784. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1390284865947207, 'next_transition': 3695}.
<a id="trace-3695"></a>
<a id="trace-3697"></a>
- 19.25s–19.25s (×2), actor 5, squad 0 (trace 3695): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1789. Next observer evidence: {'until': 19.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.14009039561046263, 'next_transition': 3712}.
<a id="trace-3712"></a>
- 19.50s–19.50s (×1), actor 0, squad 0 (trace 3712): new contact inside 100 m. Knowledge: actor memory at 15.00s, trace 1784. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1411548042008216, 'next_transition': 4062}.
<a id="trace-4062"></a>
<a id="trace-4064"></a>
<a id="trace-4325"></a>
<a id="trace-4327"></a>
<a id="trace-4379"></a>
<a id="trace-4381"></a>
<a id="trace-4458"></a>
<a id="trace-4460"></a>
- 19.75s–21.75s (×8), actor 5, squad 0 (trace 4062): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1789. Next observer evidence: {'until': 20.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.429843297280648, 'next_transition': 4325}.
<a id="trace-4071"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4071): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 15.00s, trace 1792. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 18.103297583559883, 'next_transition': 8280}.
<a id="trace-4072"></a>
- 19.90s–19.90s (×1), actor 8, squad 1 (trace 4072): rearward bound: one stationary suppressing element. Knowledge: actor memory at 15.00s, trace 1792. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 18.103297583559883, 'next_transition': 8280}.
<a id="trace-4571"></a>
- 23.05s–23.05s (×1), actor 0, squad 0 (trace 4571): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 20.00s, trace 4227. Next observer evidence: {'until': 23.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0733904874732583, 'next_transition': 4581}.
<a id="trace-4581"></a>
<a id="trace-4583"></a>
- 23.25s–23.25s (×2), actor 5, squad 0 (trace 4581): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4232. Next observer evidence: {'until': 23.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1499660457664084, 'next_transition': 4598}.
<a id="trace-4598"></a>
- 23.70s–23.70s (×1), actor 0, squad 0 (trace 4598): new contact inside 100 m. Knowledge: actor memory at 20.00s, trace 4227. Next observer evidence: {'until': 24.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.2328179979216599, 'next_transition': 4977}.
<a id="trace-4977"></a>
<a id="trace-4979"></a>
<a id="trace-5002"></a>
<a id="trace-5004"></a>
- 24.25s–24.75s (×4), actor 5, squad 0 (trace 4977): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 20.00s, trace 4232. Next observer evidence: {'until': 24.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.15750371997591037, 'next_transition': 5002}.
<a id="trace-5095"></a>
- 25.15s–25.15s (×1), actor 0, squad 0 (trace 5095): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 25.00s, trace 5024. Next observer evidence: {'until': 25.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09842061888558375, 'next_transition': 5453}.
<a id="trace-5453"></a>
<a id="trace-5455"></a>
<a id="trace-5471"></a>
<a id="trace-5473"></a>
- 25.25s–25.75s (×4), actor 5, squad 0 (trace 5453): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 5029. Next observer evidence: {'until': 25.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.3150049699759101, 'next_transition': 5471}.
<a id="trace-5480"></a>
- 25.75s–25.75s (×1), actor 0, squad 0 (trace 5480): new contact inside 100 m. Knowledge: actor memory at 25.00s, trace 5024. Next observer evidence: {'until': 26.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.36369898771595854, 'next_transition': 470}.
<a id="trace-470"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (events line 470): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5899"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5899): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5899. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.305258731935759, 'next_transition': 5955}.
<a id="trace-5900"></a>
- 26.55s–26.55s (×1), actor 5, squad 0 (trace 5900): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 26.55s, trace 5900. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.305258731935759, 'next_transition': 5955}.
<a id="trace-5955"></a>
<a id="trace-5957"></a>
<a id="trace-6016"></a>
<a id="trace-6074"></a>
<a id="trace-6076"></a>
<a id="trace-6154"></a>
<a id="trace-6156"></a>
<a id="trace-6166"></a>
<a id="trace-6168"></a>
- 27.25s–30.75s (×9), actor 5, squad 0 (trace 5955): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 26.55s, trace 5900. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6963927240023482, 'next_transition': 6016}.
<a id="trace-6192"></a>
- 31.40s–31.40s (×1), actor 1, squad 0 (trace 6192): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 30.00s, trace 6085. Next observer evidence: {'until': 31.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.09000032580439896, 'next_transition': 6196}.
<a id="trace-6196"></a>
<a id="trace-6198"></a>
<a id="trace-6219"></a>
<a id="trace-6221"></a>
<a id="trace-6252"></a>
<a id="trace-6254"></a>
<a id="trace-6269"></a>
<a id="trace-6271"></a>
<a id="trace-6289"></a>
- 31.75s–34.25s (×9), actor 5, squad 0 (trace 6196): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6089. Next observer evidence: {'until': 32.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2699995561031876, 'next_transition': 6219}.
<a id="trace-6299"></a>
- 34.40s–34.40s (×1), actor 1, squad 0 (trace 6299): SupportByFire: contact assessment deploys gun group; area = deployment lane UNION objective disc radius 60 m, clipped to map. Knowledge: actor memory at 30.00s, trace 6085. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8286}.
<a id="trace-7965"></a>
- 34.40s–34.40s (×1), actor 1, squad 0 (trace 7965): no covered route: report upward and continue supported bounding closure. Knowledge: actor memory at 30.00s, trace 6085. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8286}.
<a id="trace-7966"></a>
- 34.40s–34.40s (×1), actor 1, squad 0 (trace 7966): MoveTactically. Knowledge: actor memory at 30.00s, trace 6085. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8286}.
<a id="trace-7967"></a>
- 34.40s–34.40s (×1), actor 1, squad 0 (trace 7967): contact cover complete: assessment resumes closure. Knowledge: actor memory at 30.00s, trace 6085. Next observer evidence: {'until': 34.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 8286}.
<a id="trace-8280"></a>
- 34.70s–34.70s (×1), actor 9, squad 1 (trace 8280): arrived rearward element takes stationary suppressing slots. Knowledge: actor memory at 30.00s, trace 6092. Next observer evidence: {'until': 64.6, 'shots': 8, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1269}.
<a id="trace-8281"></a>
- 34.70s–34.70s (×1), actor 9, squad 1 (trace 8281): matching receipt: alternate 30 m rearward bound. Knowledge: actor memory at 30.00s, trace 6092. Next observer evidence: {'until': 64.6, 'shots': 8, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1269}.
<a id="trace-8286"></a>
<a id="trace-8375"></a>
<a id="trace-8401"></a>
<a id="trace-8452"></a>
<a id="trace-8484"></a>
- 34.75s–37.25s (×5), actor 5, squad 0 (trace 8286): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 6089. Next observer evidence: {'until': 35.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.04500018848033089, 'next_transition': 8375}.
<a id="trace-8510"></a>
- 37.95s–37.95s (×1), actor 1, squad 0 (trace 8510): effective incoming fire ended (6 s hysteresis). Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: {'until': 38.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6300033270911501, 'next_transition': 8667}.
<a id="trace-8667"></a>
- 38.20s–38.20s (×1), actor 1, squad 0 (trace 8667): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: None.
<a id="trace-8669"></a>
- 38.20s–38.20s (×1), actor 1, squad 0 (trace 8669): NeedSupport. Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: None.
<a id="trace-8678"></a>
<a id="trace-8680"></a>
- 38.25s–38.25s (×2), actor 5, squad 0 (trace 8678): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8300. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7612578229532789, 'next_transition': 8700}.
<a id="trace-8700"></a>
- 38.65s–38.65s (×1), actor 1, squad 0 (trace 8700): Reorganise: completed/failed drill. Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: None.
<a id="trace-8705"></a>
- 38.65s–38.65s (×1), actor 1, squad 0 (trace 8705): MoveTactically. Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: None.
<a id="trace-8706"></a>
- 38.65s–38.65s (×1), actor 1, squad 0 (trace 8706): Reorganise complete: blocked attack resumes supported closure. Knowledge: actor memory at 35.00s, trace 8296. Next observer evidence: None.
<a id="trace-8887"></a>
<a id="trace-8889"></a>
<a id="trace-8938"></a>
<a id="trace-8940"></a>
<a id="trace-9040"></a>
<a id="trace-9042"></a>
<a id="trace-9065"></a>
<a id="trace-9067"></a>
<a id="trace-9096"></a>
<a id="trace-9098"></a>
- 38.75s–41.25s (×10), actor 5, squad 0 (trace 8887): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 8300. Next observer evidence: {'until': 39.6, 'shots': 1, 'casualties': 0, 'mean_displacement': 2.0197516580560246, 'next_transition': 8938}.
<a id="trace-9113"></a>
- 41.50s–41.50s (×1), actor 1, squad 0 (trace 9113): ReactToContact: cover and return fire. Knowledge: actor memory at 40.00s, trace 8958. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249905406124524, 'next_transition': 9369}.
<a id="trace-9114"></a>
- 41.50s–41.50s (×1), actor 1, squad 0 (trace 9114): new contact inside 100 m. Knowledge: actor memory at 40.00s, trace 8958. Next observer evidence: {'until': 41.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5249905406124524, 'next_transition': 9369}.
<a id="trace-9369"></a>
<a id="trace-9371"></a>
<a id="trace-9401"></a>
<a id="trace-9403"></a>
<a id="trace-9425"></a>
<a id="trace-9427"></a>
<a id="trace-9446"></a>
<a id="trace-9448"></a>
<a id="trace-9467"></a>
<a id="trace-9469"></a>
- 41.75s–43.75s (×10), actor 5, squad 0 (trace 9369): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 8961. Next observer evidence: {'until': 42.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4217864359837284, 'next_transition': 9401}.
<a id="trace-9492"></a>
- 44.15s–44.15s (×1), actor 1, squad 0 (trace 9492): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 40.00s, trace 8958. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8428189689162302, 'next_transition': 9726}.
<a id="trace-9493"></a>
- 44.15s–44.15s (×1), actor 1, squad 0 (trace 9493): rearward bound: one stationary suppressing element. Knowledge: actor memory at 40.00s, trace 8958. Next observer evidence: {'until': 45.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8428189689162302, 'next_transition': 9726}.
<a id="trace-9726"></a>
<a id="trace-9728"></a>
<a id="trace-9751"></a>
<a id="trace-9753"></a>
<a id="trace-9768"></a>
<a id="trace-9770"></a>
<a id="trace-9789"></a>
<a id="trace-9791"></a>
<a id="trace-9817"></a>
<a id="trace-9819"></a>
<a id="trace-9861"></a>
<a id="trace-9863"></a>
<a id="trace-9881"></a>
<a id="trace-9883"></a>
<a id="trace-9892"></a>
<a id="trace-9894"></a>
<a id="trace-9969"></a>
<a id="trace-9971"></a>
<a id="trace-9982"></a>
<a id="trace-9984"></a>
<a id="trace-10005"></a>
<a id="trace-10007"></a>
<a id="trace-10038"></a>
<a id="trace-10040"></a>
<a id="trace-10058"></a>
<a id="trace-10060"></a>
<a id="trace-10080"></a>
<a id="trace-10082"></a>
<a id="trace-10095"></a>
<a id="trace-10097"></a>
- 45.75s–53.75s (×30), actor 5, squad 0 (trace 9726): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 45.00s, trace 9628. Next observer evidence: {'until': 46.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.4236346556044635, 'next_transition': 9751}.
<a id="trace-860"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (events line 860): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-10108"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 10108): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.773178 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 10108. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25889999736138813, 'next_transition': 10117}.
<a id="trace-10109"></a>
- 54.15s–54.15s (×1), actor 5, squad 0 (trace 10109): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.773178 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 54.15s, trace 10109. Next observer evidence: {'until': 54.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.25889999736138813, 'next_transition': 10117}.
<a id="trace-10117"></a>
<a id="trace-10119"></a>
<a id="trace-10128"></a>
<a id="trace-10130"></a>
<a id="trace-10226"></a>
<a id="trace-10228"></a>
<a id="trace-10261"></a>
<a id="trace-10263"></a>
<a id="trace-10288"></a>
<a id="trace-10290"></a>
<a id="trace-10312"></a>
<a id="trace-10314"></a>
<a id="trace-10332"></a>
<a id="trace-10334"></a>
<a id="trace-10369"></a>
<a id="trace-10371"></a>
<a id="trace-10411"></a>
<a id="trace-10413"></a>
<a id="trace-10444"></a>
<a id="trace-10446"></a>
<a id="trace-10471"></a>
<a id="trace-10473"></a>
<a id="trace-10579"></a>
<a id="trace-10581"></a>
<a id="trace-10622"></a>
<a id="trace-10624"></a>
<a id="trace-10663"></a>
<a id="trace-10665"></a>
<a id="trace-10707"></a>
<a id="trace-10709"></a>
<a id="trace-10746"></a>
<a id="trace-10748"></a>
<a id="trace-10771"></a>
<a id="trace-10773"></a>
<a id="trace-10805"></a>
<a id="trace-10807"></a>
<a id="trace-10827"></a>
<a id="trace-10829"></a>
<a id="trace-10857"></a>
<a id="trace-10859"></a>
<a id="trace-10869"></a>
<a id="trace-10871"></a>
<a id="trace-10952"></a>
<a id="trace-10954"></a>
<a id="trace-10970"></a>
<a id="trace-10972"></a>
- 54.25s–65.75s (×46), actor 5, squad 0 (trace 10117): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 54.15s, trace 10109. Next observer evidence: {'until': 54.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6079212737599728, 'next_transition': 10128}.
<a id="trace-10996"></a>
- 66.10s–66.10s (×1), actor 1, squad 0 (trace 10996): NeedSupport. Knowledge: actor memory at 65.00s, trace 10886. Next observer evidence: {'until': 67.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.056223172685535096, 'next_transition': 11092}.
<a id="trace-11092"></a>
<a id="trace-11094"></a>
<a id="trace-11137"></a>
<a id="trace-11139"></a>
<a id="trace-11239"></a>
<a id="trace-11241"></a>
<a id="trace-11268"></a>
<a id="trace-11270"></a>
<a id="trace-11342"></a>
<a id="trace-11344"></a>
<a id="trace-11367"></a>
<a id="trace-11369"></a>
<a id="trace-11403"></a>
<a id="trace-11405"></a>
<a id="trace-11471"></a>
<a id="trace-11473"></a>
<a id="trace-11572"></a>
<a id="trace-11574"></a>
<a id="trace-11597"></a>
<a id="trace-11599"></a>
<a id="trace-11629"></a>
<a id="trace-11631"></a>
<a id="trace-11650"></a>
<a id="trace-11652"></a>
<a id="trace-11724"></a>
<a id="trace-11736"></a>
- 67.25s–75.75s (×26), actor 5, squad 0 (trace 11092): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 10888. Next observer evidence: {'until': 67.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1572869032349147, 'next_transition': 11137}.
<a id="trace-11746"></a>
- 75.85s–75.85s (×1), actor 4, squad 0 (trace 11746): InsufficientStrength: frozen element failed; Reorganise before new drill. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: None.
<a id="trace-11747"></a>
- 75.90s–75.90s (×1), actor 4, squad 0 (trace 11747): Reorganise: completed/failed drill. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223903206267556, 'next_transition': 11773}.
<a id="trace-11749"></a>
- 75.90s–75.90s (×1), actor 4, squad 0 (trace 11749): ReactToContact: cover and return fire. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223903206267556, 'next_transition': 11773}.
<a id="trace-11750"></a>
- 75.90s–75.90s (×1), actor 4, squad 0 (trace 11750): Reorganise complete: known contact. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: {'until': 76.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223903206267556, 'next_transition': 11773}.
<a id="trace-11773"></a>
<a id="trace-11789"></a>
<a id="trace-11791"></a>
<a id="trace-11809"></a>
<a id="trace-11811"></a>
<a id="trace-11825"></a>
<a id="trace-11827"></a>
- 76.25s–77.75s (×7), actor 5, squad 0 (trace 11773): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 11662. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7224215967202562, 'next_transition': 11789}.
<a id="trace-11842"></a>
- 78.20s–78.20s (×1), actor 5, squad 0 (trace 11842): leader risk threshold crossed without support; bounded 45 s observation. Knowledge: actor memory at 78.20s, trace 11842. Next observer evidence: {'until': 78.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7223824086609506, 'next_transition': 11858}.
<a id="trace-11858"></a>
<a id="trace-11860"></a>
- 78.75s–78.75s (×2), actor 5, squad 0 (trace 11858): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 78.20s, trace 11842. Next observer evidence: {'until': 79.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.0835884578010655, 'next_transition': 11880}.
<a id="trace-11880"></a>
- 79.25s–79.25s (×1), actor 4, squad 0 (trace 11880): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8060482501857524, 'next_transition': 11971}.
<a id="trace-11881"></a>
- 79.25s–79.25s (×1), actor 4, squad 0 (trace 11881): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 11661. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.8060482501857524, 'next_transition': 11971}.
<a id="trace-11971"></a>
<a id="trace-11973"></a>
<a id="trace-12008"></a>
<a id="trace-12010"></a>
<a id="trace-12042"></a>
<a id="trace-12044"></a>
<a id="trace-12056"></a>
<a id="trace-12058"></a>
<a id="trace-12072"></a>
<a id="trace-12074"></a>
<a id="trace-12083"></a>
<a id="trace-12085"></a>
<a id="trace-12106"></a>
<a id="trace-12108"></a>
<a id="trace-12122"></a>
<a id="trace-12124"></a>
<a id="trace-12199"></a>
<a id="trace-12201"></a>
<a id="trace-12236"></a>
<a id="trace-12238"></a>
<a id="trace-12272"></a>
<a id="trace-12274"></a>
<a id="trace-12291"></a>
<a id="trace-12293"></a>
<a id="trace-12315"></a>
<a id="trace-12317"></a>
<a id="trace-12330"></a>
<a id="trace-12332"></a>
<a id="trace-12401"></a>
<a id="trace-12403"></a>
<a id="trace-12411"></a>
<a id="trace-12413"></a>
<a id="trace-12427"></a>
<a id="trace-12429"></a>
<a id="trace-12438"></a>
<a id="trace-12440"></a>
<a id="trace-12453"></a>
<a id="trace-12455"></a>
<a id="trace-12465"></a>
<a id="trace-12467"></a>
<a id="trace-12482"></a>
<a id="trace-12484"></a>
<a id="trace-12493"></a>
<a id="trace-12495"></a>
<a id="trace-12521"></a>
<a id="trace-12523"></a>
<a id="trace-12604"></a>
<a id="trace-12606"></a>
<a id="trace-12621"></a>
<a id="trace-12623"></a>
<a id="trace-12645"></a>
<a id="trace-12647"></a>
<a id="trace-12660"></a>
<a id="trace-12662"></a>
<a id="trace-12672"></a>
<a id="trace-12674"></a>
<a id="trace-12688"></a>
<a id="trace-12690"></a>
<a id="trace-12698"></a>
<a id="trace-12700"></a>
<a id="trace-12714"></a>
<a id="trace-12716"></a>
- 80.25s–99.25s (×62), actor 5, squad 0 (trace 11971): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 11906. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7913469079741784, 'next_transition': 12008}.
<a id="trace-1269"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (events line 1269): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-12029"></a>
- 81.80s–81.80s (×1), actor 5, squad 1 (trace 12029): renew committed intent (75 s lifetime). Knowledge: actor memory at 81.80s, trace 12029. Next observer evidence: {'until': 83.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12092}.
<a id="trace-12092"></a>
- 83.80s–83.80s (×1), actor 9, squad 1 (trace 12092): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 80.00s, trace 11908. Next observer evidence: {'until': 86.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12243}.
<a id="trace-12243"></a>
- 86.75s–86.75s (×1), actor 9, squad 1 (trace 12243): MoveTactically. Knowledge: actor memory at 85.00s, trace 12135. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12248}.
<a id="trace-12244"></a>
- 86.75s–86.75s (×1), actor 9, squad 1 (trace 12244): received platoon directive. Knowledge: actor memory at 85.00s, trace 12135. Next observer evidence: {'until': 86.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12248}.
<a id="trace-12248"></a>
- 86.80s–86.80s (×1), actor 9, squad 1 (trace 12248): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 85.00s, trace 12135. Next observer evidence: {'until': 109.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1405}.
<a id="trace-12721"></a>
- 99.30s–99.30s (×1), actor 4, squad 0 (trace 12721): contact broken or rally reached: Occupy and report strength. Knowledge: actor memory at 95.00s, trace 12532. Next observer evidence: {'until': 101.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12826}.
<a id="trace-12826"></a>
<a id="trace-12828"></a>
<a id="trace-12842"></a>
<a id="trace-12844"></a>
<a id="trace-12859"></a>
<a id="trace-12861"></a>
<a id="trace-12876"></a>
<a id="trace-12878"></a>
<a id="trace-12908"></a>
<a id="trace-12910"></a>
<a id="trace-12928"></a>
<a id="trace-12930"></a>
<a id="trace-13032"></a>
<a id="trace-13034"></a>
<a id="trace-13054"></a>
<a id="trace-13056"></a>
<a id="trace-13068"></a>
<a id="trace-13070"></a>
<a id="trace-13083"></a>
<a id="trace-13085"></a>
<a id="trace-13116"></a>
<a id="trace-13118"></a>
<a id="trace-13134"></a>
<a id="trace-13136"></a>
<a id="trace-13219"></a>
<a id="trace-13221"></a>
<a id="trace-13241"></a>
<a id="trace-13243"></a>
<a id="trace-13251"></a>
<a id="trace-13253"></a>
<a id="trace-13276"></a>
<a id="trace-13278"></a>
<a id="trace-13291"></a>
<a id="trace-13293"></a>
<a id="trace-13303"></a>
<a id="trace-13305"></a>
<a id="trace-13317"></a>
<a id="trace-13319"></a>
<a id="trace-13405"></a>
<a id="trace-13407"></a>
<a id="trace-13414"></a>
<a id="trace-13416"></a>
<a id="trace-13434"></a>
<a id="trace-13436"></a>
<a id="trace-13468"></a>
<a id="trace-13470"></a>
<a id="trace-13481"></a>
<a id="trace-13483"></a>
<a id="trace-13500"></a>
<a id="trace-13502"></a>
<a id="trace-13538"></a>
<a id="trace-13540"></a>
<a id="trace-13609"></a>
<a id="trace-13611"></a>
<a id="trace-13620"></a>
<a id="trace-13622"></a>
<a id="trace-13634"></a>
<a id="trace-13636"></a>
<a id="trace-13647"></a>
<a id="trace-13649"></a>
<a id="trace-13663"></a>
<a id="trace-13665"></a>
<a id="trace-13697"></a>
<a id="trace-13699"></a>
- 101.25s–123.25s (×64), actor 5, squad 0 (trace 12826): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 100.00s, trace 12740. Next observer evidence: {'until': 101.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 12842}.
<a id="trace-1405"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (events line 1405): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 114.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13324}.
<a id="trace-13124"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 13124): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.428925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 13124. Next observer evidence: {'until': 114.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13324}.
<a id="trace-13125"></a>
- 109.45s–109.45s (×1), actor 5, squad 1 (trace 13125): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.428925 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 109.45s, trace 13125. Next observer evidence: {'until': 114.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13324}.
<a id="trace-13324"></a>
- 114.40s–114.40s (×1), actor 9, squad 1 (trace 13324): received platoon directive. Knowledge: actor memory at 110.00s, trace 13152. Next observer evidence: {'until': 144.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 1667}.
<a id="trace-1494"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (events line 1494): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13714}.
<a id="trace-13704"></a>
- 123.30s–123.30s (×1), actor 5, squad 0 (trace 13704): renew committed intent (75 s lifetime). Knowledge: actor memory at 123.30s, trace 13704. Next observer evidence: {'until': 123.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13714}.
<a id="trace-13714"></a>
<a id="trace-13716"></a>
<a id="trace-13730"></a>
<a id="trace-13732"></a>
<a id="trace-13743"></a>
<a id="trace-13745"></a>
<a id="trace-13829"></a>
<a id="trace-13831"></a>
<a id="trace-13844"></a>
<a id="trace-13846"></a>
<a id="trace-13856"></a>
<a id="trace-13858"></a>
<a id="trace-13870"></a>
<a id="trace-13872"></a>
<a id="trace-13881"></a>
<a id="trace-13883"></a>
- 123.75s–127.75s (×16), actor 5, squad 0 (trace 13714): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 123.30s, trace 13704. Next observer evidence: {'until': 124.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13730}.
<a id="trace-13905"></a>
- 128.30s–128.30s (×1), actor 4, squad 0 (trace 13905): MoveTactically. Knowledge: actor memory at 125.00s, trace 13755. Next observer evidence: None.
<a id="trace-13906"></a>
- 128.30s–128.30s (×1), actor 4, squad 0 (trace 13906): received platoon directive. Knowledge: actor memory at 125.00s, trace 13755. Next observer evidence: None.
<a id="trace-13915"></a>
- 128.35s–128.35s (×1), actor 4, squad 0 (trace 13915): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 125.00s, trace 13755. Next observer evidence: {'until': 128.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13923}.
<a id="trace-13923"></a>
<a id="trace-13925"></a>
<a id="trace-13943"></a>
<a id="trace-13945"></a>
<a id="trace-13961"></a>
<a id="trace-13963"></a>
<a id="trace-14037"></a>
<a id="trace-14039"></a>
<a id="trace-14061"></a>
<a id="trace-14063"></a>
<a id="trace-14075"></a>
<a id="trace-14077"></a>
<a id="trace-14095"></a>
<a id="trace-14097"></a>
<a id="trace-14132"></a>
<a id="trace-14134"></a>
<a id="trace-14143"></a>
<a id="trace-14145"></a>
<a id="trace-14174"></a>
<a id="trace-14176"></a>
<a id="trace-14256"></a>
<a id="trace-14258"></a>
<a id="trace-14276"></a>
<a id="trace-14278"></a>
<a id="trace-14286"></a>
<a id="trace-14288"></a>
<a id="trace-14316"></a>
<a id="trace-14318"></a>
<a id="trace-14333"></a>
<a id="trace-14335"></a>
<a id="trace-14347"></a>
<a id="trace-14349"></a>
<a id="trace-14366"></a>
<a id="trace-14368"></a>
<a id="trace-14378"></a>
<a id="trace-14380"></a>
<a id="trace-14452"></a>
<a id="trace-14454"></a>
<a id="trace-14461"></a>
<a id="trace-14463"></a>
<a id="trace-14479"></a>
<a id="trace-14481"></a>
<a id="trace-14489"></a>
<a id="trace-14491"></a>
<a id="trace-14506"></a>
<a id="trace-14508"></a>
<a id="trace-14539"></a>
<a id="trace-14541"></a>
<a id="trace-14553"></a>
<a id="trace-14555"></a>
<a id="trace-14580"></a>
<a id="trace-14582"></a>
<a id="trace-14653"></a>
<a id="trace-14655"></a>
<a id="trace-14680"></a>
<a id="trace-14682"></a>
<a id="trace-14690"></a>
<a id="trace-14692"></a>
<a id="trace-14708"></a>
<a id="trace-14710"></a>
<a id="trace-14739"></a>
<a id="trace-14741"></a>
<a id="trace-14750"></a>
<a id="trace-14752"></a>
<a id="trace-14783"></a>
<a id="trace-14785"></a>
<a id="trace-14853"></a>
<a id="trace-14855"></a>
<a id="trace-14864"></a>
<a id="trace-14866"></a>
- 128.80s–150.80s (×70), actor 5, squad 0 (trace 13923): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 125.00s, trace 13756. Next observer evidence: {'until': 129.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 13943}.
<a id="trace-1666"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (events line 1666): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-1667"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (events line 1667): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-14872"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 14872): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.563266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14872. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14886}.
<a id="trace-14873"></a>
- 150.90s–150.90s (×1), actor 5, squad 0 (trace 14873): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.563266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14873. Next observer evidence: {'until': 151.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14886}.
<a id="trace-14874"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 14874): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.563266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14874. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15080}.
<a id="trace-14875"></a>
- 150.90s–150.90s (×1), actor 5, squad 1 (trace 14875): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.563266 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 150.90s, trace 14875. Next observer evidence: {'until': 155.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15080}.
<a id="trace-14886"></a>
<a id="trace-14888"></a>
<a id="trace-14924"></a>
<a id="trace-14926"></a>
<a id="trace-14944"></a>
<a id="trace-14946"></a>
<a id="trace-14956"></a>
<a id="trace-14958"></a>
<a id="trace-14974"></a>
<a id="trace-14976"></a>
<a id="trace-14989"></a>
<a id="trace-14991"></a>
<a id="trace-15059"></a>
<a id="trace-15061"></a>
<a id="trace-15073"></a>
<a id="trace-15075"></a>
- 151.30s–155.80s (×16), actor 5, squad 0 (trace 14886): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 150.90s, trace 14875. Next observer evidence: {'until': 152.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 14924}.
<a id="trace-15080"></a>
- 155.85s–155.85s (×1), actor 9, squad 1 (trace 15080): received platoon directive. Knowledge: actor memory at 155.00s, trace 15000. Next observer evidence: {'until': 176.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15914}.
<a id="trace-15081"></a>
- 155.90s–155.90s (×1), actor 4, squad 0 (trace 15081): received platoon directive. Knowledge: actor memory at 155.00s, trace 14997. Next observer evidence: {'until': 156.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15095}.
<a id="trace-15095"></a>
<a id="trace-15097"></a>
<a id="trace-15106"></a>
<a id="trace-15108"></a>
<a id="trace-15120"></a>
<a id="trace-15122"></a>
<a id="trace-15148"></a>
<a id="trace-15150"></a>
<a id="trace-15160"></a>
<a id="trace-15162"></a>
<a id="trace-15177"></a>
<a id="trace-15179"></a>
<a id="trace-15191"></a>
<a id="trace-15193"></a>
<a id="trace-15266"></a>
<a id="trace-15268"></a>
<a id="trace-15277"></a>
<a id="trace-15279"></a>
<a id="trace-15295"></a>
<a id="trace-15297"></a>
<a id="trace-15324"></a>
<a id="trace-15326"></a>
<a id="trace-15344"></a>
<a id="trace-15346"></a>
<a id="trace-15359"></a>
<a id="trace-15361"></a>
<a id="trace-15383"></a>
<a id="trace-15385"></a>
<a id="trace-15465"></a>
<a id="trace-15467"></a>
<a id="trace-15475"></a>
<a id="trace-15477"></a>
<a id="trace-15518"></a>
<a id="trace-15520"></a>
<a id="trace-15536"></a>
<a id="trace-15538"></a>
<a id="trace-15552"></a>
<a id="trace-15554"></a>
<a id="trace-15570"></a>
<a id="trace-15572"></a>
<a id="trace-15600"></a>
<a id="trace-15602"></a>
<a id="trace-15671"></a>
<a id="trace-15673"></a>
<a id="trace-15680"></a>
<a id="trace-15682"></a>
<a id="trace-15703"></a>
<a id="trace-15705"></a>
<a id="trace-15720"></a>
<a id="trace-15722"></a>
<a id="trace-15733"></a>
<a id="trace-15735"></a>
<a id="trace-15748"></a>
<a id="trace-15750"></a>
<a id="trace-15782"></a>
<a id="trace-15784"></a>
<a id="trace-15798"></a>
<a id="trace-15800"></a>
<a id="trace-15871"></a>
<a id="trace-15873"></a>
<a id="trace-15881"></a>
<a id="trace-15883"></a>
<a id="trace-15904"></a>
<a id="trace-15906"></a>
- 156.30s–176.30s (×64), actor 5, squad 0 (trace 15095): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 155.00s, trace 14998. Next observer evidence: {'until': 156.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15106}.
<a id="trace-15912"></a>
- 176.65s–176.65s (×1), actor 4, squad 0 (trace 15912): traveling overwatch. Knowledge: actor memory at 175.00s, trace 15805. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15970}.
<a id="trace-15913"></a>
- 176.65s–176.65s (×1), actor 4, squad 0 (trace 15913): current contact unknown for 10 s. Knowledge: actor memory at 175.00s, trace 15805. Next observer evidence: {'until': 176.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 15970}.
<a id="trace-15914"></a>
- 176.65s–176.65s (×1), actor 9, squad 1 (trace 15914): traveling. Knowledge: actor memory at 175.00s, trace 15808. Next observer evidence: {'until': 178.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567416577026888, 'next_transition': 1839}.
<a id="trace-15915"></a>
- 176.65s–176.65s (×1), actor 9, squad 1 (trace 15915): current contact unknown for 10 s. Knowledge: actor memory at 175.00s, trace 15808. Next observer evidence: {'until': 178.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 4.567416577026888, 'next_transition': 1839}.
<a id="trace-15970"></a>
<a id="trace-15972"></a>
<a id="trace-16000"></a>
<a id="trace-16002"></a>
<a id="trace-16020"></a>
<a id="trace-16022"></a>
- 176.80s–178.30s (×6), actor 5, squad 0 (trace 15970): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 175.00s, trace 15806. Next observer evidence: {'until': 177.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16000}.
<a id="trace-1838"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (events line 1838): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16051}.
<a id="trace-1839"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (events line 1839): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.43257065619016, 'next_transition': 16235}.
<a id="trace-16029"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 16029): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 16029. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16051}.
<a id="trace-16030"></a>
- 178.55s–178.55s (×1), actor 5, squad 0 (trace 16030): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 16030. Next observer evidence: {'until': 179.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16051}.
<a id="trace-16031"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (trace 16031): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 16031. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.43257065619016, 'next_transition': 16235}.
<a id="trace-16032"></a>
- 178.55s–178.55s (×1), actor 5, squad 1 (trace 16032): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 178.55s, trace 16032. Next observer evidence: {'until': 182.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 10.43257065619016, 'next_transition': 16235}.
<a id="trace-16051"></a>
<a id="trace-16053"></a>
<a id="trace-16066"></a>
<a id="trace-16068"></a>
<a id="trace-16138"></a>
<a id="trace-16140"></a>
<a id="trace-16149"></a>
<a id="trace-16151"></a>
<a id="trace-16175"></a>
<a id="trace-16177"></a>
<a id="trace-16186"></a>
<a id="trace-16188"></a>
<a id="trace-16207"></a>
<a id="trace-16209"></a>
<a id="trace-16227"></a>
<a id="trace-16229"></a>
<a id="trace-16249"></a>
<a id="trace-16251"></a>
<a id="trace-16261"></a>
<a id="trace-16263"></a>
<a id="trace-16276"></a>
<a id="trace-16278"></a>
<a id="trace-16287"></a>
<a id="trace-16289"></a>
<a id="trace-16357"></a>
<a id="trace-16359"></a>
<a id="trace-16368"></a>
<a id="trace-16370"></a>
<a id="trace-16382"></a>
<a id="trace-16384"></a>
<a id="trace-16395"></a>
<a id="trace-16397"></a>
<a id="trace-16409"></a>
<a id="trace-16411"></a>
<a id="trace-16444"></a>
<a id="trace-16446"></a>
<a id="trace-16461"></a>
<a id="trace-16463"></a>
<a id="trace-16483"></a>
<a id="trace-16485"></a>
<a id="trace-16495"></a>
<a id="trace-16497"></a>
<a id="trace-16568"></a>
<a id="trace-16570"></a>
<a id="trace-16577"></a>
<a id="trace-16579"></a>
<a id="trace-16592"></a>
<a id="trace-16594"></a>
<a id="trace-16603"></a>
<a id="trace-16605"></a>
<a id="trace-16617"></a>
<a id="trace-16619"></a>
<a id="trace-16632"></a>
<a id="trace-16634"></a>
<a id="trace-16648"></a>
<a id="trace-16650"></a>
<a id="trace-16659"></a>
<a id="trace-16661"></a>
<a id="trace-16678"></a>
<a id="trace-16680"></a>
<a id="trace-16690"></a>
<a id="trace-16692"></a>
<a id="trace-16767"></a>
<a id="trace-16769"></a>
<a id="trace-16786"></a>
<a id="trace-16788"></a>
<a id="trace-16803"></a>
<a id="trace-16805"></a>
<a id="trace-16812"></a>
<a id="trace-16814"></a>
<a id="trace-16856"></a>
<a id="trace-16858"></a>
<a id="trace-16869"></a>
<a id="trace-16871"></a>
<a id="trace-16883"></a>
<a id="trace-16885"></a>
<a id="trace-16894"></a>
<a id="trace-16896"></a>
<a id="trace-16976"></a>
<a id="trace-16978"></a>
<a id="trace-16993"></a>
<a id="trace-16995"></a>
<a id="trace-17005"></a>
<a id="trace-17007"></a>
<a id="trace-17029"></a>
<a id="trace-17031"></a>
<a id="trace-17044"></a>
<a id="trace-17046"></a>
<a id="trace-17061"></a>
<a id="trace-17063"></a>
<a id="trace-17076"></a>
<a id="trace-17078"></a>
<a id="trace-17104"></a>
<a id="trace-17106"></a>
<a id="trace-17175"></a>
<a id="trace-17177"></a>
<a id="trace-17184"></a>
<a id="trace-17186"></a>
<a id="trace-17199"></a>
<a id="trace-17201"></a>
<a id="trace-17208"></a>
<a id="trace-17210"></a>
<a id="trace-17226"></a>
<a id="trace-17228"></a>
<a id="trace-17241"></a>
<a id="trace-17243"></a>
<a id="trace-17259"></a>
<a id="trace-17261"></a>
<a id="trace-17294"></a>
<a id="trace-17296"></a>
<a id="trace-17379"></a>
<a id="trace-17381"></a>
<a id="trace-17391"></a>
<a id="trace-17393"></a>
<a id="trace-17405"></a>
<a id="trace-17407"></a>
<a id="trace-17415"></a>
<a id="trace-17417"></a>
<a id="trace-17432"></a>
<a id="trace-17434"></a>
<a id="trace-17446"></a>
<a id="trace-17448"></a>
<a id="trace-17472"></a>
<a id="trace-17474"></a>
<a id="trace-17491"></a>
<a id="trace-17493"></a>
<a id="trace-17502"></a>
<a id="trace-17504"></a>
<a id="trace-17575"></a>
<a id="trace-17577"></a>
<a id="trace-17618"></a>
<a id="trace-17620"></a>
<a id="trace-17634"></a>
<a id="trace-17636"></a>
<a id="trace-17648"></a>
<a id="trace-17650"></a>
<a id="trace-17665"></a>
<a id="trace-17667"></a>
<a id="trace-17694"></a>
<a id="trace-17696"></a>
<a id="trace-17705"></a>
<a id="trace-17707"></a>
<a id="trace-17776"></a>
<a id="trace-17778"></a>
<a id="trace-17788"></a>
<a id="trace-17790"></a>
<a id="trace-17815"></a>
<a id="trace-17817"></a>
<a id="trace-17848"></a>
<a id="trace-17850"></a>
<a id="trace-17867"></a>
<a id="trace-17869"></a>
<a id="trace-17879"></a>
<a id="trace-17881"></a>
<a id="trace-17896"></a>
<a id="trace-17898"></a>
<a id="trace-17909"></a>
<a id="trace-17911"></a>
<a id="trace-17982"></a>
<a id="trace-17984"></a>
<a id="trace-17993"></a>
<a id="trace-17995"></a>
- 179.30s–225.80s (×162), actor 5, squad 0 (trace 16051): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 178.55s, trace 16032. Next observer evidence: {'until': 179.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 16066}.
<a id="trace-16235"></a>
- 182.90s–182.90s (×1), actor 9, squad 1 (trace 16235): traveling overwatch. Knowledge: actor memory at 180.00s, trace 16076. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18003}.
<a id="trace-16236"></a>
- 182.90s–182.90s (×1), actor 9, squad 1 (trace 16236): matching received arrivals: traveling stage complete. Knowledge: actor memory at 180.00s, trace 16076. Next observer evidence: {'until': 212.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18003}.
<a id="trace-18000"></a>
- 225.90s–225.90s (×1), actor 4, squad 0 (trace 18000): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 17918. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18016}.
<a id="trace-18001"></a>
- 225.90s–225.90s (×1), actor 4, squad 0 (trace 18001): MoveTactically. Knowledge: actor memory at 225.00s, trace 17918. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18016}.
<a id="trace-18002"></a>
- 225.90s–225.90s (×1), actor 4, squad 0 (trace 18002): . Knowledge: actor memory at 225.00s, trace 17918. Next observer evidence: {'until': 226.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18016}.
<a id="trace-18003"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 18003): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 225.00s, trace 17921. Next observer evidence: {'until': 247.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2252}.
<a id="trace-18004"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 18004): MoveTactically. Knowledge: actor memory at 225.00s, trace 17921. Next observer evidence: {'until': 247.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2252}.
<a id="trace-18005"></a>
- 225.90s–225.90s (×1), actor 9, squad 1 (trace 18005): . Knowledge: actor memory at 225.00s, trace 17921. Next observer evidence: {'until': 247.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2252}.
<a id="trace-18016"></a>
<a id="trace-18018"></a>
<a id="trace-18041"></a>
<a id="trace-18043"></a>
<a id="trace-18056"></a>
<a id="trace-18058"></a>
<a id="trace-18078"></a>
<a id="trace-18080"></a>
<a id="trace-18100"></a>
<a id="trace-18102"></a>
<a id="trace-18127"></a>
<a id="trace-18129"></a>
<a id="trace-18213"></a>
<a id="trace-18215"></a>
<a id="trace-18230"></a>
<a id="trace-18232"></a>
<a id="trace-18242"></a>
<a id="trace-18244"></a>
<a id="trace-18258"></a>
<a id="trace-18260"></a>
<a id="trace-18270"></a>
<a id="trace-18272"></a>
<a id="trace-18302"></a>
<a id="trace-18304"></a>
<a id="trace-18318"></a>
<a id="trace-18320"></a>
<a id="trace-18334"></a>
<a id="trace-18336"></a>
<a id="trace-18411"></a>
<a id="trace-18413"></a>
<a id="trace-18433"></a>
<a id="trace-18435"></a>
<a id="trace-18443"></a>
<a id="trace-18445"></a>
<a id="trace-18462"></a>
<a id="trace-18464"></a>
<a id="trace-18475"></a>
<a id="trace-18477"></a>
<a id="trace-18490"></a>
<a id="trace-18492"></a>
<a id="trace-18503"></a>
<a id="trace-18505"></a>
<a id="trace-18522"></a>
<a id="trace-18524"></a>
<a id="trace-18535"></a>
<a id="trace-18537"></a>
<a id="trace-18608"></a>
<a id="trace-18610"></a>
<a id="trace-18623"></a>
<a id="trace-18625"></a>
<a id="trace-18647"></a>
<a id="trace-18649"></a>
<a id="trace-18667"></a>
<a id="trace-18669"></a>
<a id="trace-18704"></a>
<a id="trace-18706"></a>
<a id="trace-18724"></a>
<a id="trace-18726"></a>
<a id="trace-18736"></a>
<a id="trace-18738"></a>
<a id="trace-18806"></a>
<a id="trace-18808"></a>
<a id="trace-18819"></a>
<a id="trace-18821"></a>
<a id="trace-18835"></a>
<a id="trace-18837"></a>
<a id="trace-18864"></a>
<a id="trace-18866"></a>
- 226.30s–247.30s (×68), actor 5, squad 0 (trace 18016): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 225.00s, trace 17919. Next observer evidence: {'until': 227.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18041}.
<a id="trace-2251"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (events line 2251): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2252"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (events line 2252): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-18871"></a>
- 247.60s–247.60s (×1), actor 5, squad 0 (trace 18871): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.60s, trace 18871. Next observer evidence: {'until': 248.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18899}.
<a id="trace-18872"></a>
- 247.60s–247.60s (×1), actor 5, squad 1 (trace 18872): renew committed intent (75 s lifetime). Knowledge: actor memory at 247.60s, trace 18872. Next observer evidence: {'until': 277.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2670}.
<a id="trace-18899"></a>
<a id="trace-18901"></a>
<a id="trace-18917"></a>
<a id="trace-18919"></a>
<a id="trace-18934"></a>
<a id="trace-18936"></a>
<a id="trace-18946"></a>
<a id="trace-18948"></a>
<a id="trace-19017"></a>
<a id="trace-19019"></a>
<a id="trace-19027"></a>
<a id="trace-19029"></a>
<a id="trace-19044"></a>
<a id="trace-19046"></a>
<a id="trace-19056"></a>
<a id="trace-19058"></a>
<a id="trace-19070"></a>
<a id="trace-19072"></a>
- 248.30s–252.30s (×18), actor 5, squad 0 (trace 18899): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 247.60s, trace 18872. Next observer evidence: {'until': 248.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 18917}.
<a id="trace-19078"></a>
- 252.60s–252.60s (×1), actor 4, squad 0 (trace 19078): received platoon directive. Knowledge: actor memory at 250.00s, trace 18953. Next observer evidence: {'until': 252.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19085}.
<a id="trace-19085"></a>
<a id="trace-19087"></a>
<a id="trace-19103"></a>
<a id="trace-19105"></a>
<a id="trace-19119"></a>
<a id="trace-19121"></a>
<a id="trace-19135"></a>
<a id="trace-19137"></a>
<a id="trace-19150"></a>
<a id="trace-19152"></a>
<a id="trace-19229"></a>
<a id="trace-19231"></a>
<a id="trace-19239"></a>
<a id="trace-19241"></a>
<a id="trace-19262"></a>
<a id="trace-19264"></a>
<a id="trace-19276"></a>
<a id="trace-19278"></a>
<a id="trace-19291"></a>
<a id="trace-19293"></a>
<a id="trace-19307"></a>
<a id="trace-19309"></a>
<a id="trace-19323"></a>
<a id="trace-19325"></a>
<a id="trace-19347"></a>
<a id="trace-19349"></a>
<a id="trace-19432"></a>
<a id="trace-19434"></a>
<a id="trace-19452"></a>
<a id="trace-19454"></a>
<a id="trace-19494"></a>
<a id="trace-19496"></a>
<a id="trace-19508"></a>
<a id="trace-19510"></a>
<a id="trace-19523"></a>
<a id="trace-19525"></a>
<a id="trace-19538"></a>
<a id="trace-19540"></a>
<a id="trace-19551"></a>
<a id="trace-19553"></a>
<a id="trace-19646"></a>
<a id="trace-19648"></a>
<a id="trace-19658"></a>
<a id="trace-19660"></a>
<a id="trace-19691"></a>
<a id="trace-19693"></a>
<a id="trace-19723"></a>
<a id="trace-19725"></a>
<a id="trace-19739"></a>
<a id="trace-19741"></a>
<a id="trace-19754"></a>
<a id="trace-19756"></a>
<a id="trace-19835"></a>
<a id="trace-19837"></a>
<a id="trace-19857"></a>
<a id="trace-19859"></a>
<a id="trace-19875"></a>
<a id="trace-19877"></a>
<a id="trace-19887"></a>
<a id="trace-19889"></a>
<a id="trace-19906"></a>
<a id="trace-19908"></a>
<a id="trace-19919"></a>
<a id="trace-19921"></a>
<a id="trace-19938"></a>
<a id="trace-19940"></a>
<a id="trace-19950"></a>
<a id="trace-19952"></a>
<a id="trace-20029"></a>
<a id="trace-20031"></a>
<a id="trace-20054"></a>
<a id="trace-20056"></a>
<a id="trace-20067"></a>
<a id="trace-20069"></a>
<a id="trace-20082"></a>
<a id="trace-20084"></a>
<a id="trace-20095"></a>
<a id="trace-20097"></a>
<a id="trace-20110"></a>
<a id="trace-20112"></a>
<a id="trace-20123"></a>
<a id="trace-20125"></a>
<a id="trace-20142"></a>
<a id="trace-20144"></a>
<a id="trace-20154"></a>
<a id="trace-20156"></a>
<a id="trace-20228"></a>
<a id="trace-20230"></a>
<a id="trace-20253"></a>
<a id="trace-20255"></a>
<a id="trace-20284"></a>
<a id="trace-20286"></a>
<a id="trace-20300"></a>
<a id="trace-20302"></a>
<a id="trace-20314"></a>
<a id="trace-20316"></a>
<a id="trace-20327"></a>
<a id="trace-20329"></a>
<a id="trace-20346"></a>
<a id="trace-20348"></a>
<a id="trace-20358"></a>
<a id="trace-20360"></a>
<a id="trace-20430"></a>
<a id="trace-20432"></a>
<a id="trace-20439"></a>
<a id="trace-20441"></a>
<a id="trace-20457"></a>
<a id="trace-20459"></a>
<a id="trace-20470"></a>
<a id="trace-20472"></a>
<a id="trace-20484"></a>
<a id="trace-20486"></a>
<a id="trace-20500"></a>
<a id="trace-20502"></a>
<a id="trace-20520"></a>
<a id="trace-20522"></a>
<a id="trace-20535"></a>
<a id="trace-20537"></a>
<a id="trace-20553"></a>
<a id="trace-20555"></a>
<a id="trace-20564"></a>
<a id="trace-20566"></a>
<a id="trace-20637"></a>
<a id="trace-20639"></a>
<a id="trace-20663"></a>
<a id="trace-20665"></a>
<a id="trace-20674"></a>
<a id="trace-20676"></a>
<a id="trace-20689"></a>
<a id="trace-20691"></a>
<a id="trace-20702"></a>
<a id="trace-20704"></a>
<a id="trace-20766"></a>
<a id="trace-20768"></a>
<a id="trace-20844"></a>
<a id="trace-20846"></a>
<a id="trace-20860"></a>
<a id="trace-20862"></a>
<a id="trace-20872"></a>
<a id="trace-20874"></a>
<a id="trace-20889"></a>
<a id="trace-20891"></a>
<a id="trace-20918"></a>
<a id="trace-20920"></a>
<a id="trace-20930"></a>
<a id="trace-20932"></a>
<a id="trace-20946"></a>
<a id="trace-20948"></a>
<a id="trace-21033"></a>
<a id="trace-21035"></a>
<a id="trace-21048"></a>
<a id="trace-21050"></a>
<a id="trace-21068"></a>
<a id="trace-21070"></a>
<a id="trace-21091"></a>
<a id="trace-21093"></a>
<a id="trace-21103"></a>
<a id="trace-21105"></a>
<a id="trace-21120"></a>
<a id="trace-21122"></a>
<a id="trace-21159"></a>
<a id="trace-21161"></a>
<a id="trace-21229"></a>
<a id="trace-21231"></a>
<a id="trace-21245"></a>
<a id="trace-21247"></a>
<a id="trace-21289"></a>
<a id="trace-21291"></a>
<a id="trace-21355"></a>
<a id="trace-21357"></a>
<a id="trace-21426"></a>
<a id="trace-21428"></a>
<a id="trace-21437"></a>
<a id="trace-21439"></a>
<a id="trace-21454"></a>
<a id="trace-21456"></a>
<a id="trace-21466"></a>
<a id="trace-21468"></a>
<a id="trace-21481"></a>
<a id="trace-21483"></a>
<a id="trace-21514"></a>
<a id="trace-21516"></a>
<a id="trace-21547"></a>
<a id="trace-21549"></a>
<a id="trace-21564"></a>
<a id="trace-21566"></a>
<a id="trace-21643"></a>
<a id="trace-21645"></a>
<a id="trace-21659"></a>
<a id="trace-21661"></a>
- 252.80s–316.30s (×190), actor 5, squad 0 (trace 19085): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 250.00s, trace 18954. Next observer evidence: {'until': 253.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 19103}.
<a id="trace-2669"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (events line 2669): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-2670"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (events line 2670): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-21667"></a>
- 316.60s–316.60s (×1), actor 5, squad 0 (trace 21667): renew committed intent (75 s lifetime). Knowledge: actor memory at 316.60s, trace 21667. Next observer evidence: {'until': 316.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21672}.
<a id="trace-21668"></a>
- 316.60s–316.60s (×1), actor 5, squad 1 (trace 21668): renew committed intent (75 s lifetime). Knowledge: actor memory at 316.60s, trace 21668. Next observer evidence: {'until': 321.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21873}.
<a id="trace-21672"></a>
<a id="trace-21674"></a>
<a id="trace-21686"></a>
<a id="trace-21688"></a>
<a id="trace-21743"></a>
<a id="trace-21745"></a>
<a id="trace-21758"></a>
<a id="trace-21760"></a>
<a id="trace-21843"></a>
<a id="trace-21845"></a>
<a id="trace-21866"></a>
<a id="trace-21868"></a>
<a id="trace-21877"></a>
<a id="trace-21879"></a>
<a id="trace-21892"></a>
<a id="trace-21894"></a>
- 316.80s–322.30s (×16), actor 5, squad 0 (trace 21672): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 316.60s, trace 21668. Next observer evidence: {'until': 317.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21686}.
<a id="trace-21873"></a>
- 321.55s–321.55s (×1), actor 9, squad 1 (trace 21873): received platoon directive. Knowledge: actor memory at 320.00s, trace 21772. Next observer evidence: {'until': 351.4, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': None}.
<a id="trace-21900"></a>
- 322.60s–322.60s (×1), actor 4, squad 0 (trace 21900): platoon directive expired: squad-autonomous drills in local area. Knowledge: actor memory at 320.00s, trace 21769. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21907}.
<a id="trace-21901"></a>
- 322.60s–322.60s (×1), actor 4, squad 0 (trace 21901): MoveTactically. Knowledge: actor memory at 320.00s, trace 21769. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21907}.
<a id="trace-21902"></a>
- 322.60s–322.60s (×1), actor 4, squad 0 (trace 21902): . Knowledge: actor memory at 320.00s, trace 21769. Next observer evidence: {'until': 322.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21907}.
<a id="trace-21907"></a>
<a id="trace-21909"></a>
<a id="trace-21921"></a>
<a id="trace-21923"></a>
<a id="trace-21936"></a>
<a id="trace-21938"></a>
<a id="trace-21955"></a>
<a id="trace-21957"></a>
<a id="trace-21969"></a>
<a id="trace-21971"></a>
<a id="trace-22047"></a>
<a id="trace-22049"></a>
<a id="trace-22058"></a>
<a id="trace-22060"></a>
<a id="trace-22088"></a>
<a id="trace-22090"></a>
<a id="trace-22111"></a>
<a id="trace-22113"></a>
<a id="trace-22129"></a>
<a id="trace-22131"></a>
<a id="trace-22147"></a>
<a id="trace-22149"></a>
<a id="trace-22171"></a>
<a id="trace-22173"></a>
<a id="trace-22254"></a>
<a id="trace-22256"></a>
<a id="trace-22266"></a>
<a id="trace-22268"></a>
<a id="trace-22280"></a>
<a id="trace-22282"></a>
<a id="trace-22304"></a>
<a id="trace-22306"></a>
<a id="trace-22321"></a>
<a id="trace-22323"></a>
<a id="trace-22353"></a>
<a id="trace-22355"></a>
<a id="trace-22375"></a>
<a id="trace-22377"></a>
<a id="trace-22388"></a>
<a id="trace-22390"></a>
<a id="trace-22463"></a>
<a id="trace-22465"></a>
<a id="trace-22474"></a>
<a id="trace-22476"></a>
<a id="trace-22488"></a>
<a id="trace-22490"></a>
<a id="trace-22499"></a>
<a id="trace-22501"></a>
<a id="trace-22523"></a>
<a id="trace-22525"></a>
<a id="trace-22548"></a>
<a id="trace-22550"></a>
<a id="trace-22580"></a>
<a id="trace-22582"></a>
<a id="trace-22657"></a>
<a id="trace-22659"></a>
<a id="trace-22667"></a>
<a id="trace-22669"></a>
<a id="trace-22688"></a>
<a id="trace-22690"></a>
<a id="trace-22702"></a>
<a id="trace-22704"></a>
<a id="trace-22732"></a>
<a id="trace-22734"></a>
<a id="trace-22755"></a>
<a id="trace-22757"></a>
<a id="trace-22770"></a>
<a id="trace-22772"></a>
<a id="trace-22854"></a>
<a id="trace-22856"></a>
<a id="trace-22880"></a>
<a id="trace-22882"></a>
<a id="trace-22889"></a>
<a id="trace-22891"></a>
<a id="trace-22909"></a>
<a id="trace-22911"></a>
<a id="trace-22930"></a>
<a id="trace-22932"></a>
<a id="trace-22944"></a>
<a id="trace-22946"></a>
<a id="trace-22961"></a>
<a id="trace-22963"></a>
<a id="trace-22978"></a>
<a id="trace-22980"></a>
<a id="trace-22990"></a>
<a id="trace-22992"></a>
<a id="trace-23063"></a>
<a id="trace-23065"></a>
<a id="trace-23072"></a>
<a id="trace-23074"></a>
<a id="trace-23088"></a>
<a id="trace-23090"></a>
<a id="trace-23097"></a>
<a id="trace-23099"></a>
<a id="trace-23112"></a>
<a id="trace-23114"></a>
<a id="trace-23140"></a>
<a id="trace-23142"></a>
<a id="trace-23191"></a>
<a id="trace-23193"></a>
<a id="trace-23292"></a>
<a id="trace-23294"></a>
<a id="trace-23315"></a>
<a id="trace-23317"></a>
<a id="trace-23327"></a>
<a id="trace-23329"></a>
<a id="trace-23342"></a>
<a id="trace-23344"></a>
<a id="trace-23353"></a>
<a id="trace-23355"></a>
<a id="trace-23370"></a>
<a id="trace-23372"></a>
<a id="trace-23384"></a>
<a id="trace-23386"></a>
- 322.80s–359.80s (×114), actor 5, squad 0 (trace 21907): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 320.00s, trace 21770. Next observer evidence: {'until': 323.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 21921}.

## Net delivery

158 matched order/radio deliveries; 506 explicitly recorded losses; 0 unmatched orders (not classified as lost).
Matched delay: mean 0.420s; maximum 5.100s. Message-level evidence is in the companion JSON.

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
- 12.75s leader 5, trace 1382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 12.75s leader 5, trace 1383: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 2, trace 1786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 3, trace 1787: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1788: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 8, trace 1792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 9, trace 1793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 34, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 35, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 40, trace 1802: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 41, trace 1803: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 4227: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 4228: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 2, trace 4229: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 3, trace 4230: estimate 7.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 4231: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 4232: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 4233: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 4234: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 8, trace 4235: estimate 8.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 9, trace 4236: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 4237: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 4238: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 34, trace 4239: estimate 4.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 35, trace 4240: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 4241: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 4242: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 4243: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 4244: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 40, trace 4245: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 41, trace 4246: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 5024: estimate 9.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 5025: estimate 8.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 2, trace 5026: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 3, trace 5027: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 5028: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 5029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 5030: estimate 6.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 5031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 9, trace 5032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 5033: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 5034: estimate 3.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 34, trace 5035: estimate 3.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 35, trace 5036: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 5037: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 5038: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 5039: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 5040: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 40, trace 5041: estimate 5.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 41, trace 5042: estimate 4.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5899: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 26.55s leader 5, trace 5900: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 6085: estimate 8.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 2, trace 6086: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 3, trace 6087: estimate 8.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 6088: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 6089: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 6090: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 6091: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 9, trace 6092: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 6093: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 6094: estimate 4.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 34, trace 6095: estimate 4.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 35, trace 6096: estimate 4.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 6097: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 6098: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 6099: estimate 5.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 6100: estimate 4.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 40, trace 6101: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 41, trace 6102: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 8296: estimate 8.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 2, trace 8297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 3, trace 8298: estimate 8.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 8299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 8300: estimate 8.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 8301: estimate 6.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 8302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 9, trace 8303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 8304: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 8305: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 34, trace 8306: estimate 5.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 35, trace 8307: estimate 5.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 8308: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 8309: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 8310: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 8311: estimate 5.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 40, trace 8312: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 41, trace 8313: estimate 6.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 1, trace 8958: estimate 9.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 3, trace 8959: estimate 11.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 8960: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 8961: estimate 9.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 8962: estimate 8.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 8963: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 9, trace 8964: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 8965: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 8966: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 34, trace 8967: estimate 5.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 35, trace 8968: estimate 5.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 8969: estimate 4.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 8970: estimate 6.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 8971: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 8972: estimate 5.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 40, trace 8973: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 41, trace 8974: estimate 12.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 1, trace 9626: estimate 11.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 9627: estimate 1.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 9628: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 9629: estimate 8.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 9630: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 9, trace 9631: estimate 1.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 9632: estimate 6.75; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 9633: estimate 6.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 34, trace 9634: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 35, trace 9635: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 9636: estimate 5.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 9637: estimate 7.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 9638: estimate 12.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 9639: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 40, trace 9640: estimate 13.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 41, trace 9641: estimate 12.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 1, trace 9904: estimate 11.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 9905: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 9906: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 9907: estimate 11.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 9908: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 9, trace 9909: estimate 1.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 9910: estimate 13.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 9911: estimate 6.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 34, trace 9912: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 35, trace 9913: estimate 6.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 9914: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 9915: estimate 13.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 9916: estimate 13.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 9917: estimate 6.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 40, trace 9918: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 10108: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 54.15s leader 5, trace 10109: estimate 12.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 1, trace 10142: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 10143: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 10144: estimate 12.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 10145: estimate 11.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 10146: estimate 10.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 9, trace 10147: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 10148: estimate 13.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 10149: estimate 7.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 34, trace 10150: estimate 7.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 35, trace 10151: estimate 6.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 10152: estimate 6.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 10153: estimate 13.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 10154: estimate 13.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 10155: estimate 6.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 40, trace 10156: estimate 13.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 1, trace 10497: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 10498: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 10499: estimate 12.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 10500: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 10501: estimate 11.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 9, trace 10502: estimate 2.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 10503: estimate 13.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 10504: estimate 7.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 34, trace 10505: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 35, trace 10506: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 10507: estimate 6.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 10508: estimate 13.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 10509: estimate 13.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 10510: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 40, trace 10511: estimate 13.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 1, trace 10886: estimate 11.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 10887: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 10888: estimate 12.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 10889: estimate 11.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 10890: estimate 11.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 9, trace 10891: estimate 2.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 10892: estimate 12.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 10893: estimate 7.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 34, trace 10894: estimate 7.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 35, trace 10895: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 10896: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 10897: estimate 12.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 10898: estimate 12.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 10899: estimate 11.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 40, trace 10900: estimate 12.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 11279: estimate 1.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 11280: estimate 12.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 11281: estimate 11.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 11282: estimate 11.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 9, trace 11283: estimate 2.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 11284: estimate 12.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 11285: estimate 7.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 34, trace 11286: estimate 7.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 35, trace 11287: estimate 7.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 11288: estimate 6.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 11289: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 11290: estimate 12.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 11291: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 40, trace 11292: estimate 12.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 11661: estimate 11.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 11662: estimate 12.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 11663: estimate 11.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 9, trace 11664: estimate 2.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 11665: estimate 12.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 11666: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 34, trace 11667: estimate 7.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 35, trace 11668: estimate 7.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 36, trace 11669: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 11670: estimate 12.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 11671: estimate 12.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 11672: estimate 11.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 40, trace 11673: estimate 12.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 78.20s leader 5, trace 11842: estimate 12.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 11905: estimate 11.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 11906: estimate 12.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 11907: estimate 11.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 9, trace 11908: estimate 2.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 11909: estimate 12.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 11910: estimate 7.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 34, trace 11911: estimate 7.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 35, trace 11912: estimate 7.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 36, trace 11913: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 11914: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 11915: estimate 12.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 11916: estimate 11.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 40, trace 11917: estimate 12.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 81.80s leader 5, trace 12029: estimate 12.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 4, trace 12132: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 12133: estimate 12.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 12134: estimate 11.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 9, trace 12135: estimate 2.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 12136: estimate 12.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 12137: estimate 6.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 34, trace 12138: estimate 6.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 35, trace 12139: estimate 7.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 36, trace 12140: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 12141: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 12142: estimate 11.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 12143: estimate 10.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 40, trace 12144: estimate 12.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 4, trace 12338: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 12339: estimate 12.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 12340: estimate 10.95; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 9, trace 12341: estimate 2.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 12342: estimate 12.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 12343: estimate 6.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 34, trace 12344: estimate 6.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 35, trace 12345: estimate 6.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 36, trace 12346: estimate 6.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 12347: estimate 11.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 12348: estimate 11.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 12349: estimate 10.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 40, trace 12350: estimate 11.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 4, trace 12532: estimate 10.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 12533: estimate 12.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 12534: estimate 10.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 9, trace 12535: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 12536: estimate 11.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 12537: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 34, trace 12538: estimate 6.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 35, trace 12539: estimate 6.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 36, trace 12540: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 12541: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 12542: estimate 11.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 12543: estimate 10.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 40, trace 12544: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 4, trace 12739: estimate 10.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 12740: estimate 12.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 12741: estimate 10.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 9, trace 12742: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 12743: estimate 11.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 12744: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 34, trace 12745: estimate 6.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 35, trace 12746: estimate 6.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 36, trace 12747: estimate 5.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 12748: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 12749: estimate 11.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 12750: estimate 10.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 40, trace 12751: estimate 11.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 4, trace 12948: estimate 10.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 12949: estimate 11.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 12950: estimate 10.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 9, trace 12951: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 12952: estimate 11.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 12953: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 34, trace 12954: estimate 6.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 35, trace 12955: estimate 6.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 36, trace 12956: estimate 5.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 12957: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 12958: estimate 11.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 12959: estimate 10.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 40, trace 12960: estimate 11.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 13124: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 109.45s leader 5, trace 13125: estimate 11.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 4, trace 13149: estimate 10.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 13150: estimate 11.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 13151: estimate 10.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 9, trace 13152: estimate 2.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 13153: estimate 11.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 13154: estimate 6.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 34, trace 13155: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 35, trace 13156: estimate 6.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 36, trace 13157: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 13158: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 13159: estimate 10.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 13160: estimate 9.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 40, trace 13161: estimate 11.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 4, trace 13342: estimate 10.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 13343: estimate 11.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 13344: estimate 9.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 9, trace 13345: estimate 2.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 13346: estimate 10.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 13347: estimate 6.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 34, trace 13348: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 35, trace 13349: estimate 6.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 36, trace 13350: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 13351: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 13352: estimate 10.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 13353: estimate 9.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 40, trace 13354: estimate 10.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 4, trace 13546: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 13547: estimate 11.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 13548: estimate 9.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 9, trace 13549: estimate 2.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 13550: estimate 10.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 13551: estimate 5.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 34, trace 13552: estimate 6.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 35, trace 13553: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 36, trace 13554: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 13555: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 13556: estimate 10.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 13557: estimate 9.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 40, trace 13558: estimate 10.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 123.30s leader 5, trace 13704: estimate 11.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 4, trace 13755: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 13756: estimate 11.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 13757: estimate 9.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 9, trace 13758: estimate 2.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 13759: estimate 10.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 13760: estimate 5.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 34, trace 13761: estimate 5.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 35, trace 13762: estimate 5.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 36, trace 13763: estimate 5.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 13764: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 13765: estimate 9.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 13766: estimate 8.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 40, trace 13767: estimate 9.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 4, trace 13971: estimate 9.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 13972: estimate 10.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 13973: estimate 9.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 9, trace 13974: estimate 2.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 13975: estimate 9.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 13976: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 34, trace 13977: estimate 4.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 35, trace 13978: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 36, trace 13979: estimate 4.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 13980: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 13981: estimate 8.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 13982: estimate 7.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 40, trace 13983: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 4, trace 14182: estimate 9.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 14183: estimate 10.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 14184: estimate 9.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 9, trace 14185: estimate 2.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 14186: estimate 9.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 14187: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 34, trace 14188: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 35, trace 14189: estimate 4.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 36, trace 14190: estimate 4.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 14191: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 14192: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 14193: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 40, trace 14194: estimate 8.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 4, trace 14389: estimate 9.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 14390: estimate 10.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 14391: estimate 8.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 9, trace 14392: estimate 2.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 14393: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 14394: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 34, trace 14395: estimate 2.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 35, trace 14396: estimate 3.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 36, trace 14397: estimate 3.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 14398: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 14399: estimate 7.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 14400: estimate 6.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 40, trace 14401: estimate 7.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 4, trace 14587: estimate 8.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 14588: estimate 10.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 14589: estimate 8.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 9, trace 14590: estimate 2.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 14591: estimate 6.57; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 14592: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 34, trace 14593: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 35, trace 14594: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 36, trace 14595: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 14596: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 14597: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 14598: estimate 5.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 40, trace 14599: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 4, trace 14790: estimate 8.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 14791: estimate 8.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 6, trace 14792: estimate 7.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 9, trace 14793: estimate 1.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 14794: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 14795: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 34, trace 14796: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 35, trace 14797: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 36, trace 14798: estimate 2.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 14799: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 14800: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 14801: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 40, trace 14802: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14872: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14873: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14874: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.90s leader 5, trace 14875: estimate 8.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 4, trace 14997: estimate 7.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 14998: estimate 8.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 6, trace 14999: estimate 7.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 9, trace 15000: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 15001: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 15002: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 34, trace 15003: estimate 2.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 35, trace 15004: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 36, trace 15005: estimate 2.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 15006: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 15007: estimate 6.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 15008: estimate 4.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 40, trace 15009: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 4, trace 15198: estimate 7.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 15199: estimate 8.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 6, trace 15200: estimate 7.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 9, trace 15201: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 15202: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 15203: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 34, trace 15204: estimate 2.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 35, trace 15205: estimate 2.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 36, trace 15206: estimate 1.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 15207: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 15208: estimate 2.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 15209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 40, trace 15210: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 4, trace 15400: estimate 7.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 15401: estimate 8.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 6, trace 15402: estimate 7.36; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 9, trace 15403: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 15404: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 15405: estimate 2.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 34, trace 15406: estimate 2.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 35, trace 15407: estimate 2.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 36, trace 15408: estimate 1.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 15409: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 15410: estimate 2.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 15411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 40, trace 15412: estimate 2.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 4, trace 15609: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 15610: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 6, trace 15611: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 9, trace 15612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 15613: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 15614: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 34, trace 15615: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 35, trace 15616: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 36, trace 15617: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 15618: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 15619: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 15620: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 40, trace 15621: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 4, trace 15805: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 15806: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 6, trace 15807: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 9, trace 15808: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 15809: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 15810: estimate 1.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 34, trace 15811: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 35, trace 15812: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 36, trace 15813: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 15814: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 15815: estimate 1.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 15816: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 40, trace 15817: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 16029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 16030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 16031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 178.55s leader 5, trace 16032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 4, trace 16073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 16074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 6, trace 16075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 9, trace 16076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 16077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 16078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 34, trace 16079: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 35, trace 16080: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 36, trace 16081: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 16082: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 16083: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 16084: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 40, trace 16085: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 4, trace 16295: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 16296: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 6, trace 16297: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 9, trace 16298: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 16299: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 16300: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 34, trace 16301: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 35, trace 16302: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 36, trace 16303: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 16304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 16305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 16306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 40, trace 16307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 4, trace 16502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 16503: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 6, trace 16504: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 9, trace 16505: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 16506: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 16507: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 34, trace 16508: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 35, trace 16509: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 36, trace 16510: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 16511: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 16512: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 16513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 40, trace 16514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 4, trace 16698: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 16699: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 6, trace 16700: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 9, trace 16701: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 16702: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 16703: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 34, trace 16704: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 35, trace 16705: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 36, trace 16706: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 16707: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 16708: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 16709: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 40, trace 16710: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 4, trace 16903: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 16904: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 6, trace 16905: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 9, trace 16906: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 16907: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 16908: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 34, trace 16909: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 35, trace 16910: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 36, trace 16911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 16912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 16913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 16914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 40, trace 16915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 4, trace 17111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 17112: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 6, trace 17113: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 9, trace 17114: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 17115: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 17116: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 34, trace 17117: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 35, trace 17118: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 36, trace 17119: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 17120: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 17121: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 17122: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 40, trace 17123: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 4, trace 17313: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 17314: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 6, trace 17315: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 9, trace 17316: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 17317: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 17318: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 34, trace 17319: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 35, trace 17320: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 36, trace 17321: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 17322: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 17323: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 17324: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 40, trace 17325: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 4, trace 17513: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 17514: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 6, trace 17515: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 9, trace 17516: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 17517: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 17518: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 34, trace 17519: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 35, trace 17520: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 36, trace 17521: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 17522: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 17523: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 17524: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 40, trace 17525: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 4, trace 17712: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 17713: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 6, trace 17714: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 9, trace 17715: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 17716: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 17717: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 34, trace 17718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 35, trace 17719: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 36, trace 17720: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 17721: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 17722: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 17723: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 40, trace 17724: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 4, trace 17918: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 17919: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 6, trace 17920: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 9, trace 17921: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 17922: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 17923: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 34, trace 17924: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 35, trace 17925: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 36, trace 17926: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 17927: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 17928: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 17929: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 40, trace 17930: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 4, trace 18141: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 18142: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 6, trace 18143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 9, trace 18144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 18145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 18146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 34, trace 18147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 35, trace 18148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 36, trace 18149: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 18150: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 18151: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 18152: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 40, trace 18153: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 4, trace 18341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 18342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 6, trace 18343: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 9, trace 18344: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 18345: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 18346: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 34, trace 18347: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 35, trace 18348: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 36, trace 18349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 18350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 18351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 18352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 40, trace 18353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 4, trace 18542: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 18543: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 6, trace 18544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 9, trace 18545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 18546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 18547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 34, trace 18548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 35, trace 18549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 36, trace 18550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 18551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 18552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 18553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 40, trace 18554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 4, trace 18744: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 18745: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 6, trace 18746: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 9, trace 18747: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 18748: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 18749: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 34, trace 18750: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 35, trace 18751: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 36, trace 18752: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 18753: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 18754: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 18755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 40, trace 18756: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 18871: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 247.60s leader 5, trace 18872: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 4, trace 18953: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 18954: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 6, trace 18955: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 9, trace 18956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 18957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 18958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 34, trace 18959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 35, trace 18960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 36, trace 18961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 18962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 18963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 18964: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 40, trace 18965: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 4, trace 19158: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 19159: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 6, trace 19160: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 9, trace 19161: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 19162: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 19163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 34, trace 19164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 35, trace 19165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 36, trace 19166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 19167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 19168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 19169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 40, trace 19170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 4, trace 19357: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 19358: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 6, trace 19359: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 9, trace 19360: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 19361: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 19362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 34, trace 19363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 35, trace 19364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 36, trace 19365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 19366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 19367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 19368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 40, trace 19369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 4, trace 19558: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 19559: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 6, trace 19560: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 9, trace 19561: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 19562: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 19563: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 34, trace 19564: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 35, trace 19565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 36, trace 19566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 19567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 19568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 19569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 40, trace 19570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 4, trace 19762: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 19763: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 6, trace 19764: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 9, trace 19765: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 19766: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 19767: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 34, trace 19768: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 35, trace 19769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 36, trace 19770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 19771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 19772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 19773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 40, trace 19774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 4, trace 19967: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 19968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 6, trace 19969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 9, trace 19970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 19971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 19972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 34, trace 19973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 35, trace 19974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 36, trace 19975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 19976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 19977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 19978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 40, trace 19979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 4, trace 20164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 20165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 6, trace 20166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 9, trace 20167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 20168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 20169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 34, trace 20170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 35, trace 20171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 36, trace 20172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 20173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 20174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 20175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 40, trace 20176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 4, trace 20366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 20367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 6, trace 20368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 9, trace 20369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 20370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 20371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 34, trace 20372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 35, trace 20373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 36, trace 20374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 20375: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 20376: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 20377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 40, trace 20378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 4, trace 20574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 20575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 6, trace 20576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 9, trace 20577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 20578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 20579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 34, trace 20580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 35, trace 20581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 36, trace 20582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 20583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 20584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 20585: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 40, trace 20586: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 4, trace 20774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 20775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 6, trace 20776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 9, trace 20777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 20778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 20779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 34, trace 20780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 35, trace 20781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 36, trace 20782: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 20783: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 20784: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 20785: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 40, trace 20786: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 4, trace 20968: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 20969: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 6, trace 20970: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 9, trace 20971: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 20972: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 20973: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 34, trace 20974: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 35, trace 20975: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 36, trace 20976: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 20977: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 20978: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 20979: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 40, trace 20980: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 4, trace 21167: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 21168: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 6, trace 21169: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 9, trace 21170: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 21171: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 21172: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 34, trace 21173: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 35, trace 21174: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 36, trace 21175: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 21176: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 21177: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 21178: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 40, trace 21179: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 4, trace 21362: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 21363: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 6, trace 21364: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 9, trace 21365: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 21366: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 21367: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 34, trace 21368: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 35, trace 21369: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 36, trace 21370: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 21371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 21372: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 21373: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 40, trace 21374: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 4, trace 21572: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 21573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 6, trace 21574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 9, trace 21575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 21576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 21577: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 34, trace 21578: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 35, trace 21579: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 36, trace 21580: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 21581: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 21582: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 21583: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 40, trace 21584: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 21667: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 316.60s leader 5, trace 21668: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 4, trace 21769: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 21770: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 6, trace 21771: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 9, trace 21772: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 21773: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 21774: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 34, trace 21775: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 35, trace 21776: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 36, trace 21777: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 21778: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 21779: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 21780: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 40, trace 21781: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 4, trace 21982: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 21983: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 6, trace 21984: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 9, trace 21985: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 21986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 21987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 34, trace 21988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 35, trace 21989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 36, trace 21990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 21991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 21992: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 21993: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 40, trace 21994: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 4, trace 22191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 22192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 6, trace 22193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 9, trace 22194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 22195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 22196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 34, trace 22197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 35, trace 22198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 36, trace 22199: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 22200: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 22201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 22202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 40, trace 22203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 4, trace 22400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 22401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 6, trace 22402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 9, trace 22403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 22404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 22405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 34, trace 22406: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 35, trace 22407: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 36, trace 22408: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 22409: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 22410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 22411: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 40, trace 22412: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 4, trace 22589: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 22590: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 6, trace 22591: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 9, trace 22592: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 22593: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 22594: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 34, trace 22595: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 35, trace 22596: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 36, trace 22597: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 22598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 22599: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 22600: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 40, trace 22601: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 4, trace 22789: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 22790: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 6, trace 22791: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 9, trace 22792: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 22793: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 22794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 34, trace 22795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 35, trace 22796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 36, trace 22797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 22798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 22799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 22800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 40, trace 22801: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 4, trace 23001: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 23002: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 6, trace 23003: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 9, trace 23004: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 23005: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 23006: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 34, trace 23007: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 35, trace 23008: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 36, trace 23009: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 23010: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 23011: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 23012: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 40, trace 23013: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 4, trace 23201: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 23202: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 6, trace 23203: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 9, trace 23204: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 23205: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 23206: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 34, trace 23207: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 35, trace 23208: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 36, trace 23209: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 23210: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 23211: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 23212: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 40, trace 23213: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 4, trace 23393: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 23394: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 6, trace 23395: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 9, trace 23396: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 23397: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 23398: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 34, trace 23399: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 35, trace 23400: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 36, trace 23401: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 23402: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 23403: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 23404: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 40, trace 23405: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Bren incapacitated
- 1: Vale killed in action
- 1: Soren killed in action
- 1: Ash killed in action
- 1: Renn incapacitated
- 1: Rook killed in action
- 1: Reed incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
