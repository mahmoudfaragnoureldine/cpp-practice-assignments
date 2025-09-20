#include <iostream>

class Vehicle
{
    private:
        std::string brand;
    public:
        Vehicle(std::string _brand): brand(_brand) {}
        virtual void display() const 
        {
            std::cout << "Brand: " << brand << std::endl;
        }
        virtual ~Vehicle() = default;
};

class Car : public Vehicle
{
    private:
        int num_of_doors;
    public:
        Car(std::string _brand, int _num): Vehicle(_brand), num_of_doors(_num) {}
        void display() const override
        {
            Vehicle::display();
            std::cout << "Number of doors: " << num_of_doors << std::endl;
        }
        virtual ~Car() = default;
};

class SportCar : public Car
{
    private:
        bool convert;
    public:
        SportCar(std::string _brand, int _num, bool _convert): Car(_brand, _num), convert(_convert) {} 
        void display() const override
        {
            Car::display();
            if (convert)
                std::cout << "Can be converted" << std::endl;
            else
                std::cout << "Can not be converted" << std::endl;
        }
        virtual ~SportCar() = default;
};

void fun(Vehicle* vehicle)
{
    vehicle->display();
}

int main() {
    SportCar car1("BMW", 4, true);

    fun(&car1);

    Vehicle* vehicle1 = new SportCar("Marcedce", 6, false);

    vehicle1->display();

    delete vehicle1;

    return 0;
}