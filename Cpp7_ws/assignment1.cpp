#include <iostream>
#include <math.h>
#include <vector>

class Shape
{
    public:
        Shape() {}
        virtual double calculateArea() = 0;
        virtual double calculatePerimeter() = 0;
        virtual ~Shape() = default;
};

class Rectangle: public Shape
{
    private:
        double length;
        double width;
    public:
        Rectangle(double _length, double _width): length(_length), width(_width) {}
        double calculateArea() override
        {
            return (length * width);
        }
        double calculatePerimeter() override
        {
            return (2 * (length + width));
        }
}; 

class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(double _radius): radius(_radius) {}
        double calculateArea() override
        {
            return (M_PI * pow(radius, 2));
        }
        double calculatePerimeter() override
        {
            return (2 * M_PI * radius);
        }
};

class Triangle: public Shape
{
    private:
        double base;
        double a;
        double b;
    public:
        Triangle(double _base, double _a, double _b): base(_base), a(_a), b(_b) {}
        double calculateArea() override
        {
            double s = (base + a + b) / 2.0; 
            return sqrt(s * (s - base) * (s - a) * (s - b));
        }
        double calculatePerimeter() override
        {
            return (base + a + b);
        }
};

int main() {
    Rectangle a(12.0, 13.0);
    Circle b(5.0);
    Triangle c(4.0, 5.0, 7.0);
    std::vector<Shape*> shapes = {&a, &b, &c};

    for (int i = 0; i < shapes.size(); i++)
    {
        std::cout << "Shape " << (i + 1) << " - " << "Area: " << shapes.at(i)->calculateArea() << ", Perimeter: " <<
            shapes.at(i)->calculatePerimeter() << std::endl;
    }
    

    return 0;
}