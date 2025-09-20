#include <iostream>

class Data
{
    private:
        int* ptr;
    public:
        Data()
        {
            ptr = nullptr;
            std::cout << "Hello from default constractor... \n";
        }
        Data(int value)
        {
            ptr = new int;
            *ptr = value;
            std::cout << "Hello from paramtrized constractor... \n";
        }
        /*Data(const Data& source)
        {
            std::cout << "Hello from shallow copy constractor...\n";
            ptr = source.ptr;
        }*/
        Data(const Data& source)
        {
            std::cout << "Hello from deep copy constractor...\n";
            ptr = new int;
            *ptr = *source.ptr;
        }
        Data(Data&& source)
        {
            std::cout << "Hello from move constractor...\n";
            ptr = source.ptr;
            source.ptr = nullptr;
        }
        void Display()
        {
            if (ptr != nullptr)
            {
                std::cout << "Data: " << *ptr << std::endl;
            }
            else 
            {
                std::cout << "There is no data & null pointer\n";
            }
        }
        ~Data()
        {
            std::cout << "Hello from destractor... \n";
            if (ptr != nullptr)
                delete ptr;
        }
};

int main() {
    //Data data1;
    //data1.Display();
    //std::cout << "**************************************\n";

    Data data2(20);
    data2.Display();
    std::cout << "**************************************\n";

    {
        Data data3  = data2;
        data3.Display();
    }
    std::cout << "**************************************\n";

    data2.Display();
    std::cout << "**************************************\n";

    {
        Data data3  = std::move(data2);
        data3.Display();
    }
    std::cout << "**************************************\n";

    data2.Display();

    return 0;
}