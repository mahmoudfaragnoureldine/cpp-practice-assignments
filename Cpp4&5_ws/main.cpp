#include <iostream>
#include "class.h"


int main() {
    CPP::person person1;
    person1.setName("Waleed");
    person1.setAge(24);
    person1.setGender("Male");
    person1.setCountery("Eygption");
    person1.showData();

    CPP::person person2;
    person2.setName("Neama");
    person2.setAge(24);
    person2.setGender("Female");
    person2.setCountery("Eygption");
    person2.showData();

    return 0;
}