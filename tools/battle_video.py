"""Top-down video of one or two exported battles, side by side, from the evaluation export.

    python3 tools/battle_video.py --run LABEL=RUN_DIR [--run LABEL=RUN_DIR] --out flank.mp4
        [--from 60 --to 520 --speed 10 --focus-squad 3]

Attackers (team 0) are blue dots, one shade per squad, the corporal ringed; a red halo means an
enemy has a clear line of sight on the man in that frame (observer truth, the same field the
fights_from_cover guard counts). Defenders are orange squares. Walls are dark, low cover is tan.
A corporal holding a Flank order is joined to its goal by a line. Rounds fired on the move (plan 019)
are thick green lines; a green ring marks a man walking a covered detour instead of the shortest path;
a bold amber ring with a streak behind him marks a sprinting man, and the focus squad's mean stamina is read out in the header (plan 022). Needs Pillow and ffmpeg.
"""
from __future__ import annotations
import argparse, json, subprocess, sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from phase0_metrics import rows
from PIL import Image, ImageDraw, ImageFont

FLANK = 7
SQUAD_BLUES = [(30, 90, 200), (0, 150, 190), (90, 70, 200), (20, 130, 120)]
HEADER = 64


def font(size):
    for name in ('/usr/share/fonts/truetype/dejavu/DejaVuSans.ttf', '/usr/share/fonts/truetype/liberation/LiberationSans-Regular.ttf'):
        if Path(name).exists():
            return ImageFont.truetype(name, size)
    return ImageFont.load_default()


def load(run, start, end, stride):
    run = Path(run)
    frames = []
    for index, frame in enumerate(rows(run/'evaluation.jsonl')):
        if frame['time'] < start - 1e-6 or index % stride:
            continue
        if frame['time'] > end:
            break
        frames.append((frame['time'], [(s['id'], s['team'], s['squad'], bool(s['alive']), s['position'][0], s['position'][1], bool(s['observer_exposed']), s['task'], s['goal'][0], s['goal'][1], bool(s.get('covered_path')), bool(s.get('sprinting')), float(s.get('stamina') or 0), bool(s.get('winded'))) for s in frame['soldiers']]))
    shots = [json.loads(line) for line in open(run/'shots.jsonl') if line.strip()]
    boxes = []
    for line in open(run/'battlefield.army'):
        p = line.split()
        if p and p[0] == 'O' and float(p[4]) == 0:
            boxes.append((float(p[2]), float(p[3]), float(p[5]), float(p[6]), float(p[7]) >= 2.0))
    return dict(frames=frames, shots=shots, boxes=boxes)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--run', action='append', required=True, help='LABEL=run directory')
    ap.add_argument('--out', required=True)
    ap.add_argument('--from', dest='start', type=float, default=0)
    ap.add_argument('--to', dest='end', type=float, default=600)
    ap.add_argument('--speed', type=float, default=10, help='battle seconds per video second')
    ap.add_argument('--focus-squad', type=int, default=None, help='crop to this attacking squad and the defenders')
    ap.add_argument('--panel', type=int, default=900)
    args = ap.parse_args()
    fps, step = 25, 0.2
    stride = max(1, round(args.speed/fps/step))
    # Below 5 battle seconds a video second there is no finer frame to show: play the rows at a lower rate instead.
    rate = fps if args.speed >= fps*step else max(1.0, args.speed/step)
    runs = [(item.split('=', 1)[0], load(item.split('=', 1)[1], args.start, args.end, stride)) for item in args.run]

    xs, ys = [], []
    for _, run in runs:
        for _, soldiers in run['frames'][::10]:
            for s in soldiers:
                if s[3] and (s[1] == 1 or args.focus_squad is None or s[2] == args.focus_squad):
                    xs.append(s[4]); ys.append(s[5])
    pad = 12
    x0, x1, y0, y1 = min(xs) - pad, max(xs) + pad, min(ys) - pad, max(ys) + pad
    scale = args.panel/(x1 - x0)
    height = int((y1 - y0)*scale)
    height += height % 2
    width = args.panel*len(runs)
    px = lambda x, y, off: (off + (x - x0)*scale, HEADER + (y - y0)*scale)

    backgrounds = []
    for _, run in runs:
        image = Image.new('RGB', (args.panel, height), (236, 234, 224))
        draw = ImageDraw.Draw(image)
        for tall in (False, True):
            for cx, cy, hx, hy, is_tall in run['boxes']:
                if is_tall == tall and x0 - 5 < cx < x1 + 5 and y0 - 5 < cy < y1 + 5:
                    a, b = px(cx - hx, cy - hy, 0), px(cx + hx, cy + hy, 0)
                    draw.rectangle([a[0], a[1] - HEADER, max(b[0], a[0] + 1), max(b[1] - HEADER, a[1] - HEADER + 1)], fill=(70, 66, 60) if tall else (176, 150, 105))
        backgrounds.append(image)

    big, small = font(22), font(15)
    ffmpeg = subprocess.Popen(['ffmpeg', '-y', '-loglevel', 'error', '-f', 'rawvideo', '-pix_fmt', 'rgb24', '-s', f'{width}x{height + HEADER}', '-r', str(rate), '-i', '-',
                               '-c:v', 'libx264', '-pix_fmt', 'yuv420p', '-crf', '24', '-movflags', '+faststart', args.out], stdin=subprocess.PIPE)
    count = min(len(run['frames']) for _, run in runs)
    exposed_seconds = [0.0]*len(runs)
    moving_rounds = [0]*len(runs)
    covered_seconds = [0.0]*len(runs)
    sprint_seconds = [0.0]*len(runs)
    streaks = [{} for _ in runs]
    focus_stamina = [[] for _ in runs]
    focus_winded = [0]*len(runs)
    cursor = [0]*len(runs)
    trails = [dict() for _ in runs]
    for i in range(count):
        canvas = Image.new('RGB', (width, height + HEADER), (250, 250, 247))
        draw = ImageDraw.Draw(canvas, 'RGBA')
        for r, (label, run) in enumerate(runs):
            off = r*args.panel
            canvas.paste(backgrounds[r], (off, HEADER))
            t, soldiers = run['frames'][i]
            shots = run['shots']
            while cursor[r] < len(shots) and shots[cursor[r]]['time'] < t - stride*step:
                cursor[r] += 1
            k = cursor[r]
            while k < len(shots) and shots[k]['time'] <= t:
                s = shots[k]; k += 1
                a, b = px(s['start'][0], s['start'][1], off), px(s['end'][0], s['end'][1], off)
                walking = bool(s.get('moving_fire'))
                moving_rounds[r] += int(walking)
                draw.line([a, b], fill=(0, 150, 60, 230) if walking else (40, 110, 220, 150) if s['team'] == 0 else (230, 120, 20, 150), width=3 if walking else 1)
                if s['hit']:
                    draw.ellipse([b[0] - 5, b[1] - 5, b[0] + 5, b[1] + 5], outline=(200, 0, 0, 255), width=2)
            attackers = defenders = 0
            for sid, team, squad, alive, x, y, exposed, task, gx, gy, covered, sprinting, stamina, winded in soldiers:
                c = px(x, y, off)
                if not (off <= c[0] < off + args.panel):
                    attackers += int(alive and team == 0); defenders += int(alive and team == 1)
                    continue
                if not alive:
                    draw.line([c[0] - 3, c[1] - 3, c[0] + 3, c[1] + 3], fill=(120, 120, 120, 255)); draw.line([c[0] - 3, c[1] + 3, c[0] + 3, c[1] - 3], fill=(120, 120, 120, 255))
                    continue
                if team == 1:
                    defenders += 1
                    draw.rectangle([c[0] - 5, c[1] - 5, c[0] + 5, c[1] + 5], fill=(235, 120, 20, 255), outline=(90, 40, 0, 255))
                    continue
                attackers += 1
                focus = args.focus_squad is None or squad == args.focus_squad
                corporal = sid % 8 == 1
                if exposed:
                    exposed_seconds[r] += stride*step if focus else 0
                    draw.ellipse([c[0] - 9, c[1] - 9, c[0] + 9, c[1] + 9], fill=(230, 30, 30, 90))
                if corporal and focus:
                    trail = trails[r].setdefault(sid, [])
                    trail.append(c)
                    if len(trail) > 1:
                        draw.line(trail, fill=(20, 20, 20, 110), width=2)
                    if task == FLANK:
                        draw.line([c, px(gx, gy, off)], fill=(0, 0, 0, 200), width=1)
                        g = px(gx, gy, off)
                        draw.line([g[0] - 5, g[1], g[0] + 5, g[1]], fill=(0, 0, 0, 255), width=2); draw.line([g[0], g[1] - 5, g[0], g[1] + 5], fill=(0, 0, 0, 255), width=2)
                if covered:
                    covered_seconds[r] += stride*step
                    draw.ellipse([c[0] - 8, c[1] - 8, c[0] + 8, c[1] + 8], outline=(0, 150, 60, 255), width=2)
                streak = streaks[r].setdefault(sid, [])
                if sprinting:
                    sprint_seconds[r] += stride*step
                    streak.append(c); del streak[:-8]
                    if len(streak) > 1:
                        draw.line(streak, fill=(245, 170, 0, 230), width=5)
                    draw.ellipse([c[0] - 9, c[1] - 9, c[0] + 9, c[1] + 9], outline=(245, 170, 0, 255), width=3)
                else:
                    streak.clear()
                if focus:
                    focus_stamina[r].append(stamina)
                    focus_winded[r] += int(winded)
                colour = SQUAD_BLUES[squad % 4] if focus else tuple((v + 235)//2 for v in SQUAD_BLUES[squad % 4])  # the other squads keep their colour, paler
                radius = 5 if focus else 4
                draw.ellipse([c[0] - radius, c[1] - radius, c[0] + radius, c[1] + radius], fill=colour + (255,), outline=(0, 0, 0, 255) if corporal else None, width=2)
                if corporal and focus:
                    draw.text((c[0] + 8, c[1] - 8), 'cpl', font=small, fill=(0, 0, 0, 255))
            focused = f'squad {args.focus_squad}' if args.focus_squad is not None else 'attackers'
            stamina_note = (f'    {focused} stamina {sum(focus_stamina[r])/len(focus_stamina[r]):.1f} s' + (f' ({focus_winded[r]} winded)' if focus_winded[r] else '')) if focus_stamina[r] else ''
            focus_stamina[r] = []; focus_winded[r] = 0
            draw.rectangle([off, 0, off + args.panel, HEADER], fill=(250, 250, 247, 255))
            draw.text((off + 12, 6), label, font=big, fill=(0, 0, 0, 255))
            who = f'squad {args.focus_squad}' if args.focus_squad is not None else 'attackers'
            wide = args.panel >= 800
            draw.text((off + 12, 36), f't = {t:5.0f} s    defenders left {defenders}    attackers left {attackers}    ' + (f'{who} seen by an enemy: {exposed_seconds[r]:.0f} soldier-seconds' if wide and not moving_rounds[r] else f'{who} seen: {exposed_seconds[r]:.0f} s') + (f'    fired on the move: {moving_rounds[r]}' if moving_rounds[r] else '') + (f'    on covered detours: {covered_seconds[r]:.0f} s' if covered_seconds[r] else '') + (f'    sprinting: {sprint_seconds[r]:.0f} s' if sprint_seconds[r] else '') + stamina_note, font=small, fill=(40, 40, 40, 255))
            if r:
                draw.line([off, 0, off, height + HEADER], fill=(0, 0, 0, 255), width=2)
        ffmpeg.stdin.write(canvas.tobytes())
    ffmpeg.stdin.close()
    ffmpeg.wait()
    print(args.out, count, 'frames', f'{width}x{height + HEADER}')


if __name__ == '__main__':
    main()
