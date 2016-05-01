---
title: Colburn, Philosophy and Computer Science (2000)
---

```bibtex{% raw %}
@book{colburn_philosophy_2000,
	address = {Armonk, {N.Y}},
	series = {Explorations in philosophy},
	title = {Philosophy and Computer Science},
	isbn = {1563249901},
	lccn = {QA76.167 .C65 2000},
	publisher = {{M.E.} Sharpe},
	author = {Colburn, Timothy R.},
	year = {2000}
}{% endraw %}
```


Program as static text vs. as dynamic process
---------------------------------------------

Is it more sensible to imagine a program as (1) a static text product that ideally conforms to an abstract formal mathematical specification, or as (2) a dynamic process that also includes the specific computational processes of its execution *as well as* the dynamic social context of its production?

132ff.: of all topics in the philosophy of computer science, there has been the most debate on the topic of whether or not program *specifications* (descriptions of a program's input and output) should be mathematical descriptions, and whether or not program verification (determining if a program meets its specification) is or can be accomplished purely mathematically. Program verification has received particularly intense debate; this debate, Colburn notes, was initiated by DeMillo, Lipton, and Perlis's "Social Processes and Proofs of Theorems and Programs" (1979), and positions have tended to divide between those of Hoare in "Mathematics of Programming" (1986) and Floyd in "Outline of a Paradigm Change in Software Engineering" (1987), with Hoare arguing that a computer program is a mathematical expression and Floyd insisting that it was a functional "tool or working environment" designed to meet non-mathematical human needs. Fetzer in "Program Verification: The Very Idea" (1988) "resurrected the program verification/social process debate of a decade earlier and subjected it to genuine philosophical analysis" (Colburn 2000, 133).

A typical statement like "A = 13*74", Colburn notes, can be interpreted as either an imperative (Compute 13*74 and place it in memory location A) or declarative, predicting what happens when the statement is executed (Memory location A stores the value of computing 13*74). But such a statement is never itself executed; rather, it is "translated into or interpreted as a set of more primitive operations to be executed when the program is run" (Colburn 2000, 135). Also, memory locations are ontologically ambiguous (Colburn cites Fetzer here), either physical or abstract depending on whether we are talking about a physical machine (for which the actual behavior of a program is the issue) or just a specification (for which the intended behavior of a program is the issue) (Colburn 2000, 135). For these reasons we cannot imagine program statements as analytic in the philosophical sense and therefore mathematical, as Hoare suggested; rather, they are closer to Austinian performative utterances, true by virtue of have been made, rather than true according to the entirely formal criteria of a system of rules (Colburn 2000, 135--136).

Early attempts to formulate a mathematical basis for computer science, Colburn notes, struggled with the relationship between the static character of a program and the dynamic character of its execution (Colburn 2000, 136--137). "We can, in fact, look back now after nearly thirty years and confirm that automatic program translation, with the help of precise language specification, has been accomplished in the case of language *compilers*" (Colburn 2000, 137). But no compiler is ever guaranteed to "in all cases *correctly* translate programs into an assembly or machine language" (Colburn 2000, 137), and mathematics as formal proof on a static abstract machine is one thing, while mathematics as an engineering tool for program language translation is another (138). The program verification debate turned on this distinction, with some thinkers emphasizing formal proof that a program meets its specification (and demanding that programmers apply mathematics in programming practice) over debugging using test executions (138). 

Advocacy for a mathematical basis for programming would continue through the 1980s (141). Naur's work in the 1980s, beginning with "Formalization in Program Development," marked a shift away from mathematics as a formal paradigm for computer science and toward mathematics as an engineering tool for the specification and verification of programs (144). Floyd, considerably extending the arguments of DeMillo, Lipton, and Perlis, resisted what she called the "product-oriented perspective" that regarded software as static, independent programs with their specifying texts, recommending instead a socially sensitive process-oriented perspective in which specifications are produced for particular clients and their needs, which will necessary be dynamic themselves, changing in time (Colburn 2000, 146).


Program ontology
----------------

"On the abstract side of the abstract/concrete dichotomy" peculiar to software "lies perhaps the most successful reductivist project ever conceived. […] the whole history of computer science has seen the careful construction of layer upon layer of distancing abstractions upon the basic foundation of zeros and ones. Each time a programmer writes and executes a high-level program, these layers are stripped away one by one in elaborate translations from talk of, say, chat rooms, to talk of windows, to talk of matrices, to talk of variables, registers, and memory addresses too, finally, zeros and ones. As an abstraction, this out this translation is complete and flawless. The concrete embodiment of the zeros and ones and physical state, however, is not an abstract process" (206).

The "ontological status of computer software" (198) is an issue for both philosophers and policymakers dealing with intellectual property and free speech (198). Software is a "concrete abstraction" (198): TODO: complete here from end of chapter

A software algorithm can be expressed in "a natural language like English, if it is being described informally" (199), or in "an artificial language like C++ or Java" (199), in which case "the algorithm is encoded in the text of a computer programming language" (199). Debates over export restrictions on cryptographic software, for example, have divided between a libertarian position that construes software algorithms ontologically as *text* (and supports their free distribution)and a regulatory position that construes software algorithms ontologically as *mechanisms* (200). This division has also appeared in debates generated by the efforts of intellectual property law to deal with software: is software text, and therefore covered by copyright (historically tied to literary products), or is it mechanism, and therefore covered by the patent (historically tied to engineered machines) (200)? [TODO: here from langsec notes on software and copyright]

*Program text* is an *abstraction* encoding an algorithm; it is a "formal description of a computational process" (201). *Software,* on the other hand, is not textual: it is the *concrete* patterns of magnetic polarization, etc. that cause the execution of that computational process and that we *abstract* as binary numbers (200). Software's *medium of description* is text: that is, it is textual and abstract; software's *medium of execution* is "circuits etched in silicon" (202): that is, it is mechanical and concrete (201). 

The C++ statement 
    
    c = a + b

is translated by a *compiler* into instructions in an "assembly language representation" like 

    copy    a, reg1
    add     b, reg1
    copy    reg1, c

Though compilers have *automated*, such assembly language representations, 
they remain abstract representations, remote from the language of the CPU, 
"which is the binary language of ones and zeros" (202), and lacking any direct relation to the material medium of execution (202). 

An *assembler* translates such assembly language representations into machine language representations, "whose elements of ones and zeros" (202). A machine language representation of the assembly language representation above might look like this:

    00010001000100010000011110111000
    10000001000100010000011110111010
    00010001001100010000011110111100

"This is the only type of program representation that a central processor 'understands'" (203). And yet such machine language programs, too, are still "static, linguistic entities with seemingly no relationship to the dynamic circuitry required to execute them" (203). "The characterization of physical state in machine language as zeros and ones is *itself* abstraction; the kinds of physical state that this language 'abstracts' are limitless. They may be the electronic states of semiconductors, or the states of polarization of optical media, or the states of punched paper tape, or the position of gears in Babbage's eighteenth-century analytical engine" (206). Instead of flipping mechanical switches to place memory elements into one of two states, today, we use a software link-loader to set the value of bits. "The remarkable thing about software is not that it is a machine whose medium of construction is text, but that a textual description of a piece of software is involved in its own creation as states of memory elements" (203). 
