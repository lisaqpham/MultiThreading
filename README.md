# Simple Multi-Threading Program

A **simple C++ multithreading program** to establish how the process of threading works. Used the `<thread>` header file to access threading functionality.

The program creates two threads meant to print either the word **"marco"** or **"polo"** respectively for 10 turns, and then joins them. Each iteration waits for one second before repeating.

Note that the output is not static, and is meant to differ each time ran depending on the current execution of the threads. 

**Sample Output:**

MarcoPolo
MarcoPolo
MarcoPolo
MarcoPolo
MarcoPolo
MarcoPolo
MarcoPolo
Polo
MarcoPolo
MarcoPolo
MarcoThat's all folks

## Identifying Information

* Name: Lisa Pham
* Student ID: 2338933
* Email: thupham@chapman.edu
* Course: CPSC 380-01 Operating Systems
* Assignment: Project 1

## Source Files  
* marcopolo.cpp
* a.out
* README.md

## References

* *Multithreading in C++ - Geeks for Geeks*

## Known Errors

* There are no known errors.

## Build Insructions
* `g++ marcopolo.cpp`

## Execution Instructions
* `./a.out`
