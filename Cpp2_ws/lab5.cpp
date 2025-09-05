#include <iostream>

int main() {
    int number{100};
    
    while (number >= 100)
    {
        std::cout << "Please enter a number less than 100: ";
        std::cin >> number;
    }

    std::cout << "Thanks. " << std::endl;
    
    return 0;
}