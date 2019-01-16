#include "Person.h"

Person::Person(std::string first, std::string last, 
    int arbitraryNumber) : firstname(first), lastname(last), age(arbitraryNumber)
{

}

std::string Person::getName()
{
    return firstname + " " + lastname;
}