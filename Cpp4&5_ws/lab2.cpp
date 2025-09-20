#include <iostream>
#include <cmath>


class Circle
{
    private:
        double _radius;
    public:
        Circle(double radius): _radius(radius) {}
        void calculate_Area();
        friend void calculate_Circumference(Circle& source);
};

void Circle::calculate_Area()
{
    std::cout << "Area: " << (M_PI * _radius * _radius) << std::endl;
}

void calculate_Circumference(Circle& source)
{
    std::cout << "Circumference: " << (2 * M_PI * source._radius) << std::endl;
}

int main() {
    double radius;
    std::cout << "Input the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);
    circle.calculate_Area();
    calculate_Circumference(circle);

    return 0;
}