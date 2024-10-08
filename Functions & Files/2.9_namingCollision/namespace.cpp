#include <iostream> // imports the declaration of std::cout into the global scope

// using namespace std; // makes std::cout accessible as "cout"
// // using directive like namespace std is bad practice and discouraged

// int cout() // defines our own "cout" function in the global namespace
// {
//     return 5;
// }

// int main()
// {
//     cout << "Hello, world!"; // Compile error!  Which cout do we want here?  The one in the std namespace or the one we defined above?

//     return 0;
// }
// // The above program doesn’t compile, because the compiler now can’t tell whether 
// // we want the cout function that we defined, or std::cout.

void foo(int x) // foo is defined in the global scope, x is defined within scope of foo()
{               // braces used to delineate nested scope region for function foo()
    std::cout << x << '\n';
} // x goes out of scope here

int main()
{ // braces used to delineate nested scope region for function main()
    foo(5);

    int x{6}; // x is defined within the scope of main()
    std::cout << x << '\n';

    return 0;
} // x goes out of scope here
// foo and main (and std::cout) go out of scope here (the end of the file)