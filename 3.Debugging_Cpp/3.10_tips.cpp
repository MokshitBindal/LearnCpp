/*
Here’s a list of things that can help avoid making errors:
    Follow best practices.
    Don’t program when tired or frustrated. Take a break and come back later.
    Understand where the common pitfalls are in a language (all those things we warn you not to do).
    Don’t let your functions get too long.
    Prefer using the standard library to writing your own code, when possible.
    Comment your code liberally.
    Start with simple solutions, then layer in complexity incrementally.
    Avoid clever/non-obvious solutions.
    Optimize for readability and maintainability, not performance.

One way to address this is to break a single long function into multiple shorter functions.
This process of making structural changes to your code without changing its behavior is called refactoring.
Ideally, a function should be less than ten lines.

Defensive programming is a practice whereby the programmer tries to anticipate all of the ways the software could be misused

One common way to help uncover issues with your program is to write testing functions to “exercise” the code you’ve written\
This is a primitive form of unit testing,

Programmers tend to make certain kinds of common mistakes, and some of those mistakes can be discovered by programs trained 
to look for them. These programs, generally known as static analysis tools (sometimes informally called linters) 
are programs that analyze your code to identify specific semantic issues
*/

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

void testadd()
{
    std::cout << "This function should print: 2 0 0 -2\n";
    std::cout << add(1, 1) << ' ';
    std::cout << add(-1, 1) << ' ';
    std::cout << add(1, -1) << ' ';
    std::cout << add(-1, -1) << ' ';
}

int main()
{
    testadd();

    return 0;
}