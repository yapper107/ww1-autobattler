# Work ordering after completed squad PPO duration experiment

Jordan asks: "A genuine question for you here. Should we work on individual soldier AI first before we start doing squad neural network AI?"

Give a bounded architectural recommendation, read-only. Exact claude-fable-5-1,
standing project architect session, existing subscription only, no delegation,
implementation or new training. Astra answers Jordan and owns integration.
Current source6ff5c2010bc64352, HEAD c760cae7dd15bf827d23f2cab097920ae14fbb16
plus working changes. Recent changes are exact performance improvements, with
parity evidence in docs/NEURAL_TRAINING_PREFETCH.md. Training used frozen d736.

Read docs/NEURAL_LEGACY_RL_DURATION.md for now-complete evidence and
plans/024-astra-duration-assessment.md for earlier hypotheses (snapshot9updates,
not final measurements). Read authority split in plans/024-neural-squad-layer.md,
docs/NEURAL_LEGACY_RL_PILOT.md including the straggler trace. Inspect relevant
ManeuverSim.cpp, CommandSim.cpp and BattleSim.cpp paths if useful, not entire repo.

Facts:3seeds×40updates,2880active-Legacy battles,1.53million decisions. On75reserved
cases each, Legacy23/6/46, imitation35/6/34, untrained schema3 continuation35/2/38,
RL24=35/4/36, selectedRL25=31/4/40, RL26=32/4/39. Across-seed average paired
win-minus-loss effect vsLegacy+.2311 CI[+.0089,+.4667], vsimitation-.0889
CI[-.3778,+.1868], vscontinuation-.0356 CI[-.1956,+.12]. Selectedmodel vsLegacyCI
includeszero. Alltrained AND untrainedcontinuation fail fresh-map friendlyfire;
imitationpasses. Historicalguardsallpass. No reliable straggler improvement.
No policy promotion. Finalmapsnowinspected cannotserve as unopenedfuturetestset.

Current policy is a squad candidate ranker with HOLD/KEEP, not a full squad brain
or direct soldier controller. Candidate generation, support/preparation gates,
station allocation and soldier execution retain hand-coded control. Old nine-update
receipt proportions55–61% support_wait and2.5–2.9%committed are decisioncounts,
not battle-time fractions and not proof waitsarebad. Actionscaninfluencelaterstate.
Prior stragglertrace foundseveralwounded survivorsdeliberatelyRearGuard; cannot
label all separation a broken individual policy. Rewardloss alone doesnotlocatefault.

Please answer:
1. Should the next priority be soldier execution reliability, broader squad
   authority/learning diagnostics, or a separate learned soldier policy? Distinguish
   fixing low-level behavior from replacing it with neural control.
2. What evidence would justify changing order? Propose a small diagnostic that
   separates bad squad decisions, overwritten/blocked orders, legitimate soldier
   safety overrides and inability to execute valid orders; use existing traces first.
3. What minimal execution contract should be stable before further squad learning?
4. Recommend a staged sequence without a full rewrite or simultaneous policy changes.

My preliminary view: audit the soldier/squad execution interface before another
large PPO run, repair demonstrated low-level defects and preserve existing good
execution; do not infer that a learned soldier brain is prerequisite or that the
soldier layer is the proven cause. In parallel diagnose effective squad authority,
sampledvsargmax and rewardcredit. Alltestsretain activeLegacyopponents, existing
guards and Plan023shortvideos. Do not change established gameplay preferences,
rewardweights or safety rules merely to make easier-to-train behavior. Critique
this view if needed. Return clearjudgment, evidence limits and few concrete steps.
