#include <string>
#include <iostream>
#include "Person.h"

Person::Person(std::string first, std::string last, 
    int arbitrarynumber) : firstname(first), lastname(last), age(arbitrarynumber)
{
    std::cout << "Constructing " << firstname << " " << lastname << std::endl;
}

Person::~Person()
{
    std::cout << "Deconstructing " << firstname << " " << lastname << std::endl;
}

std::string Person::getName() const
{
    return firstname + " " + lastname;
}

int Person::operator+(int number) const
{
    return age + number;
}

int Person::operator+(Person const& p) const
{
    // Person method has access to both Person's age
    return age + p.age;
}

int operator+(int number, Person const& p)
{
    return number + p.getAge();

    /*
        Alternatively to calling p.getAge(), the function can be
        declared as a friend of Person class within the class header
        file, in which case it gains access to p.age directly.
    */

    // return number + p.age;
}

