/*
The conditional compilation preprocessor directives allow you to specify under what conditions
something will or won’t compile. The #ifdef preprocessor directive allows the preprocessor to check
whether an identifier has been previously defined via #define. If so, the code between the #ifdef and
matching #endif is compiled. If not, the code is ignored.


*/

#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif

// #ifndef is the opposite of #ifdef, in that it allows you to check whether an identifier has NOT been #defined yet.
#ifndef PRINT_BOB
    std::cout << "Bob\n";
#endif

// One more common use of conditional compilation involves using #if 0 to exclude a block 
// of code from being compiled (as if it were inside a comment block):
#if 0  // Don't compile anything starting here
    std::cout << "Bob\n";
    /* Some
       multi-line
       comment here
    */
    std::cout << "Steve\n";
#endif // until this point, and just change 0 to 1, to make the code work
       // Thus easily “comment out” code that contains multi-line comments, which are hard to comment out

    return 0;
}



// #define PRINT_JOE
// #define FOO 9 // Here's a macro substitution
// int main()
// {
// #ifdef PRINT_JOE
//     std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
// #endif
// // But we defined PRINT_JOE to be nothing, how come the preprocessor didn’t replace PRINT_JOE in #ifdef PRINT_JOE with nothing and
// // Fail to execute
// // In most cases, macro substitution does not occur when a macro identifier is used within another preprocessor command.
// // There is at least one exception to this rule: most forms of #if and #elif do macro substitution within the preprocessor command.

// #ifdef FOO                    // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
//     std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
// #endif
//     return 0;
// }