"""Encode complete Unreal action captures and make a portable local review player.

The JSON input is a list of {name, folder, start, end, note} records. Capture
times are course seconds at 30 fps. It rejects missing/extra frames rather than
presenting an interrupted render as a complete performance.
"""
import argparse
import html
import json
from pathlib import Path
import shutil
import subprocess


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('manifest', type=Path)
    parser.add_argument('output', type=Path)
    parser.add_argument('--ffmpeg', default='ffmpeg')
    args = parser.parse_args()
    clips = json.loads(args.manifest.read_text())
    media = args.output / 'authored-actions-media'
    media.mkdir(parents=True, exist_ok=True)
    rows = []
    for i, clip in enumerate(clips):
        folder = Path(clip['folder'])
        assert (folder / 'capture-complete.txt').is_file(), (clip['name'], 'incomplete capture')
        count = round((clip['end'] - clip['start']) * 30)
        expected = [folder / f'combat-{f:04d}.png' for f in range(count)]
        assert count > 0 and all(p.is_file() and p.stat().st_size for p in expected), clip['name']
        assert len(list(folder.glob('combat-*.png'))) == count, (clip['name'], 'frame count')
        movie = media / f'action-{i}.mp4'
        poster = media / f'action-{i}.png'
        subprocess.run([args.ffmpeg, '-hide_banner', '-loglevel', 'error', '-y',
                        '-framerate', '30', '-i', str(folder / 'combat-%04d.png'),
                        '-frames:v', str(count), '-c:v', 'libx264', '-crf', '20',
                        '-pix_fmt', 'yuv420p', '-movflags', '+faststart', str(movie)], check=True)
        shutil.copy2(expected[min(15, count - 1)], poster)
        rows.append(dict(clip, frames=count, video=movie.relative_to(args.output).as_posix(),
                         poster=poster.relative_to(args.output).as_posix()))
    (args.output / 'authored-actions-manifest.json').write_text(json.dumps(rows, indent=2))
    cards = []
    for i, row in enumerate(rows):
        cards.append(f'''<section><h2>{html.escape(row['name'])}</h2>
<p>{html.escape(row.get('note', 'Work in progress.'))}</p>
<video id="v{i}" controls preload="metadata" playsinline poster="{row['poster']}"
src="{row['video']}" data-start="{row['start']}"></video>
<div class="controls"><button data-video="v{i}" data-step="-1">Previous frame</button>
<button data-video="v{i}" data-step="1">Next frame</button>
<label>Speed <select data-video="v{i}"><option value="1">Normal</option>
<option value="0.5">Half speed</option><option value="0.25">Quarter speed</option></select></label>
<output id="t{i}"></output><a href="{row['video']}">Open MP4</a></div></section>''')
    page = '''<!doctype html><html lang="en"><meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>Authored soldier actions — work in progress</title>
<style>body{background:#141c25;color:#e6edf4;font:17px/1.5 system-ui;margin:0 auto;padding:28px;max-width:1250px}
h1{font-size:30px}h2{font-size:22px}section{margin:36px 0;padding:20px;background:#202d3a;border-radius:12px}
video{width:100%;max-height:75vh;background:#10151c}button,select{font:inherit;padding:7px;background:#dce7ed;color:#15212b;border:0;border-radius:5px}
.controls{display:flex;gap:15px;flex-wrap:wrap;align-items:center;margin-top:12px}a{color:#95d8fc}output{font-variant-numeric:tabular-nums}
.status{padding:14px;border-left:4px solid #e0b767;background:#2a2b27}</style>
<h1>Authored soldier actions</h1>
<p class="status">Work in progress. These are actual Unreal captures of our authored actions.
The last full-course critic grade was 4.0/10; the requested 8.5 has not been reached.
Technical contact checks do not certify animation quality.</p>
<p>Use normal speed to judge rhythm and transitions. Pause and step frames to inspect contacts.
All videos are local MP4 files; no account or network connection is needed.</p>'''
    page += '\n'.join(cards)
    page += '''<script>
for(const button of document.querySelectorAll('button[data-step]'))button.onclick=()=>{
 const video=document.getElementById(button.dataset.video);video.pause();
 video.currentTime=Math.max(0,Math.min(video.duration-1/30,(Math.round(video.currentTime*30)+Number(button.dataset.step))/30));
};
for(const select of document.querySelectorAll('select'))select.onchange=()=>document.getElementById(select.dataset.video).playbackRate=Number(select.value);
for(const video of document.querySelectorAll('video')){
 const update=()=>{document.getElementById('t'+video.id.slice(1)).textContent='Course '+(Number(video.dataset.start)+video.currentTime).toFixed(2)+' s';};
 video.addEventListener('timeupdate',update);video.addEventListener('loadedmetadata',update);
 video.addEventListener('error',()=>{document.getElementById('t'+video.id.slice(1)).textContent='Video unavailable. Use Open MP4.';});
} </script></html>'''
    (args.output / 'authored-actions.html').write_text(page)
    print(args.output / 'authored-actions.html')


if __name__ == '__main__':
    main()
