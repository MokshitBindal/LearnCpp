/*
prior to compilation, each code (.cpp) file goes through a preprocessing phase.In this phase,
a program called the preprocessor, which strips out comments, and ensures each code file ends in a newline
and process: preprocessor directives. When the preprocessor has finished processing a code file, the result is called a translation unit.
The entire process of preprocessing, compiling, and linking is called translation.
https://en.cppreference.com/w/cpp/language/translation_phases

Using directives != Preprocessor directives

When you #include a file, the preprocessor replaces the #include directive with the contents
of the included file. The included contents are then preprocessed,then the rest of the file is preprocessed.

The #define directive creates a macro which is a rule that defines how input text is converted into replacement output text.

Function-like macros act like functions, and serve a similar purpose.
Their use is generally considered unsafe, and almost anything they can do can be done by a normal function.

Object-like macros can be defined in one of two ways:
#define IDENTIFIER
#define IDENTIFIER substitution_text

Avoid macros with substitution text unless no viable alternatives exist.

*/

#include <iostream>
// preprocessor will replace #include <iostream> with the contents of the file named “iostream” 
// and then preprocess the included content and the rest of the file.

#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}

// becomes equal to:
// // The contents of iostream are inserted here

// int main()
// {
//     std::cout << "My name is: " << "Alex" << '\n';

//     return 0;
// }

// #include <iostream>

// void foo()
// {
// #define MY_NAME "Alex"
// }

// int main()
// {
//     std::cout << "My name is: " << MY_NAME << '\n';

//     return 0;
// } // Preprocessor dont care about functions and their scope, thus it compiles properly