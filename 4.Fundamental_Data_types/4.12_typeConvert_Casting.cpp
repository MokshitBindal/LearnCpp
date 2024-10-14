#include<bits/stdc++.h>
/*
The process of converting a value from one type to another type is called type conversion.
Thus, the int argument 5 will be converted to double value 5.0 and then copied into parameter x

When the compiler does type conversion on our behalf without us explicitly asking,
we call this implicit type conversion.

Explicit type conversion allow us (the programmer) to explicitly tell the compiler
to convert a value from one type to another type

Signed integral values can be converted to unsigned integral values, and vice-versa, using a static cast.

std::int8_t and std::uint8_t likely behave like chars instead of integers

std::int8_t is treated as a char, the input routines interpret our input as a sequence of characters, 
not as an integer. So when we enter 35, we’re actually entering two chars, '3' and '5'. 
Because a char object can only hold one character, the '3' is extracted (the '5' is left in the 
input stream for possible extraction later). Because the char '3' has ASCII code point 51, the 
value 51 is stored in myInt, which we then print later as an int.

*/

// void print(double x) // print takes a double parameter
// {
//     std::cout << x << '\n';
// }

// int main()
// {
//     // int y{5.5};
//     print(5); // what happens when we pass an int value?

//     return 0;
// }


void print(int x) // print now takes an int parameter
{
    std::cout << x << '\n';
}

void ascii_char();

int main()
{
    print(static_cast<int>(5.5)); // explicitly convert double value 5.5 to an int
    // warning: we're passing in a double value, but after static_cast it is all good


    char ch{97}; // 97 is ASCII code for 'a'
    // print value of variable ch as an int
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';


    unsigned int u1{5};
    // Convert value of u1 to a signed int
    int s1{static_cast<int>(u1)};
    std::cout << s1 << '\n'; // prints 5
    int s2{5};
    // Convert value of s2 to an unsigned int
    unsigned int u2{static_cast<unsigned int>(s2)};
    std::cout << u2 << '\n'; // prints 5


    int s{-1};
    std::cout << static_cast<unsigned int>(s) << '\n'; // prints 4294967295
    unsigned int u{4294967295};               // largest 32-bit unsigned int
    std::cout << static_cast<int>(u) << '\n'; // implementation-defined prior to C++20, -1 as of C++20

    // std::int8_t myInt{65};      // initialize myInt with value 65
    // std::cout << myInt << '\n'; // you're probably expecting this to print 65
    // // std::cout << static_cast<int>(myInt) << '\n'; // will always print 65

    std::cout << "Enter a number between 0 and 127: ";
    std::int8_t myInt{};
    std::cin >> myInt;

    std::cout << "You entered: " << static_cast<int>(myInt) << '\n';

    ascii_char();
    return 0;
}

void ascii_char()
{
    std::cout <<  "Enter a single character: " << '\n';
    char ch;
    std::cin >> ch;
    int val_ch{ch}; // implicit conversion
    // std::cout << "You entered " << ch << ", Which has ASCII value of " << static_cast<int>(ch) << '\n';
    std::cout << "You entered " << ch << ", Which has ASCII value of " << val_ch << '\n';
}