#include <iostream>

// void means the function does not return a value to the caller
// A function that does not return a value is called a non-value returning function
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed

    // return 5; // compile error: we're trying to return a value
    // return; // tell compiler to return to the caller -- 
    // this is redundant since the return will happen at the end of the function anyway!
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    // std::cout << ; // compile error: no value provided
    // std::cout << printHi(); // compile error
    return 0;
}