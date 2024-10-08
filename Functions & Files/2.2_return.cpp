#include<bits/stdc++.h>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE

using namespace std;
/*
inside the function that will return a value, we use a return statement to indicate
the specific value being returned to the caller. The specific value returned from a function
is called the return value. When the return statement is executed, the function exits
immediately, and the return value is copied from the function back to the caller. This process is called return by value.

The return value from main() is sometimes called a status code (or less commonly,
an exit code, or rarely a return code). The status code is used to signal whether your
program was successful or not.
By convention, a status code of 0 means the program ran normally

The C++ standard only defines the meaning of 3 status codes: 0, EXIT_SUCCESS, and EXIT_FAILURE.
0 and EXIT_SUCCESS both mean the program executed successfully.
EXIT_FAILURE means the program did not execute successfully.
EXIT_SUCCESS and EXIT_FAILURE are preprocessor macros defined in the <cstdlib> header.

If you want to maximize portability, you should only use 0 or EXIT_SUCCESS

A function that returns a value is called a value-returning function.
A function is value-returning if the return type is anything other than void.

A value-returning function must return a value of that type (using a return statement),
otherwise undefined behavior will result.
Exception: The function main() will implicitly return the value 0

Follow DRY: “Don’t repeat yourself”. If you need to do something more than once, 
consider how to modify your code to remove as much redundancy as possible.
*/

// int is the return type
// A return type of int means the function will return some integer value to the caller (the specific value is not specified here)
int returnFive()
{
    // the return statement indicates the specific value that will be returned
    return 5; // return the specific value 5 back to the caller
}

int main()
{
    std::cout << returnFive() << '\n';     // prints 5
    std::cout << returnFive() + 2 << '\n'; // prints 7

    returnFive(); // okay: the value 5 is returned, but is ignored since main() doesn't do anything with it
    // C++ disallows calling the main() function explicitly.
    return EXIT_SUCCESS;
    // return 0;
}

// Wont compile, wrong function name and wrong command
// int return 5()
// {
//     return 5;
// }

// int main()
// {
//     std::cout << return 5() << '\n';

//     return 0;
// }