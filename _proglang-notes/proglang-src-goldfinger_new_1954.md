---
title: Goldfinger, "New York University Compiler System" (1954)
type: src
---

```bibtex{% raw %}
@inproceedings{goldfinger_new_1954,
	address = {Washington, {D.C.}},
	title = {New York University Compiler System},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Goldfinger, Roy},
	year = {1954},
	pages = {30--33}
}{% endraw %}
```


*History.* Goldfinger 1954 described the compiler designed for use with the UNIVAC operated by the Atomic Energy Condition Computing Facility at New York University since 1953. Because the UNIVAC was too slow to permit the use of interpretive routines that "would increase running time by a factor of ten or worse" (30), a compiler was needed (Goldfinger contrasts the UNIVAC with the faster IBM 701 and its Speedcode System: "Unfortunately for us […] The difference in running speeds of UNIVAC and IBM 701 permits such a program in the one case, that was definitely denies any other" [30]). "What was required was something to facilitate program preparation and permit the use of a library of subroutines while still not interfering with the normal running ability of the UNIVAC" (30). Goldfinger writes that they considered the A series of compilers developed for UNIVAC by Remington Rand, as well as the S-2 assembly program used by the IBM 701, combining features of each of them into the NYU compiler (30). "The NYU compiler," he explained, "puts together pieces of coding — subroutines — written in straightforward machine language, assembles them in any order and relationship the programmer may specify, and produces as a consequence a program which is almost indistinguishable from a program written without a compiler" (31).

*Not ceding too much control to the compiler, which can be inflexible and wasteful compared with the human programmer.* Goldfinger stressed that the NYU compiler was a rudimentary program, requiring the programmer to make various determinations of memory storage himself or herself, and not at all something that would enable "untrained personnel" to operate their UNIVAC. "A more elaborate compiler scheme aimed at simplifying program preparation to the extent required for the uninitiated," he continues, "would be more hindrance than help to those of us who are regularly engaged in programming and coding and by whom this compiler is intended to be used" (32). Warning that the NYU team saw no point in using a compiler which produced slower or more memory-wasting program than could be produced without it, Goldfinger stressed "the maximum degree of flexibility in program preparation" and deliberately granting "the programmer the greatest possible amount of control over the behavior of the compiler, even to the extent of requiring that the programmer assume clerical tasks which the machine could otherwise be made to accomplish. We have found that it is sometimes more profitable to require less of the machine. Where the machine might proceed in some inflexible way to assign memory locations, for example, the programmer, if given control, may arrange the memory as he wishes" (32).
