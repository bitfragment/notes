---
title: Gorn, "Planning Universal Semi-Automatic Coding" (1954)
type: src
---

```bibtex{% raw %}
@inproceedings{gorn_planning_1954,
	address = {Washington, {D.C.}},
	title = {Planning Universal Semi-Automatic Coding},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Gorn, Saul},
	year = {1954},
	pages = {74--83}
}{% endraw %}
```

## Notes

* *Universities reluctant to train programmers.* Picking up where Hopper 1954 had left off in her comments on a "universal pseudocode," Gorn 1954 observed that despite the investment in computer design, construction, and use for data processing at universities, "universities are reluctant to train programmers, feeling that there are too many specialized codes. Perhaps this reluctance will vanish if we can provide a code more or less independent of the machine" (75).

* *Requirements for a "universal code."* Gorn 1954 described some requirements for a "universal code" or "universal coding" and "the machines capable of translating it" (75). The first requirement is translatability: "it must be translatable by the machine into the machine language" (75). The second requirement is relative or "floating" addressing, to leave to an assembler the assignment of final addresses (36).

* *"Translation" vs. assembly.* Gorn 1954 distinguished "translation" of universal code into machine code from assembly, which "transforms from universal code to universal code and involves no reference to machine coding" (81).

## Quotations

*THE NEED AND PURPOSE OF A UNIVERSAL CODE.* "Our civilization is characterized by a herculean effort to control our physical environment. In order to do so our arts, sciences, and professions have developed a profusion of specialties either to deal with the sharpening of our methods of communication or to apportion the tons of information in such a way that single individuals can have them at their command. If this civilization is not to become a Tower of Babel of specialist languages, its vast tonnage of information must be processed mechanicaUy, whether the processing is computing or translating. The artists, scientists, and professionals can then return to a common language and creative thinking." (74)

"I have observed that in spite of the splendid example of such places as M.LT., New York University, Harvard, Illinois, and Michigan, universities are reluctant to train programmers, feeling that there are too many specialized codes. Perhaps this reluctance will vanish if we can provide a code more or less independent of the machine. [new paragraph] If we can provide such a universal code the reluctance to teach programming would disappear for another reason. The logic behind the programming is a type of dynamic symbolic logic, which unknown to themselves all controllers of large-scale routine operations are using whether they are computers, data processers, production engineers, traffic controllers, or administrators of large companies. It is no accident that all such people make use of flow charts. [...] If, then, we make our universal code simple enough, anyone should be able to learn to use it in a short time, and could be ignorant of what machine will be running his problem [...]." (75)

*REQUIREMENTS OF A UNIVERSAL CODE AND THE MACHINES CAPABLE OF TRANSLATING IT.* "In considering the requirements of a universal code, the first one we remark on is that it must be translatable by the machine into the machine language^ This means that it can only be applied to a machine which, like all those expected to do automatic coding, can translate into its own language, i.e., can construct and adjust its own commands. We will therefore assume that commands are stored internally just like other words, so that the only way in which a word is recognized as a command is that it reaches the control circuita through the sequencing of previous commands." (75-76)

*TRANSLATING.* "We call the transformation of the universal code of a routine to the form in which all nonatomic subroutinea have been replaced by their universal code involving only atomic subroutines the *assembly phase*. It results in the *completely assembled* universal code of the subroutine. The completely assembled subroutine contains, then, only atomic subroutines. The programmers on a particular machine can readily design a routine translating from completely assembled universal code to machine code. The machine carries out the translation in two phases. In the first phase the universal code words are read in groups of complete atomic subroutines. Each such group is transformed at addresses chosen by the machine into the machine code words producing the same subroutine, with the relative addresses still appearing in the words. At the same time a directory is formed matching the chosen addresses with the universal addresses. In phase 2, each address in the machine code words is systematically replaced by the corresponding address in the *directory* to yield the complete machine code." (80-81)
