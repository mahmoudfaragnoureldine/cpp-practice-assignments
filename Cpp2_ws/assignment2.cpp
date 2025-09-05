#include <iostream>

int main() {
    int rows{0};
    std::cout << "Please enter the number of rows (half of the diamond): ";
    std::cin >> rows;

    // Upper part of the diamond
    for (int i{1}; i <= rows; i++)
    {
        for (int j{1}; j <= rows - i; j++)
        {
            std::cout << " "; // Print leading spaces
        }
        for (int j{1}; j <= 2 * i - 1; j++)
        {
            std::cout << "*"; // Print stars
        }
        std::cout << std::endl;
    }
    // Lower part of the diamond
    for (int i{rows - 1}; i >= 1; i--)
    {
        for (int j{1}; j <= rows - i; j++)
        {
            std::cout << " "; // Print leading spaces
        }
        for (int j{1}; j <= 2 * i - 1; j++)
        {
            std::cout << "*"; // Print stars
        }
        std::cout << std::endl;
    }
    
    return 0;
}