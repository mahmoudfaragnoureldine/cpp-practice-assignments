#include <iostream>

class Car
{
    private:
        std::string compony;
        std::string model;
        int year;
    public:
        Car(): compony("Null"), model("Null"), year(0) {}
        void set_compony(std::string compony) { this->compony = compony; }
        void set_model(std::string model) { this->model = model; }
        void set_year(int year) { this->year = year; }
        std::string get_compony() const { return compony; }
        std::string get_model() const { return model; }
        int get_year() const { return year; }
};

int main() {
    Car car1;
    car1.set_compony("AUDI");
    car1.set_model("A6");
    car1.set_year(2023);

    std::cout << "Compony: " << car1.get_compony() << std::endl;
    std::cout << "Model: " << car1.get_model() << std::endl;
    std::cout << "Year: " << car1.get_year() << std::endl << std::endl;

    car1.set_compony("BMW");
    car1.set_model("M4");
    car1.set_year(2022);

    std::cout << "Updated Compony: " << car1.get_compony() << std::endl;
    std::cout << "Updated Model: " << car1.get_model() << std::endl;
    std::cout << "Updated Year: " << car1.get_year() << std::endl;

    return 0;
}