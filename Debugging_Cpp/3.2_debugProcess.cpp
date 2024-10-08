/*
debugging the problem generally consists of six steps:

Find the root cause of the problem (usually the line of code that’s not working).
Ensure you understand why the issue is occurring.
Determine how you’ll fix the issue.
Repair the issue causing the problem.
Retest to ensure the problem has been fixed.
Retest to ensure no new problems have emerged.
*/

#include <iostream>

int add(int x, int y) // this function is supposed to perform addition
{
    // return x - y; // but it doesn't due to the wrong operator being used
    return x + y; // changing operator after debugging
}

int main()
{
    std::cout << "5 + 3 = " << add(5, 3) << '\n'; // should produce 8, but produces 2

    return 0;
}