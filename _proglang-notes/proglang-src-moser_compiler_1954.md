---
title: Moser, "Compiler Method of Automatic Programming" (1954)
type: src
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

## Précis

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

## Quotations

"To compile means to compose out of materials from other documents. Therefore, the compiler method of automatic programming consists of assembling and organizing a program from programs or routines or in general from sequences of computer code which have been made up previously. Note the word 'organizing.' There is more to it than simply copying routines X, A, and B from a library tape and calling the result program Y." (15)

"What are the source materials for generated programs? The A-2 Compiler uses three kinds of source material. There are subroutines for carrying out standard processes, such as floating decimal arithmetic, trigonometric functions, roots, powers, and logarithms. These have been carefully written by hand and thoroughly tested and are listed on a library tape. There are subroutines produced by generator routines according to specifications which describe a particular case of a class of standard processes. Consider the class of input routines. The process of reading successive items from an input tape and placing them in working storage is essentially the same, no matter what the nature of the input data is. In a particular case it is only necessary to designate which tape the information is to be taken from, the length of an item, and the location of the working storage. The third source of material is hand-tailored coding made up for the current problem to take care of any operations for which a standard or generated subroutine is not available." (15)

"New subroutines may be added to a subroutine library at will. There is no limit except the practical one of restricting the search time to whatever is considered reasonable. A library is kept in alphabetical order and a service routine, the Librarian, is available to file new routines or remove discarded ones. Another service routine facilitates locating a subroutine by call word and correcting it. [...] Still another, the Translator, permits many of the compiling instructions to be written in an abbreviated form, where one word replaces up to seven words." (17)