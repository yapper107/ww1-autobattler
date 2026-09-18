# After-action report

Run: `/home/jchan/ww1-autobattler/.local/plan015/step-e/measurement/11/108/good-ember/battle-108-1789673876131168492`

## Battle summary

**Ember** · 360 s · 457 shots.

### Turning points

- 22.8s, squad 4: contact (events line 229). First recorded contact.
- 29.4s, squad 0: help call ([trace 2021](#trace-2021)). No completion observed before termination.
- 73.5s, squad 0: help call ([trace 4578](#trace-4578)). No completion observed before termination.
- 79.6s, squad 0: withdrawal ([trace 4997](#trace-4997)). No completion observed before termination.

### Squads

- **0** — FightHere; chose took cover and returned fire, broke contact and 1 further drill types; no completed objective recorded; 18 shots, 5/6 lost.
- **4** — No platoon intent recorded; chose no drill recorded; no completed objective recorded; 439 shots, 1/6 lost.

### Decisions and attribution

At 71.4s, squad 0 chose took cover and returned fire ([trace 4263](#trace-4263)), followed by 1 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts; At 0.1s, squad 0 chose advanced tactically ([trace 13](#trace-13)), followed by 0 shots and 0 own casualties; leader picture unavailable; At 13.8s, squad 0 chose FightHere: next 60 m leg in own advance lane ([trace 1051](#trace-1051)), followed by 0 shots and 0 own casualties; estimate 0.0 against 0 distinct squad-reported contacts. These are observed sequences, not proof of causation.

### Platoon leader effects

Judgement/risk/adaptability/communication: Azure [0.15, 0.9, 0.2, 0.2], Ember [0.9, 0.5, 0.9, 0.9].
- 13.8s: FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent ([trace 1050](#trace-1050)). Following evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.829986742634767, 'next_transition': 1076}.
- 82.8s: FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.537257 retreat threshold=0.220000 initiative=requires intent ([trace 5238](#trace-5238)). Following evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5763692937266169, 'next_transition': 5246}.

### Communication

77 matched deliveries (mean 0.47s, max 5.25s); 59 explicit drops; 3 unmatched messages, not classified as lost. Unrecorded loss remains unknown.

## Appendix: complete turning-point register

<a id="turning-point-register"></a>

- 22.75s, squad 4, contact, evidence events line 229: First recorded contact; .
- 29.35s, squad 0, help call, evidence 2021: NeedSupport; No completion observed before termination.
- 73.45s, squad 0, help call, evidence 4578: NeedSupport; No completion observed before termination.
- 79.60s, squad 0, withdrawal, evidence 4997: BreakContact: believed ratio at least two without superiority; No completion observed before termination.

## Appendix: command timeline

<a id="trace-13"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 13): MoveTactically. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.917273215235332, 'next_transition': 619}.
<a id="trace-14"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 14): traveling. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.917273215235332, 'next_transition': 619}.
<a id="trace-15"></a>
- 0.05s–0.05s (×1), actor 0, squad 0 (trace 15): deployment. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 8.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 14.917273215235332, 'next_transition': 619}.
<a id="trace-333"></a>
<a id="trace-351"></a>
<a id="trace-367"></a>
<a id="trace-382"></a>
<a id="trace-393"></a>
<a id="trace-409"></a>
<a id="trace-428"></a>
<a id="trace-502"></a>
<a id="trace-514"></a>
<a id="trace-536"></a>
<a id="trace-554"></a>
<a id="trace-565"></a>
<a id="trace-580"></a>
<a id="trace-600"></a>
<a id="trace-621"></a>
<a id="trace-633"></a>
<a id="trace-642"></a>
<a id="trace-724"></a>
<a id="trace-733"></a>
<a id="trace-950"></a>
<a id="trace-972"></a>
<a id="trace-994"></a>
<a id="trace-1011"></a>
<a id="trace-1031"></a>
<a id="trace-1049"></a>
<a id="trace-1078"></a>
<a id="trace-1096"></a>
<a id="trace-1177"></a>
<a id="trace-1192"></a>
<a id="trace-1215"></a>
<a id="trace-1235"></a>
<a id="trace-1251"></a>
<a id="trace-1264"></a>
<a id="trace-1284"></a>
<a id="trace-1298"></a>
<a id="trace-1522"></a>
<a id="trace-1538"></a>
<a id="trace-1627"></a>
<a id="trace-1652"></a>
<a id="trace-1669"></a>
<a id="trace-1692"></a>
<a id="trace-1721"></a>
<a id="trace-1735"></a>
<a id="trace-1752"></a>
<a id="trace-1769"></a>
<a id="trace-1780"></a>
<a id="trace-1787"></a>
<a id="trace-1865"></a>
<a id="trace-1871"></a>
<a id="trace-1968"></a>
<a id="trace-1975"></a>
<a id="trace-1983"></a>
<a id="trace-1991"></a>
<a id="trace-2002"></a>
<a id="trace-2014"></a>
<a id="trace-2018"></a>
<a id="trace-2029"></a>
<a id="trace-2255"></a>
<a id="trace-2259"></a>
<a id="trace-2275"></a>
<a id="trace-2287"></a>
<a id="trace-2299"></a>
<a id="trace-2319"></a>
<a id="trace-2329"></a>
<a id="trace-2332"></a>
<a id="trace-2342"></a>
<a id="trace-2347"></a>
<a id="trace-2415"></a>
<a id="trace-2503"></a>
<a id="trace-2516"></a>
<a id="trace-2537"></a>
<a id="trace-2548"></a>
<a id="trace-2701"></a>
<a id="trace-2858"></a>
<a id="trace-2873"></a>
<a id="trace-2877"></a>
<a id="trace-2883"></a>
<a id="trace-2957"></a>
<a id="trace-2970"></a>
<a id="trace-2977"></a>
<a id="trace-2983"></a>
<a id="trace-2989"></a>
<a id="trace-3008"></a>
<a id="trace-3016"></a>
<a id="trace-3026"></a>
<a id="trace-3037"></a>
<a id="trace-3048"></a>
<a id="trace-3118"></a>
<a id="trace-3124"></a>
<a id="trace-3136"></a>
<a id="trace-3142"></a>
<a id="trace-3146"></a>
<a id="trace-3149"></a>
<a id="trace-3161"></a>
<a id="trace-3172"></a>
<a id="trace-3180"></a>
<a id="trace-3184"></a>
<a id="trace-3259"></a>
<a id="trace-3266"></a>
<a id="trace-3274"></a>
<a id="trace-3282"></a>
<a id="trace-3291"></a>
<a id="trace-3297"></a>
<a id="trace-3306"></a>
<a id="trace-3312"></a>
<a id="trace-3323"></a>
<a id="trace-3328"></a>
<a id="trace-3398"></a>
<a id="trace-3404"></a>
<a id="trace-3493"></a>
<a id="trace-3507"></a>
<a id="trace-3518"></a>
<a id="trace-3529"></a>
<a id="trace-3539"></a>
<a id="trace-3550"></a>
<a id="trace-3561"></a>
<a id="trace-3569"></a>
<a id="trace-3652"></a>
<a id="trace-3671"></a>
<a id="trace-3680"></a>
<a id="trace-3693"></a>
<a id="trace-3705"></a>
<a id="trace-3713"></a>
<a id="trace-3720"></a>
<a id="trace-3733"></a>
<a id="trace-3745"></a>
<a id="trace-3756"></a>
<a id="trace-4033"></a>
<a id="trace-4059"></a>
<a id="trace-4076"></a>
<a id="trace-4092"></a>
<a id="trace-4101"></a>
<a id="trace-4119"></a>
<a id="trace-4129"></a>
<a id="trace-4145"></a>
<a id="trace-4155"></a>
<a id="trace-4236"></a>
<a id="trace-4243"></a>
<a id="trace-4258"></a>
<a id="trace-4514"></a>
<a id="trace-4532"></a>
<a id="trace-4540"></a>
<a id="trace-4559"></a>
<a id="trace-4695"></a>
<a id="trace-4715"></a>
<a id="trace-4729"></a>
<a id="trace-4802"></a>
<a id="trace-4807"></a>
<a id="trace-4820"></a>
<a id="trace-4938"></a>
<a id="trace-4949"></a>
<a id="trace-4959"></a>
<a id="trace-4973"></a>
<a id="trace-4984"></a>
<a id="trace-4994"></a>
<a id="trace-5104"></a>
<a id="trace-5176"></a>
<a id="trace-5190"></a>
<a id="trace-5201"></a>
<a id="trace-5215"></a>
<a id="trace-5232"></a>
<a id="trace-5237"></a>
<a id="trace-5248"></a>
<a id="trace-5255"></a>
<a id="trace-5265"></a>
<a id="trace-5270"></a>
<a id="trace-5334"></a>
<a id="trace-5339"></a>
<a id="trace-5343"></a>
<a id="trace-5351"></a>
<a id="trace-5356"></a>
<a id="trace-5360"></a>
<a id="trace-5367"></a>
<a id="trace-5372"></a>
<a id="trace-5380"></a>
<a id="trace-5385"></a>
<a id="trace-5448"></a>
<a id="trace-5451"></a>
<a id="trace-5454"></a>
<a id="trace-5460"></a>
<a id="trace-5465"></a>
<a id="trace-5467"></a>
<a id="trace-5474"></a>
<a id="trace-5479"></a>
<a id="trace-5485"></a>
<a id="trace-5490"></a>
<a id="trace-5554"></a>
<a id="trace-5556"></a>
<a id="trace-5561"></a>
<a id="trace-5564"></a>
<a id="trace-5569"></a>
<a id="trace-5572"></a>
<a id="trace-5575"></a>
<a id="trace-5580"></a>
<a id="trace-5585"></a>
<a id="trace-5588"></a>
<a id="trace-5654"></a>
<a id="trace-5658"></a>
<a id="trace-5662"></a>
<a id="trace-5665"></a>
<a id="trace-5671"></a>
<a id="trace-5674"></a>
<a id="trace-5677"></a>
<a id="trace-5681"></a>
<a id="trace-5685"></a>
<a id="trace-5691"></a>
<a id="trace-5754"></a>
<a id="trace-5759"></a>
<a id="trace-5762"></a>
<a id="trace-5767"></a>
<a id="trace-5772"></a>
<a id="trace-5775"></a>
<a id="trace-5781"></a>
<a id="trace-5785"></a>
<a id="trace-5789"></a>
<a id="trace-5792"></a>
<a id="trace-5855"></a>
<a id="trace-5858"></a>
<a id="trace-5861"></a>
<a id="trace-5864"></a>
<a id="trace-5871"></a>
<a id="trace-5875"></a>
<a id="trace-5880"></a>
<a id="trace-5886"></a>
<a id="trace-5890"></a>
<a id="trace-5895"></a>
<a id="trace-5959"></a>
<a id="trace-5962"></a>
<a id="trace-5966"></a>
<a id="trace-5970"></a>
<a id="trace-5974"></a>
<a id="trace-5977"></a>
<a id="trace-5980"></a>
<a id="trace-5984"></a>
<a id="trace-5988"></a>
<a id="trace-5992"></a>
<a id="trace-6056"></a>
<a id="trace-6059"></a>
<a id="trace-6062"></a>
<a id="trace-6068"></a>
<a id="trace-6073"></a>
<a id="trace-6076"></a>
<a id="trace-6081"></a>
<a id="trace-6086"></a>
<a id="trace-6091"></a>
<a id="trace-6095"></a>
<a id="trace-6160"></a>
<a id="trace-6163"></a>
<a id="trace-6166"></a>
<a id="trace-6170"></a>
<a id="trace-6175"></a>
<a id="trace-6178"></a>
<a id="trace-6181"></a>
<a id="trace-6186"></a>
<a id="trace-6190"></a>
<a id="trace-6193"></a>
<a id="trace-6258"></a>
<a id="trace-6260"></a>
<a id="trace-6264"></a>
<a id="trace-6268"></a>
<a id="trace-6274"></a>
<a id="trace-6277"></a>
<a id="trace-6281"></a>
<a id="trace-6286"></a>
<a id="trace-6291"></a>
<a id="trace-6295"></a>
<a id="trace-6358"></a>
<a id="trace-6362"></a>
<a id="trace-6366"></a>
<a id="trace-6370"></a>
<a id="trace-6375"></a>
<a id="trace-6377"></a>
<a id="trace-6381"></a>
<a id="trace-6385"></a>
<a id="trace-6389"></a>
<a id="trace-6393"></a>
<a id="trace-6456"></a>
<a id="trace-6458"></a>
<a id="trace-6462"></a>
<a id="trace-6466"></a>
<a id="trace-6471"></a>
<a id="trace-6473"></a>
<a id="trace-6477"></a>
<a id="trace-6481"></a>
<a id="trace-6485"></a>
<a id="trace-6489"></a>
<a id="trace-6555"></a>
<a id="trace-6559"></a>
<a id="trace-6563"></a>
<a id="trace-6571"></a>
<a id="trace-6578"></a>
<a id="trace-6583"></a>
<a id="trace-6591"></a>
<a id="trace-6595"></a>
<a id="trace-6599"></a>
<a id="trace-6602"></a>
<a id="trace-6664"></a>
<a id="trace-6666"></a>
<a id="trace-6669"></a>
<a id="trace-6672"></a>
<a id="trace-6676"></a>
<a id="trace-6680"></a>
<a id="trace-6687"></a>
<a id="trace-6691"></a>
<a id="trace-6695"></a>
<a id="trace-6698"></a>
<a id="trace-6760"></a>
<a id="trace-6762"></a>
<a id="trace-6765"></a>
<a id="trace-6768"></a>
<a id="trace-6772"></a>
<a id="trace-6776"></a>
<a id="trace-6782"></a>
<a id="trace-6786"></a>
<a id="trace-6790"></a>
<a id="trace-6794"></a>
<a id="trace-6858"></a>
<a id="trace-6861"></a>
<a id="trace-6865"></a>
<a id="trace-6872"></a>
<a id="trace-6877"></a>
<a id="trace-6882"></a>
<a id="trace-6889"></a>
<a id="trace-6894"></a>
<a id="trace-6900"></a>
<a id="trace-6904"></a>
<a id="trace-6969"></a>
<a id="trace-6972"></a>
<a id="trace-6977"></a>
<a id="trace-6982"></a>
<a id="trace-6987"></a>
<a id="trace-6992"></a>
<a id="trace-6999"></a>
<a id="trace-7008"></a>
<a id="trace-7014"></a>
<a id="trace-7019"></a>
<a id="trace-7086"></a>
<a id="trace-7089"></a>
<a id="trace-7095"></a>
<a id="trace-7100"></a>
<a id="trace-7105"></a>
<a id="trace-7108"></a>
<a id="trace-7114"></a>
<a id="trace-7121"></a>
<a id="trace-7127"></a>
<a id="trace-7133"></a>
<a id="trace-7197"></a>
<a id="trace-7201"></a>
<a id="trace-7209"></a>
<a id="trace-7218"></a>
<a id="trace-7224"></a>
<a id="trace-7227"></a>
<a id="trace-7234"></a>
<a id="trace-7239"></a>
<a id="trace-7244"></a>
<a id="trace-7250"></a>
<a id="trace-7313"></a>
<a id="trace-7318"></a>
<a id="trace-7323"></a>
<a id="trace-7329"></a>
<a id="trace-7334"></a>
<a id="trace-7339"></a>
<a id="trace-7351"></a>
<a id="trace-7358"></a>
<a id="trace-7364"></a>
<a id="trace-7368"></a>
<a id="trace-7431"></a>
<a id="trace-7436"></a>
<a id="trace-7440"></a>
<a id="trace-7447"></a>
<a id="trace-7451"></a>
<a id="trace-7454"></a>
<a id="trace-7461"></a>
<a id="trace-7468"></a>
<a id="trace-7475"></a>
<a id="trace-7480"></a>
<a id="trace-7549"></a>
<a id="trace-7553"></a>
<a id="trace-7558"></a>
<a id="trace-7565"></a>
<a id="trace-7569"></a>
<a id="trace-7574"></a>
<a id="trace-7580"></a>
<a id="trace-7585"></a>
<a id="trace-7591"></a>
<a id="trace-7595"></a>
<a id="trace-7660"></a>
<a id="trace-7664"></a>
<a id="trace-7670"></a>
<a id="trace-7675"></a>
<a id="trace-7681"></a>
<a id="trace-7690"></a>
<a id="trace-7698"></a>
<a id="trace-7705"></a>
<a id="trace-7710"></a>
<a id="trace-7714"></a>
<a id="trace-7778"></a>
<a id="trace-7781"></a>
<a id="trace-7787"></a>
<a id="trace-7792"></a>
<a id="trace-7797"></a>
<a id="trace-7800"></a>
<a id="trace-7808"></a>
<a id="trace-7815"></a>
<a id="trace-7821"></a>
<a id="trace-7832"></a>
<a id="trace-7897"></a>
<a id="trace-7900"></a>
<a id="trace-7905"></a>
<a id="trace-7910"></a>
<a id="trace-7916"></a>
<a id="trace-7919"></a>
<a id="trace-7926"></a>
<a id="trace-7931"></a>
<a id="trace-7936"></a>
<a id="trace-7942"></a>
<a id="trace-8007"></a>
<a id="trace-8012"></a>
<a id="trace-8017"></a>
<a id="trace-8023"></a>
<a id="trace-8033"></a>
<a id="trace-8037"></a>
<a id="trace-8045"></a>
<a id="trace-8050"></a>
<a id="trace-8056"></a>
<a id="trace-8060"></a>
<a id="trace-8123"></a>
<a id="trace-8128"></a>
<a id="trace-8132"></a>
<a id="trace-8139"></a>
<a id="trace-8144"></a>
<a id="trace-8148"></a>
<a id="trace-8155"></a>
<a id="trace-8162"></a>
<a id="trace-8173"></a>
<a id="trace-8179"></a>
<a id="trace-8243"></a>
<a id="trace-8246"></a>
<a id="trace-8250"></a>
<a id="trace-8257"></a>
<a id="trace-8261"></a>
<a id="trace-8266"></a>
<a id="trace-8272"></a>
<a id="trace-8277"></a>
<a id="trace-8283"></a>
<a id="trace-8289"></a>
<a id="trace-8354"></a>
<a id="trace-8358"></a>
<a id="trace-8368"></a>
<a id="trace-8374"></a>
<a id="trace-8379"></a>
<a id="trace-8384"></a>
<a id="trace-8390"></a>
<a id="trace-8397"></a>
<a id="trace-8402"></a>
<a id="trace-8406"></a>
<a id="trace-8470"></a>
<a id="trace-8473"></a>
<a id="trace-8479"></a>
<a id="trace-8485"></a>
<a id="trace-8491"></a>
<a id="trace-8494"></a>
<a id="trace-8502"></a>
<a id="trace-8513"></a>
<a id="trace-8520"></a>
<a id="trace-8526"></a>
<a id="trace-8589"></a>
<a id="trace-8592"></a>
<a id="trace-8597"></a>
<a id="trace-8602"></a>
<a id="trace-8608"></a>
<a id="trace-8611"></a>
<a id="trace-8618"></a>
<a id="trace-8623"></a>
<a id="trace-8630"></a>
<a id="trace-8636"></a>
<a id="trace-8700"></a>
<a id="trace-8710"></a>
<a id="trace-8716"></a>
<a id="trace-8721"></a>
<a id="trace-8726"></a>
<a id="trace-8729"></a>
<a id="trace-8737"></a>
<a id="trace-8742"></a>
<a id="trace-8748"></a>
<a id="trace-8752"></a>
<a id="trace-8815"></a>
<a id="trace-8820"></a>
<a id="trace-8826"></a>
<a id="trace-8833"></a>
<a id="trace-8838"></a>
<a id="trace-8842"></a>
<a id="trace-8854"></a>
<a id="trace-8860"></a>
<a id="trace-8867"></a>
<a id="trace-8871"></a>
<a id="trace-8935"></a>
<a id="trace-8938"></a>
<a id="trace-8942"></a>
<a id="trace-8949"></a>
<a id="trace-8953"></a>
<a id="trace-8958"></a>
<a id="trace-8965"></a>
<a id="trace-8971"></a>
<a id="trace-8977"></a>
<a id="trace-8983"></a>
<a id="trace-9052"></a>
<a id="trace-9057"></a>
<a id="trace-9062"></a>
<a id="trace-9067"></a>
<a id="trace-9071"></a>
<a id="trace-9076"></a>
<a id="trace-9082"></a>
<a id="trace-9089"></a>
<a id="trace-9094"></a>
<a id="trace-9098"></a>
<a id="trace-9162"></a>
<a id="trace-9167"></a>
<a id="trace-9173"></a>
<a id="trace-9179"></a>
<a id="trace-9189"></a>
<a id="trace-9193"></a>
<a id="trace-9200"></a>
<a id="trace-9207"></a>
<a id="trace-9212"></a>
<a id="trace-9218"></a>
<a id="trace-9281"></a>
<a id="trace-9284"></a>
<a id="trace-9289"></a>
<a id="trace-9294"></a>
<a id="trace-9300"></a>
<a id="trace-9304"></a>
<a id="trace-9312"></a>
<a id="trace-9317"></a>
<a id="trace-9324"></a>
<a id="trace-9334"></a>
<a id="trace-9399"></a>
<a id="trace-9404"></a>
<a id="trace-9408"></a>
<a id="trace-9413"></a>
<a id="trace-9418"></a>
<a id="trace-9421"></a>
<a id="trace-9429"></a>
<a id="trace-9434"></a>
<a id="trace-9440"></a>
<a id="trace-9444"></a>
<a id="trace-9509"></a>
<a id="trace-9514"></a>
<a id="trace-9519"></a>
<a id="trace-9531"></a>
<a id="trace-9537"></a>
<a id="trace-9540"></a>
<a id="trace-9547"></a>
<a id="trace-9552"></a>
<a id="trace-9559"></a>
<a id="trace-9563"></a>
<a id="trace-9627"></a>
<a id="trace-9630"></a>
<a id="trace-9634"></a>
<a id="trace-9641"></a>
<a id="trace-9647"></a>
<a id="trace-9652"></a>
<a id="trace-9659"></a>
<a id="trace-9665"></a>
<a id="trace-9676"></a>
<a id="trace-9681"></a>
<a id="trace-9746"></a>
<a id="trace-9749"></a>
<a id="trace-9754"></a>
<a id="trace-9759"></a>
<a id="trace-9767"></a>
<a id="trace-9773"></a>
<a id="trace-9780"></a>
<a id="trace-9786"></a>
<a id="trace-9791"></a>
<a id="trace-9855"></a>
<a id="trace-9860"></a>
<a id="trace-9870"></a>
<a id="trace-9877"></a>
<a id="trace-9882"></a>
<a id="trace-9885"></a>
<a id="trace-9891"></a>
<a id="trace-9898"></a>
<a id="trace-9903"></a>
<a id="trace-9909"></a>
<a id="trace-9972"></a>
<a id="trace-9975"></a>
<a id="trace-9980"></a>
<a id="trace-9987"></a>
<a id="trace-9993"></a>
<a id="trace-9997"></a>
<a id="trace-10009"></a>
<a id="trace-10015"></a>
<a id="trace-10021"></a>
<a id="trace-10027"></a>
<a id="trace-10090"></a>
<a id="trace-10095"></a>
<a id="trace-10100"></a>
<a id="trace-10106"></a>
<a id="trace-10111"></a>
<a id="trace-10115"></a>
<a id="trace-10122"></a>
<a id="trace-10128"></a>
<a id="trace-10135"></a>
<a id="trace-10139"></a>
<a id="trace-10204"></a>
<a id="trace-10213"></a>
<a id="trace-10219"></a>
<a id="trace-10226"></a>
<a id="trace-10230"></a>
<a id="trace-10234"></a>
<a id="trace-10240"></a>
<a id="trace-10245"></a>
<a id="trace-10252"></a>
<a id="trace-10256"></a>
<a id="trace-10320"></a>
<a id="trace-10323"></a>
<a id="trace-10329"></a>
<a id="trace-10336"></a>
<a id="trace-10341"></a>
<a id="trace-10352"></a>
<a id="trace-10359"></a>
<a id="trace-10364"></a>
<a id="trace-10370"></a>
<a id="trace-10374"></a>
<a id="trace-10439"></a>
<a id="trace-10442"></a>
<a id="trace-10447"></a>
<a id="trace-10452"></a>
<a id="trace-10456"></a>
<a id="trace-10462"></a>
<a id="trace-10471"></a>
<a id="trace-10478"></a>
<a id="trace-10484"></a>
<a id="trace-10489"></a>
<a id="trace-10558"></a>
<a id="trace-10562"></a>
<a id="trace-10568"></a>
<a id="trace-10573"></a>
<a id="trace-10578"></a>
<a id="trace-10581"></a>
<a id="trace-10587"></a>
<a id="trace-10594"></a>
<a id="trace-10599"></a>
<a id="trace-10605"></a>
<a id="trace-10669"></a>
<a id="trace-10673"></a>
<a id="trace-10678"></a>
<a id="trace-10685"></a>
<a id="trace-10695"></a>
<a id="trace-10700"></a>
<a id="trace-10707"></a>
<a id="trace-10712"></a>
<a id="trace-10717"></a>
<a id="trace-10723"></a>
<a id="trace-10786"></a>
<a id="trace-10791"></a>
<a id="trace-10795"></a>
<a id="trace-10800"></a>
<a id="trace-10805"></a>
<a id="trace-10810"></a>
<a id="trace-10818"></a>
<a id="trace-10824"></a>
<a id="trace-10835"></a>
<a id="trace-10842"></a>
<a id="trace-10906"></a>
<a id="trace-10911"></a>
<a id="trace-10915"></a>
<a id="trace-10922"></a>
<a id="trace-10926"></a>
<a id="trace-10929"></a>
<a id="trace-10935"></a>
<a id="trace-10940"></a>
<a id="trace-10947"></a>
<a id="trace-10953"></a>
<a id="trace-11018"></a>
<a id="trace-11021"></a>
<a id="trace-11027"></a>
<a id="trace-11038"></a>
<a id="trace-11044"></a>
<a id="trace-11049"></a>
<a id="trace-11054"></a>
<a id="trace-11059"></a>
<a id="trace-11065"></a>
<a id="trace-11070"></a>
<a id="trace-11135"></a>
<a id="trace-11138"></a>
<a id="trace-11143"></a>
<a id="trace-11148"></a>
<a id="trace-11154"></a>
<a id="trace-11159"></a>
<a id="trace-11165"></a>
<a id="trace-11177"></a>
<a id="trace-11184"></a>
<a id="trace-11189"></a>
<a id="trace-11253"></a>
<a id="trace-11258"></a>
<a id="trace-11264"></a>
<a id="trace-11269"></a>
<a id="trace-11274"></a>
<a id="trace-11277"></a>
<a id="trace-11282"></a>
<a id="trace-11289"></a>
<a id="trace-11296"></a>
<a id="trace-11302"></a>
<a id="trace-11366"></a>
<a id="trace-11371"></a>
<a id="trace-11381"></a>
<a id="trace-11387"></a>
<a id="trace-11393"></a>
<a id="trace-11396"></a>
<a id="trace-11402"></a>
<a id="trace-11407"></a>
<a id="trace-11412"></a>
<a id="trace-11418"></a>
- 1.60s–359.80s (×715), actor 37, squad 4 (trace 333): reported positions blurred by 0.180000 m; identities and observation times retained; lieutenant=37. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.48299323775023906, 'next_transition': 351}.
<a id="trace-619"></a>
<a id="trace-631"></a>
<a id="trace-640"></a>
<a id="trace-722"></a>
<a id="trace-731"></a>
- 8.70s–10.70s (×5), actor 5, squad 0 (trace 619): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 5.00s, trace 435. Next observer evidence: {'until': 9, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.7999920127557766, 'next_transition': 631}.
<a id="trace-737"></a>
- 11.00s–11.00s (×1), actor 0, squad 0 (trace 737): matching received arrivals: traveling stage complete. Knowledge: actor memory at 10.00s, trace 644. Next observer evidence: {'until': 11.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3999941401966107, 'next_transition': 948}.
<a id="trace-948"></a>
<a id="trace-1029"></a>
- 11.20s–13.20s (×2), actor 5, squad 0 (trace 948): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 10.00s, trace 647. Next observer evidence: {'until': 13.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 3.4602913743913124, 'next_transition': 1029}.
<a id="trace-142"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (events line 142): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.829986742634767, 'next_transition': 1076}.
<a id="trace-1050"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1050): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1050. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.829986742634767, 'next_transition': 1076}.
<a id="trace-1051"></a>
- 13.75s–13.75s (×1), actor 5, squad 0 (trace 1051): FightHere: next 60 m leg in own advance lane; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=10.000000 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 13.75s, trace 1051. Next observer evidence: {'until': 14.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.829986742634767, 'next_transition': 1076}.
<a id="trace-1076"></a>
<a id="trace-1094"></a>
<a id="trace-1175"></a>
<a id="trace-1190"></a>
<a id="trace-1213"></a>
<a id="trace-1233"></a>
<a id="trace-1249"></a>
<a id="trace-1262"></a>
<a id="trace-1296"></a>
- 14.20s–18.75s (×9), actor 5, squad 0 (trace 1076): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 13.75s, trace 1051. Next observer evidence: {'until': 14.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9575308883185225, 'next_transition': 1094}.
<a id="trace-1303"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1303): traveling overwatch. Knowledge: actor memory at 15.00s, trace 1100. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3420930547797216, 'next_transition': 1520}.
<a id="trace-1304"></a>
- 19.00s–19.00s (×1), actor 0, squad 0 (trace 1304): received platoon directive. Knowledge: actor memory at 15.00s, trace 1100. Next observer evidence: {'until': 19.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3420930547797216, 'next_transition': 1520}.
<a id="trace-1520"></a>
<a id="trace-1536"></a>
<a id="trace-1625"></a>
<a id="trace-1650"></a>
<a id="trace-1690"></a>
<a id="trace-1750"></a>
<a id="trace-1778"></a>
<a id="trace-1785"></a>
<a id="trace-1863"></a>
<a id="trace-1869"></a>
- 19.25s–25.75s (×10), actor 5, squad 0 (trace 1520): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 15.00s, trace 1103. Next observer evidence: {'until': 19.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5900108591071042, 'next_transition': 1536}.
<a id="trace-1878"></a>
- 26.00s–26.00s (×1), actor 0, squad 0 (trace 1878): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 25.00s, trace 1794. Next observer evidence: {'until': 27.2, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.0, 'next_transition': 1981}.
<a id="trace-1981"></a>
<a id="trace-2000"></a>
- 27.25s–28.25s (×2), actor 5, squad 0 (trace 1981): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1797. Next observer evidence: {'until': 28.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2000}.
<a id="trace-2019"></a>
- 29.35s–29.35s (×1), actor 1, squad 0 (trace 2019): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 25.00s, trace 1795. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039964527212087, 'next_transition': 2027}.
<a id="trace-2021"></a>
- 29.35s–29.35s (×1), actor 1, squad 0 (trace 2021): NeedSupport. Knowledge: actor memory at 25.00s, trace 1795. Next observer evidence: {'until': 29.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5039964527212087, 'next_transition': 2027}.
<a id="trace-2027"></a>
- 29.75s–29.75s (×1), actor 5, squad 0 (trace 2027): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 25.00s, trace 1797. Next observer evidence: {'until': 30, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.43207197342418124, 'next_transition': 2101}.
<a id="trace-2101"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 2101): Reorganise: completed/failed drill. Knowledge: actor memory at 30.00s, trace 2030. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2253}.
<a id="trace-2105"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 2105): MoveTactically. Knowledge: actor memory at 30.00s, trace 2030. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2253}.
<a id="trace-2106"></a>
- 30.10s–30.10s (×1), actor 1, squad 0 (trace 2106): Reorganise complete. Knowledge: actor memory at 30.00s, trace 2030. Next observer evidence: {'until': 30.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2253}.
<a id="trace-2253"></a>
<a id="trace-2257"></a>
<a id="trace-2285"></a>
<a id="trace-2297"></a>
- 30.25s–32.25s (×4), actor 5, squad 0 (trace 2253): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 30.00s, trace 2032. Next observer evidence: {'until': 30.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2257}.
<a id="trace-2417"></a>
- 35.40s–35.40s (×1), actor 1, squad 0 (trace 2417): matching received arrivals: quorum latched, grace complete. Knowledge: actor memory at 35.00s, trace 2349. Next observer evidence: {'until': 35.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 2501}.
<a id="trace-2501"></a>
<a id="trace-2535"></a>
<a id="trace-2546"></a>
- 35.75s–37.25s (×3), actor 5, squad 0 (trace 2501): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2351. Next observer evidence: {'until': 36.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1139831350348881, 'next_transition': 2535}.
<a id="trace-2549"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 2549): ReactToContact: cover and return fire. Knowledge: actor memory at 35.00s, trace 2349. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45600637241789704, 'next_transition': 2704}.
<a id="trace-2550"></a>
- 37.40s–37.40s (×1), actor 1, squad 0 (trace 2550): bounding overwatch. Knowledge: actor memory at 35.00s, trace 2349. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45600637241789704, 'next_transition': 2704}.
<a id="trace-2551"></a>
<a id="trace-2704"></a>
- 37.40s–37.90s (×2), actor 1, squad 0 (trace 2551): new contact inside 100 m. Knowledge: actor memory at 35.00s, trace 2349. Next observer evidence: {'until': 37.8, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.45600637241789704, 'next_transition': 2704}.
<a id="trace-2856"></a>
<a id="trace-2871"></a>
<a id="trace-2881"></a>
<a id="trace-2955"></a>
<a id="trace-2968"></a>
<a id="trace-2975"></a>
<a id="trace-2981"></a>
<a id="trace-2987"></a>
- 38.25s–42.25s (×8), actor 5, squad 0 (trace 2856): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 35.00s, trace 2351. Next observer evidence: {'until': 38.6, 'shots': 0, 'casualties': 1, 'mean_displacement': 0.3575548190542495, 'next_transition': 2871}.
<a id="trace-2990"></a>
- 42.35s–42.35s (×1), actor 4, squad 0 (trace 2990): contact assessment complete (3 s plus reaction). Knowledge: actor memory at 40.00s, trace 2887. Next observer evidence: {'until': 42.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.8062426429977654, 'next_transition': 3006}.
<a id="trace-3006"></a>
<a id="trace-3014"></a>
<a id="trace-3024"></a>
<a id="trace-3170"></a>
<a id="trace-3178"></a>
<a id="trace-3182"></a>
<a id="trace-3257"></a>
<a id="trace-3264"></a>
<a id="trace-3272"></a>
- 42.75s–51.25s (×9), actor 5, squad 0 (trace 3006): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 40.00s, trace 2888. Next observer evidence: {'until': 43.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.3825017739583047, 'next_transition': 3014}.
<a id="trace-3284"></a>
- 52.00s–52.00s (×1), actor 4, squad 0 (trace 3284): current contact unknown for 10 s; retain contact cover stage. Knowledge: actor memory at 50.00s, trace 3190. Next observer evidence: {'until': 52.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3289}.
<a id="trace-3289"></a>
<a id="trace-3295"></a>
<a id="trace-3304"></a>
<a id="trace-3310"></a>
<a id="trace-3321"></a>
<a id="trace-3326"></a>
<a id="trace-3402"></a>
- 52.25s–55.75s (×7), actor 5, squad 0 (trace 3289): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 50.00s, trace 3191. Next observer evidence: {'until': 52.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3295}.
<a id="trace-3407"></a>
- 56.00s–56.00s (×1), actor 4, squad 0 (trace 3407): no progress: eligible movement budget expired; contract to column. Knowledge: actor memory at 55.00s, trace 3329. Next observer evidence: {'until': 56.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 3491}.
<a id="trace-3491"></a>
<a id="trace-3505"></a>
<a id="trace-3516"></a>
<a id="trace-3527"></a>
<a id="trace-3537"></a>
<a id="trace-3548"></a>
<a id="trace-3559"></a>
<a id="trace-3567"></a>
<a id="trace-3650"></a>
<a id="trace-3669"></a>
<a id="trace-3678"></a>
<a id="trace-3691"></a>
<a id="trace-3703"></a>
<a id="trace-3711"></a>
<a id="trace-3718"></a>
<a id="trace-3731"></a>
<a id="trace-3743"></a>
<a id="trace-3754"></a>
- 56.25s–64.75s (×18), actor 5, squad 0 (trace 3491): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 55.00s, trace 3330. Next observer evidence: {'until': 56.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.1968578478401355, 'next_transition': 3505}.
<a id="trace-3757"></a>
- 64.75s–64.75s (×1), actor 4, squad 0 (trace 3757): matching received arrivals: moving element takes halted cover. Knowledge: actor memory at 60.00s, trace 3573. Next observer evidence: {'until': 65.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.2592164984174246, 'next_transition': 4031}.
<a id="trace-4031"></a>
<a id="trace-4040"></a>
<a id="trace-4090"></a>
<a id="trace-4099"></a>
<a id="trace-4143"></a>
<a id="trace-4153"></a>
<a id="trace-4234"></a>
- 65.25s–70.25s (×7), actor 5, squad 0 (trace 4031): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 65.00s, trace 3961. Next observer evidence: {'until': 65.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.9449936107102079, 'next_transition': 4040}.
<a id="trace-4237"></a>
- 70.25s–70.25s (×1), actor 4, squad 0 (trace 4237): matching received arrivals: deployment leg complete. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 70.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.6618660458824652, 'next_transition': 4241}.
<a id="trace-4241"></a>
<a id="trace-4256"></a>
- 70.75s–71.25s (×2), actor 5, squad 0 (trace 4241): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4164. Next observer evidence: {'until': 71.2, 'shots': 3, 'casualties': 0, 'mean_displacement': 0.39446575964935876, 'next_transition': 4256}.
<a id="trace-4260"></a>
- 71.40s–71.40s (×1), actor 4, squad 0 (trace 4260): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5190573129316767, 'next_transition': 4530}.
<a id="trace-4263"></a>
- 71.40s–71.40s (×1), actor 4, squad 0 (trace 4263): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5190573129316767, 'next_transition': 4530}.
<a id="trace-4264"></a>
- 71.40s–71.40s (×1), actor 4, squad 0 (trace 4264): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 72.2, 'shots': 1, 'casualties': 0, 'mean_displacement': 0.5190573129316767, 'next_transition': 4530}.
<a id="trace-4530"></a>
<a id="trace-4557"></a>
- 72.25s–73.25s (×2), actor 5, squad 0 (trace 4530): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4164. Next observer evidence: {'until': 73.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.7397886002813734, 'next_transition': 4557}.
<a id="trace-4576"></a>
- 73.45s–73.45s (×1), actor 4, squad 0 (trace 4576): minStrength crossed: drill failed; Reorganise next tick. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: None.
<a id="trace-4578"></a>
- 73.45s–73.45s (×1), actor 4, squad 0 (trace 4578): NeedSupport. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: None.
<a id="trace-4583"></a>
- 73.50s–73.50s (×1), actor 4, squad 0 (trace 4583): Reorganise: completed/failed drill. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2876809378974368, 'next_transition': 4693}.
<a id="trace-4585"></a>
- 73.50s–73.50s (×1), actor 4, squad 0 (trace 4585): ReactToContact: cover and return fire. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2876809378974368, 'next_transition': 4693}.
<a id="trace-4586"></a>
- 73.50s–73.50s (×1), actor 4, squad 0 (trace 4586): Reorganise complete: known contact. Knowledge: actor memory at 70.00s, trace 4163. Next observer evidence: {'until': 73.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.2876809378974368, 'next_transition': 4693}.
<a id="trace-4693"></a>
<a id="trace-4713"></a>
<a id="trace-4727"></a>
<a id="trace-4800"></a>
<a id="trace-4805"></a>
<a id="trace-4818"></a>
- 73.75s–76.25s (×6), actor 5, squad 0 (trace 4693): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 70.00s, trace 4164. Next observer evidence: {'until': 74.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5642406909978912, 'next_transition': 4713}.
<a id="trace-4821"></a>
- 76.25s–76.25s (×1), actor 4, squad 0 (trace 4821): effective incoming fire began (6 s hysteresis). Knowledge: actor memory at 75.00s, trace 4733. Next observer evidence: {'until': 76.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.0, 'next_transition': 4936}.
<a id="trace-4936"></a>
<a id="trace-4947"></a>
<a id="trace-4957"></a>
<a id="trace-4982"></a>
- 76.75s–78.75s (×4), actor 5, squad 0 (trace 4936): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 75.00s, trace 4734. Next observer evidence: {'until': 77.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.53322076166798, 'next_transition': 4947}.
<a id="trace-4997"></a>
- 79.60s–79.60s (×1), actor 4, squad 0 (trace 4997): BreakContact: believed ratio at least two without superiority. Knowledge: actor memory at 75.00s, trace 4733. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9230278948960244, 'next_transition': 5174}.
<a id="trace-4998"></a>
- 79.60s–79.60s (×1), actor 4, squad 0 (trace 4998): rearward bound: one stationary suppressing element. Knowledge: actor memory at 75.00s, trace 4733. Next observer evidence: {'until': 80.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.9230278948960244, 'next_transition': 5174}.
<a id="trace-5174"></a>
<a id="trace-5199"></a>
<a id="trace-5230"></a>
<a id="trace-5235"></a>
- 80.25s–82.75s (×4), actor 5, squad 0 (trace 5174): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 80.00s, trace 5108. Next observer evidence: {'until': 81.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 1.3662978345675605, 'next_transition': 5199}.
<a id="trace-644"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (events line 644): Platoon task-tree directive: FightHere. Knowledge: no linked actor-memory snapshot. Next observer evidence: None.
<a id="trace-5238"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (trace 5238): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.537257 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 82.80s, trace 5238. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5763692937266169, 'next_transition': 5246}.
<a id="trace-5239"></a>
- 82.80s–82.80s (×1), actor 5, squad 0 (trace 5239): FightHere: nearest known group; squad chooses its drill; leader judgement=0.150000 risk=0.900000 picture multiplier=0.400000 believed ratio=0.537257 retreat threshold=0.220000 initiative=requires intent. Knowledge: actor memory at 82.80s, trace 5239. Next observer evidence: {'until': 83.2, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5763692937266169, 'next_transition': 5246}.
<a id="trace-5246"></a>
<a id="trace-5253"></a>
<a id="trace-5263"></a>
<a id="trace-5268"></a>
<a id="trace-5332"></a>
<a id="trace-5349"></a>
<a id="trace-5358"></a>
<a id="trace-5365"></a>
<a id="trace-5378"></a>
<a id="trace-5383"></a>
- 83.25s–89.75s (×10), actor 5, squad 0 (trace 5246): reported positions blurred by 13.005000 m; identities and observation times retained; lieutenant=5. Knowledge: actor memory at 82.80s, trace 5239. Next observer evidence: {'until': 83.6, 'shots': 0, 'casualties': 0, 'mean_displacement': 0.5267294499229372, 'next_transition': 5253}.

## Net delivery

77 matched order/radio deliveries; 59 explicitly recorded losses; 3 unmatched orders (not classified as lost).
Matched delay: mean 0.469s; maximum 5.250s. Message-level evidence is in the companion JSON.

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
- 10.00s leader 0, trace 644: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 1, trace 645: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 4, trace 646: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 5, trace 647: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 6, trace 648: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 7, trace 649: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 32, trace 650: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 33, trace 651: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 36, trace 652: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 37, trace 653: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 38, trace 654: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 10.00s leader 39, trace 655: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1050: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 13.75s leader 5, trace 1051: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 0, trace 1100: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 1, trace 1101: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 4, trace 1102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 5, trace 1103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 6, trace 1104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 7, trace 1105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 32, trace 1106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 33, trace 1107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 36, trace 1108: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 37, trace 1109: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 38, trace 1110: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 15.00s leader 39, trace 1111: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 0, trace 1544: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 1, trace 1545: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 4, trace 1546: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 5, trace 1547: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 6, trace 1548: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 7, trace 1549: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 32, trace 1550: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 33, trace 1551: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 36, trace 1552: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 37, trace 1553: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 38, trace 1554: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 20.00s leader 39, trace 1555: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 0, trace 1794: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 1, trace 1795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 4, trace 1796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 5, trace 1797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 6, trace 1798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 7, trace 1799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 32, trace 1800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 33, trace 1801: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 36, trace 1802: estimate 1.51; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 37, trace 1803: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 38, trace 1804: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 25.00s leader 39, trace 1805: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 1, trace 2030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 4, trace 2031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 5, trace 2032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 6, trace 2033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 7, trace 2034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 32, trace 2035: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 33, trace 2036: estimate 1.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 36, trace 2037: estimate 1.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 37, trace 2038: estimate 1.49; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 38, trace 2039: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 30.00s leader 39, trace 2040: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 1, trace 2349: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 4, trace 2350: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 5, trace 2351: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 6, trace 2352: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 7, trace 2353: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 32, trace 2354: estimate 1.48; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 33, trace 2355: estimate 1.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 36, trace 2356: estimate 2.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 37, trace 2357: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 38, trace 2358: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 35.00s leader 39, trace 2359: estimate 1.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 4, trace 2887: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 5, trace 2888: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 6, trace 2889: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 7, trace 2890: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 32, trace 2891: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 33, trace 2892: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 36, trace 2893: estimate 2.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 37, trace 2894: estimate 2.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 38, trace 2895: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 40.00s leader 39, trace 2896: estimate 2.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 4, trace 3052: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 5, trace 3053: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 6, trace 3054: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 7, trace 3055: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 32, trace 3056: estimate 2.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 33, trace 3057: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 36, trace 3058: estimate 2.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 37, trace 3059: estimate 2.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 38, trace 3060: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 45.00s leader 39, trace 3061: estimate 2.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 4, trace 3190: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 5, trace 3191: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 6, trace 3192: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 7, trace 3193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 32, trace 3194: estimate 2.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 33, trace 3195: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 36, trace 3196: estimate 2.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 37, trace 3197: estimate 2.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 38, trace 3198: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 50.00s leader 39, trace 3199: estimate 2.83; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 4, trace 3329: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 5, trace 3330: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 6, trace 3331: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 7, trace 3332: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 32, trace 3333: estimate 2.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 33, trace 3334: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 36, trace 3335: estimate 2.84; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 37, trace 3336: estimate 2.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 38, trace 3337: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 55.00s leader 39, trace 3338: estimate 2.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 4, trace 3573: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 5, trace 3574: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 6, trace 3575: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 7, trace 3576: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 32, trace 3577: estimate 2.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 33, trace 3578: estimate 2.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 36, trace 3579: estimate 2.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 37, trace 3580: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 38, trace 3581: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 60.00s leader 39, trace 3582: estimate 2.74; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 4, trace 3960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 5, trace 3961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 6, trace 3962: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 7, trace 3963: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 32, trace 3964: estimate 2.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 33, trace 3965: estimate 2.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 36, trace 3966: estimate 2.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 37, trace 3967: estimate 2.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 38, trace 3968: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 65.00s leader 39, trace 3969: estimate 2.70; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 4, trace 4163: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 5, trace 4164: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 6, trace 4165: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 7, trace 4166: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 32, trace 4167: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 33, trace 4168: estimate 2.63; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 36, trace 4169: estimate 2.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 37, trace 4170: estimate 2.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 38, trace 4171: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 70.00s leader 39, trace 4172: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 4, trace 4733: estimate 6.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 5, trace 4734: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 6, trace 4735: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 32, trace 4736: estimate 4.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 33, trace 4737: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 37, trace 4738: estimate 4.62; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 38, trace 4739: estimate 4.58; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 75.00s leader 39, trace 4740: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 4, trace 5107: estimate 7.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 5, trace 5108: estimate 1.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 6, trace 5109: estimate 6.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 32, trace 5110: estimate 4.60; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 33, trace 5111: estimate 4.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 37, trace 5112: estimate 4.56; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 38, trace 5113: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 80.00s leader 39, trace 5114: estimate 4.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.80s leader 5, trace 5238: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 82.80s leader 5, trace 5239: estimate 7.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 5, trace 5271: estimate 7.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 6, trace 5272: estimate 7.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 32, trace 5273: estimate 6.54; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 33, trace 5274: estimate 6.42; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 37, trace 5275: estimate 6.50; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 38, trace 5276: estimate 6.45; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 85.00s leader 39, trace 5277: estimate 6.46; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 5, trace 5386: estimate 7.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 6, trace 5387: estimate 7.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 32, trace 5388: estimate 6.44; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 33, trace 5389: estimate 6.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 37, trace 5390: estimate 6.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 38, trace 5391: estimate 6.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 90.00s leader 39, trace 5392: estimate 6.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 5, trace 5493: estimate 7.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 6, trace 5494: estimate 7.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 32, trace 5495: estimate 6.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 33, trace 5496: estimate 6.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 37, trace 5497: estimate 6.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 38, trace 5498: estimate 6.23; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 95.00s leader 39, trace 5499: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 5, trace 5591: estimate 7.52; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 6, trace 5592: estimate 7.37; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 32, trace 5593: estimate 6.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 33, trace 5594: estimate 6.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 37, trace 5595: estimate 6.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 38, trace 5596: estimate 6.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 100.00s leader 39, trace 5597: estimate 6.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 5, trace 5693: estimate 7.40; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 6, trace 5694: estimate 7.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 32, trace 5695: estimate 6.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 33, trace 5696: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 37, trace 5697: estimate 6.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 38, trace 5698: estimate 6.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 105.00s leader 39, trace 5699: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 5, trace 5794: estimate 7.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 6, trace 5795: estimate 7.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 32, trace 5796: estimate 6.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 33, trace 5797: estimate 5.87; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 37, trace 5798: estimate 5.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 38, trace 5799: estimate 5.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 110.00s leader 39, trace 5800: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 5, trace 5897: estimate 7.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 6, trace 5898: estimate 7.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 32, trace 5899: estimate 5.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 33, trace 5900: estimate 5.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 37, trace 5901: estimate 5.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 38, trace 5902: estimate 5.80; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 115.00s leader 39, trace 5903: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 5, trace 5994: estimate 7.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 6, trace 5995: estimate 7.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 32, trace 5996: estimate 5.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 33, trace 5997: estimate 5.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 37, trace 5998: estimate 5.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 38, trace 5999: estimate 5.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 120.00s leader 39, trace 6000: estimate 5.69; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 5, trace 6098: estimate 6.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 6, trace 6099: estimate 7.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 32, trace 6100: estimate 5.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 33, trace 6101: estimate 5.55; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 37, trace 6102: estimate 5.67; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 38, trace 6103: estimate 5.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 125.00s leader 39, trace 6104: estimate 5.61; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 5, trace 6195: estimate 6.78; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 6, trace 6196: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 32, trace 6197: estimate 5.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 33, trace 6198: estimate 4.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 37, trace 6199: estimate 4.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 38, trace 6200: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 130.00s leader 39, trace 6201: estimate 4.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 5, trace 6297: estimate 6.66; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 6, trace 6298: estimate 7.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 32, trace 6299: estimate 4.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 33, trace 6300: estimate 4.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 37, trace 6301: estimate 4.91; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 38, trace 6302: estimate 4.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 135.00s leader 39, trace 6303: estimate 4.86; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 5, trace 6395: estimate 6.53; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 6, trace 6396: estimate 7.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 32, trace 6397: estimate 4.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 33, trace 6398: estimate 4.15; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 37, trace 6399: estimate 4.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 38, trace 6400: estimate 4.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 140.00s leader 39, trace 6401: estimate 4.19; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 5, trace 6493: estimate 6.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 6, trace 6494: estimate 7.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 32, trace 6495: estimate 4.21; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 33, trace 6496: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 37, trace 6497: estimate 4.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 38, trace 6498: estimate 4.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 145.00s leader 39, trace 6499: estimate 4.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 5, trace 6604: estimate 6.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 32, trace 6605: estimate 4.17; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 33, trace 6606: estimate 4.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 37, trace 6607: estimate 4.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 38, trace 6608: estimate 4.06; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 150.00s leader 39, trace 6609: estimate 4.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 5, trace 6700: estimate 6.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 32, trace 6701: estimate 4.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 33, trace 6702: estimate 3.94; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 37, trace 6703: estimate 4.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 38, trace 6704: estimate 3.98; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 155.00s leader 39, trace 6705: estimate 3.99; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 5, trace 6796: estimate 6.04; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 32, trace 6797: estimate 4.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 33, trace 6798: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 37, trace 6799: estimate 3.96; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 38, trace 6800: estimate 3.89; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 160.00s leader 39, trace 6801: estimate 3.90; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 5, trace 6907: estimate 5.92; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 32, trace 6908: estimate 3.93; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 33, trace 6909: estimate 3.76; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 37, trace 6910: estimate 3.88; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 38, trace 6911: estimate 3.81; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 165.00s leader 39, trace 6912: estimate 3.82; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 5, trace 7025: estimate 5.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 32, trace 7026: estimate 3.85; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 33, trace 7027: estimate 3.68; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 37, trace 7028: estimate 3.79; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 38, trace 7029: estimate 3.72; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 170.00s leader 39, trace 7030: estimate 3.73; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 5, trace 7135: estimate 4.59; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 32, trace 7136: estimate 3.77; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 33, trace 7137: estimate 3.03; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 37, trace 7138: estimate 3.71; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 38, trace 7139: estimate 3.64; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 175.00s leader 39, trace 7140: estimate 3.65; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 5, trace 7252: estimate 3.41; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 32, trace 7253: estimate 3.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 33, trace 7254: estimate 2.97; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 37, trace 7255: estimate 3.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 38, trace 7256: estimate 3.01; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 180.00s leader 39, trace 7257: estimate 3.02; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 5, trace 7371: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 32, trace 7372: estimate 2.47; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 33, trace 7373: estimate 2.35; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 37, trace 7374: estimate 2.43; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 38, trace 7375: estimate 2.38; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 185.00s leader 39, trace 7376: estimate 2.39; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 5, trace 7483: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 32, trace 7484: estimate 1.34; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 33, trace 7485: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 37, trace 7486: estimate 1.33; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 38, trace 7487: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 190.00s leader 39, trace 7488: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 5, trace 7598: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 32, trace 7599: estimate 1.32; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 33, trace 7600: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 37, trace 7601: estimate 1.31; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 38, trace 7602: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 195.00s leader 39, trace 7603: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 5, trace 7718: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 32, trace 7719: estimate 1.30; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 33, trace 7720: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 37, trace 7721: estimate 1.29; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 38, trace 7722: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 200.00s leader 39, trace 7723: estimate 1.27; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 5, trace 7834: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 32, trace 7835: estimate 1.28; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 33, trace 7836: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 37, trace 7837: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 38, trace 7838: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 205.00s leader 39, trace 7839: estimate 1.25; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 5, trace 7944: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 32, trace 7945: estimate 1.26; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 33, trace 7946: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 37, trace 7947: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 38, trace 7948: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 210.00s leader 39, trace 7949: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 5, trace 8063: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 32, trace 8064: estimate 1.24; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 33, trace 8065: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 37, trace 8066: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 38, trace 8067: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 215.00s leader 39, trace 8068: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 5, trace 8181: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 32, trace 8182: estimate 1.22; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 33, trace 8183: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 37, trace 8184: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 38, trace 8185: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 220.00s leader 39, trace 8186: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 5, trace 8292: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 32, trace 8293: estimate 1.20; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 33, trace 8294: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 37, trace 8295: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 38, trace 8296: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 225.00s leader 39, trace 8297: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 5, trace 8410: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 32, trace 8411: estimate 1.18; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 33, trace 8412: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 37, trace 8413: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 38, trace 8414: estimate 1.13; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 230.00s leader 39, trace 8415: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 5, trace 8528: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 32, trace 8529: estimate 1.16; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 33, trace 8530: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 37, trace 8531: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 38, trace 8532: estimate 1.11; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 235.00s leader 39, trace 8533: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 5, trace 8638: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 32, trace 8639: estimate 1.14; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 33, trace 8640: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 37, trace 8641: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 38, trace 8642: estimate 1.09; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 240.00s leader 39, trace 8643: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 5, trace 8755: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 32, trace 8756: estimate 1.12; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 33, trace 8757: estimate 1.05; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 37, trace 8758: estimate 1.10; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 38, trace 8759: estimate 1.07; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 245.00s leader 39, trace 8760: estimate 1.08; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 5, trace 8873: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 32, trace 8874: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 33, trace 8875: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 37, trace 8876: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 38, trace 8877: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 250.00s leader 39, trace 8878: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 5, trace 8986: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 32, trace 8987: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 33, trace 8988: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 37, trace 8989: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 38, trace 8990: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 255.00s leader 39, trace 8991: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 5, trace 9102: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 32, trace 9103: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 33, trace 9104: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 37, trace 9105: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 38, trace 9106: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 260.00s leader 39, trace 9107: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 5, trace 9220: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 32, trace 9221: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 33, trace 9222: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 37, trace 9223: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 38, trace 9224: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 265.00s leader 39, trace 9225: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 5, trace 9337: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 32, trace 9338: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 33, trace 9339: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 37, trace 9340: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 38, trace 9341: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 270.00s leader 39, trace 9342: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 5, trace 9448: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 32, trace 9449: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 33, trace 9450: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 37, trace 9451: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 38, trace 9452: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 275.00s leader 39, trace 9453: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 5, trace 9565: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 32, trace 9566: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 33, trace 9567: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 37, trace 9568: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 38, trace 9569: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 280.00s leader 39, trace 9570: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 5, trace 9684: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 32, trace 9685: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 33, trace 9686: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 37, trace 9687: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 38, trace 9688: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 285.00s leader 39, trace 9689: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 5, trace 9795: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 32, trace 9796: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 33, trace 9797: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 37, trace 9798: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 38, trace 9799: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 290.00s leader 39, trace 9800: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 5, trace 9911: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 32, trace 9912: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 33, trace 9913: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 37, trace 9914: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 38, trace 9915: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 295.00s leader 39, trace 9916: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 5, trace 10029: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 32, trace 10030: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 33, trace 10031: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 37, trace 10032: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 38, trace 10033: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 300.00s leader 39, trace 10034: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 5, trace 10143: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 32, trace 10144: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 33, trace 10145: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 37, trace 10146: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 38, trace 10147: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 305.00s leader 39, trace 10148: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 5, trace 10258: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 32, trace 10259: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 33, trace 10260: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 37, trace 10261: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 38, trace 10262: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 310.00s leader 39, trace 10263: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 5, trace 10377: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 32, trace 10378: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 33, trace 10379: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 37, trace 10380: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 38, trace 10381: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 315.00s leader 39, trace 10382: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 5, trace 10497: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 32, trace 10498: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 33, trace 10499: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 37, trace 10500: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 38, trace 10501: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 320.00s leader 39, trace 10502: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 5, trace 10607: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 32, trace 10608: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 33, trace 10609: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 37, trace 10610: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 38, trace 10611: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 325.00s leader 39, trace 10612: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 5, trace 10725: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 32, trace 10726: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 33, trace 10727: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 37, trace 10728: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 38, trace 10729: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 330.00s leader 39, trace 10730: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 5, trace 10846: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 32, trace 10847: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 33, trace 10848: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 37, trace 10849: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 38, trace 10850: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 335.00s leader 39, trace 10851: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 5, trace 10956: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 32, trace 10957: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 33, trace 10958: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 37, trace 10959: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 38, trace 10960: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 340.00s leader 39, trace 10961: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 5, trace 11073: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 32, trace 11074: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 33, trace 11075: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 37, trace 11076: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 38, trace 11077: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 345.00s leader 39, trace 11078: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 5, trace 11193: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 32, trace 11194: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 33, trace 11195: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 37, trace 11196: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 38, trace 11197: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 350.00s leader 39, trace 11198: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 5, trace 11304: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 32, trace 11305: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 33, trace 11306: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 37, trace 11307: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 38, trace 11308: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 355.00s leader 39, trace 11309: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 5, trace 11420: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 32, trace 11421: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 33, trace 11422: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 37, trace 11423: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 38, trace 11424: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.
- 360.00s leader 39, trace 11425: estimate 0.00; 0 distinct relayed contacts. Estimate includes uncertainty; reported contacts are not observer enemy strength.

## Casualties by recorded cause

- 1: Vale incapacitated
- 1: Rook incapacitated
- 1: Reed incapacitated
- 1: Bram killed in action
- 1: Tern incapacitated
- 1: Moss incapacitated

## Outcome attribution

No supported attribution candidate found in recorded transitions.

## Evidence limits

- Broadcast loss is unknown unless an explicit dropped-message event exists; unmatched orders may be in flight at termination.
- Older traces do not identify every report message; complete radio delay/loss accounting is unavailable.
- Outcome attribution is temporal evidence and hypotheses, not proof that a leader caused the result.
