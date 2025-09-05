#include <iostream>

int main() {
    int radius{0};
    std::cout << "Please enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "The area of the circle is: " 
              << 3.14 * radius * radius << std::endl;
    std::cout << "The perimeter of the circle is: " 
              << 2 * 3.14 * radius << std::endl;
    
    return 0;
}