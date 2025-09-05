#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Please enter a sentense: ";
    std::getline(std::cin, str);

    std::string reversedStr;
    for (int i = str.length() - 1; i >= 0; --i) {
        reversedStr += str[i]; 
    }

    std::cout << "The sentence in reverse order is: ";
    std::cout << reversedStr << std::endl;

    return 0;
}