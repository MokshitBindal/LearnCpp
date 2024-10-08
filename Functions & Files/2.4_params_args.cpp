/*
A function parameter is a variable used in the header of a function.
Function parameters work almost identically to variables defined inside the function,
but with one difference: they are initialized with a value provided by the caller of the function.

When a function is called, all of the parameters of the function are created as variables,
and the value of each of the arguments is copied into the matching parameter (using copy initialization).
This process is called pass by value. Function parameters that utilize pass by value are called value parameters.

In certain cases, you will encounter functions that have parameters that are not used in the body of the function. These are called unreferenced parameters.

the name of a function parameter is optional. Therefore, in cases where a function parameter needs to exist but 
is not used in the body of the function, you can simply omit the name.
A parameter without a name is called an unnamed parameter:

*/

#include <iostream>
// void doSomething(int /*count*/){}
void doSomething(int) // ok: unnamed parameter will not generate warning
{
}

// This function has two integer parameters, one named x, and one named y
// The values of x and y are passed in by the caller
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}


int main()
{
    printValues(6, 7); // This function call has two arguments, 6 and 7

    return 0;
}


// int doubleNumber(int num)
// {
//     return num * 2;
// }

// int main()
// {
//     int num{};
//     std::cin >> num;
//     std::cout << doubleNumber(num) << '\n';
// }