#include<bits/stdc++.h>
using namespace std;
/*
C++ programs can work the same way. A program will be executing statements sequentially
inside one function when it encounters a function call. A function call is an expression
that tells the CPU to interrupt the current function and execute another function. The CPU
“puts a bookmark” at the current point of execution, and then calls (executes) the function
named in the function call. When the called function ends, the CPU returns back to the point it
bookmarked, and resumes execution.

The function initiating the function call is the caller, and the function being
called is the callee or called function.

returnType functionName() // This is the function header (tells the compiler about the existence of the function)
{
    // This is the function body (tells the compiler what the function does)
}

“foo” is a meaningless word that is often used as a placeholder name for a
function or variable when the name is unimportant to the demonstration of some concept.
 Other common metasyntactic variables in C++ include “bar”, “baz”, 
 and 3-letter words that end in “oo”, such as “goo”, “moo”, and “boo”).

*/

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";

    doB();

    std::cout << "Ending doA()\n";
}

    // Definition of user-defined function doPrint()
    void doPrint() // doPrint() is the called function in this example
    {
        std::cout << "In doPrint()\n";
    }
    int main()
    {
        // You can't make the function inside another function, only calling is allowed
        std::cout << "Starting main()\n";
        doPrint();                      // Interrupt main() by making a function call to doPrint().  main() is the caller.
        doPrint();                      // doPrint() called for the second time
        doA();                          // Starting doA
        doB();                          // Starting doB
        std::cout << "Ending main()\n"; // this statement is executed after doPrint() ends
        return 0;
    }