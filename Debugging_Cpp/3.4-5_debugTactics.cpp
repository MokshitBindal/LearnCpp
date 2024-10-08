#include <iostream>
/*
Debugging tactic #1: Commenting out your code, not related with issue
Debugging tactic #2: Validating your code flow
Debugging tactic #3: Printing values
    This printing may not be a good tactic, because:
        Debug statements clutter your code.
        Debug statements clutter the output of your program.
        Debug statements require modification of your code to both add and to remove, which can introduce new bugs.
        Debug statements must be removed after you’re done with them, which makes them non-reusable.
To disable and enable debugging throughout your program is to make your debugging statements
conditional using preprocessor directives.
Debugging tatic #4: Using a logger
    A log is a sequential record of events that have happened, usually time - stamped.
    The process of generating a log is called logging.
    C++ contains an output stream named std::clog that is intended to be used for writing logging information.
    However, by default, std::clog writes to the standard error stream (the same as std::cerr)
*/

// int main()
// {
//     getNames();   // ask user to enter a bunch of names
// //  doMaintenance(); // do some random stuff
//     sortNames();  // sort them in alphabetical order
//     printNames(); // print the sorted list of names
// // If issue is with names in opposite order, if nothing changes, we know domaintenance is good
//     return 0;
// }


// int getValue()
// {
// std::cerr << "getValue() called\n"; // Dont indent debugging statements
//     return 4;
// }

// int main()
// {
// std::cerr << "main() called\n";
//     std::cout << getValue << '\n';
//     return 0;
// }

// int add(int x, int y)
// {
//     std::cerr << "add() called (x=" << x << ", y=" << y << ")\n";
//     return x + y;
// }

// void printResult(int z)
// {
//     std::cout << "The answer is: " << z << '\n';
// }

// int getUserInput()
// {
//     std::cout << "Enter a number: ";
//     int x{};
//     std::cin >> x;
//     return x;
// }

// int main()
// {
//     int x{getUserInput()};
//     std::cerr << "main::x = " << x << '\n';
//     int y{getUserInput()};
//     std::cerr << "main::y = " << y << '\n';

//     int z{add(x, 5)};
//     std::cerr << "main::z = " << z << '\n';
//     printResult(z);

//     return 0;
// }


// #define ENABLE_DEBUG // comment out to disable debugging

// int getUserInput()
// {
// #ifdef ENABLE_DEBUG
//     std::cerr << "getUserInput() called\n";
// #endif
//     std::cout << "Enter a number: ";
//     int x{};
//     std::cin >> x;
//     return x;
// }

// int main()
// {
// #ifdef ENABLE_DEBUG
//     std::cerr << "main() called\n";
// #endif
//     int x{getUserInput()};
//     std::cout << "You entered: " << x << '\n';

//     return 0;
// }

#include <plog/Log.h> // Step 1: include the logger headers
#include <plog/Initializers/RollingFileInitializer.h>

int getUserInput()
{
    PLOGD << "getUserInput() called"; // PLOGD is defined by the plog library

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt"); // Step 2: initialize the logger
    // plog::init(plog::none, "Logfile.txt"); // plog::none eliminates writing of most messages, essentially turning logging off

    PLOGD << "main() called"; // Step 3: Output to the log as if you were writing to the console

    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';

    return 0;
}
// g++ -I/home/Mokshit/Documents/Programming_files/CPP/includes/plog/include -o main 3.4-5_debugTactics.cpp

// Here’s output from the above logger (in the Logfile.txt file):

// 2018-12-26 20:03:33.295 DEBUG [4752] [main@19] main() called
// 2018-12-26 20:03:33.296 DEBUG [4752] [getUserInput@7] getUserInput() called