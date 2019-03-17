#include <string>
#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last, int number) :
    firstname(first), lastname(last), age(number)
{
    std::cout << "Contructing " << GetName() << std::endl;
}

Person::~Person()
{
    std::cout << "Destructing " << GetName() << std::endl;
}

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}

int Person::GetAge() const
{
    return age;
}

void Person::SetAge(int number)
{
    age = number;
}

void Person::SetName(std::string first, std::string last)
{
    firstname = first;
    lastname = last;
}