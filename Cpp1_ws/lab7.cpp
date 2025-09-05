#include <iostream>

int main() {
    int a, b;
    std::cout << "Please enter two integer numbers separated by white space : " << std::endl;
    std::cin >> a >> b;

    std::cout << a << " & " << b << " = " << (a & b) << std::endl;
    std::cout << a << " | " << b << " = " << (a | b) << std::endl;
    std::cout << a << " ^ " << b << " = " << (a ^ b) << std::endl;
    std::cout << a << " << " << b << " = " << (a << b) << std::endl;
    std::cout << a << " >> " << b << " = " << (a >> b) << std::endl;
    std::cout << "~ " << a << " = " << (~ a) << std::endl;
    std::cout << "~ " << b << " = " << (~ b) << std::endl;

    return 0;
}