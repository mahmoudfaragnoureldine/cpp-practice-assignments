/* Write a code that asks the user to enter height and
 width then calculate the area. the system shall ask the
 user if he want another calculation or not. */

 #include <iostream>

 int main() {
    int height{0};
    int width{0};
    char choice{'\0'};
    std::cout << "Welcome to area calculation program" << std::endl;

    do {
        std::cout << "Please enter the height : ";
        std::cin >> height;
        std::cout << "Please enter the width : ";
        std::cin >> width;

        std::cout << "The area is " << (width * height) << std::endl;

        std::cout << "Do you want calculate another? (Y/N) : ";
        std::cin >> choice;
        
    } while (choice == 'Y' || choice == 'y');
    
 }