#include <iostream>
#include <memory>

class Car
{
    private:
        std::string brand;
        std::string model;
    public:
        Car(std::string _brand, std::string _model): brand(_brand), model(_model) {}
        void display() const
        {
            std::cout << "Brand: " << brand << std::endl;
            std::cout << "Model: " << model << std::endl;
        }
        ~Car() 
        {
            std::cout << "Destractor... " << std::endl;
        }
};

int main() {
    std::shared_ptr<Car> sptr1 = std::make_shared<Car>("BMW", "2020");
    std::shared_ptr<Car> sptr2 = sptr1;

    sptr1->display();
    sptr2->display();

    std::cout << "Count: " << sptr1.use_count() << std::endl;

    return 0;
}