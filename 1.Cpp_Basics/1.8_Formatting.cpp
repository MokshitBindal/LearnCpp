#include<bits/stdc++.h>
using namespace std;
/**/
int main() {
    // When whitespace is required as a separator, the compiler doesn’t care 
    // how much whitespace is used, as long as some exists.
    int          y;
    int
                z;

    /*
    Easier to read:

    cost          = 57;
    pricePerItem  = 24;
    value         = 5;
    numberOfItems = 17;
    */


    // Preprocessor directives (e.g. #include <iostream>) must be placed on separate lines:
    // #include <iostream>
    // #include <string>

    // Newlines are not allowed in quoted text :
    // std::cout << "Hello
    // world !"; // Not allowed!

    // Quoted text separated by nothing but whitespace (spaces, tabs, or newlines) will be concatenated:
    std::cout << "Hello "
                 "world!"; // prints "Hello world!"

    // If a long line is split with an operator(eg.<< or +), the operator should be placed at 
    // the beginning of the next line, not the end of the current line 
    std::cout << 3 + 4 
        + 5 + 6 
        * 7 * 8;

    // Easier to read:
    // cout lives in the iostream library
    std::cout << "Hello world!\n";

    // these comments are easier to read
    std::cout << "It is very nice to meet you!\n";

    // when separated by whitespace
    std::cout << "Yeah!\n";

    return 0;
}

/*
We can write our code as follows because cpp is a whitespace independent language

#include <iostream>
int main(){std::cout<<"Hello world";return 0;}
*/