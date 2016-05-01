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


Precis 1
--------

Grace Murray Hopper began her remarks in "Automatic Programming — Definitions" (1954) with the observation that "[i]n the ten years since Mark I first ran, the terms programmer and programming have come into being. The world is so accustomed to talk of automatic computers — large-scale, high-speed, automatically sequenced, digital, computing devices — that the adjective automatic has been dropped and only the term computer is required. Instead, the word automatic now is attached to programming and coding" []@hopper_automatic_1954, 1].

"[S]ome nine or ten years ago," she continued, "a programmer was, of necessity, many things. Numerical analyst, encoder-decoder, electrical or electronic technician, detective and bug-hunter, and finally, evaluator." With the design and implementation of more computers and the diversification and division of the labor of both their maintenance and their use for data processing, she observed, the roles of "analyst, programmer, coder, operator, and maintenance man" gradually separated [@hopper_automatic_1954, 1].

Nonetheless, she observed, "[t]he distinction between the programmer and the coder has never been clearly made. Coder was probably first used as an intermediate point on the salary scale between trainee and programmer" [@hopper_automatic_1954, 1]. A *programmer,* she suggested, was someone who "prepares the plan for the solution of a problem," which may or may not include "numerical and systems analysis," but will invariably describe the way that the flow of data and operations should be managed. The *programmer* communicates such a plan to a *coder* in the form of a flow chart, and "[i]t is then the task of the coder to reduce this flow chart to coding, to a list in computer code, the code representing the operations built into the hardware of the computer" [@hopper_automatic_1954, 1].

"[I]t is this function," she remarked, "that of the coder, time-consuming and fraught with mistakes, that is the first human operation to be replaced by the computer itself" [@hopper_automatic_1954, 1--2].


Precis 2
--------

In "Automatic Programming — Definitions" (1954), Grace Murray Hopper defined "automatic coding" as the  automation of the coder's labor. The task, she remarked, had two components: "devising a method for expressing the information contained in a flow chart — devising pseudocodes," and "preparing the routines and subroutines to process the pseudocode and produce computer coding and ultimately results" [@hopper_automatic_1954, 2]. (That is, designing what today we call "programming languages," and designing what today we call compilers. "The pseudocodes themselves," she remarks, "form a whole field of study and research" [hopper_automatic_1954, 2].)

In addition to "assembly" and "compiling," as categories of "executive routines" for processing pseudocodes, Hopper mentions "conversion" and "interpretive" routines. All four of these "automatic programming techniques, most of them less than one year old" [@hopper_automatic_1954, 5] were constrained by the character of the particular computers on which they might be run, she noted — but all of them have the same function, to "make it possible for the 'untrained user' to run problems on the computer," as well as to reduce "the load on the programmers" [@hopper_automatic_1954, 2]. The compiling routine  combined most of the functions of the conversion, interpretive, and assembly types of routines, converting pseudocode to computer code, relative and floating addresses to fixed addresses and decimal quantities into binary notation, and dynamically interpreting instructions in assembling a particular program [@hopper_automatic_1954, 3].

Hopper closed "Automatic Programming — Definitions" (1954) by calling for the development of a "universal" pseudocode for which every computer installation would provide its own "interpreter or compiler" [@hopper_automatic_1954, 4]. Remarking on the accumulation of code for existing computers and the proliferation of new computer designs using new sets of hardware instruction codes, she also called for "translators to make available 'old' coding to new computers," to conserve programming time and labor. "Since this will be a mechanical operation," she concluded, "we shall look at the computers to do this job for us" [@hopper_automatic_1954, 5]. More generally, she suggested, "just as compilers control generators to produce programs to process data, we shall soon be talking of systems containing computers controlling and directing computers" [@hopper_automatic_1954, 5].
