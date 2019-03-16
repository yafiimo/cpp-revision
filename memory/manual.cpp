#include <iostream>
#include <string>
#include "Person.h"
#include "Resource.h"

using std::cout;
using std::endl;
using std::string;

/*
    The rule of 5 states that if you have a pointer from new, keep it in an object
    that contains five special member functions:

    * a destructor that deletes what may have been created with new
    * a copy constructor that uses `new` initialise a copy from the existing object's value
    * a copy assignment operator that deletes the old content of an object and then uses `new` 
      to initialise a copy from the existing object's value
    * a move constructor for moving expensive members out of the object
    * a move assignment operator for moving expensive members out of the object


    Implementation depends on your rules for copying, such as whether pointer member variables
    should be shared or unique. 
*/

void printPersonAge(Person p)
{
    cout << p.GetName() << "'s age is " << p.GetAge() << endl;
    return;
}

int main()
{
    {
        Person Mo("Mo", "Yafii", 25);
        Mo.AddResource();
        Mo.AddResource();               // Delete old resource before overwriting pointer;

        Person p2 = Mo;
        Person p3(Mo);

        p3 = p3;                        // Check for self assignment in copy assignment operator;
        p3 = p2;

        Mo.SetName("John", "Doe");
        cout << "Mo's name changed to " << Mo.GetName() << " but p3 is still " << p3.GetName() << endl;

        // Since function takes by value, a copy is created in the function scope
        printPersonAge(Mo);

        p2.AddResource();
    }
    
    return 0;
}