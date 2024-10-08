#include "square.h" // square.h is included once here

int getSquareSides()
{
    return 4;
} // You shouldnt do this, defining function in header file

int getSquarePerimeter(int sideLength)
{
    return sideLength * getSquareSides();
}