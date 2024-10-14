#include<iostream>
int main() 
{
    int inputNum {};
    std::cout << "Enter a integer: ";
    std::cin >> inputNum;

    std::cout << "Double " << inputNum << " is " << inputNum * 2 << '\n';
    std::cout << "Triple " << inputNum << " is " << inputNum * 3 << '\n';

    int firstNum {};
    int secondNum {};

    std::cout << "Enter an integer: ";
    std::cin >> firstNum;
    std::cout << "Enter another integer: ";
    std::cin >> secondNum;

    std::cout << firstNum << " + " << secondNum << " is " << firstNum + secondNum << ".\n";
    std::cout << firstNum << " - " << secondNum << " is " << firstNum - secondNum << ".\n";
    // To print a period and a newline, use ".\n", not '.\n'.
    return 0;
}