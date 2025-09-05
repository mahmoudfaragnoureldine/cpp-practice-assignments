#include <iostream>

int main() {
    int id{0};
    std::cout << "Please enter your ID" << std::endl;
    std::cin >> id;

    switch (id) {
        case 1234:
            std::cout << "Welcome, Ahmed." << std::endl;
            break;
        case 5677:
            std::cout << "Welcome, Youssef." << std::endl;
            break;
        case 1145:
            std::cout << "Welcome, Mina." << std::endl;
            break;
        default:
            std::cout << "Wrong ID!" << std::endl;
            break;
    }

    return 0;
}