# The xv6 kernel

## 1 Overview

### 1.1 Features of xv6

- PROCESS
  - These processes run in their own virtual address space, so there are page tables for each address space to support virtual address spaces.
- FILES, DIRECTORIES
  - Unix-like files
  - Directory hierarchy
- PIPES
  - You can pipe data from one program to another program.
- MULTITAKSING
  - Timer interrupts for multitasking.
  - The various processes are running in parallel with time-slicing.
- 21 SYSTEM CALLs
  - Implemented in xv6
  - The production Unix systems have more like 300 system calls, maybe 500 system calls.
  - This is to give you the core ideas of Unix.
