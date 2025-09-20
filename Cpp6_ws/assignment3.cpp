#include <iostream>
#include <math.h>

class Shape
{
    protected:
        std::string name;
    public:
        Shape(std::string _name): name(_name) {}
        std::string getName() const { return name; }
        virtual double calculateArea() = 0;
};

class Rectangle: public Shape
{
    private:
        double length;
        double width;
    public:
        Rectangle(std::string _name, double _length, double _width): Shape(_name),
         length(_length), width(_width) {}
        double calculateArea() override
        {
            return (length * width);
        }
}; 

class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(std::string _name, double _radius): Shape(_name), radius(_radius) {}
        double calculateArea() override
        {
            return (M_PI * pow(radius, 2));
        }
};

class Triangle: public Shape
{
    private:
        double bass;
        double height;
    public:
        Triangle(std::string _name, double _base, double _height): Shape(_name), 
        bass(_base), height(_height) {}
        double calculateArea() override
        {
            return (0.5 * bass * height);
        }
};

class ThreeDimensionalShape: public Shape
{
    public:
        ThreeDimensionalShape(std::string _name): Shape(_name) {}
        virtual double calculateVolume() = 0;
};

class Sphere: public ThreeDimensionalShape
{
    private:
        double radius;
    public:
        Sphere(std::string _name, double _rasius): ThreeDimensionalShape(_name), radius(_rasius) {}
        double calculateArea() override
        {
            return (M_PI * pow(radius, 2));
        }
        double calculateVolume() override
        {
            return (M_PI * (4/3) * pow(radius, 3));
        }
};

int main() {
    Rectangle rectangle("Rectangle", 10, 20);
    Circle circle("Circle", 7);
    Triangle triangle("Triangle", 5, 10);
    Sphere sphere("Sphere", 8);

    std::cout << "Area of " <<  rectangle.getName() << ": " << rectangle.calculateArea() << std::endl;
    std::cout << "Area of " <<  circle.getName() << ": " << circle.calculateArea() << std::endl;
    std::cout << "Area of " <<  triangle.getName() << ": " << triangle.calculateArea() << std::endl;
    std::cout << "Area of " <<  sphere.getName() << ": " << circle.calculateArea() << std::endl;
    std::cout << "Volume of " << sphere.getName() << ": " << sphere.calculateVolume() << std::endl;

    return 0;
}