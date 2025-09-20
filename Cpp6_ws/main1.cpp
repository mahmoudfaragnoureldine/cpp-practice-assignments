#include <iostream>

class Vechle
{
    private:
        std::string _name;
    public:
        Vechle(std::string name): _name(name) {}
        std::string getName() { return _name; }
        virtual void disply()
        {
            std::cout << "Parent Class\n";
        }
};


class Car : public Vechle
{
    public:
        Car(std::string name): Vechle(name) {}
        void disply() override
        {
            std::cout << "Drive " << Vechle::getName() << std::endl;
        }
};

class Bus : public Vechle
{
    public:
        Bus(std::string name): Vechle(name) {}
        void disply() override
        {
            std::cout << "Drive " << Vechle::getName() << std::endl;
        }
};

void whichDrive(Vechle* vechle)
{
    vechle->disply();
}

int main() {
    Car car1("car");
    Bus bus1("bus");

    whichDrive(&car1);
    whichDrive(&bus1);

    return 0;
}