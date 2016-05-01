---
title: Moser, "Compiler Method of Automatic Programming" (1954)
---

```bibtex{% raw %}
@inproceedings{moser_compiler_1954,
	address = {Washington, {D.C.}},
	title = {Compiler Method of Automatic Programming},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Moser, Nora B.},
	year = {1954},
	pages = {15--21}
}{% endraw %}
```

Describing Hopper's A-0 compiler as "a very limited prototype designed to prove the idea of compilers was practical," Moser 1954 observed that "A-2 is by no means the last word in compilers," but merely "one of the family which started with A-0" (17). Moser listed six services performed by any current compiler (including the A-2) for the programmer, all of them "with machine speed and accuracy, far surpassing human performance of the same operations" (18):

1. Assignment of memory space for subroutines; conversion of relative addresses in subroutines to absolute addresses;
2. "Automatic or programmed segmentation of the compiled program";
3. "Transfer of control between any subroutines in the program";
4. Conversion of symbolic addresses of instructions and data to programmer-assigned storage addresses;
5. Checking for library subroutines in tape storage;
6. Assembling a "complete program on tape, ready to use independently of the library or the compiler or the compiling instructions" (17-18)

Automatic programming with the compiler method, Moser suggested, can ensure that "[t]he first draft is the final draft," unlike writing directly in machine code, in which "it is usually necessary to wait until the first draft is complete before definite memory locations can be designated for the constants, working storage, and all the various parts of the coding. Then the second draft must be made replacing tentative addresses with a definite addresses. This process is a common source of error" (19).

"What is the range and power of the compiling technique," Moser asked in closing, "and what sort of animal is a compiler, anyway? Any reasonably good compiler, similar to A-2 as I have described it, is a pseudocomputer. [...] It is addressed in a pseudocode, the compiling instructions. The compiler is a much more convenient and flexible computer than a UNIVAC or a 701 or a SEAC. If you want to add a new command, you break the desired operation down into machine commands and add the new subroutine to a library tape […] It is convenient, because the compiler commands correspond much more closely than machine commands to the steps a human computer would take in solving a problem" (21). "The A-2 Compiler may be used as anything from a simple service routine to complete pseudocomputer. Regarded as a service routine, it will string together a program composed entirely of hand-tailored sections of coding, and this is a legitimate use. As a library of convenient subroutines is built up for a certain class of computation, the compiler becomes more and more a pseudocomputer. Where an A-2 system is in operation, new programmers would learn only the A-2 pseudocode. The machine code and the mechanics of compiling would be black boxes to them. A few persons comparable to engineers would write new subroutines or special machine coding as required" (21).

"A need is already felt," Moser concluded, "for a super-compiler which will manipulate sequences of pseudocode as subroutines in much the same way as A-2 and other compilers manipulate sequences of machine code" (21).
