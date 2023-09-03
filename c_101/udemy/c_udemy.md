# C FOR BEGINNERS

## 1 Intro

**Topics**

- Overview of C - efficient, portable, power and flexibility, programmer oriented
- Language Feauters - impreative language, top-down planning, structured programming and modular design
- Advantages of using C - small, fast programss, reliable, easy to learn and understand
- How to use a modern, cross-platform IDE (MS vscode) to write, edit and debug
- Basic C concepts - structure of a prgram, comments, output using printf, "Hello World"
- Makefiles - how to build
- Variables - declaring and using
- Data Types - int, float, double, char etc
- Basic Operators - logical, arithmetic and assignment
- COnditional Statements - making decisions (if, switch)
- Repeating code - looping (for, while, and do-while)
- Arrays - defining and initializing, multi-dimensional
- Functions - declaration and use, arguments and parameters, called by value vs. call by reference
- Debugging - call statk, common mistakes, understanding complier messages
- Structs - initializing, nested structures, variants
- Character Strings - basic, arrays of chars, character operation
- Pointers - defintion and use, using with functions and arrays, malloc, pointer arithmetic
- The Preprocessor - #define, #include
- Input and Output - getchar, scanf
- File Input/Output - reading and writing to a file, file operations
- Standard C Library - string functions, math functions, utility functions, standard header files

**Course Outcomes**

- Able to write beginner C programs
- Able to write efficient, high quality C code
  - modular
  - low coupling
- Able to find and fix errors
  - Understand complier messages
- Understand fundamental aspects of the C Programming language

## 2 Class Organization

**Class Organization**

- Lectures are designed around explaining the why and providing the how
  - A complete learning experience
  - Understand the programming language as a whole
  - Lacking in most Udemy courses

**Demoonstrations of code in IDE**

**Challenges (coding assignments/projects)**

## 3 Fundamentals of a Program

### 3.1 Basics - Computer Instructions

- Computers are very dumb machines
  - They only do what they are told to do
- The basic operations of computer will form what is known as the computer's intruction set
- To solve a program using a computer, you must provide a solution to the program by sending instructions to the instruction set
  - A compluter program sends the instructions necessary to solve a specific problem

### 3.2 Basics - Algorithm

- The approach or method that is used to solve the problem is known as an algorithm

  - So, if we were to create a program that tests if a number is odd or even
    - The statements that solve the problem becomes the program
    - The method that is used to test if the number is even or odd is the algorithm

- To write a program, you need to write the instructions necessary to implement the algorithm
  - These instructions would be expressed in the statemetns of a particular computer language, such as Java, C++, Objective-C, or C

### 3.3 Terminology

- CPU (Central Processing Unit)

  - Does most of the computing work
  - Instructions are executed here

- RAM (Random Access Memory)
  - Stores the data of a program while it is running
- Hard Drive (Permanent Storage)

  - Stores files that contain program source code, even while the computer is turned off

- Operating System

  - Developed to help make it more convenient to use computers
  - A program that controls the entire operatio of a computer
    - All input and output
    - Manages the computer's resources and handles the execution of programs
    - Windows, Unix, Android, etc.

- Fetch/Execute Cylce (life of a CPU)
  - Fetches an instruction from memory (using registers) and executes it (loop)
  - A gigahertz CPU can do this about a billion times per second

**Fetch/Execute Cycle**
![Fetch/Execute Cycle](images/fetch_execute_cycle.png)

### 3.4 Higher Level Programming Languages

- High-level programming languages make it easier to write programs

  - Opposite of assembly language
  - C is a higher programming language that describe actions in a more abstract form
  - The instructions (statements) of a program look more like problem solving steps
  - Do not have to worry about the precise steps a particular CPU would have to take to accomplish a particular task
    - `total = x + ` `mv ax, 5, mv cx4`, etc....

- Compliers

  - A program that translate the high-level language source code into the detailed set of machine language instructions the computer requires
  - The program does the high-level thinking and teh compiler generates the tedious instrutions to the CPU

- Compliers will also check that your program has valid syntax for the programming language that you are compiling

  - Finds errors that it reports them to you and doesn't produce an executable until you fix them

- High-level languages are easier to learn and much easier to program in than are machine languages

### 3.5 Writing a Program

- The act of writing a C program can be broken down into multiple steps

![Writing a C Program Steps](images/writing_a_c_program_steps.png)

1. Define the program objectives
2. Design the program
3. Write the code
4. Compile
5. Run the program
6. Test and debug the program
7. Maintain and modify the program

**Step in Writing a Program**

1. <ins>Define the program objectives</ins>

   - Understand the requirements of the program
   - Get a clear idea of what you want the program to accomplish

2. <ins>Deisgn</ins>

   - Decide how the program will meet the above requirements
   - What should the user interface be like?
   - How should the program be organized?

3. <ins>Write the code</ins>

   - Start implementation, translate the design in the syntax of C
   - You need to use a text editor to create what is called a _source code_ file

4. <ins>Compile</ins>

   - Translate the source code into machine code (executable code)
   - Consists of detailed instructions to the CPU expressed in numeric code

5. <ins>Run the Program</ins>

   - The executable file is a program you can run

6. <ins>Test and debug</ins>

   - Just becuase a program is running, does not mean it works as intended
   - Need to test, to see that your program does what it is supposed to do (may find bugs)
     - Debugging is the process of finding and fixing program errors
     - Making mistakes is a natural part pf learning

7. <ins>Maintain and modify</ins>
   - Programs are released and used by many people
   - Have to continue to fix new bugs or add new features

- For the above steps, you may have to jump around steps and repeat steps
  - E.g. when you are writing code, you might find that your plan was impractical
- Many new programmers ignore steps 1 and 2 and go directly to writing code
  - A big mistake for large programs, may be ok for very simple programs
  - The larger and more complex program is, the more planning it requires
  - Should develop the habit of planning before coding

## 4 Overview

### 4.1 Overview

- C is a general-purpose, imperative computer programming language that supports structured programming

  - Uses statements that change a program's state, focuses on how

- Currently, it is one of the most widely used programming languages of all time

- C is a modern language

  - Has most basic control structures and features of modern languages
  - Designed for top-down planning
  - Organized around the use of functions (modular design) structured programming
  - A very reliable and readable program

- C is used on everything from minicomputers, Unix/Linux systems to PC's and mainframes
- C is the preferred lanaguage for producing word processing programs, spreadsheets and compliers

- C has become popular for programming embedded systems

  - Used to program microprocessors found in automobiles, cameras, DVD players, etc

- C has and continues to play a strong role in the development of Linux

- C programs are easy to modify and easy to adapt to new models or lanaguages

- In the 1990s, many software houses began turning to the C++ language for large programming projects

- C is a subset of C++ with object-oriented programming tools added

  - Any C program is a valid C++ program
  - By learning C, you also learn much of C++

- C remains a core skill needed by corporations and ranks in the top 10 of desired skills

- C provides constructs that map efficiently to typical machine instructions and thus is used by programs that were previously implement in assembly language

  - Provides low-level access to memory (has many low-level capabilities)
  - Requires minimal run-time support

- Was invented in 1972 by Dennis Ritchie of Bell Laboratories

  - Ritchie was working on the design of the UNIX operating system

- Was created by as a tool for working programers

  - Main goal is to be a useful language
  - Easy readability and writability

### 4.2 History

- C initially became widely known as the development language of the UNIX operating system

  - Virtually all new major operating systems are written in C and/or C++

- C evolved from a previous programming language named B

  - Uses many of the important concepts of B while adding data typing and other powerful features
  - B was a "typeless" language - every data item occupied one "word" in memory, and the burden of typing variables fell on the shoulders of the programmer

- C is available for mosst computers

- C is also hardware independent

- By the late 1970s, C had evolved into what is now reffered to as "traditional C"

- The rapid expansion of C working on many different hardware platforms led to many variations that were similar but often incompatible

  - A standard version of C was created (C89/C90, C99, C11)

- A program written only in Standard C and without any hardware-dependent assumptions will run correctly on any platform with a standard C compiler

  - Non-standard C programs may run only on a certain platform with a particular compiler

- C89 is supported by current C compilers

  - Most C code being written today is based on it

- C99 is revised standard C for the C programming language that refines and expands the capabilities of C

  - Has not been widely adopted and not all popular C compilers support it

- The current standard is commonly referred to as C11

  - Some elements of the language as defined by C11 are optiontal
  - Also possible that a C11 compiler may not implement all of the languages features mandated by the C11 standard

- C is one of the most important popular programming languages

- It has grown because people try it and like it

- In the past decade or two, many have moved from C to languages such as C++, Objective C, and Java
  - C is still an important language in its own right, as well as a migration path to these others

## 5 Language Features

### 5.1 Overview

- C produces compact and efficient programs

- C is one of the most important languages and will continue to be so

- The main features of C are the following
  - Efficient
  - Portable
  - Powerful and Flexible
  - Programmer Oriented

### 5.2 Efficiency and Portability

- C is an efficient language

  - Takes advantage of the capabilities of current computers
  - C programs are compact and fast (similar to assembly language programs)
  - Programmers can fine-tune their programs for maximum speed or most efficient use of memory

- C is a portable language

  - C programs written on one system can be run on other systems with little or no modifications
  - A leader in portability
  - Compilers are available for many computer architectures

- Linux/Unix systems typically come with a C compiler as part of the package

  - Computers are available for personal computers

- A good chance that you can get a C compiler for whatever device you are using

### 5.3 Power ad Flexibility

- The Unix/Linux kernel is written in C

- Many compilers and interpreters for other languages (FORTRAN, Perl, Python, Pascal, LISP, Logo and BASIC)

- C programs have been used for solving physics and engineering problems and even for animating special effect for movies

- C is flexible

  - Used for developing just about everything you can imagine by way of a computer program
  - Accounting applications to word processing and from games to operating sytems
  - It is the basis for more advanced languages, such as C++

- It is also used for developing mobile phone apps in the form of Objective-C

- C is easy to learn because of its compactness
  - It is an ideal first language to learn if you want to be a programer
  - You will acquire sufficent knowledge for practical application development quickly and easily

### 5.4 Programmer Oriented

- C fulfills the needs of programmers

  - Gives you access to hardware
  - Enables you to manipulate individual bits in memory

- C contians a large selection of operators which allws you to express yourself succinctly

- C is less strict than most languages in limiting what you can do

  - Can be both an advantage and a danger
  - Advantage is that many tasks (such as converting forms of data) are easier in C
  - Danger is that you can make mistakes (pointers) that are impossible in some languages
  - C gives you more freedom, but it also puts more responsibility on you

- C implementations have a large libary of useful C functions
  - Deal with common needs of most programmers

### 5.5 Other Features

- Provides low level features that are generally provided by the lower level languages

- Programs can be manipulated using bits

  - Ability to manage memory representation on bit level
  - Provides wide variety of bit manipulation operators

- Pointers play a big role in C
  - Direct access to memory
  - Supports efficient use of pointers

### 5.6 Disadvantages

- Flexibility and freedom also requires added responsibility

  - Use of pointers is problematic and abused
  - You can make programming errors that are difficult to trace

- Sometimes because of its wealth of operators and its conciseness, it makes the language difficult to read and follow
  - There is an opportunity to write obscure code

### 5.7 Summary

![C Features Summary](images/c_features_summary.png)

## 6 Creating a C Program

### 6.1 Overview

- There are four fundamental tasks in the creation of any C program

  - Editing
  - Compiling
  - Linking
  - Executing

- These tasks will become second nature to you because you will be doing it so often

- The processes of editing, compiling, linking, and executing are essentially the same for developing programs in any environment and with any compiled language

- Editing is the process of creating and modifying your C source code
  - Source code is inside a file and contains the program instructions your write
  - Choose a wise name for your base file name (all source files end in the .c extension)

### 6.2 Compiling

- A compiler converts your source code into machine language and detects and reports errors in your code

  - The input to the compiler is the file your produce during your editing (source file)

- Compilation is a two-statge process

  - The first stage is called the preprocessing phase, during which your code may be modified or added to
  - The second stage is the actual compilation that generates the object code

- The compiler examines eash program statement and checks it to ensure that it conforms to the syntax and semantics of the language

  - Can also recoginze structural errors (dead code)
  - Does not find logic errors
  - Typical errors reported might be due to an expression that has unbalanced parentheses (syntactic error), or due to the use of a variable that is not "defined" (semantic error)

- After all errors are fixed, the compiler will the take each statement of the program and translate it into assembly language

- The compiler will then translate the assembly language statements into acutal machine instructions

  - The output from the compiler is known as object code and it is stored in files called object files (same name as source file with a .obj or .o extension)

- The standard command to compile the C programs will be `cc` (or the GNU compiler which is `gcc`)
  - `cc -c myprog.c` or `gcc -c myprog.c`
  - If you omit the `-c` flag, your program will automatically be linked as well

### 6.3 Linking

- After the program has been translated into object code, it is ready to be linked

  - The purpose of the linking phase is to get the program into a final form for execution on the computer
  - Linking usually occurs automatically when compiling depending on what system you are on, but, can sometimes be a separate command

- The linker combines the object modules generated by the compiler with additional libraries needed by the program to create the whole executable

  - Also deetects and reports errors
    - If part of the program is missing or a nonexistent library component is referenced

- Program libraries support and extend the C language by providing routines to carry out operations, that are not part of the language

  - Input and output libraies, mathematical libraies, string manipulation libraries

- A failure during the linking phase means that once again you have to go back and edit your source code

- Success will produce an executable file

  - Windows - .exe extension
  - UNIX/Linux - no such extension (a.out by default)
  - Many IDEs have a build option, which will compile and link your program in a single operation to produce the executable

- A program of any signficant size will consist of several source code files

  - Each source code file needs the compiler to generate the object file that need to be linked

- The program is much easier to manage by breaking it up into a number of smaller source files
  - It is cohesive and makes the development and maintenance of the program a lot easier
  - The set of source files that make up the program will usually be integrated under a project name, which is used to refer to the whole program

### 6.4 Executing

- In most IDEs, you'll find an appropriate menu command that allows you to run or execute your compiled program

  - Otherwise double click the exe file or type a.out on the console in linux manually

- THe execution stage is where you run your program

  - Each of the statements of the program is sequentially executed in turn
  - If the program requests any data from the user the program temporarily suspend its execution so that the input can be entered
  - Results that are displayed by the program (output) appear in a window called the console

- This stage can also generate a wide variety of error conditions

  - Producing the wrong output
  - Just sitting there and doing nothing
  - Crashing your computer

- In the program does not perform the intended functionality then it will be necessary to go back and renalayze the program's logic
  - Known as the debugging phase, correct all the known problems or bugs from the program
  - Will need to make changes to the original source program
  - The entire process of compiling, linking, and executing the program must be repeated until the desired results are obtained

### 6.5 C Compilation Stages

![C Compilation Stages](./images/compilesteps.png)

## 7 Installing Code::Blocks

## 8 Exploring the Code::Blocks Environment

## 9 Creating a New Project in Code::Blocks

## 10 Running the First Code in Code::Blocks

Using vscode should be better!

## 11 Challenge : Writing a C Program

### 11.1 Requirements

- Write a C program that displays your first name as output
  - Create a project in code::blocks
  - Delete the "main.c" file that was auto-generated when creating the Project
  - Create a new source file in the above project (name the file test.c)
  - Copy the source code as bellow

```c
#include <stdio.h>

int main()
{
    printf("Hi, my name is .....");
    return 0;
}
```

### 11.2 Next Steps

- Modify the source code to display your name

- Compile and link the source code

- Run the program!!!

- Analyze the output to confirm it is correct and displays your name!!!

## 12 Demonsttration : Writing a C Program

## 13 Structure of a C Program

```c
#include <stdio.h>

// Speicial function as the entry function of the whole C program
int main()
{
    printf("Hi, my name is Jun");

    // Exit from the C program
    return 0;
}
```

## 14 Comments

### 14.1 Comments

- Comments are used in a program to document a program and to enhance its readability

- There to remind you, or someone else reading your code, what the program does or what a particular line of code is doing

- Comments are ignored by the compiler

- Comments are very useful
  - A programmer may return to a program that he coded six months ago and may not remember the purpose of a particular funciton or line of code
  - A simple comment can save a significant amount of time otherwise wasted on having to re-understand the code

### 14.2 Syntax

- There are two ways to add comments into a C program

```c
// single line comments

/*
multi-line comments
multi-line comments
multi-line comments
*/
```

### 14.3 Style & Example

```c
/* This program adds two integer values
and displays the results*/

#include <stdio.h>

int main(void)
{
    // Declare variables
    int value1, value2, sum;

    // Assign values and calculate their sum
    value1 = 50;
    value2 = 25;
    sum = value1 + value2;

    // Display the result
    printf("The sume of %i and %i is %i\n", value1, value2, sum);

    return 0;
}
```

### 14.4 Use of Coments

- It is possible to insert so many comments into a program that the readability of the program is actually degraded of improved!

- You need to intelligently use comments

- It is a good idea to get into the habit of inserting comment statements into the program as the program is being written or typed in

  - Easier to document the program while the particular program logic is still fresh in your mind
  - Reap the benifits of the comments during the debug phase, when program logic errors are being isolated and debugged

- A comment can helps you read through the program, but it can also help point the way to the source of the logic mistake

- Self documenting comments by using meaningful names

## 15 The Preprocessor

### 15.1 Overview

- Another unique feature of the C language that is not found in many other higher-level programming languages

- Allows for programers to be easier to develop, easier to read, easier to modify, and easier to port to different computer systems

- Part of the C compilation process that recognizes special statements
  - Analyzes these statements before analysis of the C program itself takes place
  - An instruction to the compiler to do something before compiling the source code
  - Could be anywhere in the code 

- Preprocessor statements are identified by the presence of a pound sign - `#`, which must be the first non-space character on the line

- We will utilize the preprocessor to:
  - Create are own constants and macros with the `#define` statement
  - Build your own library files with the `#include` statement
  - Make more powerful programs with the conditional `#ifdef`, `#endif`, `#else`, and `#ifndef` statements

## 16 The `#include` Statement

### 16.1 Overview

- The `#include` statement is a preprocessor directive

- `#include <stdio.h>`

- It is not strictly part of the executable program, however, the program won't work without it

- The symbol # indicates this is a preprocessing directive
  - An instruction to your compiler to do something before compiling the source code
  - Many preprocessing directives
  - Are usually some at the beginning of the program source file, but they can be anywhere
  - Similar to be `import` statement in Java

- In the above example, the compiler is instructed to "include" in your program the contents of file with the name `stdio.h`
  - Called a header file because it is usually included at the head of a program source file
  - `.h` extension

  ### 16.2 Header Files

  - Header files define information about some of the functions that are provided by that file
    - `stdio.h` is the standard C library header and provides functionality for displaying output, among many other things
    - We need to include this file in a program when using `printf()` function from the standard library
    - `stdio.h` contains the information that the compiler needs to understand what `printf()` means, as well as other functions that deal with input and output
    - `stdio`, is short for *standard input/output*

  - Header files specify information that the compiler uses to integrate any predefined functions within a program

  - You will be creating your own header files for use with your programs

  ### 16.3 Syntax

  - Header file names are case sensitive 

  - Two ways to `#include` files in a program
    - Using angle brackets (`#include <JunLuo.h>`)
      - Tells the preprocessor to look for the file in one or more standard system directories
    - Using double quotes (`#include "JunLuo.h`)
      - Tells the preprocesors to first look in the current directory

  - Every C compiler that conforms to the C11 standard will have a set of standard header files supplied with it

  - You should use `#ifndef` and `#define` to protect against multiple inclusions of a header file


```c
// some header 

// typedef
typedef struct names_st names;

// function prototypes
void get_names(names *);
void show_names(const names *);
char * s_gets(char * st, int n);

/*
header files includes many different things
  #define directives
  structure declarations
  typedef statements
  function prototypes
*/

// executable code normally goes into a source code file, not a header file
```

## 17 Displayin Output

### 17.1 Overview

- In out first challeng, you should have noticed that there was a line of code that included the word `printf`

- `printf("Hello World!")`

- `printf()` is a standard library function
  - It outputs information to the command line (the standard output stream, which is the command line by default)
  - The information displayed in based on what appears between the parentheses that immediately follow the function name `printf`
  - Alos notice that this line does end with a semicolon `;`

### `printf` Function

- Probably the most common function used in C

- Provides an easy and conveninent means to display program results

- Not only can simply phrases be displayed, but the values of variables and results of computations can also be displayed
  - Used for debugging


## 18 Enums and Chars

### 18.1 Enums

- A data type that allows a programmer to define a vaiable specify the valid values could be stored into that variable
  - Can create a variable named "myColor" and it can only contain one of the primary color, red, yellow, or blue, and nother values

- First have to define the enum type and give a name
  - Initiated by the keyword `enum`
  - Then the name of enumaerated data type
  - Then list of identifiers (enclosed in a set of curly braces) that define the permissible value that can be assigned to the type

```c
enum primaryColor {red, yellow, blue};
```

- Variables declared to be of this data type can be assigned the values red, yellow, and blue inside the program, and no other values

- To declared a variable to be of type enum primaryColor
  - Use the keyword `enum`
  - Follow by the enumerated type name
  - Follow by the variable list. So the statement.

```c
enum primaryColor myColor, gregsColor;
```

- Defines two variables myColor and gregsColor to be of type primaryColor
  - The only permissible values that can be assigned to these variables are the names red, yellow, and blue
  - `myColor = red;`

- Another example
```c
enum month {January, February, March, April, May, June, July, August, Sepetember, October, Novemeber, December};
```

### 18.2 Enums as ints

- The compiler actually treats enumeration identifiers as integer constants
  - First name in list is 0

```c
enum month thisMonth;
...
...
...
```

- The value 1 is assigned to thisMonth (and not the name `February`) because it is the second identifiy listed inside in enumeration list

- If you want to have a specific integer value associated with an enumeration identifier, the integer can be assigned to the identifier when the data type is defined

```c
enum direction {up, down, left = 10, right}
```

- An enumerated data type direction is define with the values up, down, left and right
- `up = 0` because it appears first in the list
- 1 to down because it appears next
- 10 to left because it is explicitly assigned this value

- The compiler actually enumeration identifiers as integer constants 
    first name in list is 0


### 18.3 Char

- Chars represent a single character such as teh letter 'a
, the digit character `6`, or a semicolon (':')

- Character literas use single quotes such 'A' or 'Z'

- You can also declare char variable to be unsigned
  - Can be used to explicitly tell the compiler that a particular variable is a signed quality

### 18.4 Declaring a char

```c
char broiled;      /**declar a char variable*/
broiled = 'T';     /*OK*/
broiled = T;       /*Not OK! Thinks T is a variable*/
broiled = "T";     /*Not OK! Thinks "T" is a string */

- If you omit the quotes, the compiler thinks that T is the name of a variable
  -             

- If you use double quotes, it thinks you are using a string

- You can also use the numerical code to assign values

```c
char grade = 65;    /*ok for ASCII, but poor style*/
```

### 18.4 Escape Characters

- C contains special characters that represent actions
  - Backspacing
  - Going to the next line
  - Making the terminal bell ring (or speaker beep)

- We can represent these actions by using sysmbol sequences
  - Called sequences

- Escape sequences must be enclosed in single quotes when assigned to a character variables

- Escape sequences must be enclosed in single quotes when assigned to a chracter value

```c
char x = '\n'
```

- Then print variable x = advance the printer or screen line

![escape_characters_summary.png](./images/escape_characters_summary.png) 


## 19 Format Specifiers

### 19.2 Overview

- Format specifiers are used when displaying variables as output 
  - They specify the type of data of the variable to be displayed 

```c
int sum = 89
printf("The sum %d\n", sum);
```

- The `printf()` function can display as output the values of variables
  - has wo items or arguments enclosed within the parentheses
  - arguments are separated by comma
  - first argument to the `printf()` routine is always the character string to be displayed
  - along with the display of the character string, you might also frequently want to have the value of a certain program varaibles displayed

- The percent character inside the first argument is a special character recognized by the `print()` function
  - the character that immediately follows the percent sign specifies what type of value is to be displayed 

![format_specifiers_summary.png](./images/format_specifiers_summary.png)