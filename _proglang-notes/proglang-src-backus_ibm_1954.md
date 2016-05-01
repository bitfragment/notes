---
title: Backus and Herrick, "IBM 701 Speedcoding and Other Automatic-Programming Systems" (1954)
type: src
---

```bibtex{% raw %}
@inproceedings{backus_ibm_1954,
	address = {Washington, {D.C.}},
	title = {{IBM} 701 Speedcoding and Other Automatic-Programming Systems},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Backus, John W. and Herrick, Harlan},
	year = {1954},
	pages = {106–113}
}{% endraw %}
```


*The IBM 701 Speedcoding system.* Describing the IBM 701 Speedcoding system (an interpretive system), Backus and Herrick 1954 note that it was designed for what they call an "open shop" installation, in which the programming was done directly by the engineers or scientists working on the problems themselves, rather than by a trained operator (108).

*Two purposes of programming languages.* Backus and Herrick 1954 describe two "basic purposes" of "automatic-programming systems": first, to provide access to "operations which are not part of a machines repertoire"; second, to provide "a more convenient form" for those operations which *are* already part of a particular computer's repertoire" (106). Usually, they suggest, it is more cost-efficient for programmer to give instructions in the "'foreign' language" of a pseudocode "and have the machine translate it into its own language" then to have the programmer constructions directly in machine language" (106).

*Code-switching.* Backus and Herrick 1954 note that in order to offset the "small difference" in efficiency of processing between machine language and a pseudocode, "some programming systems permit some operations to be designated in machine language while others which are not machine operations are interpreted as belonging to a nonmachine language" (106).

*Interpretive vs. compiling methods.* Distinguishing between interpretive and compiling methods used in automatic programming systems, Backus and Herrick 1954 explained that "[a]n interpretive system translates and executes each nonmachine order every time such an order is encountered during the execution of the program, but leaves it untranslated in memory. Thus, each order will be translated as many times as it is encountered during the course of the problem. A compiling system, on the other hand, translates each nonmachine order into a sequence of machine orders before the problem solution is begun. Each nonmachine order is therefore translated only once. When the comparison is made in this way it appears that compiler systems are more efficient than interpretive systems. However, the relative efficiency of the two systems depends on the type of machine being used" (107).

*Efficient translation of programming languages into machine language.* Backus and Herrick 1954 note that even existing pseudocodes ("automatic-programming systems") still leave a great deal of "drudgery" to the programmer (111). They note that it would be "reasonable" for a programmer to wish to provide only "formulas for the numerical solution of his problem and perhaps a plan showing how the data was to be moved from one storage hierarchy to another," and then to "demand that the machine produced the results for his problem" (112). The question, they conclude, is whether translation of "a sufficiently rich mathematical language into a sufficiently economical machine program at sufficiently low cost to make the whole affair feasible" is possible (112). "It seems," they had, "that this is going to be the vital question for automatic programming in the future" (112). "Whether such an elaborate automatic-programming system is possible or feasible has yet to be determined" (113).
