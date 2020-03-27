// AddNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Please enter two numbers" << std::endl;
    int val1, val2;
    std::cin >> val1 >> val2;
    if (val1 < val2)
    {
        std::cout << val1 << " Is smaller and " << val2 << " is Larger" << std::endl;
    }
    else
    {
        std::cout << val2 << " Is smaller and " << val1 << " is Larger" << std::endl;
    }

    std::cout << "The sum of " << val1 << " and " << val2 << " is " << val1 + val2 << std::endl;
    std::cout << "The difference between " << val1 << " and " << val2 << " is " << val1 - val2 << std::endl;
    std::cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << std::endl;
    std::cout << "The ratio of " << val1 << " and " << val2 << " is " << val1 / val2 << std::endl;
}

