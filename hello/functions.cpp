#include <iostream>
#include <string>
#include "functions.h"

std::string getName() {
    std::cout << "Type in your name and press enter..." << std::endl;
    std::string name;
    std::cin >> name;
    return name;
}

int getAge() {
    std::cout << "Type in your age and press enter..." << std::endl;
    int age;
    std::cin >> age;
    return age;
}
