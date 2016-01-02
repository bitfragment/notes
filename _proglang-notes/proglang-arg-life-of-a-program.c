// # The Life of a Program
//
// Notes following Bryant and O'Hallaron,
// *Computer Systems: A Programmer's Perspective* (2003),
// Chapter 1: A Tour of Computer Systems

// ## 1.1 Information is Bits + Context

// Here's the `hello` program used by Kernighan and Ritchie in *The C
// Programming Language*. This program begins its life as a *source
// program* or *source file* stored as a text file, `hello.c`.
#include<stdio.h>

int main()
{
    printf("hello, world\n");
}

// This source program comprises a sequence of bits, each valued
// either `0` or `1`, arranged into 8-bit chunks, or bytes, with each
// byte representing a text character in the program.

// Hexdump of `hello.c` using `xxd` with `-b` flag to display binary.
// The first byte, `00100011`, has an integer value of 35,
// corresponding to the ASCII character `#` (see
// http://www.asciitable.com/). The second byte, `01101001`, has an
// integer value of 105, corresponding to the ASCII character `i`, and
// so on. Newline characters (represented by `.` in the output of
// `xxd`) are represented by the byte `00001010` with an integer value
// of 10, assigned by ASCII to `LF`.
/*

$ xxd -b hello.c
0000000: 00100011 01101001 01101110 01100011 01101100 01110101  #inclu
0000006: 01100100 01100101 00111100 01110011 01110100 01100100  de<std
000000c: 01101001 01101111 00101110 01101000 00111110 00001010  io.h>.
0000012: 00001010 01101001 01101110 01110100 00100000 01101101  .int m
0000018: 01100001 01101001 01101110 00101000 00101001 00001010  ain().
000001e: 01111011 00001010 00100000 00100000 00100000 00100000  {.
0000024: 01110000 01110010 01101001 01101110 01110100 01100110  printf
000002a: 00101000 00100010 01101000 01100101 01101100 01101100  ("hell
0000030: 01101111 00101100 00100000 01110111 01101111 01110010  o, wor
0000036: 01101100 01100100 01011100 01101110 00100010 00101001  ld\n")
000003c: 00111011 00001010 01111101 00001010                    ;.}.

*/

// ## 1.2 Programs Are Translated by Other Programs into Different Forms

// The *compiler driver* `gcc` (or `clang`) translates the source file
// `hello.c` into the executable object code file `hello` in four
// phases: *preprocessing* (`cpp`), *compiling* (`cc1`), *assembling*
// (`as`), and *linking* (`ld`).

// #### Preprocessing

// Output of `cpp hello.c | head -20`. Modifies the program following
// directives beginning with the `#` character (for example,
// `#include<stdio.h>`).
/*

# 1 "hello.c"
# 1 "<command-line>"
# 1 "hello.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4

*/


// ### Compilation

// Output of `clang -S -o /dev/stdout hello.c`, which performs
// preprocessing and then translates the preprocessed program into an
// assembly language program (but given the `-S` flag, stops short of
// compiling and linking it).

/*
    .section    __TEXT,__text,regular,pure_instructions
    .macosx_version_min 10, 10
    .globl  _main
    .align  4, 0x90
_main:                                  ## @main
    .cfi_startproc
## BB#0:
    pushq   %rbp
Ltmp0:
    .cfi_def_cfa_offset 16
Ltmp1:
    .cfi_offset %rbp, -16
    movq    %rsp, %rbp
Ltmp2:
    .cfi_def_cfa_register %rbp
    subq    $16, %rsp
    leaq    L_.str(%rip), %rdi
    movb    $0, %al
    callq   _printf
    xorl    %ecx, %ecx
    movl    %eax, -4(%rbp)          ## 4-byte Spill
    movl    %ecx, %eax
    addq    $16, %rsp
    popq    %rbp
    retq
    .cfi_endproc

    .section    __TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
    .asciz  "hello, world\n"


.subsections_via_symbols

*/


// ### Assembly

// The output of `clang -c hello.c`, which performs preprocessing,
// translates the preprocessed program into an assembly language
// program, and then translates the assembly language program into
// machine code, is the object file `hello.o` (given the `-c` flag,
// `clang` stops short of linking the object file). Here's the output
// of `xxd -b hello.o`:
/*

0000000: 11001111 11111010 11101101 11111110 00000111 00000000  ......
0000006: 00000000 00000001 00000011 00000000 00000000 00000000  ......
000000c: 00000001 00000000 00000000 00000000 00000100 00000000  ......
0000012: 00000000 00000000 00000000 00000010 00000000 00000000  ......
0000018: 00000000 00100000 00000000 00000000 00000000 00000000  . ....
000001e: 00000000 00000000 00011001 00000000 00000000 00000000  ......
0000024: 10001000 00000001 00000000 00000000 00000000 00000000  ......
000002a: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000030: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000036: 00000000 00000000 00000000 00000000 00000000 00000000  ......
000003c: 00000000 00000000 00000000 00000000 10011000 00000000  ......
0000042: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000048: 00100000 00000010 00000000 00000000 00000000 00000000   .....
000004e: 00000000 00000000 10011000 00000000 00000000 00000000  ......
0000054: 00000000 00000000 00000000 00000000 00000111 00000000  ......
000005a: 00000000 00000000 00000111 00000000 00000000 00000000  ......
0000060: 00000100 00000000 00000000 00000000 00000000 00000000  ......
0000066: 00000000 00000000 01011111 01011111 01110100 01100101  ..__te
000006c: 01111000 01110100 00000000 00000000 00000000 00000000  xt....
0000072: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000078: 01011111 01011111 01010100 01000101 01011000 01010100  __TEXT
000007e: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000084: 00000000 00000000 00000000 00000000 00000000 00000000  ......
000008a: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000090: 00100011 00000000 00000000 00000000 00000000 00000000  #.....
0000096: 00000000 00000000 00100000 00000010 00000000 00000000  .. ...
000009c: 00000100 00000000 00000000 00000000 10111000 00000010  ......
00000a2: 00000000 00000000 00000010 00000000 00000000 00000000  ......
00000a8: 00000000 00000100 00000000 10000000 00000000 00000000  ......
00000ae: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00000b4: 00000000 00000000 00000000 00000000 01011111 01011111  ....__
00000ba: 01100011 01110011 01110100 01110010 01101001 01101110  cstrin
00000c0: 01100111 00000000 00000000 00000000 00000000 00000000  g.....
00000c6: 00000000 00000000 01011111 01011111 01010100 01000101  ..__TE
00000cc: 01011000 01010100 00000000 00000000 00000000 00000000  XT....
00000d2: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00000d8: 00100011 00000000 00000000 00000000 00000000 00000000  #.....
00000de: 00000000 00000000 00001110 00000000 00000000 00000000  ......
00000e4: 00000000 00000000 00000000 00000000 01000011 00000010  ....C.
00000ea: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00000f0: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00000f6: 00000000 00000000 00000010 00000000 00000000 00000000  ......
00000fc: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000102: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000108: 01011111 01011111 01100011 01101111 01101101 01110000  __comp
000010e: 01100001 01100011 01110100 01011111 01110101 01101110  act_un
0000114: 01110111 01101001 01101110 01100100 01011111 01011111  wind__
000011a: 01001100 01000100 00000000 00000000 00000000 00000000  LD....
0000120: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000126: 00000000 00000000 00111000 00000000 00000000 00000000  ..8...
000012c: 00000000 00000000 00000000 00000000 00100000 00000000  .... .
0000132: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000138: 01011000 00000010 00000000 00000000 00000011 00000000  X.....
000013e: 00000000 00000000 11001000 00000010 00000000 00000000  ......
0000144: 00000001 00000000 00000000 00000000 00000000 00000000  ......
000014a: 00000000 00000010 00000000 00000000 00000000 00000000  ......
0000150: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000156: 00000000 00000000 01011111 01011111 01100101 01101000  ..__eh
000015c: 01011111 01100110 01110010 01100001 01101101 01100101  _frame
0000162: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000168: 01011111 01011111 01010100 01000101 01011000 01010100  __TEXT
000016e: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000174: 00000000 00000000 00000000 00000000 01011000 00000000  ....X.
000017a: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000180: 01000000 00000000 00000000 00000000 00000000 00000000  @.....
0000186: 00000000 00000000 01111000 00000010 00000000 00000000  ..x...
000018c: 00000011 00000000 00000000 00000000 00000000 00000000  ......
0000192: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000198: 00001011 00000000 00000000 01101000 00000000 00000000  ...h..
000019e: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00001a4: 00000000 00000000 00000000 00000000 00100100 00000000  ....$.
00001aa: 00000000 00000000 00010000 00000000 00000000 00000000  ......
00001b0: 00000000 00001010 00001010 00000000 00000000 00000000  ......
00001b6: 00000000 00000000 00000010 00000000 00000000 00000000  ......
00001bc: 00011000 00000000 00000000 00000000 11010000 00000010  ......
00001c2: 00000000 00000000 00000011 00000000 00000000 00000000  ......
00001c8: 00000000 00000011 00000000 00000000 00011000 00000000  ......
00001ce: 00000000 00000000 00001011 00000000 00000000 00000000  ......
00001d4: 01010000 00000000 00000000 00000000 00000000 00000000  P.....
00001da: 00000000 00000000 00000001 00000000 00000000 00000000  ......
00001e0: 00000001 00000000 00000000 00000000 00000001 00000000  ......
00001e6: 00000000 00000000 00000010 00000000 00000000 00000000  ......
00001ec: 00000001 00000000 00000000 00000000 00000000 00000000  ......
00001f2: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00001f8: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00001fe: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000204: 00000000 00000000 00000000 00000000 00000000 00000000  ......
000020a: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000210: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000216: 00000000 00000000 00000000 00000000 00000000 00000000  ......
000021c: 00000000 00000000 00000000 00000000 01010101 01001000  ....UH
0000222: 10001001 11100101 01001000 10000011 11101100 00010000  ..H...
0000228: 01001000 10001101 00111101 00000000 00000000 00000000  H.=...
000022e: 00000000 10110000 00000000 11101000 00000000 00000000  ......
0000234: 00000000 00000000 00110001 11001001 10001001 01000101  ..1..E
000023a: 11111100 10001001 11001000 01001000 10000011 11000100  ...H..
0000240: 00010000 01011101 11000011 01101000 01100101 01101100  .].hel
0000246: 01101100 01101111 00101100 00100000 01110111 01101111  lo, wo
000024c: 01110010 01101100 01100100 00001010 00000000 00000000  rld...
0000252: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000258: 00000000 00000000 00000000 00000000 00000000 00000000  ......
000025e: 00000000 00000000 00100011 00000000 00000000 00000000  ..#...
0000264: 00000000 00000000 00000000 00000001 00000000 00000000  ......
000026a: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000270: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000276: 00000000 00000000 00010100 00000000 00000000 00000000  ......
000027c: 00000000 00000000 00000000 00000000 00000011 01111010  .....z
0000282: 01010010 00000000 00000001 01111000 00010000 00000001  R..x..
0000288: 00010000 00001100 00000111 00001000 10010000 00000001  ......
000028e: 00000000 00000000 00100100 00000000 00000000 00000000  ..$...
0000294: 00011100 00000000 00000000 00000000 10001000 11111111  ......
000029a: 11111111 11111111 11111111 11111111 11111111 11111111  ......
00002a0: 00100011 00000000 00000000 00000000 00000000 00000000  #.....
00002a6: 00000000 00000000 00000000 01000001 00001110 00010000  ...A..
00002ac: 10000110 00000010 01000011 00001101 00000110 00000000  ..C...
00002b2: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00002b8: 00010010 00000000 00000000 00000000 00000010 00000000  ......
00002be: 00000000 00101101 00001011 00000000 00000000 00000000  .-....
00002c4: 00000000 00000000 00000000 00011101 00000000 00000000  ......
00002ca: 00000000 00000000 00000001 00000000 00000000 00000110  ......
00002d0: 00001111 00000000 00000000 00000000 00001110 00000010  ......
00002d6: 00000000 00000000 00100011 00000000 00000000 00000000  ..#...
00002dc: 00000000 00000000 00000000 00000000 00000001 00000000  ......
00002e2: 00000000 00000000 00001111 00000001 00000000 00000000  ......
00002e8: 00000000 00000000 00000000 00000000 00000000 00000000  ......
00002ee: 00000000 00000000 00000111 00000000 00000000 00000000  ......
00002f4: 00000001 00000000 00000000 00000000 00000000 00000000  ......
00002fa: 00000000 00000000 00000000 00000000 00000000 00000000  ......
0000300: 00000000 01011111 01101101 01100001 01101001 01101110  ._main
0000306: 00000000 01011111 01110000 01110010 01101001 01101110  ._prin
000030c: 01110100 01100110 00000000 01001100 01011111 00101110  tf.L_.
0000312: 01110011 01110100 01110010 00000000 00000000 00000000  str...

*/


// ### Linking

// Linking merges the `printf` function from the standard C library
// into the `hello.o` program. Given no flags, `clang hello.c`
// performs all four phases, outputting the preprocessed, compiled,
// assembled, and linked, therefore now *executable*, object code file
// `a.out`. Here's a relevant portion of the output of `xxd -b a.out`:

/*

0001ffe: 00000000 00000000 00010001 00100010 00010000 01010001  ...".Q
0002004: 00000000 00000000 00000000 00000000 00010001 01000000  .....@
000200a: 01100100 01111001 01101100 01100100 01011111 01110011  dyld_s
0002010: 01110100 01110101 01100010 01011111 01100010 01101001  tub_bi
0002016: 01101110 01100100 01100101 01110010 00000000 01010001  nder.Q
000201c: 01110010 00000000 10010000 00000000 01110010 00010000  r...r.
0002022: 00010001 01000000 01011111 01110000 01110010 01101001  .@_pri
0002028: 01101110 01110100 01100110 00000000 10010000 00000000  ntf...
000202e: 00000000 00000000 00000000 00000001 01011111 00000000  ...._.
0002034: 00000101 00000000 00000010 01011111 01101101 01101000  ..._mh
000203a: 01011111 01100101 01111000 01100101 01100011 01110101  _execu
0002040: 01110100 01100101 01011111 01101000 01100101 01100001  te_hea
0002046: 01100100 01100101 01110010 00000000 00100001 01101101  der.!m
000204c: 01100001 01101001 01101110 00000000 00100101 00000010  ain.%.

*/


// ## 1.4 Processors Read and Interpret Instructions Stored in Memory

// Execution of `a.out` in a shell:
//
// ```
// $ ./a.out
// hello, world
// ```
//
// What happens here:
//
// 1. The shell program reads each of the characters in `./a.out` into
//    a register and then stores it in memory.
// 2. When we hit `enter`, the shell loads the executable file `a.out`
//    by copying it into memory.
// 3. The processor begins executing the machine-language instructions
//    in `hello`'s `main` routine. The bytes comprising the string
//    'hello, world' are copied from memory to a register file and from
//    there to a display device.
