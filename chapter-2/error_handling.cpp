#include <iostream>

int main()
{
    int num = 0;
    std::cout << "Enter a number between 0 and 9:";
    try {
        std::cin >> num;
        if (num < 0 || num > 9)
            throw std::out_of_range{"num"};
    }
    catch(std::out_of_range)
    {
        std::cout << "Error: You entered a value outside the specified range.";
    }
    
    
}