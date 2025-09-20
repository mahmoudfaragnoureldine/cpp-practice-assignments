#include <iostream>
#include <math.h>

class Shape
{
    private:
    protected:
        std::string color;
    public:
        Shape(std::string _color): color(_color) {}
        virtual double getArea() 
        {
            std::cout << "Shape" << std::endl;
            return{};
        }
        virtual ~Shape() = default;
};

class Rectangle : public Shape
{
    private:
        double width;
        double height;
    public:
        Rectangle(std::string _color, double _width, double _height): Shape(_color), width(_width), height(_height) {}
        virtual double getArea()
        {
            std::cout << "Area of " << Shape::color << " = "; 
            return (width * height);
        }
        virtual ~Rectangle() = default;
};

class Circle : public Shape
{
    private:
        double radius;
    public:
        Circle(std::string _color, double _radius): Shape(_color), radius(_radius) {}
        virtual double getArea()
        {
            std::cout << "Area of " << Shape::color << " = ";
            return (M_PI * pow(radius, 2));
        }
        virtual ~Circle() = default;
};

class Triangle : public Shape
{
    private:
        double base;
        double height;
    public:
        Triangle(std::string _color, double _base, double _height): Shape(_color), base(_base), height(_height) {}
        virtual double getArea()
        {
            std::cout << "Area of " << Shape::color << " = ";
            return ((base * height) / 2);
        }
        virtual ~Triangle() = default;
};

int main() {
    Shape* shape1 = new Rectangle("Rectangle", 12, 13);
    Shape* shape2 = new Circle("Circle", 5);
    Shape* shape3 = new Triangle("Triangle", 5, 10);

    std::cout << shape1->getArea() << std::endl;
    std::cout << shape2->getArea() << std::endl;
    std::cout << shape3->getArea() << std::endl;

    delete shape3;
    delete shape2;
    delete shape1;
    return 0;
}