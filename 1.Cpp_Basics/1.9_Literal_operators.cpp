#include<bits/stdc++.h>
// using namespace std;
/*
// std::cout << "Hello world!";
// int x{5};
Here 5 and "Hello World" are called literals, means that 5 will always be 5 while x can be 5 or 3 etc.
These literals are fixed values with a value (and a type), literals are called constants

Now, As 2 + 3 equals 5. In this case, the literals 2 and 3 are the operands, and the symbol + is the operator
the output value of an operation is often called a return value. which is 5 here.

While most operators have symbols for names (e.g. +, >>, <<, /, * or ==),
there are also a number of operators that are keywords (e.g. new, delete, and throw).

it is common to append the operator’s symbol to the word operator.
like operator+, and the extraction operator would be written operator>>.

The number of operands that an operator takes as input is called the operator’s arity,
Operators in C++ come in four different arities:
1. Unary(like, -5) 2. Binary(3+4 or <<) 3. Ternary 4. Nullary

For operators, in C++, PEMDAS is used and goes from left to right

In C++, the term “side effect” has a different meaning: 
it is an observable effect of an operator or function beyond producing a return value.
x = 5 returns x, and std::cout << 5 returns std::cout.
This is done so that these operators can be chained
x = y = 5 evaluates as x = (y = 5). First y = 5 assigns 5 to y.
This operation then returns y, which can then be assigned to x
*/
int main() {

    std::cout << 5 << '\n'; // print the value of a literal
    int x{5};
    std::cout << x << '\n'; // print the value of a variable
    std::cout << 1 + 2 << '\n';

    int y{2};
    std::cout << (y = 5) << '\n'; 
    // value of y is printed as y is returned after the assignment

    return 0;
}