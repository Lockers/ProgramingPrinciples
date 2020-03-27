// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Enter number of miles you want to convert to km" << std::endl;
    int miles;
    std::cin >> miles;
    std::cout << miles << " Miles equals " << miles * 1.609 << " Kilometers" << std::endl;
}

