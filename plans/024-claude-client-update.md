# Claude client update — 22 September 2026

Jordan authorized updating the client so Opus 5.5 could be used. The native
`claude update` command completed successfully: **2.1.275 → 2.1.280**.

The active command is `/home/jchan/.local/bin/claude`, linked to
`/home/jchan/.local/share/claude/versions/2.1.280`. The Astra/Fable launcher selects
this executable automatically. The existing bundled older clients remain present.

The existing Claude subscription login remains active (`claude.ai`, first-party,
Max). No API keys, paid extra usage, billing settings, default model preferences or
training settings were changed.

A one-turn tool-free request to exact model `claude-opus-5-5` returned `READY`, exit
0, with a successful terminal result and matching assistant/model-usage metadata.
**Opus 5.5 is verified available on this host.** This supersedes the earlier client
version blocker; it does not change the provenance of the four completed Opus 5
optimization experiments. Fable 5.1 remains the standing architect preference.

Verification script and raw evidence: `.local/plan024/claude-client-update/`.
