---
title: "Sammet, Programming Languages: History and Fundamentals (1969)"
type: src
---

```bibtex
@book{sammet_programming_1969,
	address = {Englewood Cliffs, {N.J.}},
	title = {Programming Languages: History and Fundamentals},
	isbn = {0137299885 9780137299881},
	shorttitle = {Programming languages},
	language = {English},
	publisher = {Prentice-Hall},
	author = {Sammet, Jean E},
	year = {1969}
}
```

[[_TOC_]]

* toc
{:toc}

<!--TOC-->


Terminology
-----------

* Sammet notes that she uses "PL" and "higher level language" interchangeably, but prefers "PL" [@sammet_programming_1969, 1]. (She does not say why.)

* Sammet notes that she does not consider "assembly language" to be a PL, even if it is complex [@sammet_programming_1969, 1].



The first proglang conferences
------------------------------

According to @sammet_programming_1969, the first conferences devoted to the topic of programming languages were the 1954 Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Washington D.C., and the 1956 Symposium on Advanced Programming Methods for Digital Computers, Office of Naval Research.



Proglangs as interfaces
-----------------------

@sammet_programming_1969 describes a PL as a "primary interface between the computer user and the computer itself" [@sammet_programming_1969, 1].



Proglangs as more advanced than automated programming
-----------------------------------------------------

The early years of proglang development to 1957, @sammet_programming_1969 notes, saw the development of a number of "automatic programming systems" most of which did not yet deserve the term "programming language" in a meaningful sense: they included mathematical operations, control functions, and operands, but mostly in a "fixed format" [@sammet_programming_1969, 5].



Proglang development distinct from OS development
-------------------------------------------------

OS development, Sammet notes, came with second-generation computing, around 1959; this, she says, is a major development "entirely distinct from programming languages," more addressed to the needs of the "installation managers" (sysadmins) than those of the programmers [@sammet_programming_1969, 3].


Proglangs as problem-solving
----------------------------

The first sentence of @sammet_programming_1969 describes programming languages as forms of human-machine communication for the purpose of problem-solving:

> Programming languages have become the major means of communication between the person with a problem and the digital computer used to help solve it. In fact, it would be impractical to solve most problems if the computer had to be instructed in machine language. This has come about because most machines tend to operate in binary, and this is clearly an unsatisfactory method of communication for humans; hence the primary interface between the computer user and the computer itself has become the programming language used. [@sammet_programming_1969, 1]

The word "language" in the phrase "programming language," Sammet wrote, "has the broadest possible meaning," including "description of the problem to be solved" (see [[proglang-def-problem]]) and instructions to an operator or operating system [@sammet_programming_1969, 1].

[BL: So, we need to ask ourselves: what is a *problem*?]

[BL: Perhaps we need to think about the soluble problems of engineering versus the mysteries of religion, the antinomies of philosophy, and the contradictions of other domains of knowledge. Secular humanism inherits fundamentally religious questions, which are insoluble problems.]


Machine language programming and symbolic assembly language programming
-----------------------------------------------------------------------

### Machine language programming ###

A hardware instruction set is addressed in "machine language": binary characters or bits, e.g.:

```txt
011011 000000 000000 000000 000001 000000
+----+ +--------------------------------+
^instruction
        ^data
```

Some call these next two forms "assembly language," but that's not worth debating, Sammet writes: the line between "machine language" and "assembly language" isn't clearly defined [@sammet_programming_1969, 2].

The same expression, using a mnemonic code for the instruction:

```txt
CLA    000000 000000 000000 000001 000000
+----+ +--------------------------------+
^instruction
        ^data
```

The same expression, using decimal form for the data:

```txt
CLA 0 0 0 0 64
+-+ +--------+
^instruction
    ^data
```

### Symbolic assembly language programming ###

The same expression, using mnemonic codes for both instructions and data (IBM 704 Symbolic Assembly Program [SAP] used this format):

```txt
CLA TEMP
+-+ +--+
^instruction
    ^variable standing for value in memory
```