---
title: Wegstein, "Automatic Coding Principles" (1956)
---

```
@inproceedings{wegstein_automatic_1956,
	address = {Washington, {D.C.}},
	title = {Automatic Coding Principles},
	language = {English},
	booktitle = {Symposium on Advanced Programming Methods for Digital Computers: Washington, {D.C.}, June 28, 29, 1956},
	publisher = {Office of Naval Research, Dept. of the Navy},
	author = {Wegstein, Joseph H.},
	year = {1956},
	pages = {3--6}
}
```

* *Scientific problems vs. business control and scheduling problems.* "Once upon a time, long ago," Wegstein 1956 began, "there were computing systems. On the one hand there were problems: some quite scientific that perhaps required the roots of equations, and some from business or control or scheduling such as how many cherry pies to bake tomorrow. On the other hand there was a computer, a black box from the mathematicians point of view, which contained charges or no charges where charges shouldn't be, and these were represented as zeros or ones, called bits or binary digits for convenience of description. Then programmers came and it was their job to bridge the gap between the problem in the computer" (3). We have a differentiation here between scientific problems with mathematical solutions and "business or control or scheduling" problems such as "how many cherry pies to bake tomorrow."

* *"Decimal words": the replacement of binary with octal, hexadecimal, etc. expression.* Wegstein 1956 described how octal and hexadecimal or sexidecimal systems were used to circumvent the difficulty of working directly with binary (base two) expression, creating "decimal words": "Some computers even spoke directly in decimal words. This is not so long ago" (3).

* *Bridging the gap between the problem and the computer.* Wegstein 1956 described the task of the programmer as bridging the gap between the problem and the computer used to attempt to solve it (3).

* *Early programming as "hand laundry."* Wegstein 1956 described the task of the early programmer as follows: "In order to visualize all the details of a problem he drew pictures of it called flow diagrams. Finally he wrote it up as a list of computer words called a code and fed it to the computer. All this varied in interest from the fascination of a chess game to the monotony of a hand laundry, but all in all it might be regarded as the washboard era. Hand laundrymen as well as good programmers are hard to find that they do a beautiful wash" (3-4).

* *Media for subroutines and for code.* Wegstein 1956 described how subroutines were initially "fed into the computer on cards or paper tape along with codes" for a new program, then later stored on magnetic tape, wire, or drum media, while program codes were usually still input using paper media (4).

* *True code vs. pseudocode.* "The programmer," Wegstein 1956 observed, "now speaks to the black box differently. For example, instead of saying 026000 004046 he says FMP X and the computer is given to understand that it is to multiply the number is currently holding by X using floating-point operations. Because a list of instructions" in such form "is not a true code, it is called a pseudocode or symbolic code and the process of converting it to the true machine code has been called a symbolic assembly operation" (4).

* *One-pass vs. two-pass compilers.* Wegstein 1956 distinguished between "one-pass compilers," which compiled program completely in one sweep, and "two-pass compilers" that first converts symbolic addresses to actual addresses and then makes a second pass "to convert the pseudocode to true code" (4).

* *A universal pseudocode executable by any computer.* Wegstein 1956 noted that there were already "many automatic coding systems in existence," citing SAP, CAGE, ADES, SOAP, FLIP, FLOP, A-1, A-2, B-O, BIOR, SPEEDCODE, BASE 00, PRINT, TRANSLATOR, DUAL, FORTRAN, QUICK, and GEPURS (4). He noted that most of these systems were quite expensive, and that laboratories might continue to use an inferior system merely in order to protect its investments. In an effort to address this, he also noted, organizations such as USE (UNIVAC Scientific Exchange), PACT, and SHARE had emerged in order to coordinate standards for automatic coding on particular machines. Beyond that level, he noted the work being done on information theory and formal logic, which should enable "the black box to reach clear across the To grasp the equations themselves," enabling equations themselves to serve directly a pseudocode; at this point, "the long-sought universal code will also have been found. Universal code designates a pseudocode that is acceptable to more than one type of computer" (5).

* *Time savings, difficulty, and programming knowledge required for automatic coding.* Wegstein 1956 provided two graphs illustrating the decrease in time required to program a solution to a particular problem, as a result of progress in automatic programming, and the decrease in both programming difficulty and programming knowledge required (5) (see [[proglang-fig-wegstein1956-p5-fig2-3]] and [[proglang-fig-wegstein1956-p5-fig2-3]]). The time required to program solution to a particular problem decreased steadily from 1950 through 1956, he suggested, and could be expected to continue its steady decrease. Programming difficulty and programming knowledge required, on the other hand, rose from 1950 to around 1955, owing to the idiosyncrasies among both different computers and different automatic coding systems, all of which had to be mastered first; but, he suggested, advances in automatic programming should enable a steady decrease in both of these categories as well, from around 1955 on first (5-6).
