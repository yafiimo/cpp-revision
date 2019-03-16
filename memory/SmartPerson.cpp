#include <string>
#include <iostream>
#include <memory>
#include "SmartPerson.h"

// Constructor
// No need to initialise pointer member to nullptr
SmartPerson::SmartPerson(std::string first, std::string last, int number)
    : firstname(first), lastname(last), age(number)
{
    std::cout << "Creating person: " << GetName() << std::endl;
}

// No copy constructor required
// No copy assignment operator required
// No destructor needed to delete the pointer
SmartPerson::~SmartPerson()
{
    std::cout << "Destructing person: " << GetName() << std::endl;
}

std::string SmartPerson::GetName() const
{
    return firstname + " " + lastname;
}

void SmartPerson::AddResource()
{
    // resets the pointer to point to nullptr and decrements count
    pResource.reset();
    // assigns the pointer to a new location for Resource and increments count
    pResource = std::make_shared<Resource>(GetName() + "'s new resource");
}