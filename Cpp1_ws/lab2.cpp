#include <iostream>

int main() {
    std::cout << "size of char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "size of char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "size of char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "size of short int: " << sizeof(short int) << " bytes" << std::endl;
    std::cout << "size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "size of long int: " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "size of unsigned long long: " << sizeof(unsigned long long) << " bytes" << std::endl;
    std::cout << "size of float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "size of long double: " << sizeof(long double) << " bytes" << std::endl;
    std::cout << "size of bool: " << sizeof(bool) << " bytes" << std::endl;
    
    return 0;
}