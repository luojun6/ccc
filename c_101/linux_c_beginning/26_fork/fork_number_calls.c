#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}

// Output
// hello
// hello
// hello
// hello
// hello
// hello
// hello
// hello

// fork ();   // Line 1
// fork ();   // Line 2
// fork ();   // Line 3

//        L1       // There will be 1 child process 
//     /     \     // created by line 1.
//   L2      L2    // There will be 2 child processes
//  /  \    /  \   //  created by line 2
// L3  L3  L3  L3  // There will be 4 child processes 
//                 // created by line 3

// So there are total eight processes 
// (new child processes and one original process).

// If we want to represent the relationship 
// between the processes as a tree hierarchy 
// it would be the following:

// - **The main process: P0**
// - **Processes created by the 1st fork: P1**
// - **Processes created by the 2nd fork: P2, P3**
// - **Processes created by the 3rd fork: P4, P5, P6, P7**

//              P0
//          /   |   \
//        P1    P4   P2
//       /  \          \
//     P3    P6         P5
//    /
//  P7