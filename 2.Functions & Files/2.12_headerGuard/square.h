/*
All of your header files should have header guards on them. SOME_UNIQUE_NAME_HERE
can be any name you want, but by convention is set to the full filename of the header file,
typed in all caps, using underscores for spaces or punctuation

naming convention of PROJECT_PATH_FILE_H, FILE_LARGE-RANDOM-NUMBER_H, or FILE_CREATION-DATE_H.
So that no 2 guards are given same name and included together causing none of the headers to work

*/

#ifndef SQUARE_H
#define SQUARE_H
// int getSquareSides()
// {
//     return 4;
// }// You shouldnt do this, defining function in header file

int getSquareSides(); //Forware declaration only

int getSquarePerimeter(int sideLength); // forward declaration for getSquarePerimeter

#endif