#include<bits/stdc++.h>
/*
The char data type was designed to hold a single character. A character can be a single letter, number, symbol, or whitespace.

you should always specify whether it is signed or unsigned.

ESCAPE CHARACTERS:
Name	        Symbol	    Meaning
Alert	        \a	        Makes an alert, such as a beep
Backspace	    \b	        Moves the cursor back one space
Formfeed	    \f	        Moves the cursor to next logical page
Newline	        \n	        Moves cursor to next line
Carriage return	\r	        Moves cursor to beginning of line
Horizontal tab	\t	        Prints a horizontal tab
Vertical tab	\v	        Prints a vertical tab
Single quote	\’	        Prints a single quote
Double quote	\”	        Prints a double quote
Backslash	    \\	        Prints a backslash.
Question mark	\?	        Prints a question mark.No longer relevant. You can use question marks unescaped.
Octal number	\(number)	Translates into char represented by octal
Hex number	    \x(number)	Translates into char represented by hex number

Text between single quotes is treated as a char literal, which represents a single character
multicharacter literals, which are char literals that contain multiple characters (e.g. '56'), but avoid them
*/
int add(int x, int y)
{
    return x + y;
}

int main()
{
    // char ch2{'a'}; // initialize with code point for 'a' (stored as integer 97) (preferred)
    // char ch1{98};  // initialize with integer 98 ('b') (not preferred)
    // std::cout << ch1 << '\n'; // cout prints character 'a'
    // std::cout << ch2 << '\n'; // cout prints character 'b'

    // char ch{5};    // initialize with integer 5 (stored as integer 5)
    // // char ch{'5'};  // initialize with code point for '5' (stored as integer 53)

    std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)

    char ch{};
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << "You entered: " << ch << '\n';

    std::cout << "First line\nSecond line\n"; // \n can be embedded in double quotes
    std::cout << "First part\tSecond part";
    std::cout << "\"This is quoted text\"\n";
    std::cout << "This string contains a single backslash \\\n";
    std::cout << "6F in hex is char '\x6F'\n";

    // std::cout << add(1, 2) << '/n'; // gives 312142, as /n value is printed

    // int x{5};
    // std::cout << "The value of x is " << x << '!\n'; // added exclamation point
    // Because '!\n' is a multicharacter literal, this program now prints :
    // The value of x is 58458

    return 0;
}