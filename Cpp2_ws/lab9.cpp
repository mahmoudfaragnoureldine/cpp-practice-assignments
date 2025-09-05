/*Write a code that prints the multiplication table*/

#include <iostream>

int main() {
    for (int i{1}; i <= 12; i++)
    {
        for (int j{1}; j <= 12; j++)
            std::cout << j << " * " << i << " = " << (i * j) << std::endl;

        for (int k{0}; k < 20; k++)
            std::cout << "-";
        
        std::cout << std::endl;
    }
    
    return 0;
}