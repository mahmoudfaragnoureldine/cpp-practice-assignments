#include <iostream>
#include <vector>

class Rectangle
{
    private:
        double length; 
        double width;
    public:
        Rectangle(double length, double width)
        {
            this->length = length;
            this->width = width;
        }
        void set_area() const
        {
            std::cout << "Area: " << (length * width) << std::endl;
        }
        void set_perimeter() const
        {
            std::cout << "perimeter: " << (2 *(length + width)) << std::endl;
        }
};

int main() {
    std::vector<double> vec(2);
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> vec[0];
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> vec[1];

    std::cout << std::endl;

    Rectangle rectangle(vec[0], vec[1]);
    rectangle.set_area();
    rectangle.set_perimeter();

    return 0;
}