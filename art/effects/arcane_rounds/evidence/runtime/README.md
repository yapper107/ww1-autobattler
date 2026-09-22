# Real battle projectile evidence

UE 5.8 / D3D11, Legacy, authored Works, seed 107, 120-second simulation.
Native renderer, normal battle camera, projectile geometry unchanged.

- `ember-before.png`: original additive material, moving flight at 46.966671 s.
- `ember-after.png`: premultiplied alpha + responsive AA, same recorded time.
- `azure-after.png`: moving Azure flight at 49.350002 s.
- `azure-flight-1x.mp4`: 120 frames at 60 fps, actual recorded time advancing
  1/60 s per frame. One black padding row makes the source's odd height encode
  to yuv420p. No slowed flight, enlarged projectile or painted overlay.
- `projectile-validation.txt`: native birth/flight/impact/seek and real elevated
  muzzle regression checks, all passing.

Capture command is in `docs/ART_INTEGRATION_023.md`. These captures verify
rendering at close zoom. They do not prove visibility at every camera scale or
that shots lasting less than a display frame can always be seen. Window size
and framing differ between captures; these are not pixel-identical A/B tests.
