#include <iostream>

int main() {
    int a, b;
    std::cout << "Please enter 2 numbers separated by white space" << std::endl;
    std::cin >> a >> b;

    std::cout << a << " >  " << b << " is : " << std::boolalpha << (a > b) << std::endl;
    std::cout << a << " <  " << b << " is : " << std::boolalpha << (a < b) << std::endl;
    std::cout << a << " >= " << b << " is : " << std::boolalpha << (a >= b) << std::endl;
    std::cout << a << " <= " << b << " is : " << std::boolalpha << (a <= b) << std::endl;
    std::cout << a << " == " << b << " is : " << std::boolalpha << (a == b) << std::endl;
    std::cout << a << " != " << b << " is : " << std::boolalpha << (a != b) << std::endl;

    return 0;
}