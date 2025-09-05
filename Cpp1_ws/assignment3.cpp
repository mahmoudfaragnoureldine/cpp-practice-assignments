#include <iostream>
#include <cmath>

int main() {
    int sides_number{0};
    int sides_length{0};

    std::cout << "Please enter the number of sides: " ;
    std::cin >> sides_number;
    std::cout << "Please enter the length for each side: ";
    std::cin >> sides_length;

    std::cout << "The area of the polygon is: "
              << (sides_number * sides_length * sides_length) / (4 * std::tan(M_PI / sides_number)) 
              << std::endl;
    return 0;
}