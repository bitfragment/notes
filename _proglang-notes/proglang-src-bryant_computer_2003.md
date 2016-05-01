---
title: "Bryant and O'Hallaron, Computer Systems: A Programmer's Perspective (2003)"
---

```bibtex
@book{bryant_computer_2003,
	address = {Upper Saddle River, {NJ}},
	title = {Computer Systems: A Programmer's Perspective},
	isbn = {{013034074X}},
	lccn = {QA76.5 .B795 2003},
	shorttitle = {Computer systems},
	publisher = {Prentice Hall},
	author = {Bryant, Randal E. and {O'Hallaron}, David},
	year = {2003}
}
```

[[_TOC_]]

* toc
{:toc}

<!--TOC-->


All representation in a computer system = bits + context
--------------------------------------------------------

"Modern computers store and process information represented as two-valued signals. These lowly binary digits, or *bits*, form the basis of the digital revolution" [@bryant_computer_2003, 26]. Base 10 or decimal notation may be "natural for ten-fingered humans," but binary values are more suited to automated data processing [@bryant_computer_2003, 26]. "Two-valued signals can readily be represented, stored, and transmitted, for example, as the presence or absence of a hole in a punched card, or as high or low voltage on a wire, or as a magnetic domain oriented clockwise or counterclockwise" [@bryant_computer_2003, 26]. 

"All information in a system — including disk files, programs stored in memory, user data stored in memory, and data transferred across a network — is represented as a bunch of bits. The only thing that distinguishes different data objects is the context in which we view them. For example, in different contexts, the same sequence of bytes might represent an integer, floating-point number, character string, or machine instruction" [@bryant_computer_2003, 3].

"In isolation, a single bit is not very useful. When we group bits together and apply some *interpretation* that gives meaning to the possible bit patterns, however, we can represent the elements of any finite set. For example, using a binary number system, we can use groups of bits to encode nonnegative numbers. By using a standard character code, we can encode the letters and symbols in a document" [@bryant_computer_2003, 26].

The "smallest addressable unit of memory" tends not to be the bit, however, but the *byte*, a block of 8 bits [@bryant_computer_2003, 28]. Each byte has a unique numerical *address* in memory [@bryant_computer_2003, 28]. This memory is best described as a *virtual memory* mapped as a "virtual address space," however, since in truth it combines RAM with disk storage, other hardware, and OS operations, and is only presented to a program as a homogeneous memory array [@bryant_computer_2003, 28]. 

Each virtual address encodes a *word*, and the system's *word size* designates the maximum size of a virtual address [@bryant_computer_2003, 32]. 32-bit word size was the standard during the 1980s and 1990s, but a 64-bit word size has become more common since then [@bryant_computer_2003, 32].

"Many machines have instructions for manipulating single bytes, as well as integers represented as two-, four- and eight-byte quantities" [@bryant_computer_2003, 32]. The C language data allocates a single byte for its data type `char`, designed to represent a single text character [@bryant_computer_2003, 33]. On most 32-bit systems, the C language data type `short int` is allocated two bytes, `int` and `long int` four bytes, and `float` four bytes [@bryant_computer_2003, 33]. A multibyte object is usually stored as a "contiguous sequences of bytes, with the address of the object given by the smallest address of the bytes used" [@bryant_computer_2003, 34]. Byte ordering can be "little endian" (DEC, Intel) or "big endian" (IBM, Motorola, Sun), a terminology drawn from Swift's *Gulliver's Travels* [@bryant_computer_2003, 34-35]. 

In C, a string "is encoded by an array of characters terminated by the null (having value 0) character. Each character is represented by some standard encoding, with the most common being the ASCII character code" [@bryant_computer_2003, 40]. The string "12345" is represented in ASCII hex notation as "31 32 33 34 35" [@bryant_computer_2003, 41]. [BL: in binary, 00110001 00110010 00110011 00110100 00110101 00001101 00001010. See http://www.asciitohex.com.] Given the difference of word size and byte ordering conventions among platforms, such standardized character encoding makes text data "more platform-independent than binary data" [@bryant_computer_2003, 41]. "Binary code is seldom portable across different combinations of machine and operating system" [@bryant_computer_2003, 42].

Unicode is a 16-bit character set [@bryant_computer_2003, 41].


Binary and hexadecimal notation
-------------------------------

A byte (8 bits) is represented in binary notation as an eight-bit binary number in which each numeral is either '0' or '1'. Binary notation is "too verbose," and conversion between binary and decimal notation is "tedious": so we use hexadecimal (base 16) or "hex" notation [@bryant_computer_2003, 28]. Hex notation uses 0-9 plus A-F (case is irrelevant) to represent 16 total possible values [@bryant_computer_2003, 28]. [BL: See hex-decimal-binary chart on @bryant_computer_2003, 29]. A byte is represented by two hexadecimal digits: 000000 = 00, 01010010 = 52, 10101100 = AC, 11100111 = E7 [@bryant_computer_2003, 31].



Buses and word size
-------------------

Word size is a "fundamental system parameter" [@bryant_computer_2003, 7] describing the width of data paths such as buses (64-bit systems have a word size of 64/8 = 8 bytes).


Defining a program
------------------

A source program is "a sequence of bits, each with a value of 0 or 1, organized in 8-bit chunks called *bytes*. Each byte represents some text character in the program" [@bryant_computer_2003, 3].


Compilation and assembly as translation
---------------------------------------

Four phases of processing performed by a compilation system [@bryant_computer_2003, 4]:

1. Preprocessing: from a C source program, the preprocessor (`cpp`) produces another C source program that includes the content of the system header files specified in the source program
1. Compilation: the compiler (`cc1`) translates the preprocessed C program into an assembly-language program
1. Assembly: the assembler (`as`) translates the assembly-language program into machine-language instructions and creates a binary object program from them
1. Linking: the linker (`ld`) merges functions called from libraries by the source program (such as `printf`) and creates a binary executable object file


Fundamental abstractions comprising an operating system
-------------------------------------------------------

1. Process: "the operating system's abstraction for a running program" [@bryant_computer_2003, 15]
1. Virtual memory: an abstraction providing a process "with the illusion that it has exclusive use of the main memory" [@bryant_computer_2003, 16]
1. Files: "A *file* is a sequence of bytes, nothing more and nothing less. Every I/O device, including disks, keyboards, displays, and even networks, is modeled as a file" [@bryant_computer_2003, 18]. The abstraction of a file provides "a uniform view of all the varied I/O devices" in a system, so that you don't have to worry about the character of a "specific disk technology," for example [@bryant_computer_2003, 18]
