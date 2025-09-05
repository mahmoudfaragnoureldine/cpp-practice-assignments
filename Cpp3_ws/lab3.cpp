/*create a program that computes the area of two shapes, a square 
and a rectangle, by calling the overloaded function find_area*/

#include <iostream>

void find_area(int l) {
    std::cout << "The area of the square is: " << (l * l) << std::endl;
}

void find_area(int l, int w) {
    std::cout << "The area of the rectangle is: " << (l * w) << std::endl;
}

int main() {
    find_area(5);
    find_area(2, 3);

    return 0;
}