#include "square.h"
#include <iostream>
// #include "wave.h"
// defining 2 times lead to error without proper guards

/*
we can avoid the above problem via a mechanism called a header guard
(also called an include guard). Header guards are conditional compilation directives that take the following form:

#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// your declarations (and certain types of definitions) here

#endif

#pragma once, serves the same purpose as header guards: we’re requesting that the compiler guard the header.
*/
int main()
{
    std::cout << "a square has " << getSquareSides() << " sides\n";
    std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << '\n';
    return 0;
}

// Looks like
// // Square.h included from main.cpp
// #ifndef SQUARE_H // square.h included from main.cpp
// #define SQUARE_H // SQUARE_H gets defined here

// // and all this content gets included
// int getSquareSides()
// {
//     return 4;
// }

// #endif // SQUARE_H

// #ifndef WAVE_H // wave.h included from main.cpp
// #define WAVE_H
// #ifndef SQUARE_H // square.h included from wave.h, SQUARE_H is already defined from above
// #define SQUARE_H // so none of this content gets included

// int getSquareSides()
// {
//     return 4;
// }

// #endif // SQUARE_H
// #endif // WAVE_H

// int main()
// {
//     return 0;
// }