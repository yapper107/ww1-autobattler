# Plan 024: fixed-budget duration experiment — 22 September 2026

Jordan authorized the longer training test after the four-update pilot failed to
show reliable generalization. **40 PPO updates × 24 battles × three seeds = 2,880
training battles.** This is ten times the pilot budget for each model. It is a
duration test, not a promise that more training will improve the policy.

The native simulator, reward, PPO settings, action authority (candidate mode 0),
training maps 701–760 and active Legacy opponent remain fixed. Each seed (24,25,26)
starts from original imitation. Three independent trainer processes run four lean
workers each; a separate pool of four handles development evaluation. Four workers
rather than twelve changes minibatch row ordering, so the new runs' update-4
checkpoints are the direct short-budget controls. This is not an exact continuation
of the earlier runs. Legacy remains the game default.

Evaluate updates 4,5,10,15,20,25,30,35,40 on the same development maps 901–910 × battle
seeds 107,108,109. Include frozen Legacy, original imitation and the untrained
schema-3 continuation policy. Baseline battle rows may be reused only with matching
model/source/scenario identities. All checkpoint curves are reported; no budget
extension or early stopping is chosen from their scores.

Before final evaluation, select among development checkpoints that pass the
unchanged ordinary guards: highest win-minus-loss, then lower own loss, earlier
update, lower training seed. If none passes, label the selection diagnostic only.
Freeze that choice before fighting fresh maps 1101–1125, three battle seeds each.
Final comparison includes all three update-40 policies, the selected checkpoint if
different, and all three controls. Report each seed and average paired final-seed
effects within matched cases, with a map-cluster bootstrap. That interval concerns
these three trained seeds, not arbitrary training randomness. Repeated development
selection remains exploratory. Old inspected reserved maps 1001–1015 are not used
as unopened evidence.

Run the full 270-battle historical Plan023 regression suite on the selected policy.
Static defenders remain regression diagnostics, never training opponents. Produce
best/middle/worst development clips ranked by paired reward difference using the
existing Plan023 side-by-side video format (300 battle seconds at 10×). Native
inference checks apply to all final policies and the selected checkpoint. The
native source is unchanged from the previously verified d73667841df73faa build;
do not claim a new full build/test run or promotion bundle.

The full predeclared specification and source/model hashes are in
`.local/plan024/long-rl/experiment.json`; live status, training reports, checkpoints,
comparison rows and process logs share that directory. The training launcher is
`train_all.py`; the evaluation coordinator is `evaluate_all.py`.

A bounded new Fable review was requested in
[the request](024-longer-rl-review-request.md). Subscription login was available,
but the launcher could not create its session lock because its state directory is
read-only in this session. **No new Fable response or approval is claimed.** This
experiment retains the architecture from the prior attributed reviews.

## User-requested independent Opus 5.5 review attempt

Jordan requested Opus 5.5 specifically while training continued. The existing
Claude Max subscription login was confirmed. A read-only request used the exact
model ID `claude-opus-5-5`, with no model fallback and no session persistence.
The installed Claude client emitted `unrecognized_model`; subsequent connection
retries produced no successful service response, and the attempt was interrupted.
No Opus assessment was received, and availability in this environment remains
unconfirmed. This does not establish global model availability.

[Review request](024-opus55-training-review-request.md); attempt evidence is in
`.local/plan024/long-rl/opus55-review/`. The training experiment was unchanged.

## Explicit Fable 5.1 retry

Jordan then asked "Ask Fable 5.1". The direct subscription CLI invocation used
`claude-fable-5-1`, resumed the existing project architect session, disabled session
persistence and allowed only read tools. This avoided the earlier launcher lock
write. The CLI initialized that model name without an unrecognized-model warning,
but seven connection retries produced no assistant response. The attempt was
interrupted; no new Fable assessment or approval exists. Training was unaffected.

[Assessment request](024-fable51-duration-assessment-request.md); attempt evidence:
`.local/plan024/long-rl/fable51-review/`.

## Independent Astra review

At Jordan's explicit request, `/root/astra_training_review` reviewed the actual
training path and live evidence read-only. [Assessment and lead disposition](024-astra-duration-assessment.md): finish the fixed40-update experiment; no concrete
stop-worthy defect found. Main risks are limited effective action influence,
sampled training versus greedy deployment, and the fixed imitation anchor.
These are diagnostic hypotheses; no training settings changed. Preferred next
diagnostic is a frozen-checkpoint sampled-versus-greedy comparison on development
cases, after this experiment. No new Fable/Opus approval is implied.
