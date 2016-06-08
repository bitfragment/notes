---
title: Concurrency
type: arg
---

## Sources

Sethi, *Programming Languages: Concepts & Constructs* (1996), chapter 12: "An Introduction to Concurrent Programming"

## Sequential operation: process and thread

"Operations that occur one after the other, ordered in time, are said to be *sequential*" (475).

"The fundamental concept of concurrent programming is the notion of a process" (475). A process is a "sequential computation, with its own thread of control. The *thread* of a sequential computation is the sequence of program points that are reached as control flows through the source text of the program" (475).

Processes interact with each other by *communicating* (exchanging data) or by being *synchronized* (relating their threads to each other by exchanging control information) (476).

## Concurrency as interleaving

Concurrent computation *interleaves* the uninterruptible atomic events (however they are defined by a particular language) of different process threads, preserving their relative sequential order. (482)

## Distinguishing concurrency as language feature from hardware parallelism

"Concurrency in a programming language and parallelism in the underlying hardware are independent concepts" (475).

"Hardware operations occur in *parallel* if they overlap in time," whereas operations produced by the processing of source code are *concurrent* if they *could* be executed as parallel hardware operations (though they do not *need* to be executable as parallel hardware operations) (475).

"We can have concurrency in a language without parallel hardware, and we can have parallel execution without concurrency in the language. In short, concurrency refers to the potential for parallelism" (475).

## Hardware parallelism

By the late 1950s, parallelism had been introduced into data processing to allow machines to perform computations and I/O operations at the same time. The IBM 709 in 1958 could be configured with a central  processor and up to six additional "data channel" processors for this purpose (476).

The problem of managing access to shared resources under such conditions was mananged using polling (or "busy waiting") or interrupts, hardware signals that synchronized a central processor's activities with those of the data channels. One program, A, could be paused and another, B, started while data was read from input for program A, after which an interrupt signal would resume execution of A (477).

Hardware interrupt and hardware clocks made possible time-sharing, which creates the impression that different users' programs are running in parallel (477).

## Synchronous vs. asynchronous communication of processes

Architectures with multiple central processors had appeared by 1960, allowing multiple processes on one system to communicate *synchronously* via shared memory. This contrasts with the *asynchronous* communication of processes restricted to their own memory, distributed in space on different systems and/or via telecommunication lines. Here processes communicate by message passing and in this case there will always be unpredictable delays. (478)
