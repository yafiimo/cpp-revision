#include <string>
#include <iostream>
#include "Person.h"

// Constructor
Person::Person(std::string first, std::string last, int number)
    : firstname(first), lastname(last), age(number), pResource(nullptr)
{
    std::cout << "Creating person: " << GetName() << std::endl;
}

// Copy Constructor
Person::Person(Person const& originalP)
{
    std::cout << "Running copy constructor... " << std::endl;
    /*
        If Person is copied as follows:

        Person p1("Mo", "Yafii", 22);
        Person p2 = p1; or Person p2(p1);

        a copy constructor is used to initialize a NEWLY declared variable from an existing
        variable. This makes a deep copy like assignment:

        There is no need to test to see if it is being initialized from itself.
        There is no need to clean up (eg, delete) an existing value (there is none).
        A reference to itself is not returned.

        Since this object has a pointer to dynamically allocated memory, a shallow copy 
        is insufficient for making copies of it.
    */

    /*
        Ensures the copy has it's own resource. Hence, when destructing the object, problems
        won't arise due to having already deleted pResource from another copy. If a shared 
        resource was required, logic is needed to keep track of each copy and when to use
        the destructor. For a unique resource:
    */

    firstname = originalP.firstname;
    lastname = originalP.lastname;
    age = originalP.age;

    // To assign the same resource name as the original copy:
    if(originalP.pResource)
    {
        pResource = new Resource(originalP.pResource->GetName());
    }
    else
    {
        pResource = nullptr;
    }
}

// Copy Assignment
Person& Person::operator=(Person const& originalP)
{
    std::cout << "Running copy assignment operator... " << std::endl;
    // Must first check for self assignment:
    if(this != &originalP)
    {
        // Must delete old value of pResource:
        delete pResource;

        // Initialise new pResource from object being copied
        pResource = new Resource(originalP.pResource->GetName());
    }
    else
    {
        std::cout << "Cannot assign to self!" << std::endl;
    }
    

    return *this;
}

// Destructor
Person::~Person()
{
    std::cout << "Destructing person: " << GetName() << std::endl;
    delete pResource;
}

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}

void Person::AddResource()
{
    /*
        Before adding a new resource, depending on design, say each person can only
        have one resource, this resource must then be deleted before adding a new
        one, otherwise the pointer to it is lost and can no longer be deleted, which
        causes a memory leak.
    */
    delete pResource;
    pResource = new Resource(GetName() + "'s new resource");
}