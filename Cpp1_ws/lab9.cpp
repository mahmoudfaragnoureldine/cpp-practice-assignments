#include <iostream>

int main() {
    int grade{};
    std::cout << "Please enter your grade: " ;
    std::cin >> grade;

    if (grade >= 85) {
        std::cout << "Excellent" << std::endl;
    }
    else if ((grade >= 75) && (grade < 85)) {
        std::cout << "Very Good" << std::endl;
    }
    else if ((grade >= 65) && (grade < 75)) {
        std::cout << "good" << std::endl;
    }
    else if ((grade >= 50) && (grade < 65)) {
        std::cout << "pass" << std::endl;
    }
    else {
        std::cout << "Failed" << std::endl;
    }

    return 0;
}