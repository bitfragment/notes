---
title: Petersen, "Automatic Coding at G.E." (1957)
type: src
---

```bibtex
@incollection{petersen_automatic_1957,
	address = {Philadelphia, PA},
	series = {Journal of the {Franklin} {Institute} {Monograph}},
	title = {Automatic {Coding} at {G}. {E}.},
	number = {3},
	booktitle = {Automatic {Coding}: {Proceedings} of the {Symposium} on {Automatic} {Coding}, {January} 24-25, {Franklin} {Institute}, {Philadelphia}},
	publisher = {The Franklin Institute},
	author = {Petersen, Richard M.},
	month = apr,
	year = {1957},
	pages = {3--10}
}
```

*Early work in "automatic coding."* F.E. (Betty) Holberton's Master Two-Way Sort Generator for the UNIVAC was "one of the first major efforts in automatic coding" (7). Another UNIVAC automatic coding system used at G.E. is William Joseph Turanski and Anatol W. Holt's Generalized Programming (GP) (see [[proglang-src-holt_general_1958]]), "a system for compiling relative coding together with selected library routines to produce a fixed coded set of UNIVAC instructions" (7). At G.E. Hopper's A-2 compiler was also used and was found "somewhat easier to work with than is G.P. coding for mathematical calculations"; for this reason, "one of our programmers wrote a routine that will translate mixed G.P. and A-2 three-address type coding into regular G.P. relative coding for compiling" (9).

## Transcript of discussion after paper

Jean Sammet: "Do I understand you to say you translated between A-2 pseudo-code and the G.P. compiler?"

Petersen: "Yes. The programmer can write the instructions in G.P. language and if he comes to a point where he would like to switch to a three-address code, he can write that along with the G.P., if he thinks it saves him time. The three-address line of coding would be picked up by an interpreter and be interpreted into regular G.P. coding. The output of the interpreter would go through the G.P. compiler."