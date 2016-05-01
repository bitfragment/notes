---
title: Scott, *Programming Language Pragmatics* (2009)
---

```bibtex{% raw %}
@book{scott_programming_2009,
	address = {Amsterdam ; Boston},
	edition = {3rd ed},
	title = {Programming Language Pragmatics},
	isbn = {9780123745149},
	lccn = {QA76.7 .S38 2009},
	publisher = {{Elsevier/Morgan} Kaufmann},
	author = {Scott, Michael L.},
	year = {2009}
}{% endraw %}
```



Machine language and assembly language
--------------------------------------

"Machine language is the sequence of bits that directly controls a processor, causing it to add, compare, move data from one place to another, and so forth at appropriate times. Specifying programs at this level of detail is an enormously tedious task [...] Assembly languages were invented to allow operations to be expressed with mnemonic abbreviations" [@scott_programming_2009, 5].

* An *assembler* translates from assembly-language mnemonic codes to machine language [@scott_programming_2009, 6]
* A *compiler* translates a higher-level language to an assembly language or to a machine language [@scott_programming_2009, 6]

* Assembly languages are specific to hardware instruction sets, and so the premise of an assembler is a one-to-one relationship between assembly language mnemonics and machine language instructions (even though macros make the issue more complicated) [@scott_programming_2009, 6].
* The premise of a compiler is a more mediated, less direct relationship between the higher-level language and assembly or machine language [@scott_programming_2009, 6]

* Scripting languages are interpreted, rather than being compiled; this represents a skipping of "the translation step" [@scott_programming_2009], 6n2]

* The pressure to develop machine-independent languages led in the 1950s to FORTRAN, the first "high level" PL. FORTRAN required a compiler [@scott_programming_2009, 6].


The "Programming Language Spectrum"
-----------------------------------

The "programming language spectrum" includes families of languages classified by models of computation [@scott_programming_2009, 10]:

* DECLARATIVE languages that describe *what* computation is to be performed
  - Functional languages, which model computation as the recursive definition of functions as expressions with values, inspired by Church's lambda calculus (Lisp/Scheme, ML, Haskell) — vs. imperative assignments that change values in memory
  - Dataflow languages, which model computation as the flow of information among nodes (Id, Val)
  - Logic- or constraint-based languages inspired by predicate logic (Prolog; some consider SQL, XSLT)

* IMPERATIVE languages that describe *how* a computation is to be performed
  - Von Neumann languages that model computation as statements, especially the assignment and modification of variables in a field of memory (Fortran, Ada, C)
  - Scripting languages, as a subset of Von Neumann languages (csh, bash, awk, PHP, JavaScript, Perl, Python, Ruby, Tcl)
  - Object-oriented languages that model computation less as statements in a field of memory than as interaction among semi-autonomous objects (Smalltalk, C++, Java)

"It should be emphasized that the distinctions among language classes are not clear-cut. The division between the von Neumann and object-oriented languages, for example, is often very fuzzy, and most of the functional and logic languages include some imperative features" [@scott_programming_2009, 13-14].

* Declarative languages take the programmer's point of view, imperative languages the implementor's point of view
* Imperative languages dominate, "mainly for performance reasons" [@scott_programming_2009, 10]