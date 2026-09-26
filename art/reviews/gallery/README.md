# Complete art and animation gallery

Open [index.html](index.html). **28 videos and 57 stills** cover every saved image
and movie under `art/`, excluding duplicate video-poster cards. Four final-run
physical-drop videos are marked **Latest run**. The 49-second course and previous
death views explicitly predate that change. No 8.5 quality acceptance is claimed.

The gallery offers chapter navigation, category/search filters, large previews,
normal/half/quarter speed and frame stepping. Everything plays locally. Git LFS
is required for MP4 files. Keep the referenced `art/` folder structure intact.

Rebuild: `python3 tools/character/build_art_gallery.py`. Publish a portable copy:
`python3 tools/character/build_art_gallery.py --publish /destination`.
The destination contains `art/reviews/gallery/index.html` plus referenced media.
The manifests preserve exact capture scope and source provenance; raw capture
folders are not needed for playback. Final reports and native contact checks are
in `evidence/`. See [the handoff](../../../docs/AUTHORED_SOLDIER_ACTIONS.md).

Animation work stopped after this run on the user's instruction. The latest
complete-course grade is 6.0/10; final death-only grades are rifle 5.0 and MG 4.5.
These are chronological-frame reviews, not continuous-playback acceptance.
