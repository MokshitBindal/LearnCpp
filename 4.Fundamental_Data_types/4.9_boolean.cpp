#include<bits/stdc++.h>
/**/
int main()
{
    // bool b;
    bool b1{true};
    bool b2{false};
    // bool b1{!true};  // b1 will be initialized with the value false
    // bool b2{!false}; // b2 will be initialized with the value true
    b1 = false;
    bool b3{}; // default initialize to false

    std::cout << true << '\n';  // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0

    std::cout << std::boolalpha; // print bools as true or false

    std::cout << true << '\n';
    std::cout << false << '\n';

    bool bFalse{0}; // okay: initialized to false
    bool bTrue{1};  // okay: initialized to true
    // bool bNo{2};    // error: narrowing conversions disallowed

    // std::cout << bFalse << bTrue << bNo << '\n';

    // bool b1 = 4; // copy initialization allows implicit conversion from int to bool
    // std::cout << b1 << '\n';

    // bool b2 = 0; // copy initialization allows implicit conversion from int to bool
    // std::cout << b2 << '\n';

    bool b{}; // default initialize to false
    std::cout << "Enter a boolean value: ";
    std::cin >> b;
    std::cout << "You entered: " << b << '\n';
    // 0 is false, and1 is true
    return 0;
}

// #include <iostream>

// // returns true if x and y are equal, false otherwise
// bool isEqual(int x, int y)
// {
//     return x == y; // operator== returns true if x equals y, and false otherwise
// }

// int main()
// {
//     std::cout << "Enter an integer: ";
//     int x{};
//     std::cin >> x;

//     std::cout << "Enter another integer: ";
//     int y{};
//     std::cin >> y;

//     std::cout << std::boolalpha; // print bools as true or false

//     std::cout << x << " and " << y << " are equal? ";
//     std::cout << isEqual(x, y) << '\n'; // will return true or false

//     return 0;
// }