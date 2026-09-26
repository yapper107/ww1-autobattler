# Animation source coverage — 25 September 2026

Source audit at base `9a559c4`. Counts are **named clip candidates**, not visual approval or proof of motion-matching readiness. Current male and female manifests each contain 49 clips. Categories overlap; do not sum them. The eight crouch walks are excluded from the standing-walk row. No new motion assets were downloaded in this pass.

| Motion | Female candidates | Male candidates | Actual gap |
| --- | ---: | ---: | --- |
| Standing walk | 8 | 8 | Directional loops present; starts/stops/pivots missing. |
| Standing run | 8 | 8 | Directional loops present; weapon-load-specific balance unverified. |
| Sprint | 8 | 8 | Directional loops present; natural sprint-entry/stop coverage missing. |
| Crouch movement | 8 | 8 | Loops present; authored stance transitions missing. |
| Standing aim | 1 | 1 | Pose present; gaze/aim/body coordination and arm limits need the new layers. |
| Crouch aim | 1 | 1 | Pose present; transition/contact review required. |
| Turn in place | 4 | 4 | 90-degree clips present; phase-aware selection and broader pivot coverage missing. |
| Prone and crawling | 0 | 0 | No clips; current renderer lowers crouching poses. |
| Vault contact | 0 | 0 | No clips; current renderer stitches jump clips and raises the root. |
| Bolt cycle | 0 | 0 | No clips; current handling uses procedural offsets. |
| Rifle/MG reload | 0 | 0 | No clips; current handling uses procedural hand/weapon keys. |
| Prone entry/exit | 0 | 0 | No authored transitions. |
| Injured locomotion | 0 | 0 | No dedicated clips. |
| Fall/death | 6 | 6 | Fall clips present; replay-safe ground/weapon/cloth interactions remain work. |
| Grenade throw | 0 | 0 | No clips; authoritative gameplay action is being developed separately. |

The separate gunner pose exports are useful grip/contact references; they do not supply a full heavy-weapon locomotion or action library. For every imported source, preserve traveling/root data, contact curves, mirror policy, foot phase, scale/axes, skeleton/retarget pose, source license and provenance. A zero in this table cannot be fixed by increasing blend time.

The table above is the pre-GASP source audit. The integration now has 360 GASP
motions per body (720 total), standing/crouch pose-search databases and a cropped,
contact-corrected standing vault. Prone/crawl and authored weapon-action gaps remain.
See [current integration](GASP_PROTOTYPE.md) and [plan 034](../plans/034-contextual-soldier-animation.md).

External candidate identified 25 September: voxel vision's
[Free Animation Library](https://www.fab.com/listings/481ef75b-892b-424f-a213-f1cc058c9c19)
lists 12 prone and 6 cover animations. Requested a temporary project download from
Jordan because Epic account UI tools are unavailable here. Jordan confirmed it is
in the Fab account library; a local project download has not yet been found. Not yet
inspected, retargeted or accepted. The free rifle locomotion sets found in the
earlier search do not fill this source gap merely by adding more walk clips.

Also evaluated the downloadable **Standard** edition of Quaternius' Universal
Animation Library (official itch.io source, CC0). Its 43 named clips include pistol
reload, hit reactions, a roll and one death; they do **not** include prone/crawl,
rifle reload or grenade throw. No clips were integrated and no paid edition was
acquired. Local audit archive SHA-256:
`cc73fc4e495b82958207316596317a3f40b9fa38065bde1027937452da537724`.
The overall pack's advertised coverage is not the free edition's inventory.
