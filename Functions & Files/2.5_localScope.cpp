/*
Variables defined inside the body of a function are called local variables

Local variables are destroyed in the opposite order of creation at the end of the set
of curly braces in which it is defined.

an object’s lifetime is defined to be the time between its creation and destruction.
Note that variable creation and destruction happen when the program is running (called runtime),
not at compile time. Therefore, lifetime is a runtime property.

If the object is a class type object, prior to destruction, a special function called a destructor is invoked.
In many cases, the destructor does nothing, in which case no cost is incurred.

An identifier’s scope determines where the identifier can be seen and used within the source code
so, variable you can acces is "in scope"
The identifier of a local variable has local scope. An identifier with local scope (technically called block scope)

An identifier is out of scope anywhere it cannot be accessed within the code.like x outside main function

A temporary object (also sometimes called an anonymous object) is an unnamed object that is used to
 hold a value that is only needed for a short period of time. Temporary objects are
 generated by the compiler when they are needed.

Modern compiler can skip creation and destruction of the temporary in main(),
  and use the return value of getValueFromUser() to directly initialize the parameter of operator<<.

When a function becomes too long, too complicated, or hard to understand, 
it can be split into multiple sub-functions. This is called refactoring.
*/

#include <iostream>
int add(int x, int y)// function parameters x and y are local variables
{
    int z{x + y};// z is a local variable
    return z;
}// z, y, and x destroyed here

void doSomething()
{
    std::cout << "Hello!\n";
}

// Define your local variables as close to their first use as reasonable.

int main()
{
    // x can not be used here because it's not in scope yet

    // int x{0}; // x's lifetime begins here
    // // x enters scope here and can now be used within this function
    
    // doSomething(); // x is still alive during this function call

    int x{5}; // main's x is created, initialized, and enters scope here
    int y{6}; // main's y is created, initialized, and enters scope here

    // main's x and y are usable within this function only
    std::cout << add(x, y) << '\n'; // calls function add() with x=5 and y=6

    return 0;
// main's y and x go out of scope and are destroyed here
} // x's lifetime ends here // x goes out of scope here and can no longer be used

/*
#include <iostream>

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}
*/