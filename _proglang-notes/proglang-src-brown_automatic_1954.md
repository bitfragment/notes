---
title: Brown and Carr, "Automatic Programming and Its Development on the MIDAC" (1954)
---

```bibtex{% raw %}
@inproceedings{brown_automatic_1954,
	address = {Washington, {D.C.}},
	title = {Automatic Programming and Its Development on the {MIDAC}},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Brown, J. H. and Carr {III}, John W.},
	year = {1954},
	pages = {84--97}
}{% endraw %}
```


Precis 1
--------

Brown and Carr 1954 remarked that initially, there were those who clung to "direct binary (or associated octal or hexadecimal) coding of instructions," resisting even the use of decimal numbers (85). Describing the development of early "Input Translation Programs" – "programs which translated both numbers and instructions from an external decimal language more useful to human beings, into an internal binary language more useful to the machine" — they identified an important "recognition of the principle of a dual language system and a programmed translation between the two languages, using the computer to perform the translation" (85). Alongside this development of "translation" processes came the development of mnemonic instruction codes using algebraic notation or abbreviated English words (85). They identified two "directions" in which the "general idea of translation was developed": what they call "pre-translation," or compiling, and "running-translation" or "interpretation" (86). Compiling was possible on systems with significant storage capacity (e.g., on magnetic tape), while interpretation "was the only feasible translation method in machines with small amounts of storage" (86).

"External languages" like mnemonic codes, decimal expression, and so on did not, however, Brown and Carr 1954 noted, prevent programming mistakes, either "arithmetic, logical, or clerical" (86). Compilers made it possible to work with "symbolic" or "floating" memory addresses, leaving its to the compiler to assign absolute addresses ("automatic address assignment") (86). When standard subroutines were developed and stored to prevent the duplication of efforts, and the subroutines were combined with compiling techniques, the concept of "automatic assembly" appeared (87).

"The opponents of translation procedures," Brown and Carr 1954 noted, objected that this only put more of the burden on the programmer, since in order to check the program for mistakes he would have to "know and use both external *and* languages, which nullifies some of the advantage" provided by the compiler (87).

Of the need to develop a "universal computer language," Brown and Carr observed that the computer inputs of the time, "limited to certain standard input characters, are not able to assimilate the more unusual symbols needed" by existing combinatorial and logical languages that might otherwise be adapted to the task. "No one is quite certain," they noted, "whether a program formulated for system with internal binary structure can be efficiently handled by a second system with mainly internal decimal arithmetic" (89). But it would be worth pursuing, they conclude, to prevent the "commercial capture of the computer and data processing field by one make of machine, or arbitrary ruling on machine specifications by government fiat" (90).

The second half of the paper (90-97) describes the Input Translation Program (ITP) used with the MIDAC at the University of Michigan.



Precis 2
--------

"A new term has developed recently in the automatic digital computer field," Brown and Carr began in "Automatic Programming and Its Development on the MIDAC" (1954). "'Automatic programming,' a concept which 10 years ago would have been worthy only of the science-fiction writers, is now within view, if not reach, of the users of high-speed digital computers" [@brown-carr_automatic_1954, 84].

Brown and Carr remarked that during the first decade of the use of digital computers for data processing, most of the effort put into refining the process had focused on speed and efficiency in computation, neglecting "automaticity," or the "fact that these machines could make complicated decisions" [@brown-carr_automatic_1954, 84].

Brown and Carr defined "automatic programming" as "all those methods which attempt to shift the burden of formulation and programming of problems for automatic computers onto the machines themselves" [@brown-carr_automatic_1954, 84]. They did not see this as leading to a stage of completely autonomous automation, but rather "some measure of effectiveness for a combination of machines and associated human beings working together" [@brown-carr_automatic_1954, 84].
