/*
Unsigned integers are integers that can only hold non-negative whole numbers.
If we try to store the number 280 (which requires 9 bits to represent) in a 1-byte (8-bit) unsigned integer?
overflow happens

2 - 3 is -1, but -1 can’t be represented as an unsigned integer, so we get overflow and the following result:
4294967295, s avoid unsigned integers
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // To define an unsigned integer, we use the unsigned keyword.By convention, this is placed before the type :
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    unsigned long long ull;

    // unsigned short x{65535}; // largest 16-bit unsigned value possible
    // std::cout << "x was: " << x << '\n';
    // x = 65536; // 65536 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';
    // x = 65537; // 65537 is out of our range, so we get modulo wrap-around
    // std::cout << "x is now: " << x << '\n';

    unsigned short x{0}; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = -1; // -1 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    x = -2; // -2 is out of our range, so we get modulo wrap-around
    std::cout << "x is now: " << x << '\n';

    // unsigned int u{2};
    // signed int s{3};
    // // the signed integer will usually be converted to an unsigned integer.
    // std::cout << u - s << '\n'; // 2 - 3 = 4294967295

    signed int s{-1};
    unsigned int u{1};

    if (s < u) // -1 is implicitly converted to 4294967295, and 4294967295 < 1 is false
        std::cout << "-1 is less than 1\n";
    else
        std::cout << "1 is less than -1\n"; // this statement executes
    return 0;
}