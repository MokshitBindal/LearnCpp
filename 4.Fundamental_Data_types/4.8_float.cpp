#include <iostream>
#include <limits>
#include <iomanip> // for output manipulator std::setprecision()

// using namespace std;
/*
Floating point data types are always signed (can hold positive and negative values).
We recommend avoiding long double.

The precision of a floating point type defines how many significant digits it can represent without information loss.

9.87654e+006 is the same as 9.87654e6, just with some padding 0’s.

When precision is lost because a number can’t be stored precisely, this is called a rounding error.

Rounding errors aren’t the exception -- they’re the norm. Never assume your floating point numbers are exact.
A corollary of this rule is: be wary of using floating point numbers for financial or currency data.

two special categories of floating point numbers. The first is Inf, which represents infinity. 
Inf can be positive or negative. The second is NaN, which stands for “Not a Number”.
*/
int main()
{
    float fValue;
    double dValue;
    long double ldValue;

    int a{5};      // 5 means integer
    double b{5.0}; // 5.0 is a floating point literal (no suffix means double type by default)
    float c{5.0f}; // 5.0 is a floating point literal, f suffix means float type

    int d{0};      // 0 is an integer
    double e{0.0}; // 0.0 is a double

    std::cout << std::numeric_limits<float>::is_iec559 << '\n';
    std::cout << std::numeric_limits<double>::is_iec559 << '\n';
    std::cout << std::numeric_limits<long double>::is_iec559 << '\n';

    std::cout << 5.0 << '\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';

    // The following program shows std::cout truncating to 6 digits:
    std::cout << 9.87654321f << '\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';

    std::cout << std::setprecision(17);                             // show 17 digits of precision
    std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float
    std::cout << 3.33333333333333333333333333333333333333 << '\n';  // no suffix means double

    double d1{1.0};
    std::cout << d1 << '\n';
    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1}; // should equal 1.0
    std::cout << d2 << '\n';

    double zero{0.0};
    double posinf{5.0 / zero}; // positive infinity
    std::cout << posinf << '\n';

    double neginf{-5.0 / zero}; // negative infinity
    std::cout << neginf << '\n';

    double nan{zero / zero}; // not a number (mathematically invalid)
    std::cout << nan << '\n';

    return 0;
}