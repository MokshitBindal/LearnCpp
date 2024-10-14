/*
#include <iostream>

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
// Gives error: add.cpp(5) : error C3861: 'add': identifier not found
// because the compiler compiles the contents of code files sequentially

For functions A and B. If function A calls function B, and function B calls function A,
then there’s no way to order the functions in a way that will make the compiler happy.
If you define A first, the compiler will complain it doesn’t know what B is.
If you define B first, the compiler will complain that it doesn’t know what A is.

A forward declaration allows us to tell the compiler about the existence
of an identifier before actually defining the identifier, done by function declaration/prototype

If a forward declaration is made, but the function is never called, the program will compile and run fine.
However, if a forward declaration is made and the function is called, but the program never defines the function,
the program will compile okay, but the linker will complain that it can’t resolve the function call.

A declaration tells the compiler about the existence of an identifier and its associated type information
A definition is a declaration that actually implements (for functions and types) or instantiates (for variables) the identifier.

Declarations that aren’t definitions are called pure declarations

The one definition rule (or ODR for short) is a well-known rule in C++. The ODR has three parts:
    1.Within a file, each function, variable, type, or template in a given scope can only have one definition.
    2.Within a program, each function or variable in a given scope can only have one definition
    3.Types, templates, inline functions, and inline variables are allowed
    to have duplicate definitions in different files, so long as each definition is identical

Violating part 1 of the ODR will cause the compiler to issue a redefinition error. Violating ODR part 
2 will cause the linker to issue a redefinition error. Violating ODR part 3 will cause undefined behavior.


*/

#include <iostream>
int add(int x, int y); // function declaration includes return type, name, parameters, and semicolon.  No function body!
// int add(int, int);     // valid function declaration
int main()
{
    // this works because we forward declared add() above
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}