#include<bits/stdc++.h>
/*
1. Write the following program: The user is asked to enter 2 floating point numbers (use doubles).
The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
The program computes the answer on the two numbers the user entered and prints the results.
If the user enters an invalid symbol, the program should print nothing.

2. Write a short program to simulate a ball being dropped off of a tower. To start, 
the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), 
and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate 
how far the ball has fallen after x seconds using the following formula: 
distance fallen = gravity_constant * x_seconds2 / 2
*/

void simple_calc()
{
    std::cout << "Enter a double value: " << '\n';
    double num1{};
    std::cin >> num1;
    std::cout << "Enter a double value: " << '\n';
    double num2{};
    std::cin >> num2;

    std::cout << "Enter +, -, *, or /: " << '\n';
    char operation{};
    std::cin >> operation;

    switch (operation)
    {
    case '+':
        std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 + num2 << '\n';
        break;

    case '-':
        std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 - num2 << '\n';
        break;

    case '*':
        std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 * num2 << '\n';
        break;

    case '/':
        std::cout << num1 << ' ' << operation << ' ' << num2 << " is " << num1 / num2 << '\n';
        break;

    default:
        break;
    }
}


double calculate_ball_height(double time, double tower_height)
{
    const double gravity_constant = 9.8;
    double height_fallen { gravity_constant * time * time / 2.0 };
    double new_height = tower_height - height_fallen;

    if (new_height >= 0.0){
        return new_height;
    }
    else{
        return 0.0;
    }
}
int main()
{
    std::cout << "Enter the height of the tower: " << '\n';
    double tower_height{};
    std::cin >> tower_height;

    std::cout << "At 0 seconds, the ball is at height: "<< tower_height << "meters." << '\n';
    
    double ball_height{tower_height};

    for (int i = 1; i < 6; i++)
    {
        ball_height = calculate_ball_height(i, tower_height);
        std::cout << "At " << i << " seconds, the ball is at height: " << ball_height << "meters." << '\n';
    }
    
    return 0;
}


// // Gets tower height from user and returns it
// double getTowerHeight()
// {
//     std::cout << "Enter the height of the tower in meters: ";
//     double towerHeight{};
//     std::cin >> towerHeight;
//     return towerHeight;
// }

// // Returns the current ball height after "seconds" seconds
// double calculateBallHeight(double towerHeight, int seconds)
// {
//     double gravity{9.8};

//     // Using formula: s = (u * t) + (a * t^2) / 2
//     // here u (initial velocity) = 0, so (u * t) = 0
//     double fallDistance{gravity * (seconds * seconds) / 2.0};
//     double ballHeight{towerHeight - fallDistance};

//     // If the ball would be under the ground, place it on the ground
//     if (ballHeight < 0.0)
//         return 0.0;

//     return ballHeight;
// }

// // Prints ball height above ground
// void printBallHeight(double ballHeight, int seconds)
// {
//     if (ballHeight > 0.0)
//         std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
//     else
//         std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
// }

// // Calculates the current ball height and then prints it
// // This is a helper function to make it easier to do this
// void calculateAndPrintBallHeight(double towerHeight, int seconds)
// {
//     double ballHeight{calculateBallHeight(towerHeight, seconds)};
//     printBallHeight(ballHeight, seconds);
// }

// int main()
// {
//     double towerHeight{getTowerHeight()};

//     calculateAndPrintBallHeight(towerHeight, 0);
//     calculateAndPrintBallHeight(towerHeight, 1);
//     calculateAndPrintBallHeight(towerHeight, 2);
//     calculateAndPrintBallHeight(towerHeight, 3);
//     calculateAndPrintBallHeight(towerHeight, 4);
//     calculateAndPrintBallHeight(towerHeight, 5);

//     return 0;
// }