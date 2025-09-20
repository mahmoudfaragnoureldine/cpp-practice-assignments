#include <iostream>
#include <memory>

class Rectabgle
{
    private:
        double _height;
        double _width;
    public:
        Rectabgle(double height, double width): _height(height), _width(width) {}
        double area()
        {
            return (_height * _width);
        }
        ~Rectabgle() 
        {
            std::cout << "Destractor... " << std::endl;
        }
};

int main() {
    std::unique_ptr<Rectabgle> uptr1 = std::make_unique<Rectabgle>(15.0, 15.0);
    std::cout << "Area of the rectangle: " << uptr1->area() << std::endl;
    std::unique_ptr<Rectabgle> uptr2 = std::move(uptr1);  // use release()
    std::cout << "Area of the rectangle: " << uptr2->area() << std::endl;
    
    return 0;
}