---
title: Isaac, "Machine Aids to Coding" (1952)
type: src
---

```bibtex{% raw %}
@inproceedings{isaac_machine_1952,
	address = {New York, NY, USA},
	series = {{ACM} '52},
	title = {Machine {Aids} to {Coding}},
	url = {http://doi.acm.org/10.1145/800259.808983},
	doi = {10.1145/800259.808983},
	abstract = {Coding for digital computers is a process of translating from one language to another. A problem to be computed might be expressed in algebraic notation of several types or in one of several forms of logical symbolism. This notation or symbolism must be translated into the machine language. In many problems, particularly those involving iterative processing of many variables, the translation is reasonably direct and can be written out and checked with little difficulty. Some problems, however, require a great many instructions dealing with few variables and arranged in complex alternative paths. In these cases the translation process becomes formidable and the most extensive checking often fails to eliminate clerical errors.},
	urldate = {2013-03-31},
	booktitle = {Proceedings of the 1952 {ACM} {National} {Meeting} ({Toronto})},
	publisher = {ACM},
	author = {Isaac, Earl J.},
	year = {1952},
	pages = {17--18},
}{% endraw %}
```

## Coding is translation

"Coding for digital computers is a process of translating from one language ¢o another. A problem to be computed might be expressed in algebraic notation of several types or in one of several forms of logical symbolism. This notation or symbolism must be translated into the machine language." (17)

## Difficulties in translation

"In many problems, particularly those involving iteratfve processing of many variables, the translation is reasonably direct and can be written out and checked with little difficulty. Some problems, however, require a great many instructions dealing with few variables and arranged in complex alternative paths. In these cases the translation process becomes formidable and the most extensive checking often fails to eliminate clerical errors." (17)

## The translation process

### 1. Translation of grammar

"The translation can be divided roughly into two steps, translation of grammar and translation of words. Usually the translation of grammar, passing from one structure convention to another, is the more difficult. The translation of words, substituting one set of arbitrary symbols for another, is a relatively simple process. As an example, consider the algebraic expression y = ax^2 + bx + c. Let the symbol for addition be A, for multiplication, M. Assume the machine design requires a three address code of the form operator-order-operand-result location. [new paragraph] The translation of the grammar would then be: [new paragraph] x M a y / y A b y / y M x y / y A c y [new paragraph] I.e., a sequence of four separate instructions that expresses the fact that y = ax^2 + bx + c in the grammar of the machine. The translation is complex and in general not unique." (17)

### 2. Translation of words

"The next step is the substitution of machine symbols for the algebraic symbols. Let us make the correspondence [new paragraph]  ~ 001, b ~ 002, c ~ 003, x ~ 004, y ~ 005 [new paragraph] Assume that the machine symbol for addition is 1 and for multiplication 2. The translation is then 004 2 OO1 005 / 005 1 002 005 / 005 2 004 005 / 005 1 003 005. [new paragraph] Since this step is merely a replacement of equivalent symbols it is easily done. Nevertheless, in long and complicated codes, clerical errors are almost inevitable, and long and arduous checking is necessary to avoid them. To simplify this process, an obvious recourse is to use auxiliary machines. If the coder wrote in machine grammar but used arbitrary symbols for the words, the auxiliary equipment could perform the substitution" (17–18)
