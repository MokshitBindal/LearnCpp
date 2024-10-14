#include <cstdint> // for fixed-width integers
#include <iostream>
#include <cstddef> // for std::size_t

// using namespace std;
/*
C99 defined a set of fixed-width integers (in the stdint.h header) that are guaranteed to be the same size on any architecture.
They can be accessed by including the <cstdint> header, where they are defined inside the std namespace.

std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits. By fastest,
we mean the integral type that can be processed most quickly by the CPU.

std::uint_least32_t will give you the smallest unsigned integer type that’s at least 32 bits.

The 8-bit fixed-width integer types are often treated like chars instead of integer values (and this may vary per system). 
Prefer the 16-bit fixed integral types for most cases.
*/
int main()
{
    std::cout << sizeof(int) << '\n';
    // sizeof returns a value of type std::size_t
    // the compiler decides if std::size_t is an unsigned int, an unsigned long, an unsigned long long, etc…

    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    std::cout << '\n';
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";


    std::int16_t i{5};
    std::cout << i << '\n';

    int x{5};
    std::size_t s{sizeof(x)}; // sizeof returns a value of type std::size_t, so that should be the type of s
    std::cout << s << '\n';
    return 0;
}