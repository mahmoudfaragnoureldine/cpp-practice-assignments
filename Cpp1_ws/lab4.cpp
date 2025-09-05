#include <iostream>

int main() {
    double eur{};
    double usd{};
    std::cout << "Welcome to the EUR to USD converter" << std::endl;
    std::cout << "Enter the value in EUR: ";
    std::cin >> eur;
    
    usd = eur * 1.19;
    std::cout << eur << " euros is equivalent to " << usd << " dollars." << std::endl;

    return 0;
}