"""Persistent local simulator workers; actor and training truth have separate inputs."""
from __future__ import annotations
from collections import Counter
import json
import os
from pathlib import Path
import queue
import subprocess
import threading
import numpy as np
import torch
from tools.neural import native
from tools.neural.actor import pack, pack_raster, critic_features, distribution, TIMINGS, RASTER_POOLED
from tools.neural.returns import team_potential, terminal_reward, advantages


class Worker:
    def __init__(self, binary, log):
        self.log = Path(log).open('w')
        env = native.huge_pages(os.environ.copy())
        self.proc = subprocess.Popen([str(binary), '--neural-worker'], stdin=subprocess.PIPE,
            stdout=subprocess.PIPE, stderr=self.log, text=True, bufsize=1, env=env)
        self.messages = queue.Queue()
        def pump():
            try:
                for line in self.proc.stdout:
                    self.messages.put(json.loads(line))
            except Exception as error:
                self.messages.put(error)
            finally:
                self.messages.put(EOFError('Worker exited; inspect '+str(log)))
        self.reader = threading.Thread(target=pump, daemon=True)
        self.reader.start()
        self.hello = self.read()
        if self.hello.get('type')!='hello' or self.hello.get('schema')!=3:
            self.close()
            raise ValueError('Worker protocol mismatch')

    def read(self):
        try: message = self.messages.get(timeout=180)
        except queue.Empty:
            self.close()
            raise TimeoutError('No simulator response for 180 seconds')
        if isinstance(message,Exception): raise message
        return message

    def send(self, text):
        self.proc.stdin.write(text+'\n');self.proc.stdin.flush()

    def close(self):
        if self.proc.poll() is None:
            try:
                self.send('QUIT');self.proc.wait(timeout=2)
            except (OSError,subprocess.TimeoutExpired):
                self.proc.terminate()
                try:self.proc.wait(timeout=3)
                except subprocess.TimeoutExpired:self.proc.kill();self.proc.wait()
        for stream in (self.proc.stdin,self.proc.stdout):
            if stream:stream.close()
        self.log.close()

    def episode(self, episode, spec, actor, critic, temperature, seed, candidates=0,
                half_life=600., lambda_half_life=30., greedy=False, schema=3, timing=None, start_only=False):
        """One battle. schema=4 selects the plan 026 interface (flat row*2+timing actions).

        timing (schema 4 only, diagnostic arms): None samples/argmaxes the full flat distribution;
        'never', 'always' or 'random' choose the row from the through-the-gates head (greedy or
        sampled as usual) and then fix the timing: never go now, go now whenever legal, or go now
        with probability one half when legal.

        start_only (schema 4 only, plan 027): go-now skips only the commit-time gates and releases no
        later bound. False sends exactly the RESET it always did."""
        if schema not in (3, 4): raise ValueError('Worker schema must be 3 or 4')
        if schema == 4 and self.hello.get('max_schema', 3) < 4: raise ValueError('Worker binary has no schema 4')
        if timing not in (None, 'never', 'always', 'random') or (timing and schema != 4):
            raise ValueError('Timing arms need schema 4')
        if start_only and schema != 4: raise ValueError('Start-only go-now needs schema 4')
        if start_only and not self.hello.get('start_only', 0): raise ValueError('Worker binary has no start-only go-now')
        # Read the importer's decimal digest from a dedicated cached probe manifest.
        # The caller supplies it after the map has been verified by the native importer.
        # Protocol 1 RESET has no schema token; schema 4 appends one, and start-only go-now one more.
        self.send(f'RESET {episode} {spec["seed"]} {spec["seconds"]} {candidates} '
                  f'{json.dumps(str(Path(spec["map"]).resolve()))} {spec["map_digest"]}'+(' 4' if schema == 4 else '')
                  +(' start_only' if start_only else ''))
        random = np.random.default_rng(seed)
        pending, paths, events, actions = {}, {}, [], []
        receipts=Counter();initial=None;potential=0.;entropy=[];matches=[];top_probabilities=[];keep_legal=[]
        go_now=[];now_legal=[]
        def finish(squad, time, next_value, terminal=False, bonus=0.):
            row=pending.pop(squad,None)
            if row is None:return
            reward=sum(delta*(2**(-(at-row['time'])/half_life) if half_life else 1.)
                       for at,delta in events[row.pop('event_cursor'):])
            elapsed=max(0.,time-row['time'])
            reward+=bonus*(2**(-elapsed/half_life) if half_life else 1.)
            row.update(reward=reward,elapsed=elapsed,next_value=next_value,terminal=terminal)
            paths.setdefault(squad,[]).append(row)
        while True:
            message=self.read()
            if message.get('episode')!=episode:raise ValueError('Stale episode from worker')
            kind=message['type']
            if kind=='start':initial=message['initial'];potential=team_potential(initial,initial)
            elif kind=='reward':
                current=team_potential(message['active'],initial)
                events.append((message['time'],current-potential));potential=current
            elif kind=='receipt':receipts[message['outcome']]+=1
            elif kind=='decision':
                observation=message['observation'];squad=observation['squad'];time=observation['time']
                features,legal=pack(observation)
                # Plan 026 4c: the pooled map view (schema 4 on a map-view binary), else None.
                raster=pack_raster(observation)
                critic_raster=None
                if getattr(critic,'raster',False):
                    critic_raster=raster if raster is not None else np.zeros(RASTER_POOLED,dtype=np.float32)
                value_input=critic_features(features,legal,message['critic'],critic_raster)
                with torch.no_grad():
                    probability=distribution(actor,torch.from_numpy(features),torch.from_numpy(legal),temperature,
                        None if raster is None else torch.from_numpy(raster))
                    value=float(critic(torch.from_numpy(value_input)))
                    probabilities=probability.probs.numpy()
                    probabilities=probabilities.astype(np.float64);probabilities/=probabilities.sum()
                    if timing is None:
                        chosen=int(probabilities.argmax()) if greedy else int(random.choice(len(probabilities),p=probabilities))
                    else:
                        # Row from the through-the-gates head only, then the arm's timing.
                        rows=probabilities.reshape(-1,TIMINGS).copy();rows[:,1]=0.
                        rows[:,0]=np.where(legal[0::TIMINGS],rows[:,0],0.)
                        if rows[:,0].sum()<=0:rows[:,0]=legal[0::TIMINGS]  # only go-now actions legal
                        rows=rows[:,0]/rows[:,0].sum()
                        row=int(rows.argmax()) if greedy else int(random.choice(len(rows),p=rows))
                        now=bool(legal[row*TIMINGS+1]) and (timing=='always' or (timing=='random' and random.random()<.5))
                        if not legal[row*TIMINGS]:now=True
                        chosen=row*TIMINGS+int(now)
                    log_prob=float(probability.log_prob(torch.tensor(chosen)))
                    entropy.append(float(probability.entropy()));matches.append(chosen==int(probabilities.argmax()))
                    top_probabilities.append(float(probabilities.max()))
                    if schema==4:
                        keep_legal.append(bool(legal[2]));go_now.append(chosen%TIMINGS==1);now_legal.append(bool(legal[1::TIMINGS].any()))
                    else:keep_legal.append(bool(legal[1]))
                finish(squad,time,value)
                pending[squad]=dict(features=features,legal=legal,critic=value_input,action=chosen,
                    log_prob=log_prob,value=value,time=time,event_cursor=len(events))
                if raster is not None:pending[squad].update(raster=raster,raster_hex=observation['raster'])
                actions.append(chosen)
                self.send(f'ACTION {episode} {message["sequence"]} {chosen}')
            elif kind=='end':
                for squad in list(pending):finish(squad,message['time'],0.,True,terminal_reward(message['winner']))
                samples=[]
                for path in paths.values():
                    adv,returns=advantages(path,half_life,lambda_half_life)
                    for row,a,r in zip(path,adv,returns):row.update(advantage=float(a),returns=float(r));samples.append(row)
                message.update(spec=spec,policy_seed=seed,actions=actions,outcomes=dict(receipts),
                    team_return=team_potential(message['active'],initial)+terminal_reward(message['winner']),
                    mean_entropy=float(np.mean(entropy)) if entropy else 0.,
                    sampled_argmax_share=float(np.mean(matches)) if matches else 1.,
                    mean_top_probability=float(np.mean(top_probabilities)) if top_probabilities else 1.,
                    keep_legal_share=float(np.mean(keep_legal)) if keep_legal else 0.)
                if schema==4:
                    message.update(go_now_share=float(np.mean(go_now)) if go_now else 0.,
                        now_legal_share=float(np.mean(now_legal)) if now_legal else 0.,
                        committed_now=int(receipts['committed_now']))
                return samples,message
            else:raise ValueError('Unknown worker response '+str(message))


class ElasticPool:
    """Persistent workers whose number follows capacity(), rechecked between battles.

    run(tasks, fn) calls fn(worker, task) for every task and returns the results in task order,
    so the outcome never depends on how many workers ran or which one took a task.
    """
    def __init__(self, binary, logdir, capacity):
        self.binary, self.logdir, self.capacity = binary, Path(logdir), capacity
        self.idle, self.created, self.lock = [], 0, threading.Lock()
        self.logdir.mkdir(parents=True, exist_ok=True)
        self.peak = 0

    def _worker(self):
        with self.lock:
            if self.idle: return self.idle.pop()
            self.created += 1; number = self.created
        return Worker(self.binary, self.logdir/f'worker-{number}.log')

    def run(self, tasks, fn):
        pending = queue.Queue()
        for item in enumerate(tasks): pending.put(item)
        results, errors, state = [None]*len(tasks), [], {'active': 0}
        wake = threading.Condition(self.lock)
        def loop(worker):
            try:
                while True:
                    with self.lock:
                        # Shrink: leave (counted at once) when more workers run than the cap allows.
                        if errors or state['active'] > self.capacity():
                            state['active'] -= 1; self.idle.append(worker); wake.notify_all(); return
                    try: index, task = pending.get_nowait()
                    except queue.Empty: break
                    results[index] = fn(worker, task)
            except BaseException as error:
                with self.lock: errors.append(error)
                worker.close(); worker = None
            with self.lock:
                state['active'] -= 1
                if worker is not None: self.idle.append(worker)
                wake.notify_all()
        threads = []
        while True:
            with self.lock:
                if errors or (pending.empty() and state['active'] == 0): break
                grow = 0 if pending.empty() else max(0, min(self.capacity(), state['active']+pending.qsize()) - state['active'])
                state['active'] += grow
                self.peak = max(self.peak, state['active'])
            for _ in range(grow):
                thread = threading.Thread(target=loop, args=(self._worker(),), daemon=True)
                thread.start(); threads.append(thread)
            with self.lock: wake.wait(timeout=5)
        for thread in threads: thread.join()
        with self.lock:
            # Keep at most the current cap alive between batches.
            while len(self.idle) > self.capacity(): self.idle.pop().close()
        if errors: raise errors[0]
        return results

    def close(self):
        with self.lock: idle, self.idle = self.idle, []
        for worker in idle: worker.close()

    def hello(self):
        """The simulator hello of a (possibly new) idle worker, kept for the next run."""
        worker = self._worker()
        with self.lock: self.idle.append(worker)
        return worker.hello


# ---------------------------------------------------------------- one process per worker (plan 026 P3c)

def _child_main(connection, binary, log, deterministic):
    """One rollout process: owns one Worker and runs the tasks the parent sends, one at a time.

    Messages are pickled explicitly (never the multiprocessing pickler, which moves torch tensors
    through shared memory): ('fn', run, blob) sets the function of a run, ('task', index, blob)
    runs fn(worker, task), ('quit',) ends. Replies: ('hello', hello, simulator pid),
    ('ok', index, result) or ('error', index, exception, traceback text). After an error the
    child closes its simulator and exits, as a failed thread worker is discarded.
    """
    import pickle, signal, sys, traceback
    def stop(*_): raise SystemExit(143)
    signal.signal(signal.SIGTERM, stop)
    torch.set_num_threads(1); torch.use_deterministic_algorithms(deterministic)
    worker = None
    def reply(message):
        try: connection.send_bytes(pickle.dumps(message))
        except Exception as error:   # an unpicklable result or exception still reaches the parent
            connection.send_bytes(pickle.dumps(('error', message[1] if len(message) > 1 else None,
                RuntimeError(f'Rollout process reply could not be pickled: {error!r}'), traceback.format_exc())))
    try:
        try: worker = Worker(binary, log)
        except Exception as error:
            reply(('error', None, error, traceback.format_exc())); return
        reply(('hello', worker.hello, worker.proc.pid))
        fn = None
        while True:
            try: message = pickle.loads(connection.recv_bytes())
            except EOFError: return          # parent gone
            if message[0] == 'quit': return
            if message[0] == 'fn': fn = pickle.loads(message[2]); continue
            index = message[1]
            try: result = fn(worker, pickle.loads(message[2]))
            except Exception as error:     # SystemExit (SIGTERM) and KeyboardInterrupt just end the child
                reply(('error', index, error, traceback.format_exc())); return
            reply(('ok', index, result))
    finally:
        if worker is not None: worker.close()
        connection.close()


class _Child:
    def __init__(self, context, binary, log, deterministic):
        self.connection, remote = context.Pipe()
        self.process = context.Process(target=_child_main, args=(remote, str(binary), str(log), deterministic),
                                       daemon=True, name='rollout-'+Path(log).stem)
        self.process.start(); remote.close()
        self.run, self.hello, self.simulator = None, None, None

    def send(self, message):
        import pickle
        self.connection.send_bytes(pickle.dumps(message))

    def receive(self):
        import pickle
        try: return pickle.loads(self.connection.recv_bytes())
        except (EOFError, OSError):
            self.process.join(timeout=5)
            return ('error', None, RuntimeError(f'Rollout process {self.process.name} exited '
                                                f'(code {self.process.exitcode})'), '')

    def close(self, polite=True, timeout=10):
        if polite and self.process.is_alive():
            try: self.send(('quit',))
            except OSError: pass
            self.process.join(timeout)
        if self.process.is_alive():
            self.process.terminate(); self.process.join(timeout)   # SIGTERM: the child closes its simulator
        if self.process.is_alive():
            self.process.kill(); self.process.join()
        self.connection.close()


def _raised(error, trace):
    if trace and hasattr(error, 'add_note'): error.add_note('In the rollout process:\n'+trace.rstrip())
    return error


class ProcessPool:
    """ElasticPool's contract with one spawned Python process per worker slot.

    Threads of one process serialise on the GIL (plan 026 P3a: 8 workers in one process lose 43%
    throughput); a process per worker does not. run(tasks, fn) calls fn(worker, task) in a child,
    so fn and every task and result must be picklable: use a module-level function, or
    functools.partial of one, whose arguments carry the state (for example actor and critic). fn is
    pickled once per run, when run() starts, so the children use the state as it is at that moment.
    Results come back in task order, and the number of processes follows capacity(), rechecked
    between battles, so outcomes never depend on the worker count. Children set one torch thread and
    the parent's deterministic-algorithms flag at creation. Children are spawned, so they import the
    parent's __main__ module: a script that makes a pool needs an `if __name__ == '__main__'` guard
    (python -m tools.neural.ppo has one).
    """
    def __init__(self, binary, logdir, capacity, deterministic=None):
        import multiprocessing
        self.binary, self.logdir, self.capacity = binary, Path(logdir), capacity
        self.context = multiprocessing.get_context('spawn')
        self.deterministic = torch.are_deterministic_algorithms_enabled() if deterministic is None else deterministic
        self.idle, self.children, self.created, self.runs, self.peak = [], [], 0, 0, 0
        self.logdir.mkdir(parents=True, exist_ok=True)

    def _start(self, count):
        """Start count children at once and wait for every hello."""
        fresh = []
        for _ in range(count):
            self.created += 1
            fresh.append(_Child(self.context, self.binary, self.logdir/f'worker-{self.created}.log', self.deterministic))
        self.children += fresh
        failure = None
        for child in fresh:
            message = child.receive()
            if message[0] == 'hello': child.hello, child.simulator = message[1], message[2]
            else:
                failure = failure or _raised(message[2], message[3])
                self.children.remove(child); child.close()
        if failure is not None:
            for child in fresh:
                if child in self.children: self.idle.append(child)
            raise failure
        return fresh

    def hello(self):
        """The simulator hello of a (possibly new) idle child, kept for the next run."""
        if not self.idle: self.idle += self._start(1)
        return self.idle[-1].hello

    def run(self, tasks, fn):
        import pickle
        from multiprocessing.connection import wait
        self.runs += 1; blob = pickle.dumps(fn)
        results, errors, busy, following = [None]*len(tasks), [], {}, 0
        try:
            while True:
                if not errors and following < len(tasks):
                    want = min(max(1, self.capacity()), len(busy)+len(tasks)-following) - len(busy)
                    if want > len(self.idle):
                        self.idle += self._start(want-len(self.idle))
                        # Starting takes seconds: honour a cap lowered meanwhile (extras stay idle).
                        want = min(max(1, self.capacity()), len(busy)+len(tasks)-following) - len(busy)
                    for _ in range(max(0, want)):
                        child = self.idle.pop()
                        try:
                            if child.run != self.runs: child.send(('fn', self.runs, blob)); child.run = self.runs
                            child.send(('task', following, pickle.dumps(tasks[following])))
                        except OSError:        # the idle child died: a worker failure, as in a thread
                            errors.append(RuntimeError(f'Rollout process {child.process.name} is gone'))
                            self.children.remove(child); child.close(); break
                        busy[child.connection] = (child, following); following += 1
                    self.peak = max(self.peak, len(busy))
                if not busy: break
                for connection in wait(list(busy), timeout=5):
                    child, index = busy.pop(connection)
                    message = child.receive()
                    if message[0] == 'ok' and message[1] == index:
                        results[index] = message[2]; self.idle.append(child)
                    else:
                        if message[0] == 'ok': message = ('error', index, RuntimeError('Rollout reply out of order'), '')
                        errors.append(_raised(message[2], message[3]))
                        self.children.remove(child); child.close()
        except BaseException:
            # Interrupted (or a local failure): stop the busy children now, simulators included.
            for child, _ in busy.values():
                if child in self.children: self.children.remove(child)
                child.close(polite=False)
            raise
        # Keep at most the current cap alive between batches.
        while len(self.idle) > self.capacity():
            child = self.idle.pop(); self.children.remove(child); child.close()
        if errors: raise errors[0]
        return results

    def close(self):
        children, self.children, self.idle = self.children, [], []
        for child in children: child.close()
