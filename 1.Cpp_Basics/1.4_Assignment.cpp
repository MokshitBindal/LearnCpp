#include<bits/stdc++.h>
using namespace std;
/*assignment copies the value on the right-hand side of the = operator to the variable
 on the left-hand side of the operator. This is called copy-assignment.
*/
int main() {
    int width; // define an integer variable named width
    width = 5; // assignment of value 5 into variable width
    std::cout << width; // prints 5

    width = 7; // change value stored in variable width to 7
    std::cout << width; // prints 7
    // variable width now has value 5


    // The process of specifying an initial value for an object is called initialization,
    // and the syntax used to initialize an object is called an initializer.
    int width{5}; // define variable width and initialize with initial value 5
    // variable width now has value 5

    // There are 5 commonly used ways to initialize variables in C++ :

    int a; // default-initialization (no initializer)
    // Traditional initialization forms:
    int b = 5; // copy-initialization (initial value after equals sign)
    int c(6);  // direct-initialization (initial value in parenthesis)
    // Modern initialization forms (preferred):
    int d{7}; // direct-list initialization (initial value in braces)
    int f{};  // value-initialization (empty braces)

    int width{5};     // direct-list-initialization of initial value 5 into variable width (preferred)
    int height = {6}; // copy-list-initialization of initial value 6 into variable height (rarely used)

    // An integer can only hold non-fractional values
    int w1{4.5}; // compile error: list init does not allow narrowing conversion of 4.5 to 4

    int w2 = 4.5; // compiles: copy-init initializes width with 4
    int w3(4.5);  // compiles: direct-init initializes width with 4

    int w1{4.5}; // compile error: list-init does not allow narrowing conversion of 4.5 to 4
    w1 = 4.5; // okay: copy-assignment allows narrowing conversion of 4.5 to 4

    int width{}; // value-initialization / zero-initialization to value 0

    int x{0};    // direct-list-initialization with initial value 0
    std::cout << x; // we're using that 0 value here
    int x{};        // value initialization
    std::cin >> x;  // we're immediately replacing that value so an explicit 0 would be meaningless

    int a = 4, b = 5; // correct: a and b both have initializers
    int a, b = 5;     // wrong: a doesn't have its own initializer
    return 0;
}


// #include <iostream>
// int main()
// {
//     // Here's some math/physics values that we copy-pasted from elsewhere
//     double pi { 3.14159 };
//     double gravity { 9.8 };
//     double phi { 1.61803 };
//     std::cout << pi << '\n';  // pi is used
//     std::cout << phi << '\n'; // phi is used
//     // The compiler will likely complain about gravity being defined but unused
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     [[maybe_unused]] double pi{3.14159};  // Don't complain if pi is unused
//     [[maybe_unused]] double gravity{9.8}; // Don't complain if gravity is unused
//     [[maybe_unused]] double phi{1.61803}; // Don't complain if phi is unused
//     std::cout << pi << '\n';
//     std::cout << phi << '\n';
//     // The compiler will no longer warn about gravity not being used
//     return 0;
// }