/*
A debugger is a computer program that allows the programmer to control how another
program executes and examine the program state while that program is running.

To ensure that all output from std::cout is output immediately, as cout is buffered, you can temporarily
add the following statement to the top of your main() function:

std::cout << std::unitbuf; // enable automatic flushing for std::cout (for debugging)

step into command executes the next statement in the normal execution path of the program, and then pauses execution of the
program so we can examine the program’s state using the debugger

step over command executes the next statement in the normal execution path of the program. However, whereas step
into will enter function calls and execute them line by line, step over will execute an entire function without stopping

Step out does not just execute the next line of code. Instead, it executes all remaining code in the function
currently being executed, and then returns control to you when the function has returned.

Run to cursor command executes the program until execution reaches the statement selected by your cursor
In VS Code, the run to cursor command can be accessed while already debugging a program by right clicking
a statement in your code and choosing Run to Cursor from the context menu.

The continue debug command simply continues running the program as per normal, either until the program terminates,
or until something triggers control to return back to you again

A breakpoint is a special marker that tells the debugger to stop execution of the program at the breakpoint

The set next statement command allows us to change the point of execution to some other statement
you can jump the point of execution by right clicking on a statement and choosing Jump to cursor from the context menu.
You should not use set next statement to change the point of execution to a different function.
This may result in undefined behavior, and likely a crash.

Watching a variable is the process of inspecting the value of a variable while the program is executing in debug mode

The call stack is a list of all the active functions that have been called to get to the current point of execution.
The call stack window is a debugger window that shows the current call stack.
*/

#include <iostream>

void printValue(int value)
{
    std::cout << value << '\n';
}

int main()
{
    // std::cout << std::unitbuf; // remove after you are done debugging, for performance
    printValue(5);
    // std::cout << std::nounitbuf;
    return 0;
}