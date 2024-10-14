#include <iostream>
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
/*
C++ comes with built-in support for many different data types. These are called fundamental data types,
but are often informally called basic types, primitive types, or built-in types.

void means “no type”!
Void is our first example of an incomplete type. An incomplete type is a type that has been declared but not yet defined.
*/

// void value; // won't work, variables can't be defined with incomplete type void

void writeValue(int x) // void here means no return value
{
    std::cout << "The value of x is: " << x << '\n';
    // no return statement, because this function doesn't return a value
    // return 5; // error
}

int getValue(void) // void here means no parameters, also this way is not promoted 
{
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    // Here is the preferred way to define the four types of signed integers :

    short s; // prefer "short" instead of "short int"
    int i;
    long l;                 // prefer "long" instead of "long int"
    long long ll;           // prefer "long long" instead of "long long int"

    // 8-bit integer contains 8 bits. 28 is 256, so an 8-bit integer can hold 256 possible values. 
    // There are 256 possible values between -128 to 127, inclusive.
    // 7 bits are used to hold the magnitude of the number, and 1 bit is used to hold the sign.

    std::cout << std::left; // left justify output
    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    // If an arithmetic operation (such as addition or multiplication) attempts to create a 
    // value outside the range that can be represented, this is called integer overflow (or arithmetic overflow).
    // assume 4 byte integers
    int x{2'147'483'647}; // the maximum value of a 4-byte signed integer
    std::cout << x << '\n';

    x = x + 1; // integer overflow, undefined behavior
    std::cout << x << '\n';

    return 0;
}
// C++ only guarantees that integers will have a certain minimum size, not that they will have a specific size.
// This attribute of being positive, negative, or zero is called the number’s sign.
// By default, integers in C++ are signed, which means the number’s sign is stored as part of the value. 
// Therefore, a signed integer can hold both positive and negative numbers (and 0).