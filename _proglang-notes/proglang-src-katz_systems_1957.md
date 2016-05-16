---
title: Katz, "Systems of Debugging Automatic Coding" (1957)
type: src
---

```bibtex
@incollection{katz_systems_1957,
	address = {Philadelphia, PA},
	series = {Journal of the {Franklin} {Institute} {Monograph}},
	title = {Systems of {Debugging} {Automatic} {Coding}},
	number = {3},
	booktitle = {Automatic {Coding}: {Proceedings} of the {Symposium} on {Automatic} {Coding}, {January} 24-25, {Franklin} {Institute}, {Philadelphia}},
	publisher = {The Franklin Institute},
	author = {Katz, Charles},
	month = apr,
	year = {1957},
	pages = {17--27}
}
```

*Growth of "automatic coding."* "In May 1952, the first compiler, A-Zero, was presented to a critical and unreceptive computer world. In five short years, the field of automatic coding has grown so tremendously, that today there are more compilers than there are computers [...] Whereas just a few years ago it was unusual to have one paper on automatic coding presented at a computer symposium, today entire symposiums such as this are dedicated to the discussion of new developments in the field of automatic coding and its applications" (17).

*Approaching universality.* Pseudo-codes used by the new compiler systems "more and more closely approach the languages familiar to the users" (17). Formula translator systems use algebraic expressions, while the "B-Zero business compiler employs English words as its pseudo-code" (17). Compiled code is no longer necessarily less efficient than hand-written machine code (18).

*Labor.* "The increasing demand for programmers in the face of the current shortage of trained scientific personnel, has dictated that non-specialized personnel be readily able to use the computers as a tool. The new compilers make it possible for mathematicians, physicists, statisticians, business methods and systems personnel, and accountants to use the computer with a minimum of formal training" (17). At the same time, "[t]he people who can best do scientific work are being spread out over many fields --- all growing and requiring more personnel, so it seems a logical conclusion that the number of available trainees must decrease" (22). [This last argument appears in the transcript of discussion following the paper itself, in answer to the following question by Millard H. Perstein: "[W]hy do you think the number and caliber of programmers will decrease in the future?" The exchange concluded thus: Perstein: "I see what you mean. It is a sort of relative thing. You mean, there won't be as many relative to the demand." Katz: "Yes, the relative number will be smaller" (22).]

*Machine independence.* "The newer pseudo-codes have become independent of any particular computer. Thus, once a problem is defined in pseudo-code, compilers for any one of a line of computers can be used to produce programs for themselves" (17).

*Importance of subroutine generators.* "One of the most important contributions made to the field of automatic coding has been the concept of generators" (18), which created subroutines customized according to parameters in the pseudocode.

*New difficulties in debugging.* A programmer "who has defined his problem in a pseudo-code is confronted with an error in a machine-coded program [...] knows little or nothing about the program he must debug" (19). To address this problem, "systems must be devised that will permit all debugging to be done at the pseudo-code level" (19).
