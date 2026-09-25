"""Time-aware returns for independent squad trajectories in one cooperative battle."""
from __future__ import annotations
import math
import numpy as np


def team_potential(active, initial):
    """A small symmetric force-preservation term, independent of decision frequency."""
    return (active[0] / max(1, initial[0]) - active[1] / max(1, initial[1]))


def terminal_reward(winner):
    return .25 if winner == 0 else -.25 if winner == 1 else 0.0


def advantages(trajectory, half_life=600.0, lambda_half_life=30.0):
    """Each row already links to the NEXT DECISION OF THE SAME SQUAD.

    Actual battle end has next_value=0. A nonterminal collector cutoff must supply
    its bootstrapped next_value; do not mark a live continuation terminal.
    Reward is accumulated with the same elapsed-time discount within each interval.
    """
    result = np.zeros(len(trajectory), dtype=np.float32)
    carried = 0.0
    for i in range(len(trajectory)-1, -1, -1):
        row = trajectory[i]
        dt = row['elapsed']
        if dt < 0 or not math.isfinite(dt):
            raise ValueError('Invalid squad decision interval')
        gamma = 2.0 ** (-dt / half_life) if half_life else 1.0
        trace = 2.0 ** (-dt / lambda_half_life) if lambda_half_life else 1.0
        continuation = 0.0 if row['terminal'] else 1.0
        delta = row['reward'] + continuation * gamma * row['next_value'] - row['value']
        carried = delta + continuation * gamma * trace * carried
        result[i] = carried
    return result, result + np.asarray([r['value'] for r in trajectory], dtype=np.float32)
