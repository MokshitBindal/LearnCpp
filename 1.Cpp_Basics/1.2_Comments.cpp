// A comment is a programmer-readable note ignored by the compiler
#include <iostream>

// Comment your code liberally, and write your comments as if speaking to someone 
// who has no idea what the code does. Don’t assume you’ll remember why you made specific choices.

int main(){
    std::cout << "Hello world!"; // Everything from here to the end of the line is ignored


    std::cout << "Hello world!\n";// std::cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n";// these comments make the code hard to read
    std::cout << "Yeah!\n";// especially when lines are different lengths


    std::cout << "Hello world!\n";                 // std::cout lives in the iostream library
    std::cout << "It is very nice to meet you!\n"; // this is much easier to read
    std::cout << "Yeah!\n";                        // don't you think so?


    // std::cout lives in the iostream library
    std::cout << "Hello world!\n";
    // this is much easier to read
    std::cout << "It is very nice to meet you!\n";
    // don't you think so?
    std::cout << "Yeah!\n";

    /* This is a multi-line comment.
    This line will be ignored.
    So will this one. */

    // or, You can beautify it

    /* This is a multi-line comment.
     * the matching asterisks to the left
     * can make this easier to read
     */

    // Multiline comments cant be nested
    // /* This is a multi-line /* comment */ this is not inside the comment * /
        // The above comment ends at the first */, not the second */

    // When the compiler tries to compile this, it will ignore everything from the first /* to the first */. 
    // Since this is not inside the comment */ is not considered part of the comment, 
    // the compiler will try to compile it. That will inevitably result in a compile error.

    // Some good practices to use comments for
    // 1. This program calculates the student's final grade based on their test and homework scores.
    // 2. This function uses Newton's method to approximate the root of a given equation.
    /* 3. To calculate the final grade, we sum all the weighted midterm and homework scores
    and then divide by the number of scores to assign a percentage, which is
    used to calculate a letter grade. */
    // 4. The player just drank a potion of blindness and can not see anything
    // sight = 0;
    // and not, // Set sight range to 0
    // 5. We need to multiply quantity by 2 here because they are bought in pairs
    // and not, // Calculate the cost of the items
    // cost = quantity * 2 * storePrice;
    // 6. We decided to use a linked list instead of an array because
    // arrays do insertion too slowly.
    return 0;
}


