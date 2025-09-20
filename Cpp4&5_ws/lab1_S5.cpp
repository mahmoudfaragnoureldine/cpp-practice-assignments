#include <iostream>

class Serial
{
    private:
        static int count;
    public:
        Serial()
        {
            count++;
        }
        void Display_number_of_objs()
        {
            std::cout << "Number of active objects: " << count << std::endl;
        }
        ~Serial()
        {
            count--;
        }
};

int Serial::count = 0;

int main() {
    Serial a;
    {
        Serial b;
        b.Display_number_of_objs();
    }
    a.Display_number_of_objs();
    Serial c;
    c.Display_number_of_objs();

    return 0;
}