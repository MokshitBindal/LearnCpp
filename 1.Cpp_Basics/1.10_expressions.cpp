#include<bits/stdc++.h>
using namespace std;
/*
In general programming, an expression is a non-empty sequence of literals, variables, operators,
and function calls that calculates a value. The process of executing an expression is called evaluation,
and the resulting value produced is called the result of the expression (also sometimes called the return value).

Result of expression can be one of the following:
1. Value 2. object/function 3. Nothing(when no value is returned by function calls)

the expression statement 2 * 3; is an expression statement
whose expression evaluates to the result value of 6, which is then discarded.

a compound expression is an expression that contains two or more uses of operators. x = 4 + 5
*/

// five() is a function that returns the value 5
int five()
{
    return 5;
}
int main() {
    int a{2};           // initialize variable a with literal value 2
    int b{2 + 3};       // initialize variable b with computed value 5
    int c{(2 * 3) + 4}; // initialize variable c with computed value 10
    int d{b};           // initialize variable d with variable value 5
    int e{five()};      // initialize variable e with function return value 5
    // type identifier { expression };

    // std::cout << 2 + 3 << '\n';
    // int x{6};
    // int y{x - 2};
    // std::cout << y << '\n';
    // int z{};
    // z = x;
    // std::cout << z * x << '\n';
    return 0;
}

