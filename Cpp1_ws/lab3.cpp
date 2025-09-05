#include <iostream>

int main() 
{
    int rooms{};
    int days{};

    std::cout << "Please enter the number of rooms you want to reserve: ";
    std::cin >> rooms;

    std::cout << "Please enter the days you want to stay: ";
    std::cin >> days;

    std::cout << "The cost is: " << (300 * rooms * days) << "$." << std::endl;
    std::cout << "Tax is: " << (0.1 * (300 * rooms * days)) << "$." << std::endl;
    
    return 0;
}