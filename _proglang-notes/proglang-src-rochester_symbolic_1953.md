---
title: Rochester, "Symbolic Programming" (1953)
type: src
---

```bibtex
@article{rochester_symbolic_1953,
	title = {Symbolic Programming},
	volume = {{EC-2}},
	number = {1},
	journal = {Transactions of the Institute of Radio Engineers Professional Group on Electronic Computers},
	author = {Rochester, Nathaniel},
	month = mar,
	year = {1953},
	pages = {10--15},
}
```

In "Symbolic Programming," Nathaniel Rochester describes a "programmer's problem": after writing a program, the programmer wants to insert an additional instruction. But with instructions placed at actual memory addresses, the insertion will not change the addresses of the instructions that follow it, but actually modify those instructions  (if they contain memory addresses). Rochester notes that "expedients of one sort or another" can be used to "avoid the renumbering problem," but "only at the cost of leaving a tangle of logic which makes the program more difficult to read" (10). He describes a method used with an IBM 701 but adaptable for use with other "automatic calculators" (10). Rather than specifying actual memory addresses in the program, the method uses symbolic addresses, which "have no numerical significance and do not imply a definite sequence": the only requirement is that they be unique (10). An assembly program, "so complex that it would not be useful to describe it in detail here," reads punched-card instructions arranged in a deck, storing in memory a symbolic address derived from the deck order, an actual memory address for the instruction, the instruction itself, and any identifying comments, then printing the program in human-readable form, as well as compressing the instructions and punching them on cards in machine-readable binary format (11, 14).
