/* Write a code that defines an integer variable and initialize
 it to any value. then use pointers to change this value.
 print the variable before and after the change*/

 #include <iostream>

 int main() {
    int num {100};
    int* ptr = &num;

    std::cout << "Variable before change : " << num << std::endl;

    *ptr = 500;

    std::cout << "Variable after change : " << num << std::endl;
    
    return 0;
 }