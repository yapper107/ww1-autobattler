# Attempt 2: 43fa89b237f5d3f6

25/28 pass again; all old pairs/pins and Q01 pass. Q02/Q03 have no fixing volley. Q04 accepts neighbour help at22.75 after NeedSupport21.3 but fires no rounds by60; its distant HelpSquad issue/receipt now passes.

Trace88 and evaluation at10/25/60 show soldiers0/7 assigned sector [51,-18], despite HelpSquad's objective [70,0]. UpdateSquadAction sets action.objective from the intent but leaves p.sector at the no-contact default before generating soldier orders. This is a production defect, not a reason to change the assertion. Q04 gun15 receives support at24.1 (trace8024), but remains [3.2366,33.2357] behind the screen with no known firing solution. Assign's q.firing is true only for Observe, even for the new help contract. Cover alone is insufficient for a support position.

Final allowed attempt: bind support orders to their requested sector, require a line for new HelpSquad/radio-help slots and search a bounded60m neighbourhood, and make distant HelpSquad move within support range before assigning protected firing slots. Keep scenario assertions and the attempt2 fixtures unchanged. No distributions.
