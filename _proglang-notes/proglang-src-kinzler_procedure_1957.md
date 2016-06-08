---
title: Kinzler and Moskowitz, "The Procedure Translator — A System of Automatic Programming" (1957)
type: src
---

```bibtex
@incollection{kinzler_procedure_1957,
	address = {Philadelphia, PA},
	series = {Journal of the {Franklin} {Institute} {Monograph}},
	title = {The {Procedure} {Translator} — {A} {System} of {Automatic} {Programming}},
	number = {3},
	booktitle = {Automatic {Coding}: {Proceedings} of the {Symposium} on {Automatic} {Coding}, {January} 24-25, {Franklin} {Institute}, {Philadelphia}},
	publisher = {The Franklin Institute},
	author = {Kinzler, Henry and Moskowitz, Perry M.},
	month = apr,
	year = {1957},
	pages = {39--55}
}
```

"The Procedure Translator, unlike other systems, operates upon English words as input [...] Along with the English, the Procedure Translator has an input, File Designs plus access to a library of generators. [...] The English words are of two classes: 'action words' which bring into play a process, and 'name' words used in the elements of the record pattern as 'amount of insurance'" (39).

"A typical operation in any program would be to compare two fields for equality and if equal, jump to another operation. In the Procedure Translator, one would describe this as follows: `(50) COMPARE NAME-OF-FIELD (A) AND NAME-OF-FIELD (B); IF EQUAL GO-OP 75.
`" (40).

"There are four basic phases to the compiler: Translator, Selector, Allocator, and Processor. The purpose of the Translator is to search the Pseudo-code operations sequentially, choosing only those English words which are important as far as processing is concerned. Such words as name of field, parameters, jump, etc., are picked up and stored in Op. File I, which is the output of the Translators" (40).

In the Selector phase, required subroutines are retrieved from a library (40). In the Allocator phase, addresses are allocated for operations. The Processor phase produces a running program (41).

"The chief advantage of such a system over previous approaches to the problem is that the use of English words [...] permits various levels of management [...] to transmit their ideas from system flow charts directly into the running programs" (42).

A disadvantage is that an "English word system requires more handwriting, typing, proofreading and more opportunity for error than other compilers using symbols" (43).