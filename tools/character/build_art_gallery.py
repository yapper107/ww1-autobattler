"""Build an offline gallery of the repository's available art and motion previews.

Optional --drop-captures encodes the four completed current-run captures. Publishing
copies only the gallery and its referenced media, preserving relative paths.
"""
import argparse
import html
import json
import math
from pathlib import Path
import re
import shutil
import subprocess

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / 'art/reviews/gallery'
ACTION = ROOT / 'art/reviews/authored-actions'
CHAPTERS = [(0, 'Ready'), (2, 'Walk & stop'), (7, 'Turn'), (9, 'Covered movement'),
            (13, 'Run'), (16, 'Sprint & stop'), (21, 'Crouch'), (26, 'Fire & bolt'),
            (30, 'Reload'), (34, 'Moving fire'), (38, 'Winded'), (40, 'Vault'),
            (42.2, 'Landing'), (44, 'Death · earlier drop')]


def relative(path):
    import os
    return Path(os.path.relpath(path, OUT)).as_posix()


def label(path):
    value = re.sub(r'[_-]+', ' ', path.stem)
    value = re.sub(r'\b(MG|mg)\b', 'machine gun', value)
    value = re.sub(r'\bInPlace\b', 'in place', value)
    return value[0].upper() + value[1:]


def encode_drops(captures, ffmpeg):
    media = OUT / 'media'
    media.mkdir(parents=True, exist_ok=True)
    rows = []
    for entry in json.loads(captures.read_text()):
        source = Path(entry['folder'])
        count = math.ceil((entry['end'] - entry['start']) * 30 - 1e-8)
        assert (source / 'capture-complete.txt').is_file(), source
        frames = [source / f'combat-{i:04d}.png' for i in range(count)]
        assert all(f.is_file() and f.stat().st_size for f in frames), source
        assert len(list(source.glob('combat-*.png'))) == count, source
        check = (source / 'gasp-combat-check.txt').read_text()
        assert 'passed=1' in check, source
        name = entry['name']
        movie, poster = media / f'{name}.mp4', media / f'{name}.png'
        subprocess.run([ffmpeg, '-hide_banner', '-loglevel', 'error', '-y',
                        '-framerate', '30', '-i', str(source / 'combat-%04d.png'),
                        '-frames:v', str(count), '-c:v', 'libx264', '-threads', '2',
                        '-crf', '20', '-pix_fmt', 'yuv420p', '-movflags', '+faststart', str(movie)], check=True)
        shutil.copy2(frames[15], poster)
        poster.chmod(0o644)
        evidence = OUT / 'evidence' / name
        evidence.mkdir(parents=True, exist_ok=True)
        for item in ('capture-complete.txt', 'gasp-combat-check.txt', 'gasp-drop-contacts.csv'):
            shutil.copy2(source / item, evidence / item)
            (evidence / item).chmod(0o644)
        rows.append(dict(entry, frames=count, video=relative(movie), poster=relative(poster)))
    (OUT / 'physical-drop-manifest.json').write_text(json.dumps(rows, indent=2) + '\n')


def inventory():
    rows = []
    for i, clip in enumerate(json.loads((ACTION / 'authored-actions-manifest.json').read_text())):
        title = clip['name']
        note = clip['note']
        if i == 0:
            title = 'Four soldiers · complete 49-second course'
            note += ' This capture precedes the final weapon-drop change; see the four latest-run clips for that change.'
        status = 'Earlier drop' if i >= 16 else ('Full course' if i == 0 else 'Reviewed view')
        rows.append(dict(title=title, note=note, group='Animations', status=status,
                         src=relative(ACTION / clip['video']), poster=relative(ACTION / clip['poster']),
                         kind='video', start=clip['start'], frames=clip['frames'], capture=Path(clip['folder']).name))
    drops = json.loads((OUT / 'physical-drop-manifest.json').read_text())
    for index, clip in enumerate(drops):
        body = 'Male' if clip['name'].startswith('male-') else 'Female'
        weapon = 'machine gun' if '-mg-' in clip['name'] else 'rifle'
        rows.insert(index + 1, dict(title=f'{body} {weapon} · physical weapon drop',
            note=f'Final run, pass 63: {"4.5" if weapon == "machine gun" else "5.0"}/10 for this complete death performance. Weapon fall and settling improved. The held bow and staged body collapse remain; the machine-gunner belt pouch still clips the floor. See the review for scoped grades.',
            group='Animations', status='Latest run', src=clip['video'], poster=clip['poster'],
            kind='video', start=clip['start'], frames=clip['frames'], capture=Path(clip['folder']).name))
    used = {str((OUT / r[k]).resolve()) for r in rows for k in ('src', 'poster')}
    for path in sorted((ROOT / 'art').rglob('*')):
        if OUT in path.parents or path.suffix.lower() not in ('.png', '.jpg', '.jpeg', '.mp4') or str(path.resolve()) in used:
            continue
        sub = path.relative_to(ROOT / 'art').as_posix()
        kind = 'video' if path.suffix == '.mp4' else 'image'
        group, status = 'Characters', 'Earlier preview'
        note = 'Saved character development preview. This is not a new render from the final animation run.'
        if kind == 'video':
            group, note = 'Animations', 'Earlier saved motion preview, retained for comparison.'
        if 'effects/' in sub:
            group, note = 'Effects', 'Saved arcane projectile / faction-color preview.'
        if sub.startswith('references/') or '/reference_candidates/' in sub:
            group, status, note = 'Concepts', 'Reference', 'Saved concept or Tripo input reference; not an in-game render.'
        if 'tripo_inputs/bolt_action_rifle/' in sub or 'tripo_inputs/machine_gun/' in sub:
            group, note = 'Weapons', 'Saved Tripo weapon reference. View names retain the original source labels.'
        if path.name in ('Male_Azure.png', 'Male_Ember.png', 'Male_Azure_Matched.png', 'Male_Azure_BaseColor.png'):
            group, status, note = 'Materials', 'Texture atlas', 'Flat color texture atlas, shown separately from character renders.'
        if '/research/' in sub:
            group, status, note = 'Research', 'Study sheet', 'Earlier motion study / comparison image.'
        rows.append(dict(title=label(path), note=note, group=group, status=status,
                         kind=kind, src=relative(path), poster='', start=0, capture=sub))
    return rows


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--drop-captures', type=Path)
    parser.add_argument('--ffmpeg', default='ffmpeg')
    parser.add_argument('--publish', type=Path, help='Destination root containing an art/ tree')
    args = parser.parse_args()
    OUT.mkdir(parents=True, exist_ok=True)
    if args.drop_captures:
        encode_drops(args.drop_captures, args.ffmpeg)
    rows = inventory()
    for row in rows:
        for field in ('src', 'poster'):
            if row[field]:
                path = OUT / row[field]
                with path.open('rb') as stream:
                    assert not stream.read(100).startswith(b'version https://git-lfs.github.com/spec/'), f'Run git lfs pull for {path}'
    (OUT / 'gallery-manifest.json').write_text(json.dumps(rows, indent=2) + '\n')
    cards = []
    for i, row in enumerate(rows):
        preview = row['poster'] or (row['src'] if row['kind'] == 'image' else '')
        media = (f'<img loading="lazy" src="{html.escape(preview)}" alt="">' if preview else
                 f'<video muted preload="metadata" src="{html.escape(row["src"])}#t=0.1" aria-hidden="true"></video>')
        badge = 'latest' if row['status'] == 'Latest run' else ''
        cards.append(f'''<a class="card" href="{html.escape(row['src'])}" data-index="{i}">
<div class="thumb">{media}<span class="format">{'▶ VIDEO' if row['kind'] == 'video' else 'STILL'}</span></div>
<div class="cardbody"><span class="badge {badge}">{html.escape(row['status'])}</span>
<h3>{html.escape(row['title'])}</h3><p>{html.escape(row['group'])}</p></div></a>''')
    videos = sum(r['kind'] == 'video' for r in rows)
    groups = ['All', 'Animations', 'Latest run', 'Characters', 'Weapons', 'Concepts', 'Effects', 'Materials', 'Research']
    filters = ''.join(f'<button class="filter" data-filter="{g}" aria-pressed="false">{g}</button>' for g in groups)
    chapters = ''.join(f'<button data-time="{time}">{title}</button>' for time, title in CHAPTERS)
    template = (Path(__file__).with_name('art_gallery_template.html')).read_text()
    page = template.replace('{{CARDS}}', '\n'.join(cards)).replace('{{FILTERS}}', filters).replace('{{CHAPTERS}}', chapters)
    page = page.replace('{{VIDEOS}}', str(videos)).replace('{{STILLS}}', str(len(rows) - videos))
    page = page.replace('{{ROWS}}', json.dumps(rows).replace('</', '<\\/'))
    page = page.replace('{{HERO_VIDEO}}', rows[0]['src']).replace('{{HERO_POSTER}}', rows[0]['poster'])
    (OUT / 'index.html').write_text(page)
    for row in rows:
        for field in ('src', 'poster'):
            if row[field]:
                assert (OUT / row[field]).is_file(), row[field]
    if args.publish:
        files = set(OUT.rglob('*'))
        files.update((OUT / row[field]).resolve() for row in rows for field in ('src', 'poster') if row[field])
        for path in files:
            if path.is_file():
                target = args.publish / path.relative_to(ROOT)
                target.parent.mkdir(parents=True, exist_ok=True)
                shutil.copy2(path, target)
    print(json.dumps(dict(gallery=str(OUT / 'index.html'), videos=videos, stills=len(rows)-videos,
                          published=str(args.publish) if args.publish else None)))


if __name__ == '__main__':
    main()
