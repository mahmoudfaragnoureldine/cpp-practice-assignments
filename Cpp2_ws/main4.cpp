#include <iostream>
#include <string>

int main() {
    std::string str = std::string("waleed");
    std::string str2 = "Farag";

    str.append(str2);
    std::cout << str << std::endl;
    std::cout << str.length() << std::endl;
    std::cout << str.size() << std::endl;
    

    return 0;
}