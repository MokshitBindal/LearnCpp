#include <iostream> // for std::cout

/*

// '<<' is called insertion operator, data moving towards cout
int main()
{
    int x{5};                    // define integer variable x, initialized with value 5
    std::cout << x;              // print value of x (5) to console
    std::cout << "x is equal to: " << x;
    std::cout << "Hello world!"; // print Hello world! to console
    std::cout << 4;              // print 4 to console
    std::cout << "Hello" << " world!";

    std::cout << "Hi!";
    std::cout << "My name is Alex.";
    std::cout << std::endl;

    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
    std::cout << "My name is Alex." << std::endl;

    // \n is better than endl as it doesnt flush the buffer everytime it executes

    std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
    std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
    std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)

    // std::cout << '/n'; // Dont mistakenly use forward slash n
    return 0;
}

// std::cout is buffered
// output sent to std::cout is typically not sent to the console immediately. Instead, 
// the requested output “gets in line”, and is stored in a region of memory set aside to 
// collect such requests (called a buffer). Periodically, the buffer is flushed, meaning 
// all of the data collected in the buffer is transferred to its destination (in this case, the console).

// This also means that if your program crashes, aborts, or is paused (e.g. for debugging purposes) before the buffer
//  is flushed, any output still waiting in the buffer will not be displayed.

*/


/*

// '>>' is called extraction operator, data moving towards the variable
int main()
{
    // std::cout << "Enter a number: "; // ask user for a number
    // int x{};       // define variable x to hold user input (and value-initialize it)
    // std::cin >> x; // get number from keyboard and store it in variable x
    // std::cout << "You entered " << x << '\n';


    // std::cout << "Enter two numbers separated by a space: ";
    // int x{};            // define variable x to hold user input (and value-initialize it)
    // int y{};            // define variable y to hold user input (and value-initialize it)
    // std::cin >> x >> y; // get two numbers and store in variable x and y respectively
    // std::cout << "You entered " << x << " and " << y << '\n';

    // cin is buffered as well
    // The enter key(pressed to submit the data) is also stored as a '\n' character in input buffer

    std::cout << "Enter two numbers: ";
    int x{};
    std::cin >> x;
    int y{};
    std::cin >> y;
    std::cout << "You entered " << x << " and " << y << '\n';
    // Here, at std::cin >> x, Enter 4 5. The input 4 5\n goes into the input buffer
    // std::cin >> y is encountered, the program will not wait for input. Instead,
    // the 5 that is still in the input buffer is extracted to variable y. The program then prints You entered 4 and 5

    // If the user types 5a and enter, 5a\n will be added to the buffer. 5 will be extracted,
    // converted to an integer, and assigned to variable x. a\n will be left in the input buffer for the next extraction.
    // If the user types ‘b’ and enter, b\n would be added to the buffer.Because b is not a valid integer,
    // no characters can be extracted, so this is an extraction failure.Variable x would be set to 0,
    // and future extractions will fail until the input stream is cleared.return 0;
}

*/

int main(){
    std::cout << "Enter Three Numbers: ";
    int x{};
    int y{};
    int z{};
    std::cin >> x >> y >> z;
    std::cout << "You Entered " << x << ", " << y << " and " << z << '\n';

    return 0;

}