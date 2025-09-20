#include <iostream>

class Rectangle
{
    private:
        int length;
        int width;
    public:
        Rectangle(int _length=0, int _width=0): length(_length), width(_width) {}
        bool operator==(const Rectangle& source)
        {
            return ((length == source.length) && (width == source.width));
        }
        void Display() const
        {
            std::cout << "Rectangle(" << length << ", " << width << ")" << std::endl;
        }
};

int main() {
    Rectangle rec1(6, 7);
    Rectangle rec2(6, 7);
    std::cout << std::boolalpha << (rec1 == rec2) << std::endl;
    rec1.Display();
    rec2.Display();
    return 0;
}