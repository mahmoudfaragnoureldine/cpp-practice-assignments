#include <iostream>

class Data
{
    private:
        int _x;
        int _y;
        int _z;
    public:
    Data()
    {
        _x = 0;
        _y = 0;
        _z = 0;
        std::cout << "Hello from default constractor....." << std::endl;
    }
    Data(int x, int y, int z)
    {
        _x = x;
        _y = y;
        _z = z;
        std::cout << "Hello from paramtrized constractor....." << std::endl;
    }
    void show()
    {
        std::cout << "X: " << _x << " ,Y: " << _y << " ,Z: " << _z << std::endl;
    }
    ~Data()
    {
        std::cout << "Hello form destractor...." << std::endl;
    }
};


int main() {
    Data data1(10, 20, 30);
    data1.show();

    return 0; 
}