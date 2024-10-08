// #include "Alex.h" // copies #define MY_NAME from Alex.h here
// #include <iostream>

#define PRINT

void doSomething(); // forward declaration for function doSomething()

int main()
{
    doSomething(); 
    // std::cout << "My name is: " << MY_NAME << '\n'; // preprocessor replaces MY_NAME with "Alex"
    return 0;
}
