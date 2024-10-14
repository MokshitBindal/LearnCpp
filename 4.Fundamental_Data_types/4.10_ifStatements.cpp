#include<bits/stdc++.h>
/* if statement allows us to execute one (or more) lines of code only if some condition is true.
A condition (also called a conditional expression) is an expression that evaluates to a Boolean value.

non-zero values get converted to Boolean true, and zero-values get converted to Boolean false.
*/

/*
// returns the absolute value of x
int abs(int x)
{
    if (x < 0)
        return -x; // early return (only when x < 0)

    return x;
}


int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    // if (x == 0)
    //     std::cout << "The value is zero\n";

    // bool zero{(x == 0)};
    // if (zero)
    //     std::cout << "The value is zero\n";
    // if (!zero)
    //     std::cout << "The value is non-zero\n";

    if (x == 0)
        std::cout << "The value is zero\n";
    else
        std::cout << "The value is non-zero\n";

    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else
        std::cout << "The value is zero\n";

    if (4) // nonsensical, but for the sake of example...
        std::cout << "hi\n";
    else
        std::cout << "bye\n";

    std::cout << abs(4) << '\n';  // prints 4
    std::cout << abs(-3) << '\n'; // prints 3

    return 0;
}

*/


// int main()
// {
//     std::cout << "Enter a number between 0 and 9: ";
//     int num;
//     std::cin >> num;

//     for(int i = 2; i < num; i++){
//         if (num % i == 0){
//             std::cout << num << " is not a prime number\n";
//             return 0;
//         }
//         else{
//             std::cout << num << " is a prime number\n";
//             return 0;
//         }
//     }
// }

bool isPrime(int x)
{
    return x == 2 || x == 3 || x == 5 || x == 7; // if user entered 2 or 3 or 5 or 7 the digit is prime
}

bool isPrime(int x)
{
    switch (x)
    {
    case 2:          // if the user entered 2
    case 3:          // or if the user entered 3
    case 5:          // or if the user entered 5
    case 7:          // or if the user entered 7
        return true; // then the digit is prime
    }

    return false; // otherwise the digit must not be prime
}