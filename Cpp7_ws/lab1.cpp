#include <iostream>

class Shape 
{
    public:
        Shape() {}
        virtual double calculateArea() { return {}; }
};

class Rectangle: public Shape
{
    private:
        double length;
        double width;
    public:
        Rectangle(double _length, double _width): Shape(), length(_length), width(_width) {}
        virtual double calculateArea() 
        {
            return (length * width);
        }
};

class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(double _radius): Shape(), radius(_radius) {}
        virtual double calculateArea() 
        {
            return (3.14 * radius * radius);
        }
};

int main() {
    Shape* ptr1 = new Rectangle(10.0, 5.0);
    Shape* ptr2 = new Circle(14.0);

    std::cout << ptr1->calculateArea() << std::endl;
    std::cout << ptr2->calculateArea() << std::endl;

    delete ptr2;
    delete ptr1;

    return 0;
}