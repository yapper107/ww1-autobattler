"""Top-down video of one or two exported battles, side by side, from the evaluation export.

    python3 tools/battle_video.py --run LABEL=RUN_DIR [--run LABEL=RUN_DIR] --out flank.mp4
        [--from 60 --to 520 --speed 10 --focus-squad 3]

Attackers (team 0) are blue dots, one shade per squad, the corporal ringed; a red halo means an
enemy has a clear line of sight on the man in that frame (observer truth, the same field the
fights_from_cover guard counts). Defenders are orange squares. Walls are dark, low cover is tan.
A corporal holding a Flank order is joined to its goal by a line. Rounds fired on the move (plan 019)
are thick green lines; a green ring marks a man walking a covered detour instead of the shortest path;
a bold amber ring with a streak behind him marks a sprinting man, and the focus squad's mean stamina is read out in the header (plan 022).
A thick grey ring marks a man held down by fire (suppression above 0.5, about his duck threshold), on either side,
and each panel counts both sides' pinned man-seconds (plan 031). With destruction on (plan 033) the walls are drawn as the
battle's geometry stood at that moment (geometry.jsonl): a wall that goes is gone, rubble (grey-brown) appears; whole
ground-floor window panes are pale blue strokes until they shatter (a spray of blue specks); a cracked wall keeps a dark
zigzag; a breached, destroyed or collapsed piece flashes orange as it goes; the header counts them. Needs Pillow and ffmpeg.
"""
from __future__ import annotations
import argparse, json, math, subprocess, sys, shutil
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from phase0_metrics import rows
from PIL import Image, ImageDraw, ImageFont

FLANK = 7
SQUAD_BLUES = [(30, 90, 200), (0, 150, 190), (90, 70, 200), (20, 130, 120)]
HEADER = 116
PINNED = 0.5


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
        frames.append((frame['time'], [(s['id'], s['team'], s['squad'], bool(s['alive']), s['position'][0], s['position'][1], bool(s['observer_exposed']), s['task'], s['goal'][0], s['goal'][1], bool(s.get('covered_path')), bool(s.get('sprinting')), float(s.get('stamina') or 0), bool(s.get('winded')), float(s.get('suppression') or 0)) for s in frame['soldiers']]))
    shots = [json.loads(line) for line in open(run/'shots.jsonl') if line.strip()]
    boxes = []
    for line in open(run/'battlefield.army'):
        p = line.split()
        if p and p[0] == 'O' and float(p[4]) == 0:
            boxes.append((float(p[2]), float(p[3]), float(p[5]), float(p[6]), float(p[7]) >= 2.0))
    return dict(frames=frames, shots=shots, boxes=boxes, grenades=load_grenades(run), destruction=load_destruction(run))


def load_destruction(run):
    """Plan 033: the geometry versions (ground-level boxes of each; rubble = low pieces added after the start) and the
    destruction events with the window panes, when the run had destruction on."""
    out = dict(versions=[], panes={}, events=[])
    if not (run/'destruction.jsonl').exists():
        return out
    first = None
    for line in open(run/'geometry.jsonl'):
        v = json.loads(line)
        ids = {o['id'] for o in v['obstacles']}
        first = ids if first is None else first
        boxes = [(o['center'][0], o['center'][1], o['half'][0], o['half'][1], o['height'] >= 2.0, o['id'] not in first and o['height'] < 1.2)
                 for o in v['obstacles'] if abs(o['center'][2]) < 0.05]
        out['versions'].append((v['time'], boxes))
    for line in open(run/'destruction.jsonl'):
        e = json.loads(line)
        if e['kind'] == 'pane':
            out['panes'][e['obstacle']] = dict(center=e['center'], half=e['half'], broken=None)
            continue
        out['events'].append(e)
        pane = out['panes'].get(e['obstacle']) if e['kind'] == 'glass_shattered' else None
        if pane is not None and pane['broken'] is None:
            pane['broken'] = e['time']
    return out


def draw_destruction(draw, d, t, to_px, scale, tally):
    """Plan 033 overlay (see the module note); tally counts the events up to t by kind."""
    for pane in d['panes'].values():
        c, h = pane['center'], pane['half']
        if c[2] > 2.9 or (pane['broken'] is not None and pane['broken'] <= t):
            continue
        a, b = to_px(c[0] - h[0], c[1] - h[1]), to_px(c[0] + h[0], c[1] + h[1])
        draw.rectangle([a[0] - 1, a[1] - 1, max(b[0], a[0] + 1) + 1, max(b[1], a[1] + 1) + 1], fill=(90, 170, 235, 255))
    tally.clear()
    for e in d['events']:
        age = t - e['time']
        if age < 0:
            break
        kind, c, h = e['kind'], e['center'], e['half']
        tally[kind] = tally.get(kind, 0) + 1
        a, b = to_px(c[0] - h[0], c[1] - h[1]), to_px(c[0] + h[0], c[1] + h[1])
        if kind == 'cracked':
            steps = 7; long = (b[0] - a[0]) >= (b[1] - a[1])
            points = [((a[0] + (b[0] - a[0])*i/steps, (a[1] + b[1])/2 + (3 if i % 2 else -3)) if long else
                       ((a[0] + b[0])/2 + (3 if i % 2 else -3), a[1] + (b[1] - a[1])*i/steps)) for i in range(steps + 1)]
            draw.line(points, fill=(150, 20, 10, 255), width=2)
        elif kind == 'glass_shattered' and age < 1.2:
            v = e['velocity']; speed = max(1.5, math.hypot(v[0], v[1]))
            ux, uy = (v[0]/speed, v[1]/speed) if math.hypot(v[0], v[1]) > 0.1 else (0.0, 0.0)
            for i in range(14):
                spread = ((i*53) % 17)/17 - 0.5; reach = age*(2.5 + 6*((i*29) % 13)/13)
                dx, dy = ux + spread*(uy if uy else 1), uy - spread*(ux if ux else 1)
                q = to_px(c[0] + dx*reach, c[1] + dy*reach)
                draw.ellipse([q[0] - 2, q[1] - 2, q[0] + 2, q[1] + 2], fill=(60, 150, 235, int(255*(1 - age/1.2))))
        elif kind in ('breached', 'destroyed', 'collapsed') and age < 1.5:
            fade = int(255*(1 - age/1.5))
            draw.rectangle([a[0] - 3, a[1] - 3, b[0] + 3, b[1] + 3], outline=(240, 110, 0, fade), width=4)


def load_grenades(run):
    """Plan 032: grenades from a traced run's evidence rows (throws, bursts, fragment hits, stuns, reactions)."""
    trace = run/'trace.jsonl'
    out = dict(throws={}, hits=[], stuns=[], labels=[])
    if not trace.exists():
        return out
    words = {('grenade_reaction', 'dive'): 'dive', ('grenade_reaction', 'run'): 'run', ('grenade_reaction', 'throw_back'): 'throw back',
             ('grenade_pickup', 'fumbled'): 'fumbled!', ('grenade_close_in', 'start'): 'close in', ('grenade_close_in', 'rush'): 'rush'}
    for line in open(trace):
        if '"grenade' not in line:
            continue
        e = json.loads(line); kind, reason, t = e.get('kind', ''), e.get('reason'), e.get('time', 0)
        if kind == 'grenade_release' and e.get('grenade') is not None:
            out['throws'][e['grenade']] = dict(t=t, start=e['position'], aim=e.get('aim_at') or e['position'], type=e.get('type', ''), burst=None, tb=None, soldier=e['soldier'])
            out['labels'].append((t, e['soldier'], 'throws ' + ('frag' if e.get('type', '').startswith('frag') else 'conc')))
        elif kind == 'grenade_effect' and e.get('burst') is not None:
            g = out['throws'].get(e.get('grenade'))
            if g is not None and g['tb'] is None:
                g['tb'], g['burst'] = t, e['burst']
            if reason == 'hit':
                out['hits'].append((t, e['burst'], e['soldier']))
            elif reason == 'stunned':
                out['stuns'].append((t, e['soldier']))
        elif (kind, reason) in words:
            out['labels'].append((t, e['soldier'], words[(kind, reason)]))
    return out


GRENADE_COLOURS = {'fragmentation': (200, 60, 20), 'concussion': (40, 80, 200)}


def draw_grenades(draw, g, t, pos, to_px, scale, small):
    """Plan 032 overlay: a thrown grenade flies (1.5 s) to where it bursts and lies there until the fuse ends; the burst is a
    ring of its stun radius and a spray of fragments; red lines go to the men its fragments hit; yellow rings mark men
    stunned; short labels mark throws, dives, runs, throw-backs, fumbles, close-ins and rushes."""
    for gr in g['throws'].values():
        colour = GRENADE_COLOURS.get(gr['type'], (60, 60, 60))
        end = gr['burst'] or gr['aim']; tb = gr['tb'] if gr['tb'] is not None else gr['t'] + 4.0
        if gr['t'] <= t < tb:
            k = min(1.0, (t - gr['t']) / 1.5)
            x = gr['start'][0] + (end[0] - gr['start'][0])*k; y = gr['start'][1] + (end[1] - gr['start'][1])*k
            c = to_px(x, y); r = 4 if k < 1 else 3 + 2*(int(t*4) % 2)
            if k < 1:
                draw.line([to_px(gr['start'][0], gr['start'][1]), c], fill=colour + (90,), width=1)
            draw.ellipse([c[0] - r, c[1] - r, c[0] + r, c[1] + r], fill=(30, 30, 30, 255), outline=colour + (255,), width=2)
        if tb <= t < tb + 0.8:
            c = to_px(end[0], end[1]); fade = int(200*(1 - (t - tb)/0.8))
            radius = (2.0 if gr['type'].startswith('frag') else 3.0)*scale
            draw.ellipse([c[0] - radius, c[1] - radius, c[0] + radius, c[1] + radius], fill=(255, 190, 40, fade//2), outline=(255, 120, 0, fade), width=3)
            spokes, reach = (28, 9.0) if gr['type'].startswith('frag') else (10, 3.0)
            for i in range(spokes):
                a = 6.2831853*i/spokes + 0.37*(hash((round(tb, 2), i)) % 7)
                d = reach*(0.5 + 0.5*((i*37) % 11)/10)
                q = to_px(end[0] + d*math.cos(a), end[1] + d*math.sin(a))
                draw.line([c, q], fill=(120, 120, 120, fade), width=1)
    for tb, burst, sid in g['hits']:
        if tb <= t < tb + 1.2 and sid in pos:
            draw.line([to_px(burst[0], burst[1]), to_px(*pos[sid])], fill=(220, 0, 0, 230), width=2)
    for ts, sid in g['stuns']:
        if ts <= t < ts + 4 and sid in pos:
            c = to_px(*pos[sid]); draw.ellipse([c[0] - 12, c[1] - 12, c[0] + 12, c[1] + 12], outline=(240, 200, 0, 255), width=3)
    for tl, sid, word in g['labels']:
        if tl <= t < tl + 2.0 and sid in pos:
            c = to_px(*pos[sid]); draw.text((c[0] + 9, c[1] + 4), word, font=small, fill=(0, 0, 0, 255))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--run', action='append', required=True, help='LABEL=run directory')
    ap.add_argument('--out', required=True)
    ap.add_argument('--from', dest='start', type=float, default=0)
    ap.add_argument('--to', dest='end', type=float, default=600)
    ap.add_argument('--speed', type=float, default=10, help='battle seconds per video second')
    ap.add_argument('--focus-squad', type=int, default=None, help='crop to this attacking squad and the defenders')
    ap.add_argument('--panel', type=int, default=900)
    ap.add_argument('--ffmpeg', help='Optional explicit encoder executable')
    ap.add_argument('--opponent-label',default='defenders',help='Use Legacy for ordinary moving-opponent battles')
    ap.add_argument('--window', help='x0,x1,y0,y1 in metres: crop to this area instead of fitting the soldiers')
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
    if args.window:
        x0, x1, y0, y1 = (float(v) for v in args.window.split(','))
    global HEADER
    if any(run['destruction']['versions'] for _, run in runs):
        HEADER = 136   # room for the destruction line
    scale = args.panel/(x1 - x0)
    height = int((y1 - y0)*scale)
    height += height % 2
    width = args.panel*len(runs)
    px = lambda x, y, off: (off + (x - x0)*scale, HEADER + (y - y0)*scale)

    def background(boxes):
        image = Image.new('RGB', (args.panel, height), (236, 234, 224))
        draw = ImageDraw.Draw(image)
        for tall in (False, True):
            for cx, cy, hx, hy, is_tall, *rubble in boxes:
                if is_tall == tall and x0 - 5 < cx < x1 + 5 and y0 - 5 < cy < y1 + 5:
                    a, b = px(cx - hx, cy - hy, 0), px(cx + hx, cy + hy, 0)
                    fill = (70, 66, 60) if tall else (128, 112, 98) if rubble and rubble[0] else (176, 150, 105)
                    draw.rectangle([a[0], a[1] - HEADER, max(b[0], a[0] + 1), max(b[1] - HEADER, a[1] - HEADER + 1)], fill=fill)
        return image
    # Plan 033: one background per geometry version when the run has them (the walls as they stood), else the map's.
    backgrounds = [[(v[0], background(v[1])) for v in run['destruction']['versions']] or [(0.0, background(run['boxes']))] for _, run in runs]
    tallies = [dict() for _ in runs]

    big, small = font(22), font(15)
    encoder=args.ffmpeg or shutil.which('ffmpeg')
    if not encoder:
        import imageio_ffmpeg
        encoder=imageio_ffmpeg.get_ffmpeg_exe()
    ffmpeg = subprocess.Popen([encoder, '-y', '-loglevel', 'error', '-f', 'rawvideo', '-pix_fmt', 'rgb24', '-s', f'{width}x{height + HEADER}', '-r', str(rate), '-i', '-',
                               '-c:v', 'libx264', '-pix_fmt', 'yuv420p', '-crf', '24', '-movflags', '+faststart', args.out], stdin=subprocess.PIPE)
    count = min(len(run['frames']) for _, run in runs)
    exposed_seconds = [0.0]*len(runs)
    moving_rounds = [0]*len(runs)
    covered_seconds = [0.0]*len(runs)
    sprint_seconds = [0.0]*len(runs)
    pinned_seconds = [[0.0, 0.0] for _ in runs]
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
            t, soldiers = run['frames'][i]
            canvas.paste([image for at, image in backgrounds[r] if at <= t + 1e-6][-1] if backgrounds[r][0][0] <= t + 1e-6 else backgrounds[r][0][1], (off, HEADER))
            if run['destruction']['events'] or run['destruction']['panes']:
                draw_destruction(draw, run['destruction'], t, lambda x, y: px(x, y, off), scale, tallies[r])
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
            pos = {sid: (x, y) for sid, team, squad, alive, x, y, *rest in soldiers}
            draw_grenades(draw, run['grenades'], t, pos, lambda x, y: px(x, y, off), scale, small)
            for sid, team, squad, alive, x, y, exposed, task, gx, gy, covered, sprinting, stamina, winded, suppression in soldiers:
                c = px(x, y, off)
                if not (off <= c[0] < off + args.panel):
                    attackers += int(alive and team == 0); defenders += int(alive and team == 1)
                    continue
                if not alive:
                    draw.line([c[0] - 3, c[1] - 3, c[0] + 3, c[1] + 3], fill=(120, 120, 120, 255)); draw.line([c[0] - 3, c[1] + 3, c[0] + 3, c[1] - 3], fill=(120, 120, 120, 255))
                    continue
                pinned = suppression > PINNED
                if pinned:
                    pinned_seconds[r][team] += stride*step
                    draw.ellipse([c[0] - 10, c[1] - 10, c[0] + 10, c[1] + 10], outline=(90, 90, 90, 255), width=3)
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
            # Keep the established diagnostics visible inside each comparison panel.
            lines = [f't = {t:5.0f} s    {args.opponent_label} left {defenders}    Azure left {attackers}',
                     f'{who} seen: {exposed_seconds[r]:.0f} soldier-seconds    fired on the move: {moving_rounds[r]}',
                     f'covered detours: {covered_seconds[r]:.0f} s    sprinting: {sprint_seconds[r]:.0f} s' + stamina_note,
                     f'pinned (grey ring): {args.opponent_label} {pinned_seconds[r][1]:.0f} soldier-seconds    Azure {pinned_seconds[r][0]:.0f}']
            if run['destruction']['versions']:
                d = tallies[r]
                lines.append(f"destruction: {d.get('glass_shattered', 0)} panes shattered, {d.get('cracked', 0)} walls cracked, {d.get('breached', 0)} breached, "
                             f"{d.get('destroyed', 0)} destroyed, {d.get('collapsed', 0)} collapsed")
            for line_number, line in enumerate(lines):
                draw.text((off + 12, 34 + 19*line_number), line, font=small, fill=(40, 40, 40, 255))
            if r:
                draw.line([off, 0, off, height + HEADER], fill=(0, 0, 0, 255), width=2)
        ffmpeg.stdin.write(canvas.tobytes())
    ffmpeg.stdin.close()
    if ffmpeg.wait()!=0:
        raise RuntimeError('Video encoder failed')
    print(args.out, count, 'frames', f'{width}x{height + HEADER}')


if __name__ == '__main__':
    main()
