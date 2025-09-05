#include <iostream>

int main() {
    int height{0};
    std::cout << "Please enter the height of the triangle: ";
    std::cin >> height;

    for (int i{1}; i <= height; i++)
    {
        for (int j{1}; j <= i; j++)
        {
            std::cout << j;
        }
        std::cout << std::endl;
    }
    
    return 0;
}