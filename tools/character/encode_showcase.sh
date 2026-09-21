#!/usr/bin/env bash
# Usage: encode_showcase.sh <Saved/Screenshots/ArtShowcase> <output directory>
set -euo pipefail
frames="${1:?Supply the Unreal ArtShowcase screenshot directory}"
out="${2:?Supply the output directory}"
mkdir -p "$out"
for ((i=0;i<720;i++)); do
  printf -v file 'rifle-%04d.png' "$i"
  [[ -s "$frames/$file" ]] || { printf 'Missing frame %s\n' "$file" >&2; exit 1; }
done
ffmpeg -hide_banner -loglevel error -y -framerate 30 -i "$frames/rifle-%04d.png" \
  -frames:v 720 -c:v libx264 -crf 19 -preset medium -pix_fmt yuv420p -movflags +faststart "$out/rifle-handling.mp4"
ffmpeg -hide_banner -loglevel error -y -i "$out/rifle-handling.mp4" \
  -filter_complex '[0:v]fps=15,scale=960:-1:flags=lanczos,split[a][b];[a]palettegen=max_colors=128[p];[b][p]paletteuse=dither=bayer:bayer_scale=3' \
  -loop 0 "$out/rifle-handling.gif"
