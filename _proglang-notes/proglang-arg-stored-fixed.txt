---
title: 'Fixed vs. stored-program computing'
---

* Like electromechanical calculators, early computers were constructed with fixed programs designed for a specific task: calculating ballistics trajectories or codebreaking
    * Atanasoff–Berry computer (ABC), 1941, for linear equations
    * Turing's bombe

* How do you implement a hardware circuit design in an algorithm? This is how you get from fixed to stored-program computing

* In stored-program designs, instructions are not fixed in hardware circuits, but are "just another" form of data
    * Very flexible: can change program when you wish
    * Programs can write other programs
    * Concept of computer as interpreter: universal machine that interprets instructions

## Stored-program architecture

1. Built-in primitive instructions, which can be combined in complex ways by different codes: e.g., Turing's six primitive instructions (read, write, add, etc.) described in 1936; 
2. Memory (one memory for both instructions and data)
3. Control unit that manages control flow:
        a. Program counter that points to the next instruction in memory. Some instructions are tests and their result will alter where the program counters
        b. Arithmetic logic unit (ALU). Also has input and output pathways/devices

