#include <iostream>

class Product 
{
    private:
        std::string _name;
        int _price;
    public:
        Product(): _name("Null"), _price(0) 
        {
            std::cout << "Hello from default constractor... \n";
        }
        Product(std::string name, int price): _name(name), _price(price)
        {
            std::cout << "Hello from paramtrized constractor... \n";
        }
        Product(const Product& source)
        {
            std::cout << "Hello from copy constractor\n";
            _name = source._name;
            _price = source._price;
        }
        void show()
        {
            std::cout << "Name: " << _name << " , Price: " << _price << std::endl;
        }
        ~Product()
        {
            std::cout << "Hello from destractor... \n";
        }
};

int main() {
    Product product1;
    product1.show();
    std::cout << "**************************************\n";

    Product product2("Mouse", 100);
    product2.show();
    std::cout << "**************************************\n";

    Product product3 = product2;
    product3.show();
    std::cout << "**************************************\n";


    return 0;
}