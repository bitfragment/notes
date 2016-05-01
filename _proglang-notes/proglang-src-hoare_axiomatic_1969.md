---
title: Hoare, "An Axiomatic Basis for Computer Programming" (1969)
type: src
---

```bibtex
@article{hoare_axiomatic_1969,
	title = {An Axiomatic Basis for Computer Programming},
	volume = {12},
	issn = {0001-0782},
	url = {http://doi.acm.org/10.1145/363235.363259},
	doi = {10.1145/363235.363259},
	abstract = {In this paper an attempt is made to explore the logical foundations of computer programming by use of techniques which were first applied in the study of geometry and have later been extended to other branches of mathematics. This involves the elucidation of sets of axioms and rules of inference which can be used in proofs of the properties of computer programs. Examples are given of such axioms and rules, and a formal proof of a simple theorem is displayed. Finally, it is argued that important advantage, both theoretical and practical, may follow from a pursuance of these topics.},
	number = {10},
	urldate = {2013-09-05},
	journal = {Communications of the {ACM}},
	author = {Hoare, C. A. R.},
	month = oct,
	year = {1969},
	pages = {576–580}
}
```


Reading program text as deductive reasoning
-------------------------------------------

"Computer programming is an exact science in that all the properties of a program and all the consequences of executing it in any given environment can, in principle, be found out from the text of the program itself by means of purely deductive reasoning. Deductive reasoning involves the application of valid rules of inference to sets of valid axioms." [@hoare_axiomatic_1969, 576]

Hoare wrote of "deductive reasoning, using an axiom set which describes the logical properties of the hardware circuits. When the correctness of a program, its compiler, and the hardware of the computer have all been established with mathematical certainty, it will be possible to place great reliance on the results of the program, and predict their properties with a confidence limited only by the reliability of the electronics." [@hoare_axiomatic_1969, 579].


Against "hacking"
-----------------

At present, Hoare complained, "the method which a programmer uses to convince himself of the correctness of his program is to try it out in particular cases and to modify it if the results produced do not correspond to his intentions. After he has found a reasonably wide variety of example cases on which the program seems to work, he believes that it will always work." [@hoare_axiomatic_1969, 579]


Programming language design
---------------------------

"Another of the objectives of formal language definition is to assist in the design of better programming languages." [@hoare_axiomatic_1969, 580]


Hardware dependence and interoperability
----------------------------------------

1. "Another problem which can be solved, insofar as it is soluble, by the practice of program proofs is that of transferring programs from one design of computer to another. Even when written in a so-called machine-independent programming language, many large programs inadvertently take advantage of some machine-dependent property of a particular implementation, and unpleasant and expensive surprises can result when attempting to transfer it to another machine. However, presence of a machine-dependent feature will always be revealed in advance by the failure of an attempt to prove the program from machine-independent axioms." [@hoare_axiomatic_1969, 580]

2. "A high level programming language, such as ALGOL, FORTRAN, or COBOL, is usually intended to be implemented on a variety of computers of differing size, configuration, and design. It has been found a serious problem to define these languages with sufficient rigour to ensure compatibility among all implementors. Since the purpose of compatibility is to facilitate interchange of programs expressed in the language, one way to achieve this would be to insist that all implementations of the language shall "satisfy" the axioms and rules of inference which underlie proofs of the properties of programs expressed in the language, so that all predictions based on these proofs will be fulfilled, except in the event of hardware failure. In effect, this is equivalent to accepting the axioms and rules of inference as the ultimately definitive specification of the meaning of the language." [@hoare_axiomatic_1969, 580]

3. "Another of the great advantages of using an axiomatic approach is that axioms offer a simple and flexible technique for leaving certain aspects of a language undefined, for example, range of integers, accuracy of floating point, and choice of overflow technique. This is absolutely essential for standardization purposes, since otherwise the language will be impossible to implement efficiently on differing hardware designs." [@hoare_axiomatic_1969, 580]
