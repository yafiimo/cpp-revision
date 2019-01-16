#include <iostream>
#include "Person.h"

int main()
{
    Person p1("Mo", "Yafii", 22);
    Person p2;

    std::string name = p1.getName();

    std::cout << name << std::endl;

}