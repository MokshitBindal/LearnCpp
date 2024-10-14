#include <iostream> // imports the declaration of std::cout into the global scope

using namespace std; // this is a using-directive that allows us to access names in the std namespace with no namespace prefix

/*
If two identical identifiers are introduced into the same program in a way that the compiler
or linker can’t tell them apart, the compiler or linker will produce an error.
This error is generally referred to as a naming collision (or naming conflict).

Local scope usually helps us here but it doesn’t work for function names. so,
two identically named functions can be defined inside separate namespaces, and no naming collision will occur.

A scope region is an area of source code where all declared identifiers are considered
distinct from names declared in other scopes, so we can declare same names in different scope,
each function provides a separate scope region

A namespace provides another type of scope region (called namespace scope) that allows you to declare
names inside of it for the purpose of disambiguation. Any names declared inside the namespace won’t be
mistaken for identical names in other scopes. only declarations and definitions can appear in the scope of a namespace

any name that is not defined inside a class, function, or a namespace is considered to be part of an
implicitly-defined namespace called the global namespace (sometimes also called the global scope).

Because cout is defined in the std namespace, the name cout won’t conflict with any objects
or functions named cout that we create outside of the std namespace

The :: symbol is an operator called the scope resolution operator, When an identifier includes a 
namespace prefix, the identifier is called a qualified name.


*/
void myFcn(int x)
{
    cout << 2 * x;
}

// All of the following statements are part of the global namespace

void foo(); // okay: function forward declaration
int x;      // compiles but strongly discouraged: non-const global variable definition (without initializer)
int y{5};   // compiles but strongly discouraged: non-const global variable definition (with initializer)
// x = 5;      // compile error: executable statements are not allowed in namespaces(like outside main)

int main()  // Okay: Function definition
{
    return 0;
}

void goo(); // okay: A function forward declaration
