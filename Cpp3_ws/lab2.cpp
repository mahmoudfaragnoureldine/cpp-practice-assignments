/*using prototypes calculate  Area of Circle and Volume of a Cylinder*/

#include <iostream>
#include <cmath>

void calculateArea(double r);
void calculateVolume(double r, double h);

int main() {
    double radius{0.0};
    double height{0.0};

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    calculateArea(radius);

    std::cout << "Enter the radius of the cylinder: ";
    std::cin >> radius;
    std::cout << "Enter the height of the cylinder: ";
    std::cin >> height;
    calculateVolume(radius, height);

    return 0;
}

void calculateArea(double r) {
    std::cout << "The area of the circle with radius " << r << " is " << (M_PI * r * r) << std::endl;
}

void calculateVolume(double r, double h) {
    std::cout << "The volume of the cylinder with radius " << r << " and height " << h <<
     " is " << (M_PI * r * r * h) << std::endl;
}