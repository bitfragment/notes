---
title: Hopper, "Automatic Programming — Definitions" (1954)
type: src
---

```bibtex{% raw %}
@inproceedings{hopper_automatic_1954,
	address = {Washington, {D.C.}},
	title = {Automatic Programming — Definitions},
	booktitle = {Symposium on Automatic Programming for Digital Computers, Office of Naval Research, Department of the Navy, Washington, {D.C.}, 13-14 May 1954},
	publisher = {{U.S.} Dept. of Commerce, Office of Technical Services},
	author = {Hopper, Grace Murray},
	year = {1954},
	pages = {1--5}
}{% endraw %}
```


## Precis 1

Grace Murray Hopper began her remarks in "Automatic Programming — Definitions" (1954) with the observation that "[i]n the ten years since Mark I first ran, the terms programmer and programming have come into being. The world is so accustomed to talk of automatic computers — large-scale, high-speed, automatically sequenced, digital, computing devices — that the adjective automatic has been dropped and only the term computer is required. Instead, the word automatic now is attached to programming and coding" []@hopper_automatic_1954, 1].

"[S]ome nine or ten years ago," she continued, "a programmer was, of necessity, many things. Numerical analyst, encoder-decoder, electrical or electronic technician, detective and bug-hunter, and finally, evaluator." With the design and implementation of more computers and the diversification and division of the labor of both their maintenance and their use for data processing, she observed, the roles of "analyst, programmer, coder, operator, and maintenance man" gradually separated [@hopper_automatic_1954, 1].

Nonetheless, she observed, "[t]he distinction between the programmer and the coder has never been clearly made. Coder was probably first used as an intermediate point on the salary scale between trainee and programmer" [@hopper_automatic_1954, 1]. A *programmer,* she suggested, was someone who "prepares the plan for the solution of a problem," which may or may not include "numerical and systems analysis," but will invariably describe the way that the flow of data and operations should be managed. The *programmer* communicates such a plan to a *coder* in the form of a flow chart, and "[i]t is then the task of the coder to reduce this flow chart to coding, to a list in computer code, the code representing the operations built into the hardware of the computer" [@hopper_automatic_1954, 1].

"[I]t is this function," she remarked, "that of the coder, time-consuming and fraught with mistakes, that is the first human operation to be replaced by the computer itself" [@hopper_automatic_1954, 1--2].


## Precis 2

In "Automatic Programming — Definitions" (1954), Grace Murray Hopper defined "automatic coding" as the  automation of the coder's labor. The task, she remarked, had two components: "devising a method for expressing the information contained in a flow chart — devising pseudocodes," and "preparing the routines and subroutines to process the pseudocode and produce computer coding and ultimately results" [@hopper_automatic_1954, 2]. (That is, designing what today we call "programming languages," and designing what today we call compilers. "The pseudocodes themselves," she remarks, "form a whole field of study and research" [hopper_automatic_1954, 2].)

In addition to "assembly" and "compiling," as categories of "executive routines" for processing pseudocodes, Hopper mentions "conversion" and "interpretive" routines. All four of these "automatic programming techniques, most of them less than one year old" [@hopper_automatic_1954, 5] were constrained by the character of the particular computers on which they might be run, she noted — but all of them have the same function, to "make it possible for the 'untrained user' to run problems on the computer," as well as to reduce "the load on the programmers" [@hopper_automatic_1954, 2]. The compiling routine  combined most of the functions of the conversion, interpretive, and assembly types of routines, converting pseudocode to computer code, relative and floating addresses to fixed addresses and decimal quantities into binary notation, and dynamically interpreting instructions in assembling a particular program [@hopper_automatic_1954, 3].

Hopper closed "Automatic Programming — Definitions" (1954) by calling for the development of a "universal" pseudocode for which every computer installation would provide its own "interpreter or compiler" [@hopper_automatic_1954, 4]. Remarking on the accumulation of code for existing computers and the proliferation of new computer designs using new sets of hardware instruction codes, she also called for "translators to make available 'old' coding to new computers," to conserve programming time and labor. "Since this will be a mechanical operation," she concluded, "we shall look at the computers to do this job for us" [@hopper_automatic_1954, 5]. More generally, she suggested, "just as compilers control generators to produce programs to process data, we shall soon be talking of systems containing computers controlling and directing computers" [@hopper_automatic_1954, 5].


## Quotations

### Terminology

"In the ten years since Mark I first ran, the terms programmer and programming have come into being. The world is so accustomed to talk of automatic computers --- large-scale, high-speed, automatically sequenced, digital, computing devices --- that the adjective automatic has been dropped and only the term computer is required. Instead, the word automatic now has been attached to programming and coding." (1)

"The distinction between a programmer and a coder has never been clearly made. Coder was probably first used as an intermediate point on the salary scale between trainee and programmer. A 'programmer' prepares a plan for the solution of a problem. This plan may or may not include numerical and systems analysis, but it surely includes plans for the handling of the input and output data from source document to useful result. It is a plan for the flow of data and operations by the computer and its auxiliary equipment as part of a system. A programmer's working tools are flow diagrams, schematic representations of the problem, usually involving fairly gross symbols, and plain English. One of his final results, to be passed on to a coder, will be a flow chart, a detailed graphical representation of the sequence of operations the computer itself is expected to perform. [new paragraph] It is then the task of the coder to reduce this flow chart to coding, to a list in computer code, the code representing the operations built into the hardware of the computer, of the successive operations required to solve the problem. It is this function, that of the coder, time-consuming and fraught with mistakes, that is the first human operation to be replaced by the computer itself." (1)

### Roles and specialization

"In the early days, some nine or ten years ago, a programmer was, of necessity, many things. Numerical analyst, encoder-decoder, electrical or electronic technician, detective and bug-hunter, and finally, evaluator. The increase in the number and speed of computers gave rise to specialization and with this specialization, the definitions of various types of languages for communication among the specialists. As the analyst, programmer, coder, operator, and maintenance man were separated, flow diagrams, flow charts, and other aids to communication were designed. However, up until some three years ago, the only means of communication with the computer remained the instruction code of the operations built into the hardware." (1)

### Pseudocode

"A pseudocode is any arbitrary code, independent of the hardware of the computer, used to state a problem. Pseudocodes now in existence and in use extend all the way from simple extensions of computer codes, through mnemonic vocabularies, to plain English. They make use of many kinds of addresses and many kinds of parameters. The pseudocodes themselves form a whole field of study and research." (2)

### Automatic coding

"The task of automatic coding can be divided into two parts: [new paragraph] 1. devising a method for expressing the information contained in a flow chart --- devising pseudocodes; and [new line] 2. preparing the routines and subroutines to process the pseudo-code and produce computer coding and ultimately results." (2)

"The first time I heard of a library of subroutines was from Professor Howard Aiken when Mark I started running. The earliest 'relatively coded subroutine' I have found is one for sine x written in August 1944 for Mark I. However, it was necessary to wait until 1951 for a working system and a book to read, that prepared by Wheeler, Wilkes, and Gill for the EDSAC." (5)

"The decoding and processing of the pseudocodes are carried out by executive routines. These routines seem to fall into four classes: assembly, compiling, conversion, and interpretive. The type developed by a particular computer installation seems to be primarily dependent on the characteristics of the computer available. All four types attempt to make it possible for the 'untrained user' to run problems on the computer, to reduce the load on the programmers, and to speed up the attainment of a solution; i.e., to reduce the elapsed time between the question and the answer. [new paragraph] All four types of executive routines recognize the subroutine as the building block [...] [new paragraph] All four types of executive routines decode the pseudocode. However, they differ as to whether computation itself is carried out during the decoding process or after the decoding is completed." (2)

"Sharp lines of demarcation are difficult to draw. One factor stands out --- whether or not the executive routine produces a specific routine. Assembly and compiling routines produce specific routines and thus eliminate the reinterpretation of the pseudocode. This seems to be a time-saving of importance in engineering, commercial, and business applications. In scientific applications, the interpretive technique is satisfactory since the problem is usually only solved once. The use of generative subroutines permits one coding job to cover many cases and permits the compiling routines to eliminate 90% of the red-tape operations from the final program." (3)

"[T]hree things seem to govern the type of executive routine prepared for a given computer: [new paragraph] 1. the storage distribution and the input-output and transfer rates; [new line] 2. binary, decimal, alpha-decimal; and [new line] 3. checking. [new paragraph] In addition, the type of problem, one-shot as against many times repeated will influence the decision." (4)

#### Assembly

"An assembly routine, after decoding each pseudocode and locating the corresponding subroutine, processes the subroutine, suitably altering and entering addresses, to produce a problem routine (perhaps not completely specific because it may still require certain parameters)" (2)

### Conversion

"A conversion routine aptly describes itself, since its task is to convert pseudocode to computer code or to call suitable subroutines, to convert relative and floating addresses to specific addresses, to convert decimal quantities into binary notation, to deal with floating-point quantities, and to edit. It may produce computer coding or it may contain within itself an interpretive routine." (3)

"Whether or not conversion routines are required is dictated by whether the computer is binary or decimal, its range, and its acceptable of alphabetic data. There are some mathematicians willing to think in binary but it is a moot question whether businessmen and the general public are willing to do so. For commercial applications, it is likely that the binary computer will demand very complete conversion routines." (4)

### Interpretation

"An interpretive routine processes the pseudocode and the data simultaneously. Having decoded the pseudocode, it locates the subroutine, supplies the data, and carries out the operation before proceeding to the next element of pseudocode." (3)

"[I]f the computer is not automatically checked, an interpretive routine may be safer. Programming is difficult enough to check on paper, but when the computer generates it, it is a little more than difficult to check it. It is probably best to immediately run numbers through it and check the results. However, if the subroutines and compiler have been checked out, and a checked computer is used, all resultant mistakes can be referred back to the mathematician who stated the problem." (4)

### Compilation

"A compiling routine combines most of the functions of the other three. It employs conversion and editing routines for data as subroutines, it interprets pseudocode, and it assembles a specific program. It differs from the assembly routine in its use of dynamic subroutines." (3)

### Hardware constraints

"The computer characteristic most influential in the design of executive techniques seems to be the quantity and availability of storage. At least two kinds of storage are available in all computers; three kinds are distinguishable in many computers; internal, secondary and external." (3)

## Other applications of automatic coding: testing and debugging

"Among the earliest and most useful automatic routines were diagnostic routines designed to track down mistakes and malfunctions; test routines designed to demonstrate that a computer was in working order and arbitrate the eternal debate as to whether 'it' stopped on a computer malfunction or a programming mistake." (5)

## Other applications of automatic coding: translators and "universal codes"

"So far, only the direct coding for computation or data-processing has been mentioned. Automatic techniques are finding further application in other types of routines such as diagnostic, test, and post-mortem routines, and even in translators and 'universal codes'." (4)

"With more and more computers able to interpret pseudocodes and produce their own computer codes, it is not too much to ask that a pseudocode be defined which can be taught to mathematicians and that each computer installation prepare an interpreter or compiler which will process such a universal code into coding for that computer." (4--5)

"With coding accumulating for existing computers, and engineers designing more computers with new and different instruction codes, translators to make available 'old' coding to new computers will conserve programming time. Since this will be a mechanical operation, we shall look to the computers to do this job for us." (5)

## Predictions

"As computer development has speeded up in the last half of the first decade, let us hope that the production of automatic programming techniques, most of them less than one year old, will also speed up." (5)

"As you listen to these papers watch for two things that, I think, they all point toward --- two developments we shall want to discuss in the future in the light of what we will learn here. One is the very evident possibility and likelihood that just as compilers control generators to produce programs to process data, we shall soon be talking of systems containing computers controlling and directing computers. The second trend that is appearing, more evident perhaps in the commercial programs, is that the incoming data will itself determine the program to be applied." (5)
