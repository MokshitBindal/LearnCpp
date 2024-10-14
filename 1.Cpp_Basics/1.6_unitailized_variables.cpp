#include <iostream>

int main()
{
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value

    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized
    std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes
    // On most platforms, this will produce 4, but on others it may produce 2.

    // Avoid implementation-defined and unspecified behavior whenever possible, as they may cause your program to 
    // malfunction on other implementations.

    return 0;
}

